/*
 * XREFs of KeSynchronizeAddressPolicy @ 0x1400A3DEC
 * Callers:
 *     PspDisablePrimaryTokenExchange @ 0x1404B8C60 (PspDisablePrimaryTokenExchange.c)
 * Callees:
 *     KeRemoveProcessorAffinityEx @ 0x140034E10 (KeRemoveProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x140034E50 (KeCopyAffinityEx.c)
 *     KiSynchronizeAddressPolicyTarget @ 0x1400A3ED0 (KiSynchronizeAddressPolicyTarget.c)
 *     KiIpiSendPacket @ 0x1400A4018 (KiIpiSendPacket.c)
 *     KeCountSetBitsAffinityEx @ 0x1400A4080 (KeCountSetBitsAffinityEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
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
      KiIpiSendPacket(0, (unsigned int)v3, (unsigned int)KiSynchronizeAddressPolicyTarget, 1, 0LL, 0LL);
      while ( CurrentPrcb->PacketBarrier )
        _mm_pause();
    }
    __writecr8(CurrentIrql);
  }
}
