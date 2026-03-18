/*
 * XREFs of KiSynchronizeAddressPolicyTarget @ 0x1400A3ED0
 * Callers:
 *     KeSynchronizeAddressPolicy @ 0x1400A3DEC (KeSynchronizeAddressPolicy.c)
 * Callees:
 *     KiSetAddressPolicy @ 0x1400FDE10 (KiSetAddressPolicy.c)
 */

int KiSynchronizeAddressPolicyTarget()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcState.Process->AddressPolicy == 1 )
  {
    LODWORD(CurrentThread) = KeGetPcr()->Prcb.ShadowFlags;
    if ( ((unsigned __int8)CurrentThread & 2) == 0 )
      LODWORD(CurrentThread) = KiSetAddressPolicy(1LL);
  }
  return (int)CurrentThread;
}
