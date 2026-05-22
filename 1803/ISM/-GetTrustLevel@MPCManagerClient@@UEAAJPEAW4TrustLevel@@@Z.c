/*
 * XREFs of ?GetTrustLevel@MPCManagerClient@@UEAAJPEAW4TrustLevel@@@Z @ 0x180018B40
 * Callers:
 *     ?GetTrustLevel@MPCManagerClient@@WBI@EAAJPEAW4TrustLevel@@@Z @ 0x1800276C0 (-GetTrustLevel@MPCManagerClient@@WBI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@WGIController@@WCA@EAAJPEAW4TrustLevel@@@Z @ 0x18007ADF0 (-GetTrustLevel@WGIController@@WCA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@WGIController@@WCI@EAAJPEAW4TrustLevel@@@Z @ 0x18007AEB0 (-GetTrustLevel@WGIController@@WCI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@WGIController@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x18007AF60 (-GetTrustLevel@WGIController@@WBA@EAAJPEAW4TrustLevel@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCManagerClient::GetTrustLevel(MPCManagerClient *this, enum TrustLevel *a2)
{
  *a2 = BaseTrust;
  return 0LL;
}
