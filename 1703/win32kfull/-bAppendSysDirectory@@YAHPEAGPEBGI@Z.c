/*
 * XREFs of ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C002B8C0
 * Callers:
 *     bAddAllFlEntry @ 0x1C0009970 (bAddAllFlEntry.c)
 *     bAddFlEntry @ 0x1C002BB04 (bAddFlEntry.c)
 *     vInitFontsDirectoryNameInformation @ 0x1C0119660 (vInitFontsDirectoryNameInformation.c)
 *     FontAssocDefaultRoutine @ 0x1C0277180 (FontAssocDefaultRoutine.c)
 *     GreEudcLoadLinkW @ 0x1C0277328 (GreEudcLoadLinkW.c)
 *     bDeleteFlEntry @ 0x1C0277AC4 (bDeleteFlEntry.c)
 * Callees:
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1C002BA68 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C002CAF8 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     cCapString @ 0x1C002CDA8 (cCapString.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C002DCAC (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

__int64 __fastcall bAppendSysDirectory(unsigned __int16 *a1, const unsigned __int16 *a2)
{
  unsigned __int16 *v4; // rbx
  __int64 v5; // rbp
  unsigned int v6; // esi
  int v7; // r9d
  char *v8; // r8
  __int64 v9; // rdx
  unsigned __int16 *v10; // rax
  __int64 v11; // rcx
  const unsigned __int16 *NtSystemRoot; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int16 *v15; // rax
  int v16; // r10d
  char *v17; // rax
  unsigned __int64 v18; // rdx
  signed __int64 v19; // r9
  __int16 v20; // r8
  wchar_t *v22; // rax
  _WORD *v23; // rdx
  __int64 v24; // r8
  unsigned __int64 v26; // rdx
  int v27; // edi
  unsigned __int16 *v28; // rcx
  unsigned __int16 v29; // ax
  unsigned __int16 *v30; // [rsp+58h] [rbp+20h] BYREF

  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v30, 0x208u);
  v4 = v30;
  if ( !v30 )
    goto LABEL_26;
  v5 = 260LL;
  if ( wcschr(a2, 0x5Cu) )
  {
    cCapString(a1, a2, 260LL);
    v22 = wcsstr(a1, L"%SYSTEMROOT%");
    if ( v22 )
    {
      *v22 = 92;
      v23 = v22 + 12;
      v24 = -1LL;
      while ( v23[++v24] != 0 )
        ;
      memmove(v22 + 11, v23, 2 * v24 + 2);
      goto LABEL_22;
    }
    if ( a1[1] != 58 || a1[2] != 92 )
      goto LABEL_22;
    if ( (int)StringCchCopyW(v4, 0x104uLL, a1) >= 0 )
    {
      v6 = 0;
      v27 = 0;
      v28 = a1;
      while ( v5 != -2147483386 )
      {
        v29 = *(unsigned __int16 *)((char *)v28 + (char *)L"\\??\\" - (char *)a1);
        if ( !v29 )
          break;
        *v28++ = v29;
        if ( !--v5 )
        {
          --v28;
          v27 = -2147024774;
          break;
        }
      }
      *v28 = 0;
      if ( v27 >= 0 && (int)StringCchCatW(a1, v26, v4) >= 0 )
        goto LABEL_22;
      goto LABEL_23;
    }
LABEL_26:
    v6 = 0;
    goto LABEL_23;
  }
  v6 = 0;
  v7 = 0;
  v8 = (char *)((char *)L"\\??\\" - (char *)v4);
  v9 = 260LL;
  v10 = v4;
  while ( 1 )
  {
    v11 = v9 + 2147483386;
    if ( v9 == -2147483386 )
      break;
    v11 = *(unsigned __int16 *)((char *)v10 + (_QWORD)v8);
    if ( !(_WORD)v11 )
      break;
    *v10++ = v11;
    if ( !--v9 )
    {
      --v10;
      v7 = -2147024774;
      break;
    }
  }
  *v10 = 0;
  if ( v7 >= 0 )
  {
    NtSystemRoot = (const unsigned __int16 *)RtlGetNtSystemRoot(v11, v9, v8);
    if ( (int)StringCchCatW(v4, v13, NtSystemRoot) >= 0 )
    {
      v14 = 260LL;
      v15 = v4;
      while ( *v15 )
      {
        ++v15;
        if ( !--v14 )
          goto LABEL_23;
      }
      v16 = 0;
      v17 = (char *)&v4[260 - v14];
      v18 = 2147483646LL;
      v19 = (char *)L"\\fonts\\" - v17;
      while ( v18 )
      {
        v20 = *(_WORD *)&v17[v19];
        if ( !v20 )
          break;
        *(_WORD *)v17 = v20;
        --v18;
        v17 += 2;
        if ( !--v14 )
        {
          v17 -= 2;
          v16 = -2147024774;
          break;
        }
      }
      *(_WORD *)v17 = 0;
      if ( v16 >= 0 && (int)StringCchCatW(v4, v18, a2) >= 0 )
      {
        cCapString(a1, v4, 260LL);
LABEL_22:
        v6 = 1;
      }
    }
  }
LABEL_23:
  if ( v4 )
    Win32FreePool(v4);
  return v6;
}
