/*
 * XREFs of ?IsEqualByHostId@CImmersiveApp@@UEAAJ_KPEAH@Z @ 0x18004CD80
 * Callers:
 *     ?GetAllApplicationsByHostId@CImmersiveAppArray@@UEAAJ_KPEAPEAUIObjectArray@@@Z @ 0x180080B40 (-GetAllApplicationsByHostId@CImmersiveAppArray@@UEAAJ_KPEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApp::IsEqualByHostId(CImmersiveApp *this, __int64 a2, int *a3)
{
  *a3 = *((_QWORD *)this + 93) == a2;
  return 0LL;
}
