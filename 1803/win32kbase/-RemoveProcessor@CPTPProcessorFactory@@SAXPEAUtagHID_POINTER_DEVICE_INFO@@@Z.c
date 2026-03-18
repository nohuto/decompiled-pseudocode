/*
 * XREFs of ?RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C0126148
 * Callers:
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00F3160 (RIMIDECreatePointerDeviceInfo.c)
 *     ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C0127700 (-OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     ??_GCPTPProcessor@@AEAAPEAXI@Z @ 0x1C0124F5C (--_GCPTPProcessor@@AEAAPEAXI@Z.c)
 */

void __fastcall CPTPProcessorFactory::RemoveProcessor(struct tagHID_POINTER_DEVICE_INFO *a1)
{
  CPTPProcessor *v2; // rcx

  v2 = (CPTPProcessor *)*((_QWORD *)a1 + 120);
  if ( v2 )
  {
    CPTPProcessor::`scalar deleting destructor'(v2);
    *((_QWORD *)a1 + 120) = 0LL;
  }
}
