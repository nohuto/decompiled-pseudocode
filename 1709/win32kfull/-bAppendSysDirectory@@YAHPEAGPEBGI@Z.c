/*
 * XREFs of ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C00B1F70
 * Callers:
 *     bAddFlEntry @ 0x1C00B1C44 (bAddFlEntry.c)
 *     bAddAllFlEntry @ 0x1C00C16B8 (bAddAllFlEntry.c)
 *     vInitFontsDirectoryNameInformation @ 0x1C01220C0 (vInitFontsDirectoryNameInformation.c)
 *     FontAssocDefaultRoutine @ 0x1C0273B50 (FontAssocDefaultRoutine.c)
 *     GreEudcLoadLinkW @ 0x1C0273D04 (GreEudcLoadLinkW.c)
 *     bDeleteFlEntry @ 0x1C0274498 (bDeleteFlEntry.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0039D0C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1C00B2118 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     cCapString @ 0x1C00B21B4 (cCapString.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C00B2274 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

__int64 __fastcall bAppendSysDirectory(unsigned __int16 *a1, const unsigned __int16 *a2)
{
  unsigned __int64 v4; // rdx
  signed __int64 v5; // r8
  unsigned __int16 *v6; // rbx
  __int64 v7; // rbp
  unsigned int v8; // esi
  int v9; // r9d
  unsigned __int16 *v10; // rax
  unsigned __int64 v11; // rcx
  const unsigned __int16 *NtSystemRoot; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int16 *v15; // rax
  int v16; // r10d
  char *v17; // rax
  signed __int64 v18; // r9
  wchar_t *v20; // rax
  _WORD *v21; // rdx
  __int64 v22; // r8
  int v24; // edi
  unsigned __int16 *v25; // rcx
  unsigned __int16 v26; // ax
  unsigned __int16 *v27; // [rsp+58h] [rbp+20h] BYREF

  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v27, 0x208u);
  v6 = v27;
  if ( !v27 )
    goto LABEL_26;
  v7 = 260LL;
  if ( wcschr(a2, 0x5Cu) )
  {
    cCapString(a1, a2, 260LL);
    v20 = wcsstr(a1, L"%SYSTEMROOT%");
    if ( v20 )
    {
      *v20 = 92;
      v21 = v20 + 12;
      v22 = -1LL;
      while ( v21[++v22] != 0 )
        ;
      memmove(v20 + 11, v21, 2 * v22 + 2);
      goto LABEL_22;
    }
    if ( a1[1] != 58 || a1[2] != 92 )
      goto LABEL_22;
    if ( (int)StringCchCopyW((char *)v6, 260LL, (char *)a1) >= 0 )
    {
      v8 = 0;
      v24 = 0;
      v5 = (char *)L"\\??\\" - (char *)a1;
      v25 = a1;
      while ( v7 != -2147483386 )
      {
        v26 = *(unsigned __int16 *)((char *)v25 + v5);
        if ( !v26 )
          break;
        *v25++ = v26;
        if ( !--v7 )
        {
          --v25;
          v24 = -2147024774;
          break;
        }
      }
      *v25 = 0;
      if ( v24 >= 0 && (int)StringCchCatW(a1, v4, v6) >= 0 )
        goto LABEL_22;
      goto LABEL_23;
    }
LABEL_26:
    v8 = 0;
    goto LABEL_23;
  }
  v8 = 0;
  v9 = 0;
  v5 = (char *)L"\\??\\" - (char *)v6;
  v4 = 260LL;
  v10 = v6;
  while ( 1 )
  {
    v11 = v4 + 2147483386;
    if ( v4 == -2147483386LL )
      break;
    v11 = *(unsigned __int16 *)((char *)v10 + v5);
    if ( !(_WORD)v11 )
      break;
    *v10++ = v11;
    if ( !--v4 )
    {
      --v10;
      v9 = -2147024774;
      break;
    }
  }
  *v10 = 0;
  if ( v9 >= 0 )
  {
    NtSystemRoot = (const unsigned __int16 *)RtlGetNtSystemRoot(v11, v4, v5);
    if ( (int)StringCchCatW(v6, v13, NtSystemRoot) >= 0 )
    {
      v14 = 260LL;
      v15 = v6;
      while ( *v15 )
      {
        ++v15;
        if ( !--v14 )
          goto LABEL_23;
      }
      v16 = 0;
      v17 = (char *)&v6[260 - v14];
      v4 = 2147483646LL;
      v18 = (char *)L"\\fonts\\" - v17;
      while ( v4 )
      {
        v5 = *(unsigned __int16 *)&v17[v18];
        if ( !(_WORD)v5 )
          break;
        *(_WORD *)v17 = v5;
        --v4;
        v17 += 2;
        if ( !--v14 )
        {
          v17 -= 2;
          v16 = -2147024774;
          break;
        }
      }
      *(_WORD *)v17 = 0;
      if ( v16 >= 0 && (int)StringCchCatW(v6, v4, a2) >= 0 )
      {
        cCapString(a1, v6, 260LL);
LABEL_22:
        v8 = 1;
      }
    }
  }
LABEL_23:
  if ( v6 )
    Win32FreePool(v6, v4, v5);
  return v8;
}
