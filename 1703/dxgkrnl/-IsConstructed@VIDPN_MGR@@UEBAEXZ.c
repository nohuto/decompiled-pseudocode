/*
 * XREFs of ?IsConstructed@VIDPN_MGR@@UEBAEXZ @ 0x1C0010C00
 * Callers:
 *     ?IsConstructed@VIDPN_MGR@@WCA@EBAEXZ @ 0x1C0015920 (-IsConstructed@VIDPN_MGR@@WCA@EBAEXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall VIDPN_MGR::IsConstructed(VIDPN_MGR *this)
{
  return *((_DWORD *)this + 12) == 2;
}
