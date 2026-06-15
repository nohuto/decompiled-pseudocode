/*
 * XREFs of ?IsInActiveVoipCall@CApplication@@UEAA_NXZ @ 0x180018BA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CApplication::IsInActiveVoipCall(CApplication *this)
{
  return (*((_DWORD *)this + 42) & 0x10) != 0;
}
