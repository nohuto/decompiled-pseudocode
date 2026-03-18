/*
 * XREFs of PnpTraceDmaGuardSystemPolicy @ 0x1405C4690
 * Callers:
 *     PiDmaGuardInitialize @ 0x140840328 (PiDmaGuardInitialize.c)
 * Callees:
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

void PnpTraceDmaGuardSystemPolicy()
{
  int v0; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v2; // [rsp+58h] [rbp-20h]
  int v3; // [rsp+60h] [rbp-18h]
  int v4; // [rsp+64h] [rbp-14h]

  if ( stru_140354A70.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_140354A70, 0x400000000000uLL) )
    {
      v4 = 0;
      v0 = PipDmaGuardPolicy;
      v2 = &v0;
      v3 = 4;
      TlgWrite(&stru_140354A70, &unk_1402CFE1D, 0LL, 0LL, 3u, &pData);
    }
  }
}
