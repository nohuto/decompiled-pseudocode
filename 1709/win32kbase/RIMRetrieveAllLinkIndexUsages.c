/*
 * XREFs of RIMRetrieveAllLinkIndexUsages @ 0x1C0094000
 * Callers:
 *     RIMIsParallelDevice @ 0x1C000FF9C (RIMIsParallelDevice.c)
 *     RIMValidateAllCollectionUsages @ 0x1C0093E74 (RIMValidateAllCollectionUsages.c)
 * Callees:
 *     rimHidP_GetSpecificButtonCaps @ 0x1C001266C (rimHidP_GetSpecificButtonCaps.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C00128A8 (rimHidP_GetSpecificValueCaps.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolZInit @ 0x1C0025A50 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

__int64 __fastcall RIMRetrieveAllLinkIndexUsages(
        unsigned __int16 a1,
        struct _HIDP_PREPARSED_DATA *a2,
        unsigned __int16 *a3,
        __int64 *a4,
        unsigned __int16 *a5,
        __int64 *a6)
{
  unsigned int SpecificValueCaps; // ebx
  struct _HIDP_VALUE_CAPS *v11; // rax
  struct _HIDP_BUTTON_CAPS *v12; // rax
  unsigned __int16 v14; // r9

  SpecificValueCaps = rimHidP_GetSpecificValueCaps(HidP_Input, 0, a1, 0, 0LL, a3, a2);
  if ( SpecificValueCaps == -1072627705 )
  {
    v11 = (struct _HIDP_VALUE_CAPS *)Win32AllocPoolZInit(72LL * *a3, 1668707154LL);
    *a4 = (__int64)v11;
    if ( v11 )
    {
      SpecificValueCaps = rimHidP_GetSpecificValueCaps(HidP_Input, 0, a1, 0, v11, a3, a2);
      if ( SpecificValueCaps != 1114112 )
      {
        v14 = 23;
LABEL_10:
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          0x12u,
          v14,
          (__int64)&WPP_0f3e873ef26134f564643c470ca4b782_Traceguids);
        goto LABEL_12;
      }
      SpecificValueCaps = rimHidP_GetSpecificButtonCaps(HidP_Input, 0, a1, 0, 0LL, a5, a2);
      if ( SpecificValueCaps != -1072627705 )
        goto LABEL_12;
      v12 = (struct _HIDP_BUTTON_CAPS *)Win32AllocPoolZInit(72LL * *a5, 1668707154LL);
      *a6 = (__int64)v12;
      if ( v12 )
      {
        SpecificValueCaps = rimHidP_GetSpecificButtonCaps(HidP_Input, 0, a1, 0, v12, a5, a2);
        if ( SpecificValueCaps == 1114112 )
          return SpecificValueCaps;
        v14 = 24;
        goto LABEL_10;
      }
    }
    SpecificValueCaps = -1073741801;
  }
LABEL_12:
  if ( SpecificValueCaps != 1114112 )
  {
    if ( *a4 )
    {
      Win32FreePool(*a4);
      *a4 = 0LL;
    }
    if ( *a6 )
    {
      Win32FreePool(*a6);
      *a6 = 0LL;
    }
  }
  return SpecificValueCaps;
}
