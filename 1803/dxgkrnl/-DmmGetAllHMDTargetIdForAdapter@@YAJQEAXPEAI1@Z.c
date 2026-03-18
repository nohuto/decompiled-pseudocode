/*
 * XREFs of ?DmmGetAllHMDTargetIdForAdapter@@YAJQEAXPEAI1@Z @ 0x1C0212740
 * Callers:
 *     ?DxgkHMDDisplayEnumInternal@@YAJAEBU_LUID@@PEAI1@Z @ 0x1C01C4E40 (-DxgkHMDDisplayEnumInternal@@YAJAEBU_LUID@@PEAI1@Z.c)
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0002E20 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004630 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0014350 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DmmGetAllHMDTargetIdForAdapter(_QWORD *a1, unsigned int *a2, unsigned int *a3)
{
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdi
  _QWORD *v11; // rbx
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // r8
  unsigned int v13; // edi
  int v14; // esi
  _QWORD *v15; // rcx
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 )
  {
    v6 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v6 + 24) = 0LL;
LABEL_3:
    WdLogEvent5_WdError(v6);
    return 3221225473LL;
  }
  v8 = a1[307];
  if ( !v8 )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v9);
    v8 = a1[307];
  }
  v10 = *(_QWORD *)(v8 + 88);
  if ( !v10 )
  {
    v6 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v6 + 24) = a1;
    goto LABEL_3;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v16, *(_QWORD *)(v8 + 88));
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v10 + 80) + 72LL));
  v11 = *(_QWORD **)(v10 + 80);
  NextTarget = 0LL;
  v13 = 0;
  v14 = 0;
  v15 = (_QWORD *)v11[3];
  if ( v15 != v11 + 3 )
    NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v15 - 1);
  for ( ; NextTarget; NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v11, NextTarget) )
  {
    if ( *((_DWORD *)NextTarget + 22) == 1 )
    {
      if ( ++v13 <= *a2 )
        a3[v13 - 1] = *((_DWORD *)NextTarget + 6);
      else
        v14 = 1;
    }
  }
  *a2 = v13;
  ReferenceCounted::Release((ReferenceCounted *)(v11 + 8));
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v16 + 40));
  return v14 != 0 ? 0xC0000023 : 0;
}
