/*
 * XREFs of ?DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C01E2EC8
 * Callers:
 *     ?DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C011477C (-DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DpiBrightnessCleanupAggregateEvents@@YAXPEAU_DEVICE_OBJECT@@E@Z @ 0x1C01E2FF8 (-DpiBrightnessCleanupAggregateEvents@@YAXPEAU_DEVICE_OBJECT@@E@Z.c)
 *     ?DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z @ 0x1C01E30A0 (-DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z.c)
 *     ?DpiBrightnessEventStartCallback@@YAXPEAXU_CBROKERED_EVENT_ID@@00K@Z @ 0x1C01E32E0 (-DpiBrightnessEventStartCallback@@YAXPEAXU_CBROKERED_EVENT_ID@@00K@Z.c)
 *     ?DpiBrightnessEventStopCallback@@YAXPEAXU_CBROKERED_EVENT_ID@@00K@Z @ 0x1C01E33A0 (-DpiBrightnessEventStopCallback@@YAXPEAXU_CBROKERED_EVENT_ID@@00K@Z.c)
 *     ?DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@E@Z @ 0x1C01E3A20 (-DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@E@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00D2FA0 (DxgkWriteDiagEntry.c)
 *     ?DpiBrightnessSetBacklightOptimizationHelper@@YAJPEAU_DEVICE_OBJECT@@W4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z @ 0x1C01E3AD0 (-DpiBrightnessSetBacklightOptimizationHelper@@YAJPEAU_DEVICE_OBJECT@@W4DXGK_BACKLIGHT_OPTIMIZATI.c)
 */

__int64 __fastcall DpiBrightnessAISetBacklightOptLevel(struct _DEVICE_OBJECT *a1)
{
  _BYTE *DeviceExtension; // rdi
  enum DXGK_BACKLIGHT_OPTIMIZATION_LEVEL v2; // esi
  bool v3; // zf
  unsigned int v4; // ebx
  _QWORD v6[10]; // [rsp+20h] [rbp-60h] BYREF

  DeviceExtension = a1->DeviceExtension;
  if ( *((_QWORD *)DeviceExtension + 570) )
  {
    if ( DeviceExtension[4200] )
    {
      v2 = DxgkBacklightOptimizationDisable;
    }
    else if ( DeviceExtension[4184] )
    {
      v2 = DxgkBacklightOptimizationDimmed;
    }
    else if ( DeviceExtension[4224] )
    {
      if ( DeviceExtension[4248] && *(_DWORD *)(*((_QWORD *)DeviceExtension + 5) + 28LL) >= 0x7006u )
        v2 = DxgkBacklightOptimizationEDR;
      else
        v2 = DxgkBacklightOptimizationDynamic;
    }
    else
    {
      v2 = DxgkBacklightOptimizationDesktop;
    }
    v3 = DeviceExtension[4272] == 0;
    *((_DWORD *)DeviceExtension + 1069) = v2;
    if ( v3 )
    {
      v4 = DpiBrightnessSetBacklightOptimizationHelper(a1, v2);
      memset(v6, 0, 0x48uLL);
      v6[8] = *((_QWORD *)DeviceExtension + 317);
      v6[0] = 0x480000001ELL;
      memset(&v6[1], 0, 36);
      LODWORD(v6[6]) = 66;
      HIDWORD(v6[6]) = v2;
      v6[7] = v4;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v6);
    }
  }
  return 0LL;
}
