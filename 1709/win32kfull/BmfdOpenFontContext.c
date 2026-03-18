/*
 * XREFs of BmfdOpenFontContext @ 0x1C0236918
 * Callers:
 *     BmfdQueryAdvanceWidths @ 0x1C02343E0 (BmfdQueryAdvanceWidths.c)
 *     BmfdQueryFontData @ 0x1C02345FC (BmfdQueryFontData.c)
 * Callees:
 *     EngMapFontFileFDInternal @ 0x1C00B644C (EngMapFontFileFDInternal.c)
 *     ulGetRotate @ 0x1C0236B40 (ulGetRotate.c)
 *     cjGlyphDataSimulated @ 0x1C0237084 (cjGlyphDataSimulated.c)
 */

void *__fastcall BmfdOpenFontContext(__int64 a1)
{
  __int64 v1; // rdi
  int v2; // ebp
  ULONG v4; // esi
  unsigned int v5; // eax
  int v6; // edx
  __int64 v7; // r13
  int Rotate; // eax
  __int64 v9; // rbx
  int v10; // r12d
  int v11; // r15d
  int v12; // edx
  int v13; // edx
  int v14; // r10d
  int v15; // r11d
  int v16; // eax
  int v17; // r12d
  int v18; // r15d
  unsigned int v19; // eax
  char *v20; // rax
  void *v21; // rsi
  HSEMAPHORE v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // [rsp+70h] [rbp+8h] BYREF
  __int64 v26; // [rsp+78h] [rbp+10h] BYREF
  int v27; // [rsp+80h] [rbp+18h]

  v1 = *(_QWORD *)(a1 + 24);
  v2 = 0;
  v4 = 56;
  if ( !v1 )
    return 0LL;
  v5 = *(_DWORD *)(a1 + 4);
  if ( !v5 )
    return 0LL;
  if ( v5 > *(_DWORD *)(v1 + 28) )
    return 0LL;
  v6 = *(_DWORD *)(a1 + 12);
  v7 = 88LL * (v5 - 1) + v1 + 40;
  if ( (v6 & 0x2000) != 0 && (*(_BYTE *)(*(_QWORD *)(v7 + 80) + 52LL) & 0x20) != 0 )
    return 0LL;
  if ( (v6 & 0x4000) != 0 && (*(_BYTE *)(*(_QWORD *)(v7 + 80) + 52LL) & 1) != 0 )
    return 0LL;
  Rotate = ulGetRotate(&v25, a1 + 216);
  v9 = v25;
  v10 = *(unsigned __int16 *)(v7 + 44);
  v11 = HIDWORD(v25) * v10;
  v12 = v25 * *(unsigned __int16 *)(v7 + 46);
  v27 = Rotate;
  LODWORD(v26) = cjGlyphDataSimulated(a1, v12, HIDWORD(v25) * v10, (unsigned int)&v25, 0);
  if ( !v14 || v14 == 1800 )
  {
    v16 = v25;
    v17 = v25;
  }
  else
  {
    LODWORD(v26) = cjGlyphDataSimulated(a1, v13, v11, 0, v14);
    v16 = v25;
    v17 = v15 * v10;
  }
  v18 = 0;
  if ( (_DWORD)v9 != 1 || v15 != 1 )
  {
    v18 = 1;
    v19 = ((unsigned int)(v16 + 7) >> 3) + 5;
    if ( v19 > 0x100 )
    {
      v4 = v19 + 56;
      v18 = 3;
    }
  }
  v20 = (char *)EngAllocMem(0, v4, 0x64666D42u);
  v21 = v20;
  if ( !v20 )
  {
    EngSetLastError(8u);
    return 0LL;
  }
  v23 = ghsemBMFD;
  *(_DWORD *)v20 = 252;
  *((_QWORD *)v20 + 1) = *(_QWORD *)(a1 + 24);
  *((_QWORD *)v20 + 3) = v7;
  *((_DWORD *)v20 + 8) = *(_DWORD *)(a1 + 12);
  *((_DWORD *)v20 + 12) = v26;
  *((_DWORD *)v20 + 4) = v27;
  *(_QWORD *)(v20 + 36) = v9;
  *((_DWORD *)v20 + 13) = v18;
  *((_DWORD *)v20 + 11) = v17;
  EngAcquireSemaphore(v23);
  if ( !*(_DWORD *)(v1 + 24) )
  {
    if ( !(unsigned int)EngMapFontFileFDInternal(*(struct _FILEVIEW **)(v1 + 16), &v26, &v25, 1) )
    {
      EngReleaseSemaphore(ghsemBMFD);
      EngFreeMem(v21);
      return 0LL;
    }
    if ( *(int *)(v1 + 28) > 0 )
    {
      v24 = v1 + 40;
      do
      {
        ++v2;
        *(_QWORD *)v24 = v26 + *(int *)(v24 + 8);
        v24 += 88LL;
      }
      while ( v2 < *(_DWORD *)(v1 + 28) );
    }
  }
  ++*(_DWORD *)(v1 + 24);
  EngReleaseSemaphore(ghsemBMFD);
  return v21;
}
