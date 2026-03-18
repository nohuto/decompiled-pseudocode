/*
 * XREFs of ?bValid@EWNDOBJ@@QEAAHXZ @ 0x1C02677DC
 * Callers:
 *     ?vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z @ 0x1C0267C2C (-vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z.c)
 *     GreDeleteWnd @ 0x1C02683A0 (GreDeleteWnd.c)
 *     GreSetClientRgn @ 0x1C0268540 (GreSetClientRgn.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C0285604 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EWNDOBJ::bValid(EWNDOBJ *this)
{
  return *((_DWORD *)this + 38) == 1145984837 && **((_DWORD **)this + 21) == 1128354388;
}
