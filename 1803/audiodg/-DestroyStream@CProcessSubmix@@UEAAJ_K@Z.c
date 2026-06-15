/*
 * XREFs of ?DestroyStream@CProcessSubmix@@UEAAJ_K@Z @ 0x1400026A0
 * Callers:
 *     ?DestroyStream@CProcessSubmix@@WBA@EAAJ_K@Z @ 0x14001E2D0 (-DestroyStream@CProcessSubmix@@WBA@EAAJ_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcessSubmix::DestroyStream(CProcessSubmix *this, unsigned __int64 a2)
{
  return CSubmixImpl::DestroyStream((CProcessSubmix *)((char *)this + 16), a2);
}
