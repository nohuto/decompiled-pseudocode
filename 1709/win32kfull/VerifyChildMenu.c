/*
 * XREFs of VerifyChildMenu @ 0x1C01443E0
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0008910 (xxxSetModernAppWindow.c)
 *     xxxSetWindowStyle @ 0x1C00A55A0 (xxxSetWindowStyle.c)
 * Callees:
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     UnlockWndMenu @ 0x1C011598C (UnlockWndMenu.c)
 */

char __fastcall VerifyChildMenu(__int64 a1, int a2)
{
  char result; // al

  result = *(_BYTE *)(a1 + 71) & 0xC0;
  if ( a2 )
  {
    if ( result != 64 )
      *(_QWORD *)(a1 + 208) = 0LL;
  }
  else if ( result == 64 )
  {
    SetOrClrWF(0, (_DWORD *)a1, 1u, 0);
    return UnlockWndMenu(a1, (_QWORD *)(a1 + 208));
  }
  return result;
}
