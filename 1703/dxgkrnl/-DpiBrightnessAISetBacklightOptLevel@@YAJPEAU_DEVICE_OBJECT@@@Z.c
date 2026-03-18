/*
 * XREFs of ?DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C01C8D84
 * Callers:
 *     ?DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C010E2F4 (-DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DpiBrightnessCleanupAggregateEvents@@YAXPEAU_DEVICE_OBJECT@@E@Z @ 0x1C01C8EB4 (-DpiBrightnessCleanupAggregateEvents@@YAXPEAU_DEVICE_OBJECT@@E@Z.c)
 *     ?DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z @ 0x1C01C8F5C (-DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z.c)
 *     ?DpiBrightnessEventStartCallback@@YAXPEAXU_CBROKERED_EVENT_ID@@00K@Z @ 0x1C01C9190 (-DpiBrightnessEventStartCallback@@YAXPEAXU_CBROKERED_EVENT_ID@@00K@Z.c)
 *     ?DpiBrightnessEventStopCallback@@YAXPEAXU_CBROKERED_EVENT_ID@@00K@Z @ 0x1C01C9250 (-DpiBrightnessEventStopCallback@@YAXPEAXU_CBROKERED_EVENT_ID@@00K@Z.c)
 *     ?DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@E@Z @ 0x1C01C98D0 (-DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@E@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00F2CA0 (DxgkWriteDiagEntry.c)
 *     ?DpiBrightnessSetBacklightOptimizationHelper@@YAJPEAU_DEVICE_OBJECT@@W4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z @ 0x1C01C9980 (-DpiBrightnessSetBacklightOptimizationHelper@@YAJPEAU_DEVICE_OBJECT@@W4DXGK_BACKLIGHT_OPTIMIZATI.c)
 */

__int64 __fastcall DpiBrightnessAISetBacklightOptLevel(struct _DEVICE_OBJECT *a1)
{
  _BYTE *DeviceExtension; // rdi
  enum DXGK_BACKLIGHT_OPTIMIZATION_LEVEL v2; // esi
  bool v3; // zf
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD v9[10]; // [rsp+20h] [rbp-60h] BYREF

  DeviceExtension = a1->DeviceExtension;
  if ( *((_QWORD *)DeviceExtension + 558) )
  {
    if ( DeviceExtension[4104] )
    {
      v2 = DxgkBacklightOptimizationDisable;
    }
    else if ( DeviceExtension[4088] )
    {
      v2 = DxgkBacklightOptimizationDimmed;
    }
    else if ( DeviceExtension[4128] )
    {
      if ( DeviceExtension[4152] && *(_DWORD *)(*((_QWORD *)DeviceExtension + 5) + 28LL) >= 0x7006u )
        v2 = DxgkBacklightOptimizationEDR;
      else
        v2 = DxgkBacklightOptimizationDynamic;
    }
    else
    {
      v2 = DxgkBacklightOptimizationDesktop;
    }
    v3 = DeviceExtension[4176] == 0;
    *((_DWORD *)DeviceExtension + 1045) = v2;
    if ( v3 )
    {
      v4 = DpiBrightnessSetBacklightOptimizationHelper(a1, v2);
      memset(v9, 0, 0x48uLL);
      v9[8] = *((_QWORD *)DeviceExtension + 317);
      v9[0] = 0x480000001ELL;
      memset(&v9[1], 0, 36);
      LODWORD(v9[6]) = 66;
      HIDWORD(v9[6]) = v2;
      v9[7] = v4;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v9, v5, v6, v7);
    }
  }
  return 0LL;
}
