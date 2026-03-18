/*
 * XREFs of pvHandleKerningPairs @ 0x1C022F778
 * Callers:
 *     ttfdQueryFontTree @ 0x1C0230170 (ttfdQueryFontTree.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     cQueryKerningPairs @ 0x1C022E7F4 (cQueryKerningPairs.c)
 *     fs_GetGlyphIDs @ 0x1C02B5BB8 (fs_GetGlyphIDs.c)
 *     fs_Initialize @ 0x1C02B5C00 (fs_Initialize.c)
 *     fs_NewSfnt @ 0x1C02B5E84 (fs_NewSfnt.c)
 *     fs_OpenFonts @ 0x1C02B5F88 (fs_OpenFonts.c)
 */

__int64 __fastcall pvHandleKerningPairs(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v5; // rax
  __int64 v7; // rcx
  int v8; // edx
  int v9; // r9d
  unsigned int KerningPairs; // r14d
  _BYTE *v12; // rdi
  int v13; // edx
  int v14; // r9d
  int v15; // edx
  int v16; // r9d
  char *v17; // rax
  void *v18; // rdi
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  _WORD v23[2]; // [rsp+30h] [rbp-D0h] BYREF
  _WORD v24[6]; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v25[8]; // [rsp+40h] [rbp-C0h] BYREF
  char *v26; // [rsp+48h] [rbp-B8h]
  __int64 v27; // [rsp+50h] [rbp-B0h]
  __int64 v28; // [rsp+58h] [rbp-A8h]
  __int64 v29; // [rsp+90h] [rbp-70h]
  int v30; // [rsp+98h] [rbp-68h]
  int v31; // [rsp+9Ch] [rbp-64h]
  __int64 v32; // [rsp+A0h] [rbp-60h]
  __int16 v33; // [rsp+A8h] [rbp-58h]
  __int16 v34; // [rsp+AAh] [rbp-56h]
  _BYTE v35[240]; // [rsp+F0h] [rbp-10h] BYREF
  char v36; // [rsp+1E0h] [rbp+E0h] BYREF

  *a2 = 0LL;
  v5 = *(_QWORD *)(a1 + 80);
  if ( v5 )
  {
    v22 = v5 - 16;
    ++*(_DWORD *)(v22 + 4);
    *a2 = v22;
  }
  else
  {
    if ( !*(_DWORD *)(a1 + 48) )
    {
      v7 = *(_QWORD *)a1;
      *(_QWORD *)(a1 + 64) = *(_QWORD *)(v7 + 16);
      *(_DWORD *)(a1 + 72) = *(_DWORD *)(v7 + 24);
    }
    KerningPairs = cQueryKerningPairs(a1, 0, 0LL, a3);
    if ( KerningPairs == -1 )
      return 0LL;
    if ( KerningPairs && *(_WORD *)(a1 + 310) == 3 && *(_WORD *)(a1 + 312) == 1 )
    {
      v12 = *(_BYTE **)(a1 + 24);
      v23[0] = 0;
      if ( !*(_DWORD *)(a1 + 48) )
      {
        if ( (unsigned int)fs_OpenFonts(v25, v35) )
          return 0LL;
        v27 = 0LL;
        v26 = &v36;
        v28 = 0LL;
        if ( (unsigned int)fs_Initialize(v25, v35) )
          return 0LL;
        v29 = *(_QWORD *)(a1 + 64);
        v33 = *(_WORD *)(a1 + 310);
        v34 = *(_WORD *)(a1 + 312);
        v32 = a1;
        v30 = 1;
        v31 = 1;
        if ( (unsigned int)fs_NewSfnt(v25, v35) )
          return 0LL;
        v12 = v25;
      }
      if ( !(unsigned int)fs_GetGlyphIDs((_DWORD)v12, v8, 32, v9, (__int64)v24)
        && !(unsigned int)fs_GetGlyphIDs((_DWORD)v12, v13, 160, v14, (__int64)v23)
        && (v24[0] || v23[0]) )
      {
        *(_DWORD *)(a1 + 300) |= 0x10u;
      }
      if ( !(unsigned int)fs_GetGlyphIDs((_DWORD)v12, v13, 45, v14, (__int64)v24)
        && !(unsigned int)fs_GetGlyphIDs((_DWORD)v12, v15, 173, v16, (__int64)v23)
        && (v24[0] || v23[0]) )
      {
        *(_DWORD *)(a1 + 300) |= 0x20u;
      }
    }
    v17 = (char *)EngAllocMem(0, 6 * KerningPairs + 22, 0x64667454u);
    v18 = v17;
    if ( !v17 )
      return 0LL;
    *(_QWORD *)(a1 + 80) = v17 + 16;
    *((_QWORD *)v17 + 1) = a1;
    *(_DWORD *)v17 = 0;
    *((_DWORD *)v17 + 1) = 1;
    *a2 = v17;
    v19 = cQueryKerningPairs(a1, KerningPairs, *(unsigned __int16 **)(a1 + 80), a3);
    if ( v19 == -1 )
    {
      EngFreeMem(v18);
      *(_QWORD *)(a1 + 80) = 0LL;
      return 0LL;
    }
    v20 = 3LL * v19;
    v21 = *(_QWORD *)(a1 + 80);
    *(_DWORD *)(v21 + 2 * v20) = 0;
    *(_WORD *)(v21 + 2 * v20 + 4) = 0;
  }
  return *(_QWORD *)(a1 + 80);
}
