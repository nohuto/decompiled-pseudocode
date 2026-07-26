/*
 * XREFs of ?ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C00B61F8
 * Callers:
 *     ?ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C00B61AC (-ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C001A5E8 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     WPP_SF_Sd @ 0x1C0041BF8 (WPP_SF_Sd.c)
 *     WPP_SF_S @ 0x1C0062434 (WPP_SF_S.c)
 *     ?ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@Z @ 0x1C00B7EA0 (-ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@.c)
 *     ?Open@KRegKey@@QEAAJKPEBGPEAX@Z @ 0x1C00BB394 (-Open@KRegKey@@QEAAJKPEBGPEAX@Z.c)
 */

bool __fastcall ndisBindReadFilterDriverFromV2Registry(struct NDIS_BIND_FILTER_DRIVER *a1)
{
  int v2; // eax
  bool FilterDriverSettingsFromV2Registry; // bl
  HANDLE Handle[2]; // [rsp+70h] [rbp-288h] BYREF
  wchar_t Dest[304]; // [rsp+80h] [rbp-278h] BYREF

  if ( (int)RtlStringCchPrintfW(
              Dest,
              300LL,
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Filters\\{%08x-%04x-%04x-%02x%02x-"
               "%02x%02x%02x%02x%02x%02x}\\Kernel",
              a1->Guid.Data1,
              a1->Guid.Data2,
              a1->Guid.Data3,
              a1->Guid.Data4[0],
              a1->Guid.Data4[1],
              a1->Guid.Data4[2],
              a1->Guid.Data4[3],
              a1->Guid.Data4[4],
              a1->Guid.Data4[5],
              a1->Guid.Data4[6],
              a1->Guid.Data4[7]) < 0 )
    return 0;
  Handle[0] = 0LL;
  v2 = KRegKey::Open((KRegKey *)Handle, 1u, Dest, 0LL);
  if ( v2 < 0 )
  {
    if ( v2 == -1073741772 )
    {
      if ( (unsigned __int8)byte_1C0099611 >= 2u )
        WPP_SF_S(0xBu, &WPP_8d98bde3000d344f77c1d3be10f8ac4f_Traceguids, Dest);
    }
    else if ( (unsigned __int8)byte_1C0099611 >= 2u )
    {
      WPP_SF_Sd(0xCu, &WPP_8d98bde3000d344f77c1d3be10f8ac4f_Traceguids, Dest, v2);
    }
    FilterDriverSettingsFromV2Registry = 0;
  }
  else
  {
    FilterDriverSettingsFromV2Registry = ndisBindReadFilterDriverSettingsFromV2Registry(a1, (struct KRegKey *)Handle);
  }
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return FilterDriverSettingsFromV2Registry;
}
