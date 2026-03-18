/*
 * XREFs of ?Initialize@?$AutoBuffer@U_D3DDDI_MULTISAMPLINGMETHOD@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C004589C
 * Callers:
 *     ?SetMultisamplingMethodSet@DMMVIDPNSOURCE@@QEAAJ_KPEBU_D3DDDI_MULTISAMPLINGMETHOD@@@Z @ 0x1C01DDAC8 (-SetMultisamplingMethodSet@DMMVIDPNSOURCE@@QEAAJ_KPEBU_D3DDDI_MULTISAMPLINGMETHOD@@@Z.c)
 * Callees:
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B1A9C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::Initialize(
        __int64 a1,
        unsigned __int64 a2,
        const void *a3,
        __int64 a4)
{
  __int64 v7; // rax
  void *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v12; // rax

  if ( a2 - 1 > 0xFFFFF )
  {
    v12 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v12 + 24) = a2;
    WdLogEvent5_WdError(v12);
    return 3221225990LL;
  }
  else
  {
    if ( *(_QWORD *)(a1 + 32) )
    {
      v7 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      WdLogEvent5_WdAssertion(v7);
    }
    v8 = operator new[](a2, 0x4E506456u, PagedPool);
    *(_QWORD *)(a1 + 32) = v8;
    if ( v8 )
    {
      *(_QWORD *)(a1 + 40) = a2;
      *(_DWORD *)(a1 + 48) = 1;
      if ( a3 )
        memmove(v8, a3, a2);
      else
        memset(v8, 0, a2);
      return 0LL;
    }
    else
    {
      v10 = WdLogNewEntry5_WdLowResource(v9);
      *(_QWORD *)(v10 + 24) = a2;
      WdLogEvent5_WdLowResource(v10);
      return 3221225495LL;
    }
  }
}
