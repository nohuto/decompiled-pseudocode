/*
 * XREFs of AMLIIterateParentNext @ 0x1C0043E7C
 * Callers:
 *     OSNotifyCreateOperationRegion @ 0x1C002E808 (OSNotifyCreateOperationRegion.c)
 *     OSNotifyDeviceCheck @ 0x1C002EB9C (OSNotifyDeviceCheck.c)
 *     OSNotifyDeviceEnum @ 0x1C002ED8C (OSNotifyDeviceEnum.c)
 *     GetOpRegionScopeWorker @ 0x1C0030D90 (GetOpRegionScopeWorker.c)
 *     AcpiHandleInternalNotify @ 0x1C0033430 (AcpiHandleInternalNotify.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetParent @ 0x1C0043D24 (AMLIGetParent.c)
 */

__int64 __fastcall AMLIIterateParentNext(volatile signed __int32 *a1)
{
  __int64 v2; // rbx

  v2 = AMLIGetParent((__int64)a1);
  AMLIDereferenceHandleEx(a1);
  return v2;
}
