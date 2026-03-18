/*
 * XREFs of MiBuildImageControlArea @ 0x1404BD514
 * Callers:
 *     MiCreateImageFileMap @ 0x1404BF468 (MiCreateImageFileMap.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiUpdateSystemProtoPtesTree @ 0x14004B350 (MiUpdateSystemProtoPtesTree.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 *     MiMakeSubsectionPte @ 0x1401A666C (MiMakeSubsectionPte.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MiParseImageSectionHeaders @ 0x1404BDAA0 (MiParseImageSectionHeaders.c)
 */

__int64 __fastcall MiBuildImageControlArea(
        int a1,
        int a2,
        __int64 a3,
        _WORD *a4,
        unsigned int a5,
        unsigned int *a6,
        _QWORD *a7)
{
  unsigned int v9; // r13d
  unsigned int v11; // ebx
  __int64 v12; // rdi
  SIZE_T v13; // rbp
  _QWORD *PoolWithTag; // rax
  _QWORD *v15; // rsi
  __int64 *v16; // rax
  __int64 *v17; // rdi
  int v18; // ebx
  _QWORD *v19; // rax
  _QWORD *v20; // r15
  bool v21; // al
  unsigned int v22; // r12d
  __int64 v23; // r9
  unsigned int v24; // ebp
  __int64 v25; // r12
  BOOL v26; // eax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r10
  __int64 v30; // r11
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rcx
  unsigned int v34; // r9d
  unsigned int v35; // r8d
  __int16 v36; // ax
  char v37; // dl
  __int64 v38; // rax
  BOOL v39; // eax
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r10
  int v43; // r11d
  int v44; // [rsp+30h] [rbp-48h]
  __int64 v45; // [rsp+38h] [rbp-40h]

  v44 = (unsigned __int16)a4[1];
  v9 = (*(_DWORD *)(a3 + 16) >> 12) + ((*(_DWORD *)(a3 + 16) & 0xFFF) != 0);
  if ( !v9 )
    return 3221225595LL;
  v11 = a5;
  v12 = 1LL;
  if ( ((a5 >> 19) & 1) == 0 )
    v12 = (unsigned int)(unsigned __int16)a4[1] + 1;
  v13 = 8 * (7 * v12 + (((unsigned __int64)(unsigned int)MiFlags >> 13) & 1)) + 176;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v13, ((unsigned __int8)((a5 & 0x80000) == 0) << 27) + 1631808845);
  v15 = PoolWithTag;
  if ( !PoolWithTag )
  {
    dword_1403CB498 = 12;
    return 3221225626LL;
  }
  memset(PoolWithTag, 0, v13);
  v45 = (__int64)&v15[7 * v12 + 16];
  *(_QWORD *)(v45 + 24) = *(_QWORD *)(v45 + 24) & 0xFFFFFFFFFFFFFFF8uLL | 2;
  v16 = (__int64 *)ExAllocatePoolWithTag((POOL_TYPE)-2147483647, 8LL * v9, 0x74536D4Du);
  v17 = v16;
  if ( !v16 )
  {
    dword_1403CB498 = 13;
    v18 = -1073741670;
LABEL_50:
    ExFreePoolWithTag(v15, 0);
    return (unsigned int)v18;
  }
  memset(v16, 0, 8LL * v9);
  v19 = ExAllocatePoolWithTag(PagedPool, 0x90uLL, 0x6765534Du);
  v20 = v19;
  if ( !v19 )
  {
    dword_1403CB498 = 13;
    v18 = -1073741670;
LABEL_46:
    if ( v17 )
      ExFreePoolWithTag(v17, 0);
    if ( v20 )
      ExFreePoolWithTag(v20, 0);
    goto LABEL_50;
  }
  memset(v19, 0, 0x90uLL);
  v20[5] = 0LL;
  v20[8] = v17;
  *v20 = v15;
  *((_DWORD *)v20 + 2) = v9;
  v20[7] = v20 + 9;
  v20[3] = (unsigned __int64)v9 << 12;
  *((_DWORD *)v20 + 34) = *(_DWORD *)(a3 + 24);
  *((_DWORD *)v20 + 35) = *(_DWORD *)(a3 + 16);
  *((_DWORD *)v20 + 32) = *a6;
  v20[9] = *(_QWORD *)a3 + *(unsigned int *)(a3 + 28);
  v20[11] = *(_QWORD *)(a3 + 32);
  v20[12] = *(_QWORD *)(a3 + 40);
  *((_DWORD *)v20 + 26) = *(unsigned __int16 *)(a3 + 50);
  *((_WORD *)v20 + 55) = *(_WORD *)(a3 + 52);
  *((_WORD *)v20 + 54) = *(_WORD *)(a3 + 54);
  *((_WORD *)v20 + 56) = *(_WORD *)(a3 + 56);
  *((_WORD *)v20 + 57) = *(_WORD *)(a3 + 58);
  *((_WORD *)v20 + 59) = *(_WORD *)(a3 + 60);
  *((_DWORD *)v20 + 33) = *(_DWORD *)(a3 + 64);
  v21 = *(_DWORD *)(a3 + 68) || *(_DWORD *)(a3 + 28);
  *((_BYTE *)v20 + 122) = v21;
  *((_WORD *)v20 + 58) = a4[9];
  *((_WORD *)v20 + 60) = *a4;
  *((_DWORD *)v20 + 31) = *(_DWORD *)(a3 + 20);
  *v15 = v20;
  v15[2] = v15 + 1;
  v15[1] = v15 + 1;
  v15[14] = 1LL;
  v15[3] = 1LL;
  if ( (a5 & 1) == 0 )
    v15[6] = 1LL;
  *((_DWORD *)v15 + 22) = -1;
  v15[13] = 0LL;
  v15[12] = v45;
  *((_DWORD *)v15 + 14) = *((_DWORD *)v15 + 14) ^ (*((_DWORD *)v15 + 14) ^ (a1 << 20)) & 0x3F00000 | 0xA2;
  v22 = 0;
  *((_BYTE *)v20 + 14) = *((_BYTE *)v20 + 14) & 0x7F | (*(_BYTE *)(a3 + 104) << 7);
  v15[16] = v15;
  v20[4] = *(_QWORD *)a3;
  v15[17] = v17;
  if ( ((a5 >> 19) & 1) != 0 )
  {
    *((_DWORD *)v15 + 43) = v9;
    *((_DWORD *)v15 + 42) = *(__int64 *)a6 >> 9;
    *((_WORD *)v15 + 81) = *((_WORD *)v15 + 81) & 0xF | (16 * (*(_WORD *)a6 & 0x1FF));
    *((_BYTE *)v20 + 123) |= 8u;
    *((_BYTE *)v20 + 122) = 1;
    *((_WORD *)v15 + 80) = v15[20] & 0xFFC1 | 0xE;
    MiMakeSubsectionPte((__int64)(v15 + 16));
    *((_BYTE *)v20 + 14) = *((_BYTE *)v20 + 14) & 0xC1 | 0xE;
    MiMakeDemandZeroPte(7);
    v24 = 0;
    v25 = v23;
    while ( 1 )
    {
      v26 = MiPteInShadowRange((unsigned __int64)v17);
      if ( v24 >= *a6 )
      {
        *v17 = v30;
        if ( v26 )
        {
          v31 = v30;
          goto LABEL_25;
        }
      }
      else
      {
        *v17 = v29;
        if ( v26 )
        {
          v31 = v29;
LABEL_25:
          MiWritePteShadow(v27, v31, v28);
        }
      }
      v24 += 4096;
      ++v17;
      if ( !--v25 )
      {
        v11 = a5;
        v20[6] = v9;
        v17 -= v9;
        goto LABEL_45;
      }
    }
  }
  v32 = *(unsigned int *)(a3 + 24);
  if ( !(_DWORD)v32 )
  {
    dword_1403CB498 = 49;
LABEL_31:
    v18 = -1073741701;
    goto LABEL_46;
  }
  v33 = *(unsigned int *)(a3 + 12);
  v34 = v33 + v32 - 1;
  if ( v34 <= (unsigned int)v32 )
  {
    dword_1403CB498 = 50;
    goto LABEL_31;
  }
  v35 = ((((unsigned __int16)v34 & (unsigned __int16)~(v33 - 1) & 0xFFFu) + 4095) >> 12)
      + (((unsigned int)~(v33 - 1) >> 12) & ((unsigned __int64)(v33 + v32 - 1) >> 12));
  *((_DWORD *)v15 + 43) = v35;
  if ( v35 > v9 )
  {
    dword_1403CB498 = 17;
    goto LABEL_31;
  }
  v9 -= v35;
  *((_DWORD *)v15 + 42) = *(_DWORD *)(a3 + 24) >> 9;
  v36 = *((_WORD *)v15 + 80);
  *((_WORD *)v15 + 81) = *((_WORD *)v15 + 81) & 0xF | (16 * (*(_WORD *)(a3 + 24) & 0x1FF));
  *((_WORD *)v15 + 80) = v36 & 0xFFC1 | 2;
  MiMakeSubsectionPte((__int64)(v15 + 16));
  *((_BYTE *)v20 + 14) = v37 | *((_BYTE *)v20 + 14) & 0xC3;
  v38 = *((unsigned int *)v15 + 43);
  if ( (_DWORD)v38 )
  {
    do
    {
      v39 = MiPteInShadowRange((unsigned __int64)v17);
      if ( v22 >= *(_DWORD *)(a3 + 24) )
      {
        *v17 = ZeroPte;
        if ( v39 )
          MiWritePteShadow(v40, ZeroPte, v41);
        *((_DWORD *)v15 + 45) ^= (*((_DWORD *)v15 + 45) ^ (*((_DWORD *)v15 + 45) + 1)) & 0x3FFFFFFF;
      }
      else
      {
        *v17 = v42;
        if ( v39 )
          MiWritePteShadow(v40, v42, v41);
      }
      v38 = *((unsigned int *)v15 + 43);
      v22 += 4096;
      ++v17;
    }
    while ( v43 + 1 < (unsigned int)v38 );
  }
  v17 -= v38;
LABEL_45:
  v18 = MiParseImageSectionHeaders(v11, (_DWORD)v15, a2, v44, a3, v9);
  if ( v18 < 0 )
    goto LABEL_46;
  MiUpdateSystemProtoPtesTree(v45, 1);
  *a7 = v15;
  return 0LL;
}
