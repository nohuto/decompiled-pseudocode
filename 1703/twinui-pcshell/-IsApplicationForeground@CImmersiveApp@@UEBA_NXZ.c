/*
 * XREFs of ?IsApplicationForeground@CImmersiveApp@@UEBA_NXZ @ 0x180055AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApp::IsApplicationForeground(CImmersiveApp *this)
{
  return (*((_DWORD *)this + 102) >> 1) & 1;
}
