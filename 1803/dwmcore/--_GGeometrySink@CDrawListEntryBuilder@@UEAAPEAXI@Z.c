/*
 * XREFs of ??_GGeometrySink@CDrawListEntryBuilder@@UEAAPEAXI@Z @ 0x18017A690
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 */

CDrawListEntryBuilder::GeometrySink *__fastcall CDrawListEntryBuilder::GeometrySink::`scalar deleting destructor'(
        CDrawListEntryBuilder::GeometrySink *this,
        char a2)
{
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 136);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 40);
  *(_QWORD *)this = &CMILCOMBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
