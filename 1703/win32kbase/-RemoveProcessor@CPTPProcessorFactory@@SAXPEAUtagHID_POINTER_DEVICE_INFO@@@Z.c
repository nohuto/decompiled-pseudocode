/*
 * XREFs of ?RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C012C010
 * Callers:
 *     ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C004E7F0 (-OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C01098C8 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     ??_GCPTPProcessor@@AEAAPEAXI@Z @ 0x1C012ADB0 (--_GCPTPProcessor@@AEAAPEAXI@Z.c)
 */

void __fastcall CPTPProcessorFactory::RemoveProcessor(struct tagHID_POINTER_DEVICE_INFO *a1)
{
  CPTPProcessor *v2; // rcx

  v2 = (CPTPProcessor *)*((_QWORD *)a1 + 203);
  if ( v2 )
  {
    CPTPProcessor::`scalar deleting destructor'(v2);
    *((_QWORD *)a1 + 203) = 0LL;
  }
}
