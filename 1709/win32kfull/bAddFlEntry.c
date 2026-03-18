/*
 * XREFs of bAddFlEntry @ 0x1C00B1C44
 * Callers:
 *     BuildAndLoadLinkedFontRoutine @ 0x1C00B1B80 (BuildAndLoadLinkedFontRoutine.c)
 *     GreEudcLoadLinkW @ 0x1C0273D04 (GreEudcLoadLinkW.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0039D0C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C00405F0 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z @ 0x1C00B0248 (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C00B1F70 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ??1MALLOCOBJ@@QEAA@XZ @ 0x1C00B224C (--1MALLOCOBJ@@QEAA@XZ.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C00B2274 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     ?ParseFontLinkEntry@@YA_NPEAGPEAUFontLinkData@@@Z @ 0x1C00B2304 (-ParseFontLinkEntry@@YA_NPEAGPEAUFontLinkData@@@Z.c)
 *     ?FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z @ 0x1C00B241C (-FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z.c)
 *     ?FindLinkedFontEntry@@YAPEAU_PFEDATA@@PEAU_LIST_ENTRY@@PEBG1@Z @ 0x1C00B250C (-FindLinkedFontEntry@@YAPEAU_PFEDATA@@PEAU_LIST_ENTRY@@PEBG1@Z.c)
 */

__int64 __fastcall bAddFlEntry(unsigned __int16 *a1, char *a2, int a3, int a4, __int64 *a5)
{
  wchar_t *v6; // rbx
  unsigned int v7; // edi
  int v8; // r15d
  __int64 v9; // r14
  __int64 v10; // rsi
  unsigned int v11; // r8d
  struct _FLENTRY *BaseFontEntry; // rax
  struct _LIST_ENTRY *v13; // rcx
  unsigned int v14; // r13d
  __int64 v15; // rax
  __int64 v16; // r12
  struct _FONTHASH **v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 *v24; // rax
  __int64 i; // rcx
  bool v26; // zf
  __int64 *v27; // r14
  __int64 *v28; // rax
  __int64 v29; // rax
  unsigned int v31; // [rsp+38h] [rbp-41h] BYREF
  wchar_t *Str1; // [rsp+40h] [rbp-39h] BYREF
  struct _FONTHASH **v33; // [rsp+48h] [rbp-31h] BYREF
  struct PFF *v34; // [rsp+50h] [rbp-29h] BYREF
  _QWORD v35[2]; // [rsp+58h] [rbp-21h] BYREF
  _QWORD v36[2]; // [rsp+68h] [rbp-11h] BYREF
  char v37[8]; // [rsp+78h] [rbp-1h] BYREF
  wchar_t *v38; // [rsp+80h] [rbp+7h]
  int v39; // [rsp+88h] [rbp+Fh]
  int v40; // [rsp+8Ch] [rbp+13h]

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
  if ( (int)StringCchCopyW((char *)v6 + 520, 292LL, a2) < 0
    || !ParseFontLinkEntry(v6 + 260, (struct FontLinkData *)v37)
    || !(unsigned int)bAppendSysDirectory(v6, v6 + 260, v11)
    || !_wcsicmp(v6, &Dst) )
  {
LABEL_44:
    v8 = 0;
LABEL_45:
    v7 = v8;
    goto LABEL_46;
  }
  if ( off_1C03207F0 != (_UNKNOWN *)&off_1C03207F0 )
  {
    BaseFontEntry = FindBaseFontEntry(a1);
    v9 = (__int64)BaseFontEntry;
    if ( BaseFontEntry )
    {
      v13 = (struct _LIST_ENTRY *)((char *)BaseFontEntry + 16);
      if ( v13->Flink != v13 )
      {
        if ( FindLinkedFontEntry(v13, v6, v38) )
          goto LABEL_45;
      }
    }
  }
  v33 = gpPFTPublic;
  v36[0] = v35;
  v36[1] = v38;
  v14 = a3 != 0 ? 8 : 10;
  if ( v38 && !_wcsicmp(v38, L"Segoe UI Symbol") )
    v14 |= 0x4000u;
  if ( v9 )
  {
    v16 = 0LL;
  }
  else
  {
    v15 = PALLOCMEM2(0x70uLL);
    v9 = v15;
    v16 = v15;
    if ( !v15 )
      goto LABEL_46;
    if ( (int)StringCchCopyW((char *)(v15 + 32), 33LL, (char *)a1) < 0 )
      goto LABEL_18;
  }
  v20 = PALLOCMEM2(0x30uLL);
  v10 = v20;
  if ( !v20 )
    goto LABEL_19;
  *(_DWORD *)(v20 + 24) = v39;
  *(_DWORD *)(v20 + 28) = v40;
  if ( !(unsigned int)PUBLIC_PFTOBJ::bLoadAFont((PUBLIC_PFTOBJ *)&v33, v6, &v31, v14, &v34, (struct _EUDCLOAD *)v36) )
    goto LABEL_19;
  if ( v35[0] )
  {
    v21 = v35;
    v22 = 2LL;
    do
    {
      v23 = *v21++;
      *(_DWORD *)(v23 + 12) |= 0x200u;
      --v22;
    }
    while ( v22 );
    if ( v16 )
    {
      *(_QWORD *)(v9 + 100) = 0LL;
      *(_QWORD *)(v9 + 24) = v9 + 16;
      *(_QWORD *)(v9 + 16) = v9 + 16;
      v24 = (__int64 *)off_1C03207F8;
      if ( *off_1C03207F8 != (_UNKNOWN *)&off_1C03207F0 )
        __fastfail(3u);
      ++dword_1C0327BF4;
      *(_QWORD *)(v9 + 8) = off_1C03207F8;
      *(_QWORD *)v9 = &off_1C03207F0;
      *v24 = v9;
      off_1C03207F8 = (_UNKNOWN **)v9;
      if ( a5 )
        *a5 = v9;
      ++dword_1C0327BFC;
    }
    for ( i = 0LL; i < 2; ++i )
      *(_QWORD *)(v10 + 8 * i + 32) = v35[i];
    v26 = v38 == 0LL;
    *(_DWORD *)(v10 + 16) = a3;
    *(_DWORD *)(v10 + 20) = !v26;
    ++*(_DWORD *)(v9 + 100);
    ++*(_DWORD *)(v9 + 104);
    v27 = (__int64 *)(v9 + 16);
    if ( a4 >= 0 )
    {
      v29 = *v27;
      if ( *(__int64 **)(*v27 + 8) != v27 )
        __fastfail(3u);
      *(_QWORD *)v10 = v29;
      *(_QWORD *)(v10 + 8) = v27;
      *(_QWORD *)(v29 + 8) = v10;
      *v27 = v10;
    }
    else
    {
      v28 = (__int64 *)v27[1];
      if ( (__int64 *)*v28 != v27 )
        __fastfail(3u);
      *(_QWORD *)v10 = v27;
      *(_QWORD *)(v10 + 8) = v28;
      *v28 = v10;
      v27[1] = v10;
    }
    goto LABEL_45;
  }
LABEL_18:
  PFTOBJ::bUnloadEUDCFont(v17, v6);
LABEL_19:
  if ( v16 )
    Win32FreePool(v16, v18, v19);
  if ( v10 )
    Win32FreePool(v10, v18, v19);
LABEL_46:
  MALLOCOBJ::~MALLOCOBJ((MALLOCOBJ *)&Str1);
  return v7;
}
