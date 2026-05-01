/*
 * XREFs of ?GetIids@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1801A8A90
 * Callers:
 *     ?GetIids@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800A6710 (-GetIids@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WBI@EAAJPEAKPEAPEAU_GUID@@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::GetIids(
        Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  unsigned int v3; // ebx
  struct _GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (struct _GUID *)CoTaskMemAlloc(0x40uLL);
  if ( v6 )
  {
    *v6 = GUID_e9821dd9_a9b2_47c8_9aac_7b6b042ef0b0;
    v6[1] = GUID_00000038_0000_0000_c000_000000000046;
    v6[2] = GUID_727f9e97_76ee_497b_a942_b6371328485c;
    v6[3] = GUID_c6c17671_55bb_4207_8e36_f1828ab54d8a;
    *a2 = 4;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
