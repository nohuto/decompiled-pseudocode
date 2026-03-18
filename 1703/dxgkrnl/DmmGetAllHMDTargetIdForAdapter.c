/*
 * XREFs of DmmGetAllHMDTargetIdForAdapter @ 0x1C00F6D34
 * Callers:
 *     ?DxgkHMDDisplayEnumInternal@@YAJAEBU_LUID@@PEAI1@Z @ 0x1C00F6C34 (-DxgkHMDDisplayEnumInternal@@YAJAEBU_LUID@@PEAI1@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00084EC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 */

__int64 __fastcall DmmGetAllHMDTargetIdForAdapter(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r9
  int v12; // r10d
  __int64 v13; // r8
  __int64 v14; // rax
  unsigned int v15; // ebx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 )
  {
    v17 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v17 + 24) = 0LL;
LABEL_16:
    WdLogEvent5_WdError(v17);
    return 3221225473LL;
  }
  if ( !*(_QWORD *)(a1 + 2280) )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v18);
  }
  v7 = *(_QWORD *)(a1 + 2280);
  v8 = *(_QWORD *)(v7 + 88);
  if ( !v8 )
  {
    v17 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v17 + 24) = a1;
    goto LABEL_16;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v19, *(_QWORD *)(v7 + 88), a3, a4);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v8 + 80) + 72LL));
  v10 = *(_QWORD *)(v8 + 80);
  v11 = 0LL;
  v12 = 0;
  v13 = *(_QWORD *)(v10 + 24);
  if ( v13 != v10 + 24 )
  {
    v13 -= 8LL;
    while ( v13 )
    {
      if ( *(_BYTE *)(v13 + 404) )
      {
        v11 = (unsigned int)(v11 + 1);
        if ( (unsigned int)v11 <= *a2 )
        {
          v9 = (unsigned int)(v11 - 1);
          *(_DWORD *)(a3 + 4 * v9) = *(_DWORD *)(v13 + 24);
        }
        else
        {
          v12 = 1;
        }
      }
      v14 = *(_QWORD *)(v13 + 8);
      v13 = v14 - 8;
      if ( v14 == v10 + 24 )
        v13 = 0LL;
    }
  }
  *a2 = v11;
  v15 = v12 != 0 ? 0xC0000023 : 0;
  if ( v10 )
    ReferenceCounted::Release((ReferenceCounted *)(v10 + 64), v9);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v19 + 40), v9, v13, v11);
  return v15;
}
