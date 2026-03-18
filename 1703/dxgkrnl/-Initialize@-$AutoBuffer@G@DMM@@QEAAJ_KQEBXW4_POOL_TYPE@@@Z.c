/*
 * XREFs of ?Initialize@?$AutoBuffer@G@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C0004988
 * Callers:
 *     DmmGetTargetIdFromCcdMonitorId @ 0x1C00AF6C4 (DmmGetTargetIdFromCcdMonitorId.c)
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B1A9C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DMM::AutoBuffer<unsigned short>::Initialize(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  if ( a2 - 1 > 0xFFFFF )
  {
    v10 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v10 + 24) = a2;
    WdLogEvent5_WdError(v10);
    return 3221225990LL;
  }
  else
  {
    if ( *(_QWORD *)(a1 + 32) )
    {
      v8 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      WdLogEvent5_WdAssertion(v8);
    }
    v6 = operator new[](a2, 0x4E506456u, PagedPool);
    *(_QWORD *)(a1 + 32) = v6;
    if ( v6 )
    {
      *(_QWORD *)(a1 + 40) = a2;
      *(_DWORD *)(a1 + 48) = 1;
      memset(v6, 0, a2);
      return 0LL;
    }
    else
    {
      v9 = WdLogNewEntry5_WdLowResource();
      *(_QWORD *)(v9 + 24) = a2;
      WdLogEvent5_WdLowResource(v9);
      return 3221225495LL;
    }
  }
}
