/*
 * XREFs of ?Initialize@?$AutoBuffer@U_D3DDDI_MULTISAMPLINGMETHOD@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C00466E0
 * Callers:
 *     ?SetMultisamplingMethodSet@DMMVIDPNSOURCE@@QEAAJ_KPEBU_D3DDDI_MULTISAMPLINGMETHOD@@@Z @ 0x1C02239CC (-SetMultisamplingMethodSet@DMMVIDPNSOURCE@@QEAAJ_KPEBU_D3DDDI_MULTISAMPLINGMETHOD@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 */

__int64 __fastcall DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::Initialize(__int64 a1, SIZE_T a2, const void *a3)
{
  __int64 v6; // rax
  PVOID v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v11; // rax

  if ( a2 - 1 > 0xFFFFF )
  {
    v11 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v11 + 24) = a2;
    WdLogEvent5_WdError(v11);
    return 3221225990LL;
  }
  else
  {
    if ( *(_QWORD *)(a1 + 32) )
    {
      v6 = WdLogNewEntry5_WdAssertion(a1);
      WdLogEvent5_WdAssertion(v6);
    }
    v7 = operator new[](a2, 0x4E506456u, PagedPool);
    *(_QWORD *)(a1 + 32) = v7;
    if ( v7 )
    {
      *(_QWORD *)(a1 + 40) = a2;
      *(_DWORD *)(a1 + 48) = 1;
      if ( a3 )
        memmove(v7, a3, a2);
      else
        memset(v7, 0, a2);
      return 0LL;
    }
    else
    {
      v9 = WdLogNewEntry5_WdLowResource(v8);
      *(_QWORD *)(v9 + 24) = a2;
      WdLogEvent5_WdLowResource(v9);
      return 3221225495LL;
    }
  }
}
