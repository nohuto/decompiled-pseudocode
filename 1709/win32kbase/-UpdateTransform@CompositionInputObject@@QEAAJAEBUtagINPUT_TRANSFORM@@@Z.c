/*
 * XREFs of ?UpdateTransform@CompositionInputObject@@QEAAJAEBUtagINPUT_TRANSFORM@@@Z @ 0x1C0003430
 * Callers:
 *     NtUpdateInputSinkTransforms @ 0x1C0002F30 (NtUpdateInputSinkTransforms.c)
 * Callees:
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C0021950 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C0038F40 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 */

__int64 __fastcall CompositionInputObject::UpdateTransform(
        CompositionInputObject *this,
        const struct tagINPUT_TRANSFORM *a2)
{
  int v3; // ebx
  CInputSink *v4; // rcx
  CInputSink *v6; // [rsp+40h] [rbp+18h] BYREF

  v3 = CompositionSurfaceObject::LockForWrite(this, &v6);
  if ( v3 >= 0 )
  {
    v4 = v6;
    *((_OWORD *)v6 + 6) = *(_OWORD *)a2;
    *((_OWORD *)v4 + 7) = *((_OWORD *)a2 + 1);
    *((_OWORD *)v4 + 8) = *((_OWORD *)a2 + 2);
    *((_OWORD *)v4 + 9) = *((_OWORD *)a2 + 3);
    CInputSink::UnlockAndRelease(v4);
  }
  return (unsigned int)v3;
}
