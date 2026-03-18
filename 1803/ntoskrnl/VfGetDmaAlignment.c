/*
 * XREFs of VfGetDmaAlignment @ 0x140818D40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     VF_ASSERT_IRQL @ 0x140817430 (VF_ASSERT_IRQL.c)
 *     ViGetRealDmaOperation @ 0x14081B294 (ViGetRealDmaOperation.c)
 */

__int64 __fastcall VfGetDmaAlignment(__int64 a1)
{
  __int64 (__fastcall *RealDmaOperation)(__int64); // rax

  VF_ASSERT_IRQL(0);
  RealDmaOperation = (__int64 (__fastcall *)(__int64))ViGetRealDmaOperation(a1, 72LL);
  if ( RealDmaOperation )
    return RealDmaOperation(a1);
  else
    return 1LL;
}
