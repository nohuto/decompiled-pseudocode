/*
 * XREFs of bReloadGlyphSet @ 0x1C0229854
 * Callers:
 *     ttfdQueryFontTree @ 0x1C0230170 (ttfdQueryFontTree.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     bLoadGlyphSet @ 0x1C0228FB8 (bLoadGlyphSet.c)
 *     vGetVerticalGSet @ 0x1C022C9F4 (vGetVerticalGSet.c)
 *     fs_Initialize @ 0x1C02B5C00 (fs_Initialize.c)
 *     fs_NewSfnt @ 0x1C02B5E84 (fs_NewSfnt.c)
 *     fs_OpenFonts @ 0x1C02B5F88 (fs_OpenFonts.c)
 */

__int64 __fastcall bReloadGlyphSet(__int64 a1, int a2)
{
  __int64 v3; // rbx
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
  int v21; // [rsp+3Ch] [rbp-15Ch]
  __int128 v22; // [rsp+58h] [rbp-140h] BYREF
  _BYTE v23[240]; // [rsp+70h] [rbp-128h] BYREF

  v3 = a1;
  *(_QWORD *)&v22 = a1;
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
        *(_QWORD *)(v3 + 64) = *(_QWORD *)(v10 + 16);
        *(_DWORD *)(v3 + 72) = *(_DWORD *)(v10 + 24);
      }
      v11 = EngAllocMem(0, *v9, 0x64667454u);
      *(_QWORD *)(v3 + 96) = v11;
      if ( v11 )
      {
        memmove(v11, *(const void **)(v3 + 88), **(unsigned int **)(v3 + 88));
        vGetVerticalGSet(*(_QWORD *)(v3 + 88), v3);
        *(_DWORD *)(v3 + 108) = 1;
      }
      LOBYTE(v5) = *(_QWORD *)(v3 + 96) != 0LL;
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
    *(_QWORD *)(v3 + 64) = *(_QWORD *)(v12 + 16);
    *(_DWORD *)(v3 + 72) = *(_DWORD *)(v12 + 24);
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
      || (*(_QWORD *)(v14 + 80) = *(_QWORD *)(v3 + 64),
          *(_QWORD *)(v14 + 96) = v3,
          *(_DWORD *)(v14 + 88) = 1,
          *(_DWORD *)(v14 + 92) = 1,
          *(_WORD *)(v14 + 104) = *(_WORD *)(v3 + 310),
          *(_WORD *)(v14 + 106) = *(_WORD *)(v3 + 312),
          (unsigned int)fs_NewSfnt(v14, v23)) )
    {
      v15 = (void *)v14;
      goto LABEL_18;
    }
    a1 = v22;
  }
  v16 = *(_QWORD *)(v3 + 64) + *(unsigned int *)(v3 + 304);
  v22 = *(_OWORD *)(v3 + 332);
  v17 = 0;
  v18 = 88LL;
  if ( a2 != 1 )
    v18 = 96LL;
  if ( (unsigned int)bLoadGlyphSet(v3, v16, v14, (__int64)&v22, (PVOID *)(a1 + v18)) )
  {
    if ( a2 != 1 )
      vGetVerticalGSet(*(_QWORD *)(v3 + 96), v3);
    v17 = 1;
  }
  if ( v21 )
    EngFreeMem((PVOID)v14);
  if ( v17 )
  {
    if ( a2 == 1 )
      *(_DWORD *)(v3 + 104) = 1;
    else
      *(_DWORD *)(v3 + 108) = 1;
  }
  else if ( a2 == 1 )
  {
    v20 = *(void **)(v3 + 88);
    if ( v20 )
    {
      EngFreeMem(v20);
      *(_QWORD *)(v3 + 88) = 0LL;
    }
  }
  else
  {
    v19 = *(void **)(v3 + 96);
    if ( v19 )
    {
      EngFreeMem(v19);
      *(_QWORD *)(v3 + 96) = 0LL;
    }
  }
  return v17;
}
