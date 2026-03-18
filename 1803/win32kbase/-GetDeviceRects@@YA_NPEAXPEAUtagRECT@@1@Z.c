/*
 * XREFs of ?GetDeviceRects@@YA_NPEAXPEAUtagRECT@@1@Z @ 0x1C013201C
 * Callers:
 *     ?CreateInjectionDevice@@YAHXZ @ 0x1C0131FCC (-CreateInjectionDevice@@YAHXZ.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C004DDD4 (HMValidateHandleNoSecure.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00F1E10 (RawInputManagerDeviceObjectResolveHandle.c)
 */

bool __fastcall GetDeviceRects(void *a1, struct tagRECT *a2, struct tagRECT *a3)
{
  bool result; // al
  void *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int128 v7; // xmm1
  PVOID Object; // [rsp+40h] [rbp+18h] BYREF

  Object = a3;
  if ( !TouchExtensibility::ghInjectionDevice )
    return 0;
  Object = 0LL;
  if ( (int)RawInputManagerDeviceObjectResolveHandle((char *)TouchExtensibility::ghInjectionDevice, 3u, 0, &Object) < 0 )
    return 0;
  v4 = Object == (PVOID)-80LL ? 0LL : (void *)*((_QWORD *)Object + 10);
  TouchExtensibility::hDeviceUser = v4;
  ObfDereferenceObject(Object);
  v5 = HMValidateHandleNoSecure((unsigned __int64)v4, 19);
  if ( !v5 )
    return 0;
  v6 = *(_QWORD *)(v5 + 480);
  if ( !v6 )
    return 0;
  *(_OWORD *)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink = *(_OWORD *)(v6 + 176);
  v7 = *(_OWORD *)(v6 + 192);
  result = 1;
  *(_OWORD *)&WPP_MAIN_CB.DeviceQueue.Busy = v7;
  return result;
}
