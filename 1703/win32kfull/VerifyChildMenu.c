/*
 * XREFs of VerifyChildMenu @ 0x1C013E26C
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0004A10 (xxxSetModernAppWindow.c)
 *     xxxSetWindowStyle @ 0x1C0050000 (xxxSetWindowStyle.c)
 * Callees:
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     UnlockWndMenu @ 0x1C010B5A8 (UnlockWndMenu.c)
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
