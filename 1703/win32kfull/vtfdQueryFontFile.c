/*
 * XREFs of vtfdQueryFontFile @ 0x1C0238600
 * Callers:
 *     vtfdQueryFontFileTE @ 0x1C0236D70 (vtfdQueryFontFileTE.c)
 * Callees:
 *     EngMapFontFileFDInternal @ 0x1C0027BDC (EngMapFontFileFDInternal.c)
 *     EngUnmapFontFileFD @ 0x1C00FCCB0 (EngUnmapFontFileFD.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     StringCchLengthA @ 0x1C0233DD4 (StringCchLengthA.c)
 *     bDescStr @ 0x1C0234448 (bDescStr.c)
 *     StringCchLengthW @ 0x1C0237BC4 (StringCchLengthW.c)
 *     bReconnectVtfdFont @ 0x1C0238064 (bReconnectVtfdFont.c)
 */

__int64 __fastcall vtfdQueryFontFile(__int64 a1, size_t a2, unsigned int a3, WCHAR *a4)
{
  int v6; // edi
  int v9; // edi
  unsigned int v10; // eax
  size_t v11; // rcx
  unsigned int v12; // edi
  __int64 v13; // rax
  const void *v14; // r11
  unsigned int v15; // ebx
  size_t v16; // [rsp+30h] [rbp-D0h] BYREF
  size_t pcchLength; // [rsp+38h] [rbp-C8h] BYREF
  char psz[256]; // [rsp+40h] [rbp-C0h] BYREF

  v6 = a2;
  if ( (*(_DWORD *)(a1 + 28) & 1) != 0 && !(unsigned int)bReconnectVtfdFont(a1) )
    return 0xFFFFFFFFLL;
  v9 = v6 - 1;
  if ( v9 )
  {
    if ( v9 == 1 )
      return *(unsigned int *)(a1 + 36);
    return 0xFFFFFFFFLL;
  }
  if ( *(_DWORD *)a1 == 2 )
  {
    if ( *(_DWORD *)(a1 + 32) )
    {
      v11 = *(_QWORD *)(a1 + 16);
      v10 = *(_DWORD *)(a1 + 24);
    }
    else
    {
      if ( !(unsigned int)EngMapFontFileFDInternal(*(struct _FILEVIEW **)(a1 + 8), &pcchLength, &v16, 1) )
        return 0xFFFFFFFFLL;
      v10 = v16;
      v11 = pcchLength;
    }
    v12 = -1;
    if ( (unsigned int)bDescStr(v11, v10, psz) )
    {
      if ( StringCchLengthA(psz, 0x100uLL, &pcchLength) < 0 )
        return 0xFFFFFFFFLL;
      v12 = 2 * pcchLength + 2;
      if ( a4 )
      {
        if ( a3 < v12 )
          return 0xFFFFFFFFLL;
        EngMultiByteToUnicodeN(a4, 2 * (v12 >> 1), 0LL, psz, v12 >> 1);
        a4[((unsigned __int64)v12 >> 1) - 1] = 0;
      }
    }
    if ( !*(_DWORD *)(a1 + 32) )
      EngUnmapFontFileFD(*(_QWORD *)(a1 + 8));
    return v12;
  }
  else
  {
    v13 = *(_QWORD *)(a1 + 80);
    v16 = 0LL;
    StringCchLengthW((STRSAFE_PCNZWCH)(v13 + *(int *)(v13 + 16)), a2, &v16);
    v15 = 2 * v16 + 2;
    if ( a4 )
    {
      if ( a3 < v15 )
        return 0xFFFFFFFFLL;
      memmove(a4, v14, v15);
    }
    return v15;
  }
}
