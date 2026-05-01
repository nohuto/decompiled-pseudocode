/*
 * XREFs of ?AddObject@CImmersiveAppArray@@UEAAJPEAUIUnknown@@@Z @ 0x180080A90
 * Callers:
 *     ?GetImmersiveApplicationArraySafe@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@Z @ 0x1800432E0 (-GetImmersiveApplicationArraySafe@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@.c)
 *     ?GetImmersiveApplicationArray@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@Z @ 0x180044B40 (-GetImmersiveApplicationArray@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveAppArray::AddObject(CImmersiveAppArray *this, struct IUnknown *a2)
{
  CEnumerableObjectCollection *v2; // rcx
  __int64 (__fastcall *v3)(CEnumerableObjectCollection *__hidden, struct IUnknown *); // rax

  v2 = (CEnumerableObjectCollection *)*((_QWORD *)this + 3);
  v3 = *(__int64 (__fastcall **)(CEnumerableObjectCollection *__hidden, struct IUnknown *))(*(_QWORD *)v2 + 40LL);
  if ( v3 == CEnumerableObjectCollection::AddObject )
    return CEnumerableObjectCollection::AddObject(v2, a2);
  else
    return v3(v2, a2);
}
