/*
 * XREFs of ?ClearWeakReference@CComposition@@QEAAXPEAVCResource@@@Z @ 0x180034930
 * Callers:
 *     ??1CResource@@MEAA@XZ @ 0x180051198 (--1CResource@@MEAA@XZ.c)
 * Callees:
 *     ?NotifyListeners@CWeakReferenceBase@@AEAAXXZ @ 0x180034BB0 (-NotifyListeners@CWeakReferenceBase@@AEAAXXZ.c)
 */

void __fastcall CComposition::ClearWeakReference(CComposition *this, struct CResource *a2)
{
  struct _RTL_GENERIC_TABLE *v2; // rbx
  __int64 *v3; // rax
  __int64 v4; // rdi
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[0] = 0LL;
  v2 = (struct _RTL_GENERIC_TABLE *)((char *)this + 1112);
  v5[1] = a2;
  v3 = (__int64 *)RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 1112), v5);
  v4 = *v3;
  RtlDeleteElementGenericTable(v2, v3);
  *(_QWORD *)v4 = 0LL;
  *(_QWORD *)(v4 + 8) = 0LL;
  *(_QWORD *)(v4 + 48) = 0LL;
  ++*(_DWORD *)(v4 + 56);
  CWeakReferenceBase::NotifyListeners((CWeakReferenceBase *)v4);
  CWeakReferenceBase::Release((CWeakReferenceBase *)v4);
}
