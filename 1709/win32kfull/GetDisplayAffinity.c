/*
 * XREFs of GetDisplayAffinity @ 0x1C0212C48
 * Callers:
 *     NtUserGetWindowDisplayAffinity @ 0x1C01E7360 (NtUserGetWindowDisplayAffinity.c)
 *     SetDisplayAffinity @ 0x1C0212C94 (SetDisplayAffinity.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C0065520 (_IsTopLevelWindow.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 */

__int64 __fastcall GetDisplayAffinity(__int64 a1, _DWORD *a2)
{
  __int64 v3; // r9
  unsigned int v4; // r11d

  *a2 = 0;
  if ( (unsigned int)IsTopLevelWindow(a1) && (*(_BYTE *)(v3 + 66) & 8) != 0 )
    *a2 = GetProp(v3, atomDispAffinity, 1);
  return v4;
}
