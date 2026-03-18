/*
 * XREFs of ??_GCWeakReferenceBase@@QEAAPEAXI@Z @ 0x180034AA0
 * Callers:
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x180034994 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     ?Release@CWeakReferenceBase@@QEAAKXZ @ 0x180034B54 (-Release@CWeakReferenceBase@@QEAAKXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

CWeakReferenceBase *__fastcall CWeakReferenceBase::`scalar deleting destructor'(CWeakReferenceBase *this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 16);
  operator delete(this);
  return this;
}
