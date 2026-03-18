/*
 * XREFs of AMLIIterateParentNext @ 0x1C0027690
 * Callers:
 *     GetOpRegionScopeWorker @ 0x1C001F710 (GetOpRegionScopeWorker.c)
 *     OSNotifyCreateOperationRegion @ 0x1C00275F0 (OSNotifyCreateOperationRegion.c)
 *     OSNotifyDeviceCheck @ 0x1C005155C (OSNotifyDeviceCheck.c)
 *     OSNotifyDeviceEnum @ 0x1C005174C (OSNotifyDeviceEnum.c)
 *     AcpiHandleInternalNotify @ 0x1C00539B0 (AcpiHandleInternalNotify.c)
 * Callees:
 *     AMLIGetParent @ 0x1C00127F8 (AMLIGetParent.c)
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 */

__int64 __fastcall AMLIIterateParentNext(volatile signed __int32 *a1)
{
  __int64 v2; // rbx

  v2 = AMLIGetParent((__int64)a1);
  AMLIDereferenceHandleEx(a1, 0LL);
  return v2;
}
