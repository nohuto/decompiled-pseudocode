/*
 * XREFs of _SetLayeredWindowAttributes @ 0x1C0090BA8
 * Callers:
 *     ComposeWindow @ 0x1C008A290 (ComposeWindow.c)
 *     UnsetLayeredWindow @ 0x1C008B638 (UnsetLayeredWindow.c)
 *     NtUserSetLayeredWindowAttributes @ 0x1C008F740 (NtUserSetLayeredWindowAttributes.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     GetRedirectionFlags @ 0x1C008DA7C (GetRedirectionFlags.c)
 *     SetRedirectedWindow @ 0x1C008FCF8 (SetRedirectedWindow.c)
 *     GetRedirectionBitmap @ 0x1C00902B0 (GetRedirectionBitmap.c)
 *     UpdateSprite @ 0x1C00923FC (UpdateSprite.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall SetLayeredWindowAttributes(struct tagWND *a1, unsigned int a2, BYTE a3, int a4)
{
  bool v5; // r14
  __int64 v9; // rdx
  int v10; // eax
  __int64 RedirectionBitmap; // rbx
  __int64 result; // rax
  unsigned int v13; // esi
  unsigned int updated; // edi
  __int64 v15; // rbx
  struct _BLENDFUNCTION v16; // [rsp+60h] [rbp-9h] BYREF
  struct tagPOINT v17; // [rsp+68h] [rbp-1h] BYREF
  struct tagSIZE v18; // [rsp+70h] [rbp+7h] BYREF
  _QWORD v19[2]; // [rsp+78h] [rbp+Fh] BYREF

  v5 = 0;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v10 = *((_DWORD *)a1 + 76);
    if ( (v10 & 0x40) != 0 )
      *((_DWORD *)a1 + 76) = v10 & 0xFFFFFFBF;
  }
  if ( (*((_BYTE *)a1 + 66) & 8) == 0 )
  {
    UserSetLastError(87LL, v9);
    return 3221225485LL;
  }
  RedirectionBitmap = GetRedirectionBitmap((__int64)a1);
  if ( !RedirectionBitmap || (GetRedirectionFlags((__int64)a1) & 1) == 0 )
  {
    result = SetRedirectedWindow(a1, a4 & 0x10 | 1u);
    if ( (int)result < 0 )
      return result;
    v5 = RedirectionBitmap == 0;
  }
  *(_WORD *)&v16.BlendOp = 0;
  v13 = a4 & 0xDFFFFFEF | 0x20000000;
  v16.AlphaFormat = 0;
  v16.SourceConstantAlpha = a3;
  if ( RedirectionBitmap )
  {
    v17 = 0LL;
    v19[0] = 0LL;
    v19[1] = 0LL;
    v15 = GreSelectBitmap(*(_QWORD *)ghdcMem, RedirectionBitmap);
    v18.cx = *((_DWORD *)a1 + 34) - *((_DWORD *)a1 + 32);
    v18.cy = *((_DWORD *)a1 + 35) - *((_DWORD *)a1 + 33);
    updated = UpdateSprite(
                *(HDEV *)(gpDispInfo + 32LL),
                a1,
                0LL,
                &v18,
                *(HDC *)ghdcMem,
                &v17,
                a2,
                &v16,
                v13,
                (struct tagRECT *)((unsigned __int64)v19 & -(__int64)v5));
    GreSelectBitmap(*(_QWORD *)ghdcMem, v15);
  }
  else
  {
    return (unsigned int)UpdateSprite(*(HDEV *)(gpDispInfo + 32LL), a1, 0LL, 0LL, 0LL, 0LL, a2, &v16, v13, 0LL);
  }
  return updated;
}
