/*
 * XREFs of ?SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C01D2FF0
 * Callers:
 *     xxxRegisterSiblingFrostWindow @ 0x1C01D3460 (xxxRegisterSiblingFrostWindow.c)
 * Callees:
 *     InternalSetProp @ 0x1C0043520 (InternalSetProp.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 */

__int64 __fastcall SetFrostProp(struct tagWND *a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned int v4; // r10d
  __int64 v5; // r11

  if ( !GetProp((__int64)a1, *(_WORD *)(gpsi + 1362LL), 1) )
    return (unsigned int)InternalSetProp(v5, v3, a2, (unsigned __int16)v4 + 5);
  return v4;
}
