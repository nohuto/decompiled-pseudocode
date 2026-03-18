/*
 * XREFs of ?DmmGetAllHMDTargetIdForAdapter@@YAJQEAXPEAI1@Z @ 0x1C00F03C4
 * Callers:
 *     ?DxgkHMDDisplayEnumInternal@@YAJAEBU_LUID@@PEAI1@Z @ 0x1C00F02C4 (-DxgkHMDDisplayEnumInternal@@YAJAEBU_LUID@@PEAI1@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DmmGetAllHMDTargetIdForAdapter(_QWORD *a1, unsigned int *a2, unsigned int *a3)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  unsigned int v9; // r9d
  int v10; // r10d
  __int64 v11; // r8
  __int64 v12; // rcx
  unsigned int v13; // edi
  void (__fastcall ***v14)(_QWORD, __int64, __int64); // rcx
  int v15; // ebx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // [rsp+40h] [rbp+8h] BYREF
  __int64 v21; // [rsp+58h] [rbp+20h]

  if ( !a1 )
  {
    v17 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v17 + 24) = 0LL;
LABEL_18:
    WdLogEvent5_WdError(v17);
    return 3221225473LL;
  }
  if ( !a1[288] )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v18);
  }
  v6 = a1[288];
  v7 = *(_QWORD *)(v6 + 88);
  if ( !v7 )
  {
    v17 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v17 + 24) = a1;
    goto LABEL_18;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v20, *(_QWORD *)(v6 + 88));
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v7 + 80) + 72LL));
  v8 = *(_QWORD *)(v7 + 80);
  v9 = 0;
  v21 = v8;
  v10 = 0;
  v11 = *(_QWORD *)(v8 + 24);
  if ( v11 != v8 + 24 )
  {
    v11 -= 8LL;
    while ( v11 )
    {
      if ( *(_BYTE *)(v11 + 404) )
      {
        if ( ++v9 <= *a2 )
          a3[v9 - 1] = *(_DWORD *)(v11 + 24);
        else
          v10 = 1;
      }
      v12 = *(_QWORD *)(v11 + 8);
      v11 = v12 - 8;
      if ( v12 == v8 + 24 )
        v11 = 0LL;
    }
  }
  *a2 = v9;
  v13 = v10 != 0 ? 0xC0000023 : 0;
  if ( v8 )
  {
    v14 = (void (__fastcall ***)(_QWORD, __int64, __int64))(v8 + 64);
    v15 = _InterlockedDecrement((volatile signed __int32 *)(v8 + 72));
    if ( v15 )
    {
      if ( v15 < 0 )
      {
        v19 = WdLogNewEntry5_WdError(v14);
        *(_QWORD *)(v19 + 24) = v15;
        WdLogEvent5_WdError(v19);
      }
    }
    else if ( v8 != -64 )
    {
      (**v14)(v14, 1LL, v11);
    }
  }
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v20 + 40));
  return v13;
}
