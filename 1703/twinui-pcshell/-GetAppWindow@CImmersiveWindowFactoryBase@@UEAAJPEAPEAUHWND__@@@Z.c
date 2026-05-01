/*
 * XREFs of ?GetAppWindow@CImmersiveWindowFactoryBase@@UEAAJPEAPEAUHWND__@@@Z @ 0x180191B50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveWindowFactoryBase::GetAppWindow(CImmersiveWindowFactoryBase *this, HWND *a2)
{
  *a2 = (HWND)*((_QWORD *)this + 2);
  return 0LL;
}
