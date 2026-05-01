/*
 * XREFs of ?GetAt@CImmersiveAppArray@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x180080DC0
 * Callers:
 *     ?GetAllApplicationsByHostId@CImmersiveAppArray@@UEAAJ_KPEAPEAUIObjectArray@@@Z @ 0x180080B40 (-GetAllApplicationsByHostId@CImmersiveAppArray@@UEAAJ_KPEAPEAUIObjectArray@@@Z.c)
 *     ?GetAt@CImmersiveAppArray@@W7EAAJIAEBU_GUID@@PEAPEAX@Z @ 0x1800A2F50 (-GetAt@CImmersiveAppArray@@W7EAAJIAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveAppArray::GetAt(CImmersiveAppArray *this, __int64 a2, const struct _GUID *a3, void **a4)
{
  CEnumerableObjectCollection *v4; // rcx
  __int64 (__fastcall *v5)(CEnumerableObjectCollection *__hidden, unsigned int, const struct _GUID *, void **); // rax

  v4 = (CEnumerableObjectCollection *)*((_QWORD *)this + 3);
  v5 = *(__int64 (__fastcall **)(CEnumerableObjectCollection *__hidden, unsigned int, const struct _GUID *, void **))(*(_QWORD *)v4 + 32LL);
  if ( v5 == CEnumerableObjectCollection::GetAt )
    return CEnumerableObjectCollection::GetAt(v4, a2, a3, a4);
  else
    return v5(v4, a2, a3, a4);
}
