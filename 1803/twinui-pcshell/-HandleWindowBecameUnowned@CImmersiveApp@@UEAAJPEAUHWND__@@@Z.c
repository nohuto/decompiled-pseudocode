/*
 * XREFs of ?HandleWindowBecameUnowned@CImmersiveApp@@UEAAJPEAUHWND__@@@Z @ 0x18012ED80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApp::HandleWindowBecameUnowned(CImmersiveApp *this, HWND a2)
{
  return CImmersiveApp::CImmersiveWindowCollection::AddOrphanedWindow((CImmersiveApp *)((char *)this + 152), a2);
}
