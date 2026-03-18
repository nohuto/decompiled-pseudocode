/*
 * XREFs of RaspGetCompositeGlyphList @ 0x1402677D4
 * Callers:
 *     RaspLoadCompositeGlyphData @ 0x140267E60 (RaspLoadCompositeGlyphData.c)
 * Callees:
 *     RaspFreeMemory @ 0x1401417C4 (RaspFreeMemory.c)
 *     RaspMapGlyphIndexToLocation @ 0x1401424A0 (RaspMapGlyphIndexToLocation.c)
 *     FioFwReadUshortAtOffset @ 0x140142540 (FioFwReadUshortAtOffset.c)
 *     RaspAllocateMemory @ 0x140142D48 (RaspAllocateMemory.c)
 *     RaspLoadGlyphData @ 0x140143048 (RaspLoadGlyphData.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall RaspGetCompositeGlyphList(
        __int64 a1,
        int a2,
        _WORD *a3,
        _WORD *a4,
        _WORD *a5,
        _DWORD *a6,
        __int64 **a7,
        __int64 *a8)
{
  _DWORD *v9; // rcx
  int v11; // eax
  int v12; // ebx
  __int64 v13; // r14
  __int64 **v14; // rdi
  unsigned int v15; // ebx
  __int64 *v16; // r12
  char *Memory; // rax
  char *v18; // rsi
  __int64 ***v19; // rax
  __int16 v20; // r12
  unsigned int v21; // ebx
  char v22; // ah
  int GlyphData; // r15d
  _WORD *v24; // rcx
  _WORD *v25; // rdx
  __int64 *v26; // rbx
  __int64 v27; // rax
  _WORD v28[2]; // [rsp+30h] [rbp-20h] BYREF
  _WORD v29[2]; // [rsp+34h] [rbp-1Ch] BYREF
  __int16 v30[2]; // [rsp+38h] [rbp-18h] BYREF
  int v31; // [rsp+3Ch] [rbp-14h] BYREF
  unsigned int v32; // [rsp+40h] [rbp-10h]
  _WORD *v33; // [rsp+48h] [rbp-8h] BYREF
  __int16 v34; // [rsp+98h] [rbp+48h] BYREF
  _WORD *v35; // [rsp+A0h] [rbp+50h]
  _WORD *v36; // [rsp+A8h] [rbp+58h]

  v36 = a4;
  v35 = a3;
  v9 = a6;
  *a4 = 0;
  *a3 = 0;
  *v9 = 0;
  *a5 = 0;
  if ( a2 == -1 )
    return 3221225485LL;
  if ( !a1 )
    return 3221225473LL;
  v11 = *(_DWORD *)(a1 + 60);
  if ( !v11 )
    return 3221225473LL;
  v12 = v11 + a2;
  v34 = 0;
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL);
  FioFwReadUshortAtOffset(v13, (unsigned int)(v11 + a2), &v34);
  if ( v34 >= 0 )
    return 3221225485LL;
  v14 = a7;
  v15 = v12 + 10;
  v32 = v15;
  a7[1] = (__int64 *)a7;
  *v14 = (__int64 *)v14;
  while ( 1 )
  {
    v16 = a8;
    Memory = (char *)RaspAllocateMemory(0x2AuLL, a8);
    v18 = Memory;
    if ( !Memory )
    {
      GlyphData = -1073741670;
      goto LABEL_29;
    }
    memset(Memory, 0, 0x2AuLL);
    v19 = (__int64 ***)v14[1];
    if ( *v19 != v14 )
      __fastfail(3u);
    *(_QWORD *)v18 = v14;
    *((_QWORD *)v18 + 1) = v19;
    *v19 = (__int64 **)v18;
    v14[1] = (__int64 *)v18;
    FioFwReadUshortAtOffset(v13, v15, v30);
    v20 = v30[0];
    *((_WORD *)v18 + 12) = v30[0];
    FioFwReadUshortAtOffset(v13, v15 + 2, v29);
    v21 = v15 + 4;
    *((_WORD *)v18 + 13) = v29[0];
    FioFwReadUshortAtOffset(v13, v21, v28);
    if ( (v20 & 1) != 0 )
    {
      v21 += 2;
      *((_WORD *)v18 + 14) = v28[0];
      FioFwReadUshortAtOffset(v13, v21, v28);
      *((_WORD *)v18 + 15) = v28[0];
    }
    else
    {
      v22 = HIBYTE(v28[0]);
      v18[29] = v28[0];
      v18[28] = v22;
    }
    v15 = v21 + 2;
    if ( (v20 & 8) == 0 )
    {
      if ( (v20 & 0x40) != 0 )
      {
        FioFwReadUshortAtOffset(v13, v15, &v34);
        *((_WORD *)v18 + 16) = v34;
        FioFwReadUshortAtOffset(v13, v15 + 2, &v34);
        *((_WORD *)v18 + 17) = v34;
      }
      else
      {
        if ( (v20 & 0x80u) == 0 )
          goto LABEL_19;
        FioFwReadUshortAtOffset(v13, v15, &v34);
        *((_WORD *)v18 + 16) = v34;
        FioFwReadUshortAtOffset(v13, v15 + 2, &v34);
        v15 += 4;
        *((_WORD *)v18 + 17) = v34;
        FioFwReadUshortAtOffset(v13, v15, &v34);
        *((_WORD *)v18 + 18) = v34;
        FioFwReadUshortAtOffset(v13, v15 + 2, &v34);
        *(_DWORD *)(v18 + 38) = v34;
      }
      v15 += 4;
      goto LABEL_19;
    }
    FioFwReadUshortAtOffset(v13, v15, &v34);
    v15 += 2;
    *((_WORD *)v18 + 16) = v34;
LABEL_19:
    GlyphData = RaspMapGlyphIndexToLocation(a1, v29[0], &v31);
    if ( GlyphData < 0 )
      break;
    GlyphData = RaspLoadGlyphData(a1, v31, (int)v29, (__int64 *)&v33, a8);
    if ( GlyphData < 0 )
      break;
    v24 = v35;
    *((_QWORD *)v18 + 2) = v33;
    v25 = v33;
    *v24 += v33[12];
    *v36 += *v25;
    if ( (v20 & 0x20) == 0 )
    {
      if ( (v20 & 0x100) != 0 )
      {
        FioFwReadUshortAtOffset(v13, v15, a5);
        v15 += 2;
      }
      *a6 = v15 - v32;
      return (unsigned int)GlyphData;
    }
  }
  v16 = a8;
LABEL_29:
  while ( 1 )
  {
    v26 = *v14;
    if ( *v14 == (__int64 *)v14 )
      break;
    v27 = *v26;
    if ( (__int64 **)v26[1] != v14 || *(__int64 **)(v27 + 8) != v26 )
      __fastfail(3u);
    *v14 = (__int64 *)v27;
    *(_QWORD *)(v27 + 8) = v14;
    RaspFreeMemory(v26[2], v16);
    RaspFreeMemory((__int64)v26, v16);
  }
  return (unsigned int)GlyphData;
}
