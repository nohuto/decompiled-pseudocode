/*
 * XREFs of ?DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00CFDD0
 * Callers:
 *     DrvCreatePhysicalMonitorObjects @ 0x1C00D3C00 (DrvCreatePhysicalMonitorObjects.c)
 *     DrvGetSuggestedPhysicalMonitorArraySize @ 0x1C00D5240 (DrvGetSuggestedPhysicalMonitorArraySize.c)
 *     DrvPVPGetFirstActiveMonitor @ 0x1C00D5814 (DrvPVPGetFirstActiveMonitor.c)
 * Callees:
 *     DrvGetDeviceFromName @ 0x1C0045200 (DrvGetDeviceFromName.c)
 */

__int64 __fastcall DrvGetDeviceFromNameAndValidateDevice(
        struct _UNICODE_STRING *a1,
        int a2,
        struct tagGRAPHICS_DEVICE **a3)
{
  wchar_t *DeviceFromName; // rax
  struct tagGRAPHICS_DEVICE *v5; // rcx
  int v7; // eax

  DeviceFromName = DrvGetDeviceFromName(a1, a2);
  v5 = (struct tagGRAPHICS_DEVICE *)DeviceFromName;
  if ( !DeviceFromName )
    return 3223193057LL;
  v7 = *((_DWORD *)DeviceFromName + 40);
  if ( (v7 & 1) == 0 )
    return 3223193058LL;
  if ( (v7 & 8) != 0 )
    return 3223193059LL;
  *a3 = v5;
  return 0LL;
}
