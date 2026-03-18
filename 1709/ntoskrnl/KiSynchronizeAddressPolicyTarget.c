/*
 * XREFs of KiSynchronizeAddressPolicyTarget @ 0x14017BCF0
 * Callers:
 *     KeSynchronizeAddressPolicy @ 0x14017B194 (KeSynchronizeAddressPolicy.c)
 * Callees:
 *     KiSetAddressPolicy @ 0x14017B484 (KiSetAddressPolicy.c)
 */

int KiSynchronizeAddressPolicyTarget()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcState.Process->AddressPolicy == 1 )
  {
    LODWORD(CurrentThread) = KeGetPcr()->Prcb.ShadowFlags;
    if ( ((unsigned __int8)CurrentThread & 2) == 0 )
      LODWORD(CurrentThread) = KiSetAddressPolicy();
  }
  return (int)CurrentThread;
}
