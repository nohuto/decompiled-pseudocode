/*
 * XREFs of MiBuildImageControlArea @ 0x1404940B8
 * Callers:
 *     MiCreateImageFileMap @ 0x1404921D4 (MiCreateImageFileMap.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x14017CF18 (MiMakeDemandZeroPte.c)
 *     MiMakeSubsectionPte @ 0x14017CF90 (MiMakeSubsectionPte.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiParseImageSectionHeaders @ 0x1404946A0 (MiParseImageSectionHeaders.c)
 */

__int64 __fastcall MiBuildImageControlArea(int a1, int a2, __int64 a3, _WORD *a4, int a5, unsigned int *a6, _QWORD *a7)
{
  BOOL v7; // r13d
  int v9; // eax
  bool v10; // zf
  unsigned int v11; // r13d
  __int64 v13; // rax
  __int64 v14; // rsi
  _QWORD *PoolWithTag; // rax
  _QWORD *v16; // r14
  _QWORD *v17; // rsi
  _DWORD *v18; // rax
  _DWORD *v19; // r15
  int v20; // edi
  char v21; // al
  int v22; // eax
  __int64 v23; // rdx
  unsigned int *v24; // r8
  __int64 v25; // r10
  __int64 DemandZeroPte; // r11
  unsigned int v27; // r13d
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned int v30; // r9d
  unsigned int v31; // r8d
  __int16 v32; // ax
  __int64 SubsectionPte; // r10
  unsigned int v34; // r13d
  unsigned int v35; // eax
  int v36; // r11d
  int v37; // [rsp+34h] [rbp-64h]
  _QWORD *v38; // [rsp+38h] [rbp-60h]
  unsigned __int64 Size; // [rsp+40h] [rbp-58h]
  __int64 v40; // [rsp+48h] [rbp-50h]
  unsigned int v43; // [rsp+B0h] [rbp+18h]
  int v45; // [rsp+B8h] [rbp+20h]
  __int64 i; // [rsp+B8h] [rbp+20h]

  v37 = (unsigned __int16)a4[1];
  v7 = (*(_DWORD *)(a3 + 16) & 0xFFF) != 0;
  v9 = *(_DWORD *)(a3 + 16) >> 12;
  v10 = v9 + v7 == 0;
  v11 = v9 + v7;
  v43 = v11;
  if ( v10 )
    return 3221225595LL;
  Size = ((MiFlags & 0x2000 | 0x4000uLL) >> 10) & 0x3FFFFFFFFFFFF8LL;
  v13 = 1LL;
  if ( (a5 & 0x80000) == 0 )
    v13 = (unsigned int)(unsigned __int16)a4[1] + 1;
  v14 = 7 * v13;
  PoolWithTag = ExAllocatePoolWithTag(
                  NonPagedPoolNx,
                  56 * v13 + (((MiFlags & 0x2000 | 0x4000uLL) >> 10) & 0x3FFFFFFFFFFFF8LL) + 128,
                  (a5 & 0x80000) != 0 ? 1631808845 : 1766026573);
  v16 = PoolWithTag;
  if ( !PoolWithTag )
  {
    dword_14036BFD8 = 12;
    return 3221225626LL;
  }
  memset(PoolWithTag, 0, 0xB8uLL);
  v38 = &v16[v14 + 16];
  v40 = v11;
  v17 = ExAllocatePoolWithTag((POOL_TYPE)-2147483647, 8LL * v11, 0x74536D4Du);
  if ( !v17 )
  {
    dword_14036BFD8 = 13;
    ExFreePoolWithTag(v16, 0);
    return 3221225626LL;
  }
  v18 = ExAllocatePoolWithTag(PagedPool, 0x90uLL, 0x6765534Du);
  v19 = v18;
  if ( !v18 )
  {
    dword_14036BFD8 = 13;
    ExFreePoolWithTag(v17, 0);
    v20 = -1073741670;
LABEL_45:
    ExFreePoolWithTag(v16, 0);
    return (unsigned int)v20;
  }
  memset(v18, 0, 0x90uLL);
  v19[2] = v11;
  *((_QWORD *)v19 + 5) = 0LL;
  *((_QWORD *)v19 + 8) = v17;
  *(_QWORD *)v19 = v16;
  *((_QWORD *)v19 + 7) = v19 + 18;
  *((_QWORD *)v19 + 3) = (unsigned __int64)v11 << 12;
  v19[34] = *(_DWORD *)(a3 + 24);
  v19[35] = *(_DWORD *)(a3 + 16);
  v19[32] = *a6;
  *((_QWORD *)v19 + 9) = *(_QWORD *)a3 + *(unsigned int *)(a3 + 28);
  *((_QWORD *)v19 + 11) = *(_QWORD *)(a3 + 32);
  *((_QWORD *)v19 + 12) = *(_QWORD *)(a3 + 40);
  v19[26] = *(unsigned __int16 *)(a3 + 50);
  *((_WORD *)v19 + 55) = *(_WORD *)(a3 + 52);
  *((_WORD *)v19 + 54) = *(_WORD *)(a3 + 54);
  *((_WORD *)v19 + 56) = *(_WORD *)(a3 + 56);
  *((_WORD *)v19 + 57) = *(_WORD *)(a3 + 58);
  *((_WORD *)v19 + 59) = *(_WORD *)(a3 + 60);
  v19[33] = *(_DWORD *)(a3 + 64);
  if ( *(_DWORD *)(a3 + 68) || (v21 = 0, *(_DWORD *)(a3 + 28)) )
    v21 = 1;
  *((_BYTE *)v19 + 122) = v21;
  *((_WORD *)v19 + 58) = a4[9];
  *((_WORD *)v19 + 60) = *a4;
  v19[31] = *(_DWORD *)(a3 + 20);
  *v16 = v19;
  v16[2] = v16 + 1;
  v16[1] = v16 + 1;
  v16[14] = 1LL;
  v16[3] = 1LL;
  if ( (a5 & 1) == 0 )
    v16[6] = 1LL;
  *((_DWORD *)v16 + 22) = -1;
  v22 = (*((_DWORD *)v16 + 14) ^ (a1 << 20)) & 0x3F00000;
  v16[13] = 0LL;
  *((_DWORD *)v16 + 14) = *((_DWORD *)v16 + 14) ^ v22 | 0xA2;
  memset(v38, 0, Size);
  v16[12] = v38;
  v45 = 0;
  *((_BYTE *)v19 + 14) = *((_BYTE *)v19 + 14) & 0x7F | (*(_BYTE *)(a3 + 104) << 7);
  v16[16] = v16;
  *((_QWORD *)v19 + 4) = *(_QWORD *)a3;
  v16[17] = v17;
  if ( (a5 & 0x80000) == 0 )
  {
    v28 = *(unsigned int *)(a3 + 24);
    if ( (_DWORD)v28 )
    {
      v29 = *(unsigned int *)(a3 + 12);
      v30 = v29 + v28 - 1;
      if ( v30 > (unsigned int)v28 )
      {
        v31 = (((v30 & ~((_DWORD)v29 - 1) & 0xFFF) + 4095) >> 12)
            + (((unsigned int)~(v29 - 1) >> 12) & ((unsigned __int64)(v29 + v28 - 1) >> 12));
        *((_DWORD *)v16 + 43) = v31;
        if ( v31 <= v11 )
        {
          v43 = v11 - v31;
          *((_DWORD *)v16 + 42) = *(_DWORD *)(a3 + 24) >> 9;
          v32 = *((_WORD *)v16 + 80);
          *((_WORD *)v16 + 81) = *((_WORD *)v16 + 81) & 0xF | (16 * (*(_WORD *)(a3 + 24) & 0x1FF));
          *((_WORD *)v16 + 80) = v32 & 0xFFC1 | 2;
          SubsectionPte = MiMakeSubsectionPte((__int64)(v16 + 16));
          v34 = 0;
          *((_BYTE *)v19 + 14) = *((_BYTE *)v19 + 14) & 0xC1 | 2;
          *((_DWORD *)v16 + 45) = 0;
          if ( *((_DWORD *)v16 + 43) )
          {
            v35 = 0;
            do
            {
              if ( v35 >= *(_DWORD *)(a3 + 24) )
              {
                *v17 = 0LL;
                if ( MiPteInShadowRange((unsigned __int64)v17) )
                  MiWritePteShadow();
                *((_DWORD *)v16 + 45) ^= v36 & (*((_DWORD *)v16 + 45) ^ (*((_DWORD *)v16 + 45) + 1));
              }
              else
              {
                *v17 = SubsectionPte;
                if ( MiPteInShadowRange((unsigned __int64)v17) )
                  MiWritePteShadow();
              }
              ++v17;
              v35 = v45 + 4096;
              ++v34;
              v45 += 4096;
            }
            while ( v34 < *((_DWORD *)v16 + 43) );
          }
          goto LABEL_43;
        }
        dword_14036BFD8 = 17;
      }
      else
      {
        dword_14036BFD8 = 50;
      }
    }
    else
    {
      dword_14036BFD8 = 49;
    }
    ExFreePoolWithTag(v19, 0);
    v20 = -1073741701;
    goto LABEL_45;
  }
  *((_DWORD *)v16 + 43) = v11;
  *((_DWORD *)v16 + 42) = *(__int64 *)a6 >> 9;
  *((_WORD *)v16 + 81) = *((_WORD *)v16 + 81) & 0xF | (16 * (*(_WORD *)a6 & 0x1FF));
  *((_BYTE *)v19 + 123) |= 8u;
  *((_BYTE *)v19 + 122) = 1;
  *((_WORD *)v16 + 80) = v16[20] & 0xFFC1 | 0xE;
  MiMakeSubsectionPte((__int64)(v16 + 16));
  *((_BYTE *)v19 + 14) = *((_BYTE *)v19 + 14) & 0xC1 | 0xE;
  DemandZeroPte = MiMakeDemandZeroPte(7);
  v27 = 0;
  if ( (_DWORD)v23 )
  {
    for ( i = v23; i; --i )
    {
      if ( v27 >= *v24 )
      {
        *v17 = DemandZeroPte;
        if ( MiPteInShadowRange((unsigned __int64)v17) )
        {
LABEL_24:
          MiWritePteShadow();
          v24 = a6;
        }
      }
      else
      {
        *v17 = v25;
        if ( MiPteInShadowRange((unsigned __int64)v17) )
          goto LABEL_24;
      }
      v27 += 4096;
      ++v17;
    }
  }
  *((_QWORD *)v19 + 6) = v40;
  *((_DWORD *)v16 + 45) = 0;
LABEL_43:
  v20 = MiParseImageSectionHeaders(a5, (_DWORD)v16, a2, v37, a3, v43);
  if ( v20 < 0 )
  {
    ExFreePoolWithTag(v19, 0);
    goto LABEL_45;
  }
  *a7 = v16;
  return 0LL;
}
