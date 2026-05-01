/*
 * XREFs of ?SetPreferredAspectRatioHint@CImmersiveApp@@UEAAJUtagSIZE@@@Z @ 0x1800534B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApp::SetPreferredAspectRatioHint(CImmersiveApp *this, struct tagSIZE a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct tagSIZE))(**((_QWORD **)this + 34) + 280LL))(
           *((_QWORD *)this + 34),
           a2);
}
