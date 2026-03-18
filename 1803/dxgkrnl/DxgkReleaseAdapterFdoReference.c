/*
 * XREFs of DxgkReleaseAdapterFdoReference @ 0x1C015C964
 * Callers:
 *     DpiFdoResetFdo @ 0x1C01F8990 (DpiFdoResetFdo.c)
 *     DpiFdoStartAdapter @ 0x1C01F913C (DpiFdoStartAdapter.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkReleaseAdapterFdoReference(DXGADAPTER *a1)
{
  __int64 v1; // rax

  if ( a1 )
  {
    *((_QWORD *)a1 + 24) = 0LL;
    DXGADAPTER::ReleaseReferenceNoTracking(a1);
    return 0LL;
  }
  else
  {
    v1 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v1 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v1);
    return 3221225485LL;
  }
}
