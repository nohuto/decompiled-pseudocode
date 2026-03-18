/*
 * XREFs of rimValidateCustomHidKeyboardUsages @ 0x1C0114ED8
 * Callers:
 *     RIMCreateHidKeyboardDeviceInfo @ 0x1C0114064 (RIMCreateHidKeyboardDeviceInfo.c)
 * Callees:
 *     rimHidP_GetSpecificButtonCaps @ 0x1C0009EC4 (rimHidP_GetSpecificButtonCaps.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C000B1BC (rimHidP_GetSpecificValueCaps.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolNonPaged @ 0x1C0054B50 (Win32AllocPoolNonPaged.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 __fastcall rimValidateCustomHidKeyboardUsages(
        __int64 a1,
        __int64 a2,
        struct _HIDP_PREPARSED_DATA *a3,
        _WORD *a4)
{
  __int64 v4; // rdi
  struct _HIDP_BUTTON_CAPS *v7; // r14
  struct _HIDP_BUTTON_CAPS *v8; // rsi
  int SpecificButtonCaps; // ebx
  int v10; // r10d
  unsigned __int16 v11; // r8
  int *v12; // r9
  union _HIDP_BUTTON_CAPS::$EECF18E811B231775A73F932F7651893 *p_Range; // rdx
  int v14; // ecx
  unsigned __int16 v15; // ax
  struct _HIDP_VALUE_CAPS *v16; // rdi
  unsigned __int16 v17; // ax
  int v18; // r9d
  __int64 v20; // [rsp+80h] [rbp+40h] BYREF
  unsigned __int16 v21; // [rsp+88h] [rbp+48h] BYREF
  unsigned __int16 v22; // [rsp+98h] [rbp+58h] BYREF

  v20 = a1;
  v4 = *(_QWORD *)(a2 + 480);
  v21 = 0;
  v22 = 0;
  v7 = 0LL;
  LOWORD(v20) = 0;
  v8 = 0LL;
  if ( a4[26] <= 1u )
    goto LABEL_15;
  LOWORD(v20) = a4[23];
  v8 = (struct _HIDP_BUTTON_CAPS *)Win32AllocPoolNonPaged(72LL * (unsigned __int16)v20, 0x626B4852u);
  if ( !v8 )
    return (unsigned int)-1073741801;
  memset(v8, 0, 72LL * (unsigned __int16)v20);
  SpecificButtonCaps = rimHidP_GetSpecificButtonCaps(HidP_Output, 8u, 0, 0, v8, (unsigned __int16 *)&v20, a3);
  if ( SpecificButtonCaps >= 0 )
  {
    *(_QWORD *)(v4 + 376) = 0LL;
    v10 = 0;
    v11 = v20;
    if ( (_WORD)v20 )
    {
      v12 = (int *)(v4 + 380);
      p_Range = (union _HIDP_BUTTON_CAPS::$EECF18E811B231775A73F932F7651893 *)&v8->Range;
      while ( 1 )
      {
        if ( p_Range[-4].Range.DesignatorMin != 8 || LOBYTE(p_Range[-3].NotRange.StringIndex) )
          goto LABEL_14;
        if ( p_Range->Range.UsageMin == 80 )
          break;
        if ( p_Range->Range.UsageMin == 81 )
        {
          v14 = 2;
LABEL_13:
          *v12 = v14;
          v12 += 2;
          v11 = v20;
        }
LABEL_14:
        ++v10;
        p_Range = (union _HIDP_BUTTON_CAPS::$EECF18E811B231775A73F932F7651893 *)((char *)p_Range + 72);
        if ( v10 >= v11 )
          goto LABEL_15;
      }
      v14 = 1;
      goto LABEL_13;
    }
LABEL_15:
    v15 = a4[27];
    if ( !v15 )
    {
      SpecificButtonCaps = -1073741823;
      goto LABEL_37;
    }
    v22 = a4[27];
    v16 = (struct _HIDP_VALUE_CAPS *)Win32AllocPoolNonPaged(72LL * v15, 0x626B4852u);
    if ( !v16 )
    {
      SpecificButtonCaps = -1073741801;
      goto LABEL_37;
    }
    memset(0LL, 0, 72LL * v21);
    SpecificButtonCaps = rimHidP_GetSpecificValueCaps(HidP_Output, 0x14u, 0, 0xA0u, v16, &v22, a3);
    if ( SpecificButtonCaps < 0 )
      goto LABEL_36;
    if ( v22
      && !v16->IsRange
      && v16->LogicalMin >= 0
      && v16->BitSize * v16->ReportCount == 8
      && v16->Range.UsageMin == 160 )
    {
      v17 = a4[23];
      if ( v17 < 8u )
      {
        SpecificButtonCaps = -1073741823;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          2,
          17,
          18,
          (__int64)&WPP_c744f49e6dab323e720a14bebb6445e2_Traceguids);
LABEL_36:
        Win32FreePool((__int64)v16);
        goto LABEL_37;
      }
      v21 = a4[23];
      v7 = (struct _HIDP_BUTTON_CAPS *)Win32AllocPoolNonPaged(72LL * v17, 0x626B4852u);
      if ( !v7 )
      {
        SpecificButtonCaps = -1073741801;
        goto LABEL_36;
      }
      memset(v7, 0, 72LL * v21);
      SpecificButtonCaps = rimHidP_GetSpecificButtonCaps(HidP_Input, 7u, 0, 0, v7, &v21, a3);
      if ( SpecificButtonCaps >= 0 )
      {
        SpecificButtonCaps = 0;
        goto LABEL_34;
      }
      v18 = 19;
    }
    else
    {
      SpecificButtonCaps = -1073741823;
      v18 = 17;
    }
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      2,
      17,
      v18,
      (__int64)&WPP_c744f49e6dab323e720a14bebb6445e2_Traceguids);
LABEL_34:
    if ( v7 )
      Win32FreePool((__int64)v7);
    goto LABEL_36;
  }
LABEL_37:
  if ( v8 )
    Win32FreePool((__int64)v8);
  return (unsigned int)SpecificButtonCaps;
}
