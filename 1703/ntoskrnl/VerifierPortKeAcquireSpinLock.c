/*
 * XREFs of VerifierPortKeAcquireSpinLock @ 0x140777EF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x140765068 (VfUtilCheckKernelAddress.c)
 *     ViTargetIncrementCounter @ 0x140775418 (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1407785D0 (ViKeRaiseIrqlSanityChecks.c)
 */

__int64 __fastcall VerifierPortKeAcquireSpinLock(unsigned __int64 a1, _BYTE *a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 result; // rax

  ++dword_14034F668;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(a3, 132LL);
  VfUtilCheckKernelAddress(a1, 8LL);
  LOBYTE(v5) = 2;
  v6 = ViKeRaiseIrqlSanityChecks(v5, 0LL);
  result = ((__int64 (__fastcall *)(unsigned __int64))pXdvKeAcquireSpinLockRaiseToDpc)(a1);
  *a2 = result;
  if ( v6 )
    *(_WORD *)(v6 + 10) = KeGetPcr()->Prcb.Number;
  return result;
}
