/*
 * XREFs of GetDisplayAffinity @ 0x1C0211734
 * Callers:
 *     NtUserGetWindowDisplayAffinity @ 0x1C01DB110 (NtUserGetWindowDisplayAffinity.c)
 *     SetDisplayAffinity @ 0x1C0211780 (SetDisplayAffinity.c)
 * Callees:
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 *     _IsTopLevelWindow @ 0x1C00626F0 (_IsTopLevelWindow.c)
 */

__int64 __fastcall GetDisplayAffinity(__int64 a1, _DWORD *a2)
{
  unsigned int v3; // r10d
  __int64 v4; // r11

  *a2 = 0;
  if ( (unsigned int)IsTopLevelWindow(a1) && (*(_BYTE *)(v4 + 66) & 8) != 0 )
    *a2 = GetProp(v4, atomDispAffinity, 1);
  return v3;
}
