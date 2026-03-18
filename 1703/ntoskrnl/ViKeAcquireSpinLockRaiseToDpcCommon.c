/*
 * XREFs of ViKeAcquireSpinLockRaiseToDpcCommon @ 0x1407782FC
 * Callers:
 *     VerifierKeAcquireSpinLockRaiseToDpc @ 0x140776FA0 (VerifierKeAcquireSpinLockRaiseToDpc.c)
 *     VerifierKeAcquireSpinLockRaiseToDpcNoReboot @ 0x140776FF0 (VerifierKeAcquireSpinLockRaiseToDpcNoReboot.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x140765068 (VfUtilCheckKernelAddress.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1407785D0 (ViKeRaiseIrqlSanityChecks.c)
 */

__int64 __fastcall ViKeAcquireSpinLockRaiseToDpcCommon(unsigned __int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 result; // rax

  VfUtilCheckKernelAddress(a1, 8LL);
  LOBYTE(v2) = 2;
  v3 = ViKeRaiseIrqlSanityChecks(v2, ((unsigned int)MmVerifierData >> 17) & 1);
  result = ((__int64 (__fastcall *)(unsigned __int64))pXdvKeAcquireSpinLockRaiseToDpc)(a1);
  if ( v3 )
    *(_WORD *)(v3 + 10) = KeGetPcr()->Prcb.Number;
  return result;
}
