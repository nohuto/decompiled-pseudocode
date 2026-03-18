/*
 * XREFs of ??_GCTransformingGeometrySink@@UEAAPEAXI@Z @ 0x18020AA50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 */

CTransformingGeometrySink *__fastcall CTransformingGeometrySink::`scalar deleting destructor'(
        CTransformingGeometrySink *this,
        char a2)
{
  *(_QWORD *)this = &CMILCOMBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
