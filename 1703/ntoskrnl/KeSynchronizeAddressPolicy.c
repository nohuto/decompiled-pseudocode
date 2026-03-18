/*
 * XREFs of KeSynchronizeAddressPolicy @ 0x14017BA00
 * Callers:
 *     PspDisablePrimaryTokenExchange @ 0x1404F8A10 (PspDisablePrimaryTokenExchange.c)
 * Callees:
 *     KeRemoveProcessorAffinityEx @ 0x1400D9440 (KeRemoveProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x1400D9480 (KeCopyAffinityEx.c)
 *     KiIpiSendPacket @ 0x140120534 (KiIpiSendPacket.c)
 *     KeCountSetBitsAffinityEx @ 0x140120AD0 (KeCountSetBitsAffinityEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KiSynchronizeAddressPolicyTarget @ 0x14017C5D0 (KiSynchronizeAddressPolicyTarget.c)
 */

void __fastcall KeSynchronizeAddressPolicy(__int64 a1)
{
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int16 v3[88]; // [rsp+30h] [rbp-C8h] BYREF

  if ( *(_BYTE *)(a1 + 640) == 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    CurrentPrcb = KeGetCurrentPrcb();
    KeCopyAffinityEx((__int64)v3, (unsigned __int16 *)(a1 + 272));
    KeRemoveProcessorAffinityEx(v3, CurrentPrcb->Number);
    KiSynchronizeAddressPolicyTarget(0LL, 0LL, 0LL, 0LL);
    if ( (unsigned int)KeCountSetBitsAffinityEx(v3) )
    {
      KiIpiSendPacket(0, (int)v3, (__int64)KiSynchronizeAddressPolicyTarget, 1LL, 0LL, 0LL);
      while ( CurrentPrcb->PacketBarrier )
        _mm_pause();
    }
    __writecr8(CurrentIrql);
  }
}
