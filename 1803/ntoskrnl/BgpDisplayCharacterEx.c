/*
 * XREFs of BgpDisplayCharacterEx @ 0x1402C60EC
 * Callers:
 *     BcpDisplayCriticalCharacter @ 0x1402C64F8 (BcpDisplayCriticalCharacter.c)
 *     BcpDisplayCriticalString @ 0x1402C65C0 (BcpDisplayCriticalString.c)
 *     BcpDisplayProgress @ 0x1402C6B94 (BcpDisplayProgress.c)
 *     BcpPrintSpaces @ 0x1402C6F4C (BcpPrintSpaces.c)
 *     BgpConsoleDisplayCharacter @ 0x14083FA30 (BgpConsoleDisplayCharacter.c)
 *     BgpConsoleDisplayCharacterEx @ 0x14083FB44 (BgpConsoleDisplayCharacterEx.c)
 *     BgpConsoleDrawCursor @ 0x14083FE98 (BgpConsoleDrawCursor.c)
 *     BgpConsoleScrollScreen @ 0x140840030 (BgpConsoleScrollScreen.c)
 * Callees:
 *     BgpTxtDisplayCharacter @ 0x1401736FC (BgpTxtDisplayCharacter.c)
 *     BgpTxtAdjustStaticRegion @ 0x1402C62F8 (BgpTxtAdjustStaticRegion.c)
 */

__int64 __fastcall BgpDisplayCharacterEx(
        unsigned __int16 a1,
        __int64 *a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        _DWORD *a7,
        _DWORD *a8,
        unsigned __int64 a9)
{
  __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  _DWORD v14[2]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15; // [rsp+48h] [rbp-20h]
  int v16; // [rsp+50h] [rbp-18h]

  if ( (dword_14039D7F0 & 1) == 0 )
    return 3221225473LL;
  v12 = a2[3];
  v14[0] = a5;
  v14[1] = a6;
  v16 = *((_DWORD *)a2 + 2);
  v13 = *a2;
  a9 = __PAIR64__(a4, a3);
  v15 = v13;
  result = BgpTxtAdjustStaticRegion(v12, &a9, v14);
  if ( (int)result >= 0 )
    return BgpTxtDisplayCharacter(a2[3], a1, 0, a7, a8);
  return result;
}
