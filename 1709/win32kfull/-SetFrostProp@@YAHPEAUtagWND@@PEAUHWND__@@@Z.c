/*
 * XREFs of ?SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C01D7298
 * Callers:
 *     xxxRegisterSiblingFrostWindow @ 0x1C01D7730 (xxxRegisterSiblingFrostWindow.c)
 * Callees:
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     InternalSetProp @ 0x1C009B790 (InternalSetProp.c)
 */

__int64 __fastcall SetFrostProp(struct tagWND *a1, __int64 a2)
{
  unsigned int v4; // edi
  unsigned int v5; // r11d

  v4 = *(unsigned __int16 *)(gpsi + 1362LL);
  if ( !GetProp((__int64)a1, *(_WORD *)(gpsi + 1362LL), 1) )
    return (unsigned int)InternalSetProp((__int64)a1, v4, a2, (unsigned __int16)v5 + 5);
  return v5;
}
