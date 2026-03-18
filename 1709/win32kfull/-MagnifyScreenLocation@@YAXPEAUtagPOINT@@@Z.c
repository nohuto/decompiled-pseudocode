/*
 * XREFs of ?MagnifyScreenLocation@@YAXPEAUtagPOINT@@@Z @ 0x1C01AECA0
 * Callers:
 *     ?FixupPrimaryGestureContact@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01AE51C (-FixupPrimaryGestureContact@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVI.c)
 *     ?FixupSecondaryGestureContacts@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01AE66C (-FixupSecondaryGestureContacts@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_D.c)
 * Callees:
 *     PtInRect @ 0x1C005E678 (PtInRect.c)
 *     MagInputTransform @ 0x1C00FD404 (MagInputTransform.c)
 *     AcquireMagInputLock @ 0x1C00FD424 (AcquireMagInputLock.c)
 *     MagnificationTransformPoint @ 0x1C01DFDC4 (MagnificationTransformPoint.c)
 */

void __fastcall MagnifyScreenLocation(struct tagPOINT *a1)
{
  __int64 v2; // rax
  __int64 v3; // r8

  AcquireMagInputLock();
  v2 = MagInputTransform();
  if ( v2 && PtInRect((_DWORD *)(v2 + 16), (unsigned __int64)*a1) )
    MagnificationTransformPoint(v3, a1);
  _InterlockedExchange64(&gpMagInputLock, 0LL);
}
