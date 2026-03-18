/*
 * XREFs of ?DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0200994
 * Callers:
 *     ?DpiBrightnessCleanupAggregateEvents@@YAXPEAU_DEVICE_OBJECT@@E@Z @ 0x1C0200AE0 (-DpiBrightnessCleanupAggregateEvents@@YAXPEAU_DEVICE_OBJECT@@E@Z.c)
 *     ?DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z @ 0x1C0200B74 (-DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z.c)
 *     ?DpiBrightnessEventStartCallback@@YAXPEAXU_CBROKERED_EVENT_ID@@00K@Z @ 0x1C0200E60 (-DpiBrightnessEventStartCallback@@YAXPEAXU_CBROKERED_EVENT_ID@@00K@Z.c)
 *     ?DpiBrightnessEventStopCallback@@YAXPEAXU_CBROKERED_EVENT_ID@@00K@Z @ 0x1C0200F30 (-DpiBrightnessEventStopCallback@@YAXPEAXU_CBROKERED_EVENT_ID@@00K@Z.c)
 *     ?DpiBrightnessNotifyMonitorDimmingDirect@@YAJPEAU_DEVICE_OBJECT@@E@Z @ 0x1C02016E4 (-DpiBrightnessNotifyMonitorDimmingDirect@@YAJPEAU_DEVICE_OBJECT@@E@Z.c)
 *     ?DpiBrightnessSetupInterfaceV2@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0201A60 (-DpiBrightnessSetupInterfaceV2@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00C3130 (DxgkWriteDiagEntry.c)
 *     ?DpiBrightnessSetBacklightOptimizationHelper@@YAJPEAU_DEVICE_OBJECT@@W4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z @ 0x1C0201910 (-DpiBrightnessSetBacklightOptimizationHelper@@YAJPEAU_DEVICE_OBJECT@@W4DXGK_BACKLIGHT_OPTIMIZATI.c)
 */

__int64 __fastcall DpiBrightnessAISetBacklightOptLevel(struct _DEVICE_OBJECT *a1)
{
  _WORD *DeviceExtension; // rdi
  char *v2; // rdx
  enum DXGK_BACKLIGHT_OPTIMIZATION_LEVEL v3; // esi
  bool v5; // zf
  unsigned int v6; // ebx
  _QWORD v7[10]; // [rsp+20h] [rbp-60h] BYREF

  DeviceExtension = a1->DeviceExtension;
  v2 = 0LL;
  v3 = DxgkBacklightOptimizationDynamic;
  if ( DeviceExtension[2281] == 2 )
    v2 = (char *)(DeviceExtension + 2280);
  if ( !v2 )
    return 3221225659LL;
  if ( *((_QWORD *)v2 + 9) )
  {
    if ( *((_BYTE *)DeviceExtension + 4200) )
    {
      v3 = DxgkBacklightOptimizationDisable;
    }
    else if ( *((_BYTE *)DeviceExtension + 4184) )
    {
      v3 = DxgkBacklightOptimizationDimmed;
    }
    else if ( *((_BYTE *)DeviceExtension + 4224) )
    {
      if ( *((_BYTE *)DeviceExtension + 4248) && *(_DWORD *)(*((_QWORD *)DeviceExtension + 5) + 28LL) >= 0x7006u )
        v3 = DxgkBacklightOptimizationEDR;
    }
    else
    {
      v3 = DxgkBacklightOptimizationDesktop;
    }
    v5 = *((_BYTE *)DeviceExtension + 4272) == 0;
    *((_DWORD *)DeviceExtension + 1069) = v3;
    if ( v5 )
    {
      v6 = DpiBrightnessSetBacklightOptimizationHelper(a1, v3);
      memset(v7, 0, 0x48uLL);
      v7[8] = *((_QWORD *)DeviceExtension + 317);
      v7[0] = 0x480000001ELL;
      memset(&v7[1], 0, 36);
      LODWORD(v7[6]) = 66;
      HIDWORD(v7[6]) = v3;
      v7[7] = v6;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v7);
    }
  }
  return 0LL;
}
