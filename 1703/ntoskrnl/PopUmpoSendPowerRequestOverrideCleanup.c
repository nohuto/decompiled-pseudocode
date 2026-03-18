/*
 * XREFs of PopUmpoSendPowerRequestOverrideCleanup @ 0x1404C62F4
 * Callers:
 *     PopPowerRequestCleanUp @ 0x140071694 (PopPowerRequestCleanUp.c)
 * Callees:
 *     PopUmpoSendPowerMessage @ 0x14007210C (PopUmpoSendPowerMessage.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall PopUmpoSendPowerRequestOverrideCleanup(__int64 a1)
{
  int v2; // eax
  _DWORD Src[22]; // [rsp+20h] [rbp-58h] BYREF

  memset(Src, 0, 0x48uLL);
  v2 = *(_DWORD *)(a1 + 28);
  Src[0] = 9;
  Src[2] = v2;
  return PopUmpoSendPowerMessage(Src, 0x48uLL, 0);
}
