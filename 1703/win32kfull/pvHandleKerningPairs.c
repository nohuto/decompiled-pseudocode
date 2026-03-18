/*
 * XREFs of pvHandleKerningPairs @ 0x1C022E254
 * Callers:
 *     ttfdQueryFontTree @ 0x1C022EC60 (ttfdQueryFontTree.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     cQueryKerningPairs @ 0x1C022D2D0 (cQueryKerningPairs.c)
 *     fs_GetGlyphIDs @ 0x1C02BBDAC (fs_GetGlyphIDs.c)
 *     fs_Initialize @ 0x1C02BBDEC (fs_Initialize.c)
 *     fs_NewSfnt @ 0x1C02BC070 (fs_NewSfnt.c)
 *     fs_OpenFonts @ 0x1C02BC174 (fs_OpenFonts.c)
 */

__int64 __fastcall pvHandleKerningPairs(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v5; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned int KerningPairs; // r14d
  _BYTE *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rdx
  char *v14; // rax
  void *v15; // rdi
  unsigned int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int16 v20; // [rsp+34h] [rbp-CCh]
  _BYTE v21[8]; // [rsp+40h] [rbp-C0h] BYREF
  char *v22; // [rsp+48h] [rbp-B8h]
  __int64 v23; // [rsp+50h] [rbp-B0h]
  __int64 v24; // [rsp+58h] [rbp-A8h]
  __int64 v25; // [rsp+90h] [rbp-70h]
  int v26; // [rsp+98h] [rbp-68h]
  int v27; // [rsp+9Ch] [rbp-64h]
  __int64 v28; // [rsp+A0h] [rbp-60h]
  __int16 v29; // [rsp+A8h] [rbp-58h]
  __int16 v30; // [rsp+AAh] [rbp-56h]
  _BYTE v31[240]; // [rsp+F0h] [rbp-10h] BYREF
  char v32; // [rsp+1E0h] [rbp+E0h] BYREF

  *a2 = 0LL;
  v5 = *(_QWORD *)(a1 + 80);
  if ( v5 )
  {
    v19 = v5 - 16;
    ++*(_DWORD *)(v19 + 4);
    *a2 = v19;
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
      v11 = *(_BYTE **)(a1 + 24);
      if ( !*(_DWORD *)(a1 + 48) )
      {
        if ( (unsigned int)fs_OpenFonts(v21, v31) )
          return 0LL;
        v23 = 0LL;
        v22 = &v32;
        v24 = 0LL;
        if ( (unsigned int)fs_Initialize(v21, v31) )
          return 0LL;
        v25 = *(_QWORD *)(a1 + 64);
        v29 = *(_WORD *)(a1 + 310);
        v30 = *(_WORD *)(a1 + 312);
        v28 = a1;
        v26 = 1;
        v27 = 1;
        if ( (unsigned int)fs_NewSfnt(v21, v31) )
          return 0LL;
        v11 = v21;
      }
      if ( !(unsigned int)fs_GetGlyphIDs(v11, v8, 32LL) && !(unsigned int)fs_GetGlyphIDs(v11, v12, 160LL) && v20 )
        *(_DWORD *)(a1 + 300) |= 0x10u;
      if ( !(unsigned int)fs_GetGlyphIDs(v11, v12, 45LL) && !(unsigned int)fs_GetGlyphIDs(v11, v13, 173LL) )
      {
        if ( v20 )
          *(_DWORD *)(a1 + 300) |= 0x20u;
      }
    }
    v14 = (char *)EngAllocMem(0, 6 * KerningPairs + 22, 0x64667454u);
    v15 = v14;
    if ( !v14 )
      return 0LL;
    *(_QWORD *)(a1 + 80) = v14 + 16;
    *((_QWORD *)v14 + 1) = a1;
    *(_DWORD *)v14 = 0;
    *((_DWORD *)v14 + 1) = 1;
    *a2 = v14;
    v16 = cQueryKerningPairs(a1, KerningPairs, *(unsigned __int16 **)(a1 + 80), a3);
    if ( v16 == -1 )
    {
      EngFreeMem(v15);
      *(_QWORD *)(a1 + 80) = 0LL;
      return 0LL;
    }
    v17 = 3LL * v16;
    v18 = *(_QWORD *)(a1 + 80);
    *(_DWORD *)(v18 + 2 * v17) = 0;
    *(_WORD *)(v18 + 2 * v17 + 4) = 0;
  }
  return *(_QWORD *)(a1 + 80);
}
