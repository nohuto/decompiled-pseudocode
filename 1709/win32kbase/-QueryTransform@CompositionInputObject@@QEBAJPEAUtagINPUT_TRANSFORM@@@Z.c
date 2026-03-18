/*
 * XREFs of ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C0021768
 * Callers:
 *     NtQueryCompositionInputQueueAndTransform @ 0x1C0021470 (NtQueryCompositionInputQueueAndTransform.c)
 * Callees:
 *     ?LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z @ 0x1C0021700 (-LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C0038F40 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 */

__int64 __fastcall CompositionInputObject::QueryTransform(CompositionInputObject *this, struct tagINPUT_TRANSFORM *a2)
{
  int v3; // ebx
  CInputSink *v4; // rcx
  CInputSink *v6; // [rsp+40h] [rbp+18h] BYREF

  v3 = CompositionInputObject::LockForRead((char *)this, &v6);
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
