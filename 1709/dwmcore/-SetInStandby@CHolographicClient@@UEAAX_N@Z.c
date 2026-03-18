/*
 * XREFs of ?SetInStandby@CHolographicClient@@UEAAX_N@Z @ 0x1800C1B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHolographicClient::SetInStandby(CHolographicClient *this, char a2)
{
  *((_BYTE *)this + 128) = a2;
}
