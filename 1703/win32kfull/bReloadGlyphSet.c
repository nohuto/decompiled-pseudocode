/*
 * XREFs of bReloadGlyphSet @ 0x1C02282DC
 * Callers:
 *     ttfdQueryFontTree @ 0x1C022EC60 (ttfdQueryFontTree.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     bLoadGlyphSet @ 0x1C0227A40 (bLoadGlyphSet.c)
 *     vGetVerticalGSet @ 0x1C022B4A4 (vGetVerticalGSet.c)
 *     fs_Initialize @ 0x1C02BBDEC (fs_Initialize.c)
 *     fs_NewSfnt @ 0x1C02BC070 (fs_NewSfnt.c)
 *     fs_OpenFonts @ 0x1C02BC174 (fs_OpenFonts.c)
 */

__int64 __fastcall bReloadGlyphSet(__int64 a1, int a2)
{
  unsigned int v5; // edi
  int v6; // eax
  int v8; // eax
  ULONG *v9; // rdx
  __int64 v10; // rcx
  PVOID v11; // rax
  __int64 v12; // rcx
  PVOID v13; // rax
  __int64 v14; // r14
  void *v15; // rcx
  __int64 v16; // rdx
  unsigned int v17; // r12d
  __int64 v18; // rax
  void *v19; // rcx
  void *v20; // rcx
  int v21; // [rsp+3Ch] [rbp-14Ch]
  __int128 v22; // [rsp+50h] [rbp-138h] BYREF
  _BYTE v23[240]; // [rsp+60h] [rbp-128h] BYREF

  v5 = 0;
  v21 = 0;
  if ( a2 == 1 )
  {
    v6 = *(_DWORD *)(a1 + 104);
    if ( v6 )
    {
      *(_DWORD *)(a1 + 104) = v6 + 1;
      return 1LL;
    }
  }
  else
  {
    v8 = *(_DWORD *)(a1 + 108);
    if ( v8 )
    {
      *(_DWORD *)(a1 + 108) = v8 + 1;
      return 1LL;
    }
  }
  if ( a2 != 1 )
  {
    v9 = *(ULONG **)(a1 + 88);
    if ( v9 )
    {
      if ( !*(_DWORD *)(a1 + 48) )
      {
        v10 = *(_QWORD *)a1;
        *(_QWORD *)(a1 + 64) = *(_QWORD *)(v10 + 16);
        *(_DWORD *)(a1 + 72) = *(_DWORD *)(v10 + 24);
      }
      v11 = EngAllocMem(0, *v9, 0x64667454u);
      *(_QWORD *)(a1 + 96) = v11;
      if ( v11 )
      {
        memmove(v11, *(const void **)(a1 + 88), **(unsigned int **)(a1 + 88));
        vGetVerticalGSet(*(_QWORD *)(a1 + 88), a1);
        *(_DWORD *)(a1 + 108) = 1;
      }
      LOBYTE(v5) = *(_QWORD *)(a1 + 96) != 0LL;
      return v5;
    }
  }
  if ( *(_DWORD *)(a1 + 48) )
  {
    v14 = *(_QWORD *)(a1 + 24);
  }
  else
  {
    v12 = *(_QWORD *)a1;
    *(_QWORD *)(a1 + 64) = *(_QWORD *)(v12 + 16);
    *(_DWORD *)(a1 + 72) = *(_DWORD *)(v12 + 24);
    v13 = EngAllocMem(0, 0x538u, 0x64667454u);
    v14 = (__int64)v13;
    if ( !v13 )
      return 0LL;
    v21 = 1;
    if ( (unsigned int)fs_OpenFonts(v13, v23) )
    {
LABEL_18:
      EngFreeMem(v15);
      return 0LL;
    }
    *(_QWORD *)(v14 + 8) = v14 + 168;
    *(_QWORD *)(v14 + 16) = 0LL;
    *(_QWORD *)(v14 + 24) = 0LL;
    if ( (unsigned int)fs_Initialize(v15, v23)
      || (*(_QWORD *)(v14 + 80) = *(_QWORD *)(a1 + 64),
          *(_QWORD *)(v14 + 96) = a1,
          *(_DWORD *)(v14 + 88) = 1,
          *(_DWORD *)(v14 + 92) = 1,
          *(_WORD *)(v14 + 104) = *(_WORD *)(a1 + 310),
          *(_WORD *)(v14 + 106) = *(_WORD *)(a1 + 312),
          (unsigned int)fs_NewSfnt(v14, v23)) )
    {
      v15 = (void *)v14;
      goto LABEL_18;
    }
  }
  v16 = *(_QWORD *)(a1 + 64) + *(unsigned int *)(a1 + 304);
  v22 = *(_OWORD *)(a1 + 332);
  v17 = 0;
  v18 = 96LL;
  if ( a2 == 1 )
    v18 = 88LL;
  if ( (unsigned int)bLoadGlyphSet(a1, v16, v14, (__int64)&v22, (PVOID *)(a1 + v18)) )
  {
    if ( a2 != 1 )
      vGetVerticalGSet(*(_QWORD *)(a1 + 96), a1);
    v17 = 1;
  }
  if ( v21 )
    EngFreeMem((PVOID)v14);
  if ( v17 )
  {
    if ( a2 == 1 )
      *(_DWORD *)(a1 + 104) = 1;
    else
      *(_DWORD *)(a1 + 108) = 1;
  }
  else if ( a2 == 1 )
  {
    v20 = *(void **)(a1 + 88);
    if ( v20 )
    {
      EngFreeMem(v20);
      *(_QWORD *)(a1 + 88) = 0LL;
    }
  }
  else
  {
    v19 = *(void **)(a1 + 96);
    if ( v19 )
    {
      EngFreeMem(v19);
      *(_QWORD *)(a1 + 96) = 0LL;
    }
  }
  return v17;
}
