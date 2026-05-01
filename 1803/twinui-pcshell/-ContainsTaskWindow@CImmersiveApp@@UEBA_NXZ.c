/*
 * XREFs of ?ContainsTaskWindow@CImmersiveApp@@UEBA_NXZ @ 0x18012D830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CImmersiveApp::ContainsTaskWindow(CImmersiveApp *this)
{
  return *((_QWORD *)this + 39) != 0LL;
}
