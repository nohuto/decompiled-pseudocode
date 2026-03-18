/*
 * XREFs of PopUmpoSendLegacyEvent @ 0x1407082D8
 * Callers:
 *     NtPowerInformation @ 0x1404E90A0 (NtPowerInformation.c)
 * Callees:
 *     PopUmpoSendPowerMessage @ 0x1400B0618 (PopUmpoSendPowerMessage.c)
 *     PfPowerActionNotify @ 0x1404309DC (PfPowerActionNotify.c)
 */

__int64 __fastcall PopUmpoSendLegacyEvent(__int128 *a1)
{
  bool v1; // zf
  __int128 v3; // xmm0
  int Src; // [rsp+20h] [rbp-58h] BYREF
  __int128 v6; // [rsp+28h] [rbp-50h]

  v1 = *((_BYTE *)a1 + 12) == 0;
  v3 = *a1;
  Src = 7;
  v6 = v3;
  if ( !v1 && *((_DWORD *)a1 + 1) == 18 )
    PfPowerActionNotify(5, 0, 0);
  return PopUmpoSendPowerMessage(&Src, 0x48uLL, *((_BYTE *)a1 + 13));
}
