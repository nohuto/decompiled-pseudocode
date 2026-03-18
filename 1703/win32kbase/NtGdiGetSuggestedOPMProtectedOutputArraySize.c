/*
 * XREFs of NtGdiGetSuggestedOPMProtectedOutputArraySize @ 0x1C00EE620
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C00E8970 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 *     DrvGetSuggestedPhysicalMonitorArraySize @ 0x1C00F9FE0 (DrvGetSuggestedPhysicalMonitorArraySize.c)
 */

__int64 __fastcall NtGdiGetSuggestedOPMProtectedOutputArraySize(
        struct _UNICODE_STRING *a1,
        volatile void *Address,
        __int64 a3)
{
  __int64 result; // rax
  unsigned int v6; // edi
  int SuggestedPhysicalMonitorArraySize; // ebx

  result = AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList((__int64)a1, (__int64)Address, a3);
  v6 = 0;
  if ( (int)result >= 0 )
  {
    SuggestedPhysicalMonitorArraySize = DrvGetSuggestedPhysicalMonitorArraySize(a1, UserMode, Address);
    UserSessionSwitchLeaveCrit();
    if ( SuggestedPhysicalMonitorArraySize < 0 )
      return (unsigned int)SuggestedPhysicalMonitorArraySize;
    return v6;
  }
  return result;
}
