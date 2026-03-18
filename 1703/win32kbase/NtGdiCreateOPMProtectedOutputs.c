/*
 * XREFs of NtGdiCreateOPMProtectedOutputs @ 0x1C00EE070
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C00E8970 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 *     DrvCreatePhysicalMonitorObjects @ 0x1C00F9150 (DrvCreatePhysicalMonitorObjects.c)
 */

__int64 __fastcall NtGdiCreateOPMProtectedOutputs(
        struct _UNICODE_STRING *a1,
        __int64 a2,
        __int64 a3,
        volatile void *a4,
        volatile void *Address)
{
  int v6; // esi
  __int64 result; // rax
  unsigned int v9; // edi
  int PhysicalMonitorObjects; // ebx

  v6 = a3;
  result = AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList((__int64)a1, a2, a3);
  v9 = 0;
  if ( (int)result >= 0 )
  {
    PhysicalMonitorObjects = DrvCreatePhysicalMonitorObjects(a1, UserMode, v6, a4, Address);
    UserSessionSwitchLeaveCrit();
    if ( PhysicalMonitorObjects < 0 )
      return (unsigned int)PhysicalMonitorObjects;
    return v9;
  }
  return result;
}
