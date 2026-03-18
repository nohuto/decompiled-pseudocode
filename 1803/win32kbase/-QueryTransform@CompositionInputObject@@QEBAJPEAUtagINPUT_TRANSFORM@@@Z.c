/*
 * XREFs of ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C0002E40
 * Callers:
 *     NtQueryCompositionInputQueueAndTransform @ 0x1C00023C0 (NtQueryCompositionInputQueueAndTransform.c)
 *     ?GetTransformFromInputSink@@YAJPEAXPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C00BB838 (-GetTransformFromInputSink@@YAJPEAXPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?HitTestDelayZonePalmRejectionRegion@CPalmRejectZoneInfo@@QEAA_NUtagPOINT@@PEAUCDelayZonePanelTelemetryData@@@Z @ 0x1C012C6E4 (-HitTestDelayZonePalmRejectionRegion@CPalmRejectZoneInfo@@QEAA_NUtagPOINT@@PEAUCDelayZonePanelTe.c)
 * Callees:
 *     ?LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z @ 0x1C0002EA0 (-LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C00034A0 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 */

__int64 __fastcall CompositionInputObject::QueryTransform(CompositionInputObject *this, struct tagINPUT_TRANSFORM *a2)
{
  int v3; // ebx
  CInputSink *v4; // rcx
  CInputSink *v6; // [rsp+40h] [rbp+18h] BYREF

  v3 = CompositionInputObject::LockForRead(this, &v6);
  if ( v3 >= 0 )
  {
    v4 = v6;
    *(_OWORD *)a2 = *((_OWORD *)v6 + 6);
    *((_OWORD *)a2 + 1) = *((_OWORD *)v4 + 7);
    *((_OWORD *)a2 + 2) = *((_OWORD *)v4 + 8);
    *((_OWORD *)a2 + 3) = *((_OWORD *)v4 + 9);
    CInputSink::UnlockAndRelease(v4);
  }
  return (unsigned int)v3;
}
