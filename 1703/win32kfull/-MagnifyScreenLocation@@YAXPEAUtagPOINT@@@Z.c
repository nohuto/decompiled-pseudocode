/*
 * XREFs of ?MagnifyScreenLocation@@YAXPEAUtagPOINT@@@Z @ 0x1C01AB890
 * Callers:
 *     ?FixupPrimaryGestureContact@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01AB15C (-FixupPrimaryGestureContact@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVI.c)
 *     ?FixupSecondaryGestureContacts@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01AB2AC (-FixupSecondaryGestureContacts@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_D.c)
 * Callees:
 *     PtInRect @ 0x1C0062B38 (PtInRect.c)
 *     AcquireMagInputLock @ 0x1C0103100 (AcquireMagInputLock.c)
 *     MagInputTransform @ 0x1C01D3940 (MagInputTransform.c)
 *     MagnificationTransformPoint @ 0x1C01D3A14 (MagnificationTransformPoint.c)
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
