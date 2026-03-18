/*
 * XREFs of ?ClearWeakReference@CComposition@@QEAAXPEAVCResource@@@Z @ 0x18005B660
 * Callers:
 *     ??1CResource@@MEAA@XZ @ 0x180034F1C (--1CResource@@MEAA@XZ.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180089A30 (--1CVisual@@MEAA@XZ.c)
 * Callees:
 *     ?NotifyListeners@CWeakReferenceBase@@AEAAXXZ @ 0x1800C1DA4 (-NotifyListeners@CWeakReferenceBase@@AEAAXXZ.c)
 */

void __fastcall CComposition::ClearWeakReference(struct _RTL_GENERIC_TABLE *this, struct CResource *a2)
{
  struct _RTL_GENERIC_TABLE *v2; // rbx
  __int64 *v3; // rax
  __int64 v4; // rdi
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[0] = 0LL;
  v2 = this + 16;
  v5[1] = a2;
  v3 = (__int64 *)RtlLookupElementGenericTable(this + 16, v5);
  v4 = *v3;
  RtlDeleteElementGenericTable(v2, v3);
  *(_QWORD *)v4 = 0LL;
  *(_QWORD *)(v4 + 8) = 0LL;
  *(_QWORD *)(v4 + 48) = 0LL;
  ++*(_DWORD *)(v4 + 56);
  CWeakReferenceBase::NotifyListeners((CWeakReferenceBase *)v4);
  CWeakReferenceBase::Release((CWeakReferenceBase *)v4);
}
