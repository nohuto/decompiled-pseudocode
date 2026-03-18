/*
 * XREFs of _SetClipboardData @ 0x1C00C5CC8
 * Callers:
 *     NtUserSetClipboardData @ 0x1C00C5C00 (NtUserSetClipboardData.c)
 *     xxxSnapWindow @ 0x1C013F298 (xxxSnapWindow.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     InternalSetClipboardData @ 0x1C00C5D58 (InternalSetClipboardData.c)
 *     CheckClipboardAccess @ 0x1C00C6624 (CheckClipboardAccess.c)
 */

__int64 __fastcall SetClipboardData(int a1, __int64 a2, int a3, int a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned int v10; // esi

  v8 = CheckClipboardAccess();
  if ( !v8 )
    return 0LL;
  if ( (unsigned __int64)(a2 - 1) <= 3 )
  {
    UserSetLastError(87LL, v9);
    return 0LL;
  }
  v10 = InternalSetClipboardData(v8, a1, a2, a3, a4);
  if ( v10 )
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
  return v10;
}
