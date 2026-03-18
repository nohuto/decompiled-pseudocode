/*
 * XREFs of PpmPerfUpdateDomains @ 0x140581950
 * Callers:
 *     PopPerfBoostPowerRequest @ 0x1405818E0 (PopPerfBoostPowerRequest.c)
 *     PpmReapplyPerfPolicy @ 0x1405C019C (PpmReapplyPerfPolicy.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x1400459E0 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x140089100 (KeGetPrcb.c)
 */

__int64 __fastcall PpmPerfUpdateDomains(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int16 *v3[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v4; // [rsp+30h] [rbp-18h]
  __int64 v5; // [rsp+50h] [rbp+8h] BYREF

  v5 = a1;
  v3[1] = (unsigned __int16 *)qword_140340128[0];
  v3[0] = PpmCheckRegistered;
  v4 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v5, v3) )
  {
    v1 = *(_QWORD *)(KeGetPrcb(v5) + 24304);
    if ( v1 )
      *(_BYTE *)(v1 + 486) = 1;
  }
  return PpmCheckCustomRun(1);
}
