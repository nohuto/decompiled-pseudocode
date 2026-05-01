/*
 * XREFs of ?GetTrustLevel@CVirtualTouchpadExperienceManager@@UEAAJPEAW4TrustLevel@@@Z @ 0x180090E30
 * Callers:
 *     ?GetTrustLevel@CActionCenterExperienceManager@@WEI@EAAJPEAW4TrustLevel@@@Z @ 0x180097790 (-GetTrustLevel@CActionCenterExperienceManager@@WEI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CActionCenterExperienceManager@@WBI@EAAJPEAW4TrustLevel@@@Z @ 0x1800979B0 (-GetTrustLevel@CActionCenterExperienceManager@@WBI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@ImeNotificationExperienceManager@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x1800A0800 (-GetTrustLevel@ImeNotificationExperienceManager@@WBA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@HolographicPositioner@@WJA@EAAJPEAW4TrustLevel@@@Z @ 0x1800E1620 (-GetTrustLevel@HolographicPositioner@@WJA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@HolographicPositioner@@WIA@EAAJPEAW4TrustLevel@@@Z @ 0x1800E1A80 (-GetTrustLevel@HolographicPositioner@@WIA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@HolographicPositioner@@WII@EAAJPEAW4TrustLevel@@@Z @ 0x1800E1CD0 (-GetTrustLevel@HolographicPositioner@@WII@EAAJPEAW4TrustLevel@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVirtualTouchpadExperienceManager::GetTrustLevel(
        CVirtualTouchpadExperienceManager *this,
        enum TrustLevel *a2)
{
  *a2 = FullTrust;
  return 0LL;
}
