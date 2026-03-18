/*
 * XREFs of AMLIIterateParentNext @ 0x1C0028AFC
 * Callers:
 *     GetOpRegionScopeWorker @ 0x1C0016370 (GetOpRegionScopeWorker.c)
 *     OSNotifyCreateOperationRegion @ 0x1C0028A5C (OSNotifyCreateOperationRegion.c)
 *     OSNotifyDeviceCheck @ 0x1C0051F9C (OSNotifyDeviceCheck.c)
 *     OSNotifyDeviceEnum @ 0x1C005218C (OSNotifyDeviceEnum.c)
 *     AcpiHandleInternalNotify @ 0x1C00544F0 (AcpiHandleInternalNotify.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     AMLIGetParent @ 0x1C001BBA0 (AMLIGetParent.c)
 */

__int64 __fastcall AMLIIterateParentNext(__int64 a1)
{
  __int64 v2; // rbx

  v2 = AMLIGetParent(a1);
  AMLIDereferenceHandleEx(a1);
  return v2;
}
