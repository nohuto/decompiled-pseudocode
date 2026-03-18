/*
 * XREFs of IsHelpParent @ 0x1C023C0C8
 * Callers:
 *     xxxHelpLoop @ 0x1C0218D34 (xxxHelpLoop.c)
 *     EnumPwndDlgChildProc @ 0x1C023C010 (EnumPwndDlgChildProc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsHelpParent(__int64 a1)
{
  unsigned int v1; // r8d

  v1 = 0;
  if ( !a1 )
    return 0LL;
  if ( (*(_BYTE *)(a1 + 66) & 1) != 0
    || (*(_BYTE *)(a1 + 58) & 1) != 0
    || (*(_BYTE *)(a1 + 68) & 0xF) == 7 && *(_WORD *)(gpsi + 852LL) == *(_WORD *)(*(_QWORD *)(a1 + 168) + 10LL) )
  {
    return 1;
  }
  return v1;
}
