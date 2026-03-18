/*
 * XREFs of PnpTraceDmaGuardSystemPolicy @ 0x140623084
 * Callers:
 *     PipDmgInitPhaseOne @ 0x1408A503C (PipDmgInitPhaseOne.c)
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

void PnpTraceDmaGuardSystemPolicy()
{
  int v0; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v2; // [rsp+58h] [rbp-20h]
  int v3; // [rsp+60h] [rbp-18h]
  int v4; // [rsp+64h] [rbp-14h]

  if ( stru_140397160.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_140397160, 0x400000000000uLL) )
    {
      v4 = 0;
      v0 = PipDmaGuardPolicy;
      v2 = &v0;
      v3 = 4;
      TlgWrite(&stru_140397160, &unk_14030987C, 0LL, 0LL, 3u, &pData);
    }
  }
}
