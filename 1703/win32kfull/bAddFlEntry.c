/*
 * XREFs of bAddFlEntry @ 0x1C002BB04
 * Callers:
 *     BuildAndLoadLinkedFontRoutine @ 0x1C002B6E0 (BuildAndLoadLinkedFontRoutine.c)
 *     GreEudcLoadLinkW @ 0x1C0277328 (GreEudcLoadLinkW.c)
 * Callees:
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C002A42C (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     ?FindLinkedFontEntry@@YAPEAU_PFEDATA@@PEAU_LIST_ENTRY@@PEBG1@Z @ 0x1C002A8CC (-FindLinkedFontEntry@@YAPEAU_PFEDATA@@PEAU_LIST_ENTRY@@PEBG1@Z.c)
 *     ?FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z @ 0x1C002B64C (-FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z.c)
 *     ?ParseFontLinkEntry@@YA_NPEAGPEAUFontLinkData@@@Z @ 0x1C002B7A4 (-ParseFontLinkEntry@@YA_NPEAGPEAUFontLinkData@@@Z.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C002B8C0 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ??1MALLOCOBJ@@QEAA@XZ @ 0x1C002CAD0 (--1MALLOCOBJ@@QEAA@XZ.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C002CAF8 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C002DCAC (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z @ 0x1C005C0F4 (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z.c)
 */

__int64 __fastcall bAddFlEntry(const unsigned __int16 *a1, const unsigned __int16 *a2, int a3, int a4, __int64 *a5)
{
  wchar_t *v6; // rbx
  unsigned int v7; // edi
  int v8; // r15d
  __int64 v9; // r14
  __int64 v10; // rsi
  struct _FLENTRY *BaseFontEntry; // rax
  struct _LIST_ENTRY *v12; // rcx
  unsigned int v13; // r13d
  __int64 v14; // rax
  __int64 v15; // r12
  struct _FONTHASH **v16; // rcx
  __int64 v17; // rax
  __int64 *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 *v21; // rax
  __int64 i; // rdx
  wchar_t *v23; // rax
  __int64 v24; // rcx
  bool v25; // zf
  __int64 *v26; // r14
  __int64 *v27; // rax
  __int64 v28; // rax
  unsigned int v30; // [rsp+38h] [rbp-41h] BYREF
  wchar_t *Str1; // [rsp+40h] [rbp-39h] BYREF
  struct _FONTHASH **v32; // [rsp+48h] [rbp-31h] BYREF
  struct PFF *v33; // [rsp+50h] [rbp-29h] BYREF
  _QWORD v34[2]; // [rsp+58h] [rbp-21h] BYREF
  _QWORD v35[2]; // [rsp+68h] [rbp-11h] BYREF
  wchar_t *v36; // [rsp+78h] [rbp-1h] BYREF
  wchar_t *v37; // [rsp+80h] [rbp+7h]
  int v38; // [rsp+88h] [rbp+Fh]
  int v39; // [rsp+8Ch] [rbp+13h]

  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Str1, 0x450u);
  v6 = Str1;
  v7 = 0;
  if ( !Str1 )
    goto LABEL_44;
  v8 = 1;
  gbAnyLinkedFonts = 1;
  v9 = 0LL;
  v10 = 0LL;
  if ( a5 )
    *a5 = 0LL;
  if ( (int)StringCchCopyW(v6 + 260, 0x124uLL, a2) < 0
    || !ParseFontLinkEntry(v6 + 260, (struct FontLinkData *)&v36)
    || !(unsigned int)bAppendSysDirectory(v6, v6 + 260)
    || !_wcsicmp(v6, &Dst) )
  {
LABEL_44:
    v8 = 0;
LABEL_45:
    v7 = v8;
    goto LABEL_46;
  }
  if ( off_1C03247F0 != (_UNKNOWN *)&off_1C03247F0 )
  {
    BaseFontEntry = FindBaseFontEntry(a1);
    v9 = (__int64)BaseFontEntry;
    if ( BaseFontEntry )
    {
      v12 = (struct _LIST_ENTRY *)((char *)BaseFontEntry + 16);
      if ( v12->Flink != v12 )
      {
        if ( FindLinkedFontEntry(v12, v6, v37) )
          goto LABEL_45;
      }
    }
  }
  v32 = gpPFTPublic;
  v35[0] = v34;
  v35[1] = v37;
  v13 = a3 != 0 ? 8 : 10;
  if ( v37 && !_wcsicmp(v37, L"Segoe UI Symbol") )
    v13 |= 0x4000u;
  if ( v9 )
  {
    v15 = 0LL;
  }
  else
  {
    v14 = PALLOCMEM2(0x70uLL);
    v9 = v14;
    v15 = v14;
    if ( !v14 )
      goto LABEL_46;
    if ( (int)StringCchCopyW((unsigned __int16 *)(v14 + 32), 0x21uLL, a1) < 0 )
      goto LABEL_18;
  }
  v17 = PALLOCMEM2(0x30uLL);
  v10 = v17;
  if ( !v17 )
    goto LABEL_19;
  *(_DWORD *)(v17 + 24) = v38;
  *(_DWORD *)(v17 + 28) = v39;
  if ( !(unsigned int)PUBLIC_PFTOBJ::bLoadAFont((PUBLIC_PFTOBJ *)&v32, v6, &v30, v13, &v33, (struct _EUDCLOAD *)v35) )
    goto LABEL_19;
  if ( v34[0] )
  {
    v18 = v34;
    v19 = 2LL;
    do
    {
      v20 = *v18++;
      *(_DWORD *)(v20 + 12) |= 0x200u;
      --v19;
    }
    while ( v19 );
    if ( v15 )
    {
      *(_QWORD *)(v9 + 100) = 0LL;
      *(_QWORD *)(v9 + 24) = v9 + 16;
      *(_QWORD *)(v9 + 16) = v9 + 16;
      v21 = (__int64 *)off_1C03247F8;
      if ( *off_1C03247F8 != (_UNKNOWN *)&off_1C03247F0 )
        __fastfail(3u);
      ++dword_1C032C958;
      *(_QWORD *)(v9 + 8) = off_1C03247F8;
      *(_QWORD *)v9 = &off_1C03247F0;
      *v21 = v9;
      off_1C03247F8 = (_UNKNOWN **)v9;
      if ( a5 )
        *a5 = v9;
      ++dword_1C032C95C;
    }
    for ( i = 0LL; i < 2; ++i )
    {
      v23 = (wchar_t *)v34[i];
      v24 = v10 - (_QWORD)v34 + 8 * i;
      *(wchar_t **)((char *)&v36 + v24) = v23;
    }
    v25 = v37 == 0LL;
    *(_DWORD *)(v10 + 16) = a3;
    *(_DWORD *)(v10 + 20) = !v25;
    ++*(_DWORD *)(v9 + 100);
    ++*(_DWORD *)(v9 + 104);
    v26 = (__int64 *)(v9 + 16);
    if ( a4 >= 0 )
    {
      v28 = *v26;
      if ( *(__int64 **)(*v26 + 8) != v26 )
        __fastfail(3u);
      *(_QWORD *)v10 = v28;
      *(_QWORD *)(v10 + 8) = v26;
      *(_QWORD *)(v28 + 8) = v10;
      *v26 = v10;
    }
    else
    {
      v27 = (__int64 *)v26[1];
      if ( (__int64 *)*v27 != v26 )
        __fastfail(3u);
      *(_QWORD *)v10 = v26;
      *(_QWORD *)(v10 + 8) = v27;
      *v27 = v10;
      v26[1] = v10;
    }
    goto LABEL_45;
  }
LABEL_18:
  PFTOBJ::bUnloadEUDCFont(v16, v6);
LABEL_19:
  if ( v15 )
    Win32FreePool(v15);
  if ( v10 )
    Win32FreePool(v10);
LABEL_46:
  MALLOCOBJ::~MALLOCOBJ((MALLOCOBJ *)&Str1);
  return v7;
}
