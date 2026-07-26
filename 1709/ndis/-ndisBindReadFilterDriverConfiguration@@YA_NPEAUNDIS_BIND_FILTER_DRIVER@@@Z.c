/*
 * XREFs of ?ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C00C8BF8
 * Callers:
 *     ?ndisBindGetFilterDriver@@YA?AV?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z @ 0x1C00BE238 (-ndisBindGetFilterDriver@@YA-AV-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z.c)
 * Callees:
 *     ?ndisIsInNetSetupMode@@YA_NXZ @ 0x1C00B4154 (-ndisIsInNetSetupMode@@YA_NXZ.c)
 *     ?ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C00C8C44 (-ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 *     ?ndisBindReadFilterDriverFromV1Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C00FA054 (-ndisBindReadFilterDriverFromV1Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 */

bool __fastcall ndisBindReadFilterDriverConfiguration(struct NDIS_BIND_FILTER_DRIVER *a1)
{
  a1->FilterBindFlags = 0;
  return (ndisIsInNetSetupMode() && ndisBindReadFilterDriverFromV2Registry(a1)
       || ndisBindReadFilterDriverFromV1Registry(a1))
      && ((a1->FilterBindFlags & 2) != 0 || a1->FilterClass._Myptr);
}
