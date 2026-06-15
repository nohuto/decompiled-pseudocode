/*
 * XREFs of ?IsInActiveVoipCall@CProcess@@UEAA_NXZ @ 0x180018A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcess::IsInActiveVoipCall(CProcess *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 33) + 24LL))(*((_QWORD *)this + 33));
}
