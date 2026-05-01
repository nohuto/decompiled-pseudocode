/*
 * XREFs of ?GetCount@CImmersiveAppArray@@UEAAJPEAI@Z @ 0x180080DF0
 * Callers:
 *     ?GetAllApplicationsByHostId@CImmersiveAppArray@@UEAAJ_KPEAPEAUIObjectArray@@@Z @ 0x180080B40 (-GetAllApplicationsByHostId@CImmersiveAppArray@@UEAAJ_KPEAPEAUIObjectArray@@@Z.c)
 *     ?GetCount@CImmersiveAppArray@@W7EAAJPEAI@Z @ 0x1800A2F60 (-GetCount@CImmersiveAppArray@@W7EAAJPEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveAppArray::GetCount(CImmersiveAppArray *this, unsigned int *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 3) + 24LL))(*((_QWORD *)this + 3), a2);
}
