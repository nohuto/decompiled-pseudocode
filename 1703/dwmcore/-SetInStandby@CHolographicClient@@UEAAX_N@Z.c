/*
 * XREFs of ?SetInStandby@CHolographicClient@@UEAAX_N@Z @ 0x1800CCBF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHolographicClient::SetInStandby(CHolographicClient *this, char a2)
{
  *((_BYTE *)this + 128) = a2;
}
