/*
 * XREFs of _SetLayeredWindowAttributes @ 0x1C0022C08
 * Callers:
 *     ComposeWindow @ 0x1C001C75C (ComposeWindow.c)
 *     UnsetLayeredWindow @ 0x1C001D9B4 (UnsetLayeredWindow.c)
 *     NtUserSetLayeredWindowAttributes @ 0x1C00212F0 (NtUserSetLayeredWindowAttributes.c)
 * Callees:
 *     SetRedirectedWindow @ 0x1C0022830 (SetRedirectedWindow.c)
 *     UpdateSprite @ 0x1C0025A10 (UpdateSprite.c)
 *     GetRedirectionBitmap @ 0x1C0025F80 (GetRedirectionBitmap.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     GetRedirectionFlags @ 0x1C009E94C (GetRedirectionFlags.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall SetLayeredWindowAttributes(struct tagWND *a1, int a2, char a3, int a4)
{
  bool v5; // r14
  int v9; // eax
  __int64 RedirectionBitmap; // rbx
  int v11; // r11d
  __int64 result; // rax
  __int64 v13; // r8
  unsigned int v14; // esi
  unsigned int updated; // edi
  unsigned __int8 RedirectionFlags; // al
  __int64 v17; // rbx
  __int16 v18; // [rsp+60h] [rbp-9h] BYREF
  char v19; // [rsp+62h] [rbp-7h]
  char v20; // [rsp+63h] [rbp-6h]
  __int64 v21; // [rsp+68h] [rbp-1h] BYREF
  _DWORD v22[2]; // [rsp+70h] [rbp+7h] BYREF
  _QWORD v23[2]; // [rsp+78h] [rbp+Fh] BYREF

  v5 = 0;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v9 = *((_DWORD *)a1 + 76);
    if ( (v9 & 0x40) != 0 )
      *((_DWORD *)a1 + 76) = v9 & 0xFFFFFFBF;
  }
  if ( (*((_BYTE *)a1 + 66) & 8) == 0 )
  {
    UserSetLastError(87LL);
    return 3221225485LL;
  }
  RedirectionBitmap = GetRedirectionBitmap(a1);
  v11 = 1;
  if ( !RedirectionBitmap
    || (RedirectionFlags = GetRedirectionFlags(a1), (RedirectionFlags & (unsigned __int8)v11) == 0) )
  {
    result = SetRedirectedWindow(a1, v11 | a4 & 0x10u);
    if ( (int)result < 0 )
      return result;
    v5 = RedirectionBitmap == 0;
  }
  v18 = 0;
  v14 = a4 & 0xDFFFFFEF | 0x20000000;
  v20 = 0;
  v19 = a3;
  if ( RedirectionBitmap )
  {
    v21 = 0LL;
    v23[0] = 0LL;
    v23[1] = 0LL;
    v17 = GreSelectBitmap(ghdcMem, RedirectionBitmap);
    v22[0] = *((_DWORD *)a1 + 34) - *((_DWORD *)a1 + 32);
    v22[1] = *((_DWORD *)a1 + 35) - *((_DWORD *)a1 + 33);
    updated = UpdateSprite(
                *(_QWORD *)(gpDispInfo + 32LL),
                a1,
                ghdcMem,
                0LL,
                0LL,
                v22,
                ghdcMem,
                &v21,
                a2,
                &v18,
                v14,
                (unsigned __int64)v23 & -(__int64)v5);
    GreSelectBitmap(ghdcMem, v17);
  }
  else
  {
    return (unsigned int)UpdateSprite(
                           *(_QWORD *)(gpDispInfo + 32LL),
                           a1,
                           v13,
                           0LL,
                           0LL,
                           0LL,
                           0LL,
                           0LL,
                           a2,
                           &v18,
                           v14,
                           0LL);
  }
  return updated;
}
