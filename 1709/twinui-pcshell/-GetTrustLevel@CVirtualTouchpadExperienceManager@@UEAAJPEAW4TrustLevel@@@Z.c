/*
 * XREFs of ?GetTrustLevel@CVirtualTouchpadExperienceManager@@UEAAJPEAW4TrustLevel@@@Z @ 0x180094F80
 * Callers:
 *     ?GetTrustLevel@CActionCenterExperienceManager@@WEI@EAAJPEAW4TrustLevel@@@Z @ 0x18009D610 (-GetTrustLevel@CActionCenterExperienceManager@@WEI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CActionCenterExperienceManager@@WFA@EAAJPEAW4TrustLevel@@@Z @ 0x18009D740 (-GetTrustLevel@CActionCenterExperienceManager@@WFA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CActionCenterExperienceManager@@WBI@EAAJPEAW4TrustLevel@@@Z @ 0x18009D830 (-GetTrustLevel@CActionCenterExperienceManager@@WBI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CTaskContinuityActivitiesExperienceManager@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x1800AAD20 (-GetTrustLevel@CTaskContinuityActivitiesExperienceManager@@WBA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CStartExperienceManager@@WCI@EAAJPEAW4TrustLevel@@@Z @ 0x1800BA7F0 (-GetTrustLevel@CStartExperienceManager@@WCI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CStartExperienceManager@@WDI@EAAJPEAW4TrustLevel@@@Z @ 0x1800BA930 (-GetTrustLevel@CStartExperienceManager@@WDI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@HolographicPositioner@@WJI@EAAJPEAW4TrustLevel@@@Z @ 0x1801066D0 (-GetTrustLevel@HolographicPositioner@@WJI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@HolographicPositioner@@WKA@EAAJPEAW4TrustLevel@@@Z @ 0x180106900 (-GetTrustLevel@HolographicPositioner@@WKA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@HolographicPositioner@@WKI@EAAJPEAW4TrustLevel@@@Z @ 0x180106BD0 (-GetTrustLevel@HolographicPositioner@@WKI@EAAJPEAW4TrustLevel@@@Z.c)
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
