/*
 * XREFs of ?DpiBrightnessSetupAggregateEvents@@YAXPEAU_DEVICE_OBJECT@@@Z @ 0x1C01E3B20
 * Callers:
 *     ?DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C011477C (-DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 */

void __fastcall DpiBrightnessSetupAggregateEvents(struct _DEVICE_OBJECT *a1)
{
  _QWORD *DeviceExtension; // rbx
  __int64 v3; // rdi
  _QWORD *v4; // rbx
  _QWORD v5[7]; // [rsp+20h] [rbp-48h] BYREF

  DeviceExtension = a1->DeviceExtension;
  memset(DeviceExtension + 525, 0, 0x48uLL);
  v3 = 3LL;
  DeviceExtension[527] = &WNF_SEB_SYSTEM_AC;
  DeviceExtension[530] = &WNF_SEB_FULL_SCREEN_VIDEO_PLAYBACK;
  DeviceExtension[533] = &WNF_SEB_FULL_SCREEN_HDR_VIDEO_PLAYBACK;
  v4 = DeviceExtension + 526;
  do
  {
    memset(v5, 0, sizeof(v5));
    HIDWORD(v5[1]) = 1;
    v5[2] = v4[1];
    v5[4] = DpiBrightnessEventStartCallback;
    v5[5] = DpiBrightnessEventStopCallback;
    v5[6] = a1;
    EACreateAggregateEvent(v5, v4);
    v4 += 3;
    --v3;
  }
  while ( v3 );
}
