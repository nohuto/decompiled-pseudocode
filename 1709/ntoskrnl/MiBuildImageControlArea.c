/*
 * XREFs of MiBuildImageControlArea @ 0x1404FA468
 * Callers:
 *     MiCreateImageFileMap @ 0x1404F8B90 (MiCreateImageFileMap.c)
 * Callees:
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 *     MiMakeSubsectionPte @ 0x14017C818 (MiMakeSubsectionPte.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MiParseImageSectionHeaders @ 0x1404FAAC0 (MiParseImageSectionHeaders.c)
 */

__int64 __fastcall MiBuildImageControlArea(int a1, int a2, __int64 a3, _WORD *a4, int a5, unsigned int *a6, _QWORD *a7)
{
  BOOL v7; // r13d
  int v9; // eax
  bool v10; // zf
  unsigned int v11; // r13d
  int v13; // edi
  unsigned int v14; // ecx
  __int64 v15; // rsi
  _QWORD *PoolWithTag; // rax
  _QWORD *v17; // r14
  _QWORD *v18; // rsi
  _DWORD *v19; // rax
  _DWORD *v20; // r15
  int v21; // edi
  char v22; // al
  int v23; // eax
  char *v24; // rdx
  unsigned int *v25; // r8
  __int64 v26; // r10
  __int64 DemandZeroPte; // r11
  unsigned int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rcx
  unsigned int v31; // r9d
  unsigned int v32; // r8d
  __int16 v33; // ax
  __int64 SubsectionPte; // r10
  int v35; // r11d
  unsigned int v36; // edi
  _QWORD *v37; // [rsp+38h] [rbp-70h]
  char *v38; // [rsp+38h] [rbp-70h]
  int v39; // [rsp+40h] [rbp-68h]
  __int64 Size; // [rsp+48h] [rbp-60h]
  unsigned int v43; // [rsp+C0h] [rbp+18h]
  int v45; // [rsp+C8h] [rbp+20h]
  unsigned int v46; // [rsp+C8h] [rbp+20h]

  v39 = (unsigned __int16)a4[1];
  v7 = (*(_DWORD *)(a3 + 16) & 0xFFF) != 0;
  v9 = *(_DWORD *)(a3 + 16) >> 12;
  v10 = v9 + v7 == 0;
  v11 = v9 + v7;
  v43 = v11;
  if ( v10 )
    return 3221225595LL;
  v13 = a5;
  Size = 8LL * (((unsigned int)MiFlags >> 13) & 1) + 16;
  v14 = 1;
  if ( (a5 & 0x80000) == 0 )
    v14 = (unsigned __int16)a4[1] + 1;
  v15 = 7LL * v14;
  PoolWithTag = ExAllocatePoolWithTag(
                  NonPagedPoolNx,
                  v15 * 8 + 8LL * (((unsigned int)MiFlags >> 13) & 1) + 144,
                  (a5 & 0x80000) != 0 ? 1631808845 : 1766026573);
  v17 = PoolWithTag;
  if ( !PoolWithTag )
  {
    dword_1403882F8 = 12;
    return 3221225626LL;
  }
  memset(PoolWithTag, 0, 0xB8uLL);
  v37 = &v17[v15 + 16];
  v18 = ExAllocatePoolWithTag((POOL_TYPE)-2147483647, 8LL * v11, 0x74536D4Du);
  if ( !v18 )
  {
    dword_1403882F8 = 13;
    ExFreePoolWithTag(v17, 0);
    return 3221225626LL;
  }
  v19 = ExAllocatePoolWithTag(PagedPool, 0x90uLL, 0x6765534Du);
  v20 = v19;
  if ( !v19 )
  {
    dword_1403882F8 = 13;
    ExFreePoolWithTag(v18, 0);
    v21 = -1073741670;
LABEL_50:
    ExFreePoolWithTag(v17, 0);
    return (unsigned int)v21;
  }
  memset(v19, 0, 0x90uLL);
  v20[2] = v11;
  *((_QWORD *)v20 + 5) = 0LL;
  *((_QWORD *)v20 + 8) = v18;
  *(_QWORD *)v20 = v17;
  *((_QWORD *)v20 + 7) = v20 + 18;
  *((_QWORD *)v20 + 3) = (unsigned __int64)v11 << 12;
  v20[34] = *(_DWORD *)(a3 + 24);
  v20[35] = *(_DWORD *)(a3 + 16);
  v20[32] = *a6;
  *((_QWORD *)v20 + 9) = *(_QWORD *)a3 + *(unsigned int *)(a3 + 28);
  *((_QWORD *)v20 + 11) = *(_QWORD *)(a3 + 32);
  *((_QWORD *)v20 + 12) = *(_QWORD *)(a3 + 40);
  v20[26] = *(unsigned __int16 *)(a3 + 50);
  *((_WORD *)v20 + 55) = *(_WORD *)(a3 + 52);
  *((_WORD *)v20 + 54) = *(_WORD *)(a3 + 54);
  *((_WORD *)v20 + 56) = *(_WORD *)(a3 + 56);
  *((_WORD *)v20 + 57) = *(_WORD *)(a3 + 58);
  *((_WORD *)v20 + 59) = *(_WORD *)(a3 + 60);
  v20[33] = *(_DWORD *)(a3 + 64);
  if ( *(_DWORD *)(a3 + 68) || (v22 = 0, *(_DWORD *)(a3 + 28)) )
    v22 = 1;
  *((_BYTE *)v20 + 122) = v22;
  *((_WORD *)v20 + 58) = a4[9];
  *((_WORD *)v20 + 60) = *a4;
  v20[31] = *(_DWORD *)(a3 + 20);
  *v17 = v20;
  v17[2] = v17 + 1;
  v17[1] = v17 + 1;
  v17[14] = 1LL;
  v17[3] = 1LL;
  if ( (a5 & 1) == 0 )
    v17[6] = 1LL;
  *((_DWORD *)v17 + 22) = -1;
  v23 = (*((_DWORD *)v17 + 14) ^ (a1 << 20)) & 0x3F00000;
  v17[13] = 0LL;
  *((_DWORD *)v17 + 14) = *((_DWORD *)v17 + 14) ^ v23 | 0xA2;
  memset(v37, 0, Size);
  v17[12] = v37;
  *((_BYTE *)v20 + 14) = *((_BYTE *)v20 + 14) & 0x7F | (*(_BYTE *)(a3 + 104) << 7);
  v17[16] = v17;
  *((_QWORD *)v20 + 4) = *(_QWORD *)a3;
  v17[17] = v18;
  if ( (a5 & 0x80000) == 0 )
  {
    v29 = *(unsigned int *)(a3 + 24);
    if ( (_DWORD)v29 )
    {
      v30 = *(unsigned int *)(a3 + 12);
      v31 = v30 + v29 - 1;
      if ( v31 > (unsigned int)v29 )
      {
        v32 = (((v31 & ~((_DWORD)v30 - 1) & 0xFFF) + 4095) >> 12)
            + (((unsigned int)~(v30 - 1) >> 12) & ((unsigned __int64)(v30 + v29 - 1) >> 12));
        *((_DWORD *)v17 + 43) = v32;
        if ( v32 <= v11 )
        {
          v43 = v11 - v32;
          *((_DWORD *)v17 + 42) = *(_DWORD *)(a3 + 24) >> 9;
          v33 = *((_WORD *)v17 + 80);
          *((_WORD *)v17 + 81) = *((_WORD *)v17 + 81) & 0xF | (16 * (*(_WORD *)(a3 + 24) & 0x1FF));
          *((_WORD *)v17 + 80) = v33 & 0xFFC1 | 2;
          SubsectionPte = MiMakeSubsectionPte((__int64)(v17 + 16));
          v46 = 0;
          v35 = 0x7FFFFFFF;
          *((_BYTE *)v20 + 14) = *((_BYTE *)v20 + 14) & 0xC1 | 2;
          *((_DWORD *)v17 + 45) = 0;
          if ( *((_DWORD *)v17 + 43) )
          {
            v36 = 0;
            do
            {
              if ( v36 >= *(_DWORD *)(a3 + 24) )
              {
                *v18 = 0LL;
                if ( (unsigned __int64)v18 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v18 <= 0xFFFFF6FB7DBED7F8uLL )
                  MiWritePteShadow();
                *((_DWORD *)v17 + 45) ^= v35 & (*((_DWORD *)v17 + 45) ^ (*((_DWORD *)v17 + 45) + 1));
              }
              else
              {
                *v18 = SubsectionPte;
                if ( (unsigned __int64)v18 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v18 <= 0xFFFFF6FB7DBED7F8uLL )
                  MiWritePteShadow();
              }
              v36 += 4096;
              ++v18;
              ++v46;
            }
            while ( v46 < *((_DWORD *)v17 + 43) );
            v13 = a5;
          }
          goto LABEL_48;
        }
        dword_1403882F8 = 17;
      }
      else
      {
        dword_1403882F8 = 50;
      }
    }
    else
    {
      dword_1403882F8 = 49;
    }
    ExFreePoolWithTag(v20, 0);
    v21 = -1073741701;
    goto LABEL_50;
  }
  *((_DWORD *)v17 + 43) = v11;
  *((_DWORD *)v17 + 42) = *(__int64 *)a6 >> 9;
  *((_WORD *)v17 + 81) = *((_WORD *)v17 + 81) & 0xF | (16 * (*(_WORD *)a6 & 0x1FF));
  *((_BYTE *)v20 + 123) |= 8u;
  *((_BYTE *)v20 + 122) = 1;
  *((_WORD *)v17 + 80) = v17[20] & 0xFFC1 | 0xE;
  MiMakeSubsectionPte((__int64)(v17 + 16));
  *((_BYTE *)v20 + 14) = *((_BYTE *)v20 + 14) & 0xC1 | 0xE;
  v45 = 0;
  DemandZeroPte = MiMakeDemandZeroPte(7);
  v28 = 0;
  if ( (_DWORD)v24 )
  {
    v38 = v24;
    do
    {
      if ( v28 >= *v25 )
      {
        *v18 = DemandZeroPte;
        if ( (unsigned __int64)v18 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)v18 > 0xFFFFF6FB7DBED7F8uLL )
          goto LABEL_27;
      }
      else
      {
        *v18 = v26;
        if ( (unsigned __int64)v18 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)v18 > 0xFFFFF6FB7DBED7F8uLL )
          goto LABEL_27;
      }
      MiWritePteShadow();
      v25 = a6;
      v24 = v38;
LABEL_27:
      ++v18;
      v28 = v45 + 4096;
      --v24;
      v45 += 4096;
      v38 = v24;
    }
    while ( v24 );
  }
  *((_QWORD *)v20 + 6) = v11;
  *((_DWORD *)v17 + 45) = 0;
LABEL_48:
  v21 = MiParseImageSectionHeaders(v13, (_DWORD)v17, a2, v39, a3, v43);
  if ( v21 < 0 )
  {
    ExFreePoolWithTag(v20, 0);
    goto LABEL_50;
  }
  *a7 = v17;
  return 0LL;
}
