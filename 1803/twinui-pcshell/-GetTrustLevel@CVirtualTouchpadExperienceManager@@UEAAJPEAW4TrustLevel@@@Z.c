/*
 * XREFs of ?GetTrustLevel@CVirtualTouchpadExperienceManager@@UEAAJPEAW4TrustLevel@@@Z @ 0x1800965E0
 * Callers:
 *     ?GetTrustLevel@CActionCenterExperienceManager@@WBI@EAAJPEAW4TrustLevel@@@Z @ 0x1800A4930 (-GetTrustLevel@CActionCenterExperienceManager@@WBI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CControlCenterExperienceManager@@WCA@EAAJPEAW4TrustLevel@@@Z @ 0x1800A4940 (-GetTrustLevel@CControlCenterExperienceManager@@WCA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CActionCenterExperienceManager@@WFA@EAAJPEAW4TrustLevel@@@Z @ 0x1800A4950 (-GetTrustLevel@CActionCenterExperienceManager@@WFA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CControlCenterExperienceManager@@WEA@EAAJPEAW4TrustLevel@@@Z @ 0x1800A4C70 (-GetTrustLevel@CControlCenterExperienceManager@@WEA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CTaskContinuityActivitiesExperienceManager@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x1800A5090 (-GetTrustLevel@CTaskContinuityActivitiesExperienceManager@@WBA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CToastCenterExperienceManager@@WDA@EAAJPEAW4TrustLevel@@@Z @ 0x1800A5250 (-GetTrustLevel@CToastCenterExperienceManager@@WDA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CStartExperienceManager@@WCI@EAAJPEAW4TrustLevel@@@Z @ 0x1800A56C0 (-GetTrustLevel@CStartExperienceManager@@WCI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CStartExperienceManager@@WDI@EAAJPEAW4TrustLevel@@@Z @ 0x1800A56D0 (-GetTrustLevel@CStartExperienceManager@@WDI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@HolographicPositioner@@WJI@EAAJPEAW4TrustLevel@@@Z @ 0x1800A6B60 (-GetTrustLevel@HolographicPositioner@@WJI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@HolographicPositioner@@WKA@EAAJPEAW4TrustLevel@@@Z @ 0x1800A6B70 (-GetTrustLevel@HolographicPositioner@@WKA@EAAJPEAW4TrustLevel@@@Z.c)
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
