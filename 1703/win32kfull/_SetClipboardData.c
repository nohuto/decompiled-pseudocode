/*
 * XREFs of _SetClipboardData @ 0x1C00AEFE8
 * Callers:
 *     NtUserSetClipboardData @ 0x1C00AEF20 (NtUserSetClipboardData.c)
 *     xxxSnapWindow @ 0x1C0138DA0 (xxxSnapWindow.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     InternalSetClipboardData @ 0x1C00AF078 (InternalSetClipboardData.c)
 *     CheckClipboardAccess @ 0x1C00AF8CC (CheckClipboardAccess.c)
 */

__int64 __fastcall SetClipboardData(int a1, __int64 a2, int a3, int a4)
{
  __int64 v8; // rax
  unsigned int v9; // esi

  v8 = CheckClipboardAccess();
  if ( !v8 )
    return 0LL;
  if ( (unsigned __int64)(a2 - 1) <= 3 )
  {
    UserSetLastError(87LL);
    return 0LL;
  }
  v9 = InternalSetClipboardData(v8, a1, a2, a3, a4);
  if ( v9 )
  {
    if ( a1 == 2 )
    {
      GreSetBitmapOwner(a2, 0LL);
    }
    else if ( a1 == 9 )
    {
      GreSetPaletteOwner(a2, 0LL);
    }
  }
  return v9;
}
