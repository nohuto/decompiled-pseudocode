/*
 * XREFs of PopEtEnergyTrackerQuery @ 0x14051D9F0
 * Callers:
 *     NtPowerInformation @ 0x1405203C4 (NtPowerInformation.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     KeQueryTimelineBitmapTime @ 0x140060590 (KeQueryTimelineBitmapTime.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140069270 (KiQueryUnbiasedInterruptTime.c)
 *     PopAcquireRwLockExclusive @ 0x140074E68 (PopAcquireRwLockExclusive.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PopEtDataSectionCopyData @ 0x14051E6C4 (PopEtDataSectionCopyData.c)
 *     PopEtDataSectionReserve @ 0x14051E710 (PopEtDataSectionReserve.c)
 *     PopEtDataSectionStart @ 0x14051E75C (PopEtDataSectionStart.c)
 *     PsEnumProcesses @ 0x1405385E4 (PsEnumProcesses.c)
 *     PopEtEnergyTrackerCleanupAggregates @ 0x140567CA4 (PopEtEnergyTrackerCleanupAggregates.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall PopEtEnergyTrackerQuery(ULONG_PTR a1, __int64 a2, unsigned int a3)
{
  char *v5; // rbx
  char v6; // r15
  int v7; // esi
  char *v8; // r15
  unsigned int v9; // esi
  unsigned int v10; // r12d
  _QWORD *v11; // r11
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  _QWORD **i; // rdx
  unsigned __int16 *v15; // rdx
  __int64 v16; // rax
  unsigned int v17; // r15d
  int v18; // esi
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  char *v22; // r15
  __m128i v23; // xmm0
  __int64 v24; // rsi
  __int64 v25; // r14
  size_t v26; // rbx
  char *v27; // r11
  char *v28; // r10
  __int64 v29; // rdx
  unsigned __int8 *v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  size_t v33; // r13
  size_t v34; // r12
  size_t v35; // r15
  int v36; // edx
  __int64 v37; // rdx
  __int64 *v38; // rdx
  unsigned __int64 v39; // r8
  __int64 v40; // rbx
  __int64 v41; // rax
  _DWORD *v42; // rsi
  int v43; // ecx
  __int64 v44; // rdx
  int TimelineBitmapTime; // eax
  __int64 v46; // rdx
  int v47; // r9d
  int v48; // r9d
  int v49; // r9d
  int v50; // r9d
  int v51; // r9d
  int v52; // r9d
  size_t v53; // rax
  size_t v54; // rax
  __int64 v55; // rax
  __int64 j; // r11
  unsigned __int64 v57; // r9
  __int64 *v58; // rdx
  size_t Size; // [rsp+40h] [rbp-158h] BYREF
  PVOID Object; // [rsp+48h] [rbp-150h] BYREF
  unsigned __int8 *v62; // [rsp+50h] [rbp-148h]
  unsigned int v63; // [rsp+58h] [rbp-140h]
  int v64; // [rsp+5Ch] [rbp-13Ch]
  int v65; // [rsp+60h] [rbp-138h]
  __m128i v66; // [rsp+68h] [rbp-130h] BYREF
  char *v67; // [rsp+78h] [rbp-120h]
  __int64 v68; // [rsp+80h] [rbp-118h]
  _QWORD *v69; // [rsp+88h] [rbp-110h]
  _DWORD v70[8]; // [rsp+90h] [rbp-108h] BYREF
  _DWORD v71[8]; // [rsp+B0h] [rbp-E8h] BYREF
  _QWORD v72[4]; // [rsp+D0h] [rbp-C8h] BYREF
  size_t v73; // [rsp+F0h] [rbp-A8h]
  __int64 v74; // [rsp+F8h] [rbp-A0h]
  __int64 v75; // [rsp+100h] [rbp-98h]
  __int64 v76; // [rsp+108h] [rbp-90h] BYREF
  __int64 v77; // [rsp+110h] [rbp-88h]
  __int64 *v78; // [rsp+118h] [rbp-80h]
  __int64 v79; // [rsp+120h] [rbp-78h]
  __int64 v80; // [rsp+128h] [rbp-70h]
  _DWORD v81[8]; // [rsp+130h] [rbp-68h] BYREF
  _QWORD v82[4]; // [rsp+150h] [rbp-48h] BYREF

  v5 = 0LL;
  Object = 0LL;
  v6 = 0;
  if ( !PopEtGlobals )
  {
    v7 = -1073741637;
    goto LABEL_79;
  }
  v7 = ObpReferenceObjectByHandleWithTag(a1, 0x74456F50u, (__int64)&Object, 0LL, 0LL);
  if ( v7 < 0 )
  {
    v5 = (char *)Object;
    goto LABEL_79;
  }
  memset(v82, 0, sizeof(v82));
  LODWORD(v82[0]) = 2;
  v5 = (char *)Object;
  v82[2] = Object;
  v7 = PsEnumProcesses(PopEtProcessEnumSnapshotCallback, v82);
  if ( v7 < 0 )
    goto LABEL_79;
  PopAcquireRwLockExclusive((ULONG_PTR)(v5 + 16));
  v8 = v5 + 48;
  v63 = *((_DWORD *)v5 + 12);
  v9 = 0;
  v10 = 44;
  v11 = 0LL;
  while ( 1 )
  {
    if ( v11 )
    {
      v12 = v11[1] & (-1LL << (*((_DWORD *)v8 + 1) & 0x1F));
      v13 = *((_QWORD *)v8 + 1)
          + 8
          * ((HIBYTE(v12)
            + 37
            * (BYTE6(v12)
             + 37
             * (BYTE5(v12)
              + 37
              * (BYTE4(v12)
               + 37
               * ((((_DWORD)v11[1] & (unsigned int)(-1 << (*((_DWORD *)v8 + 1) & 0x1F))) >> 24)
                + 37
                * ((unsigned __int8)(((_DWORD)v11[1] & (unsigned int)(-1 << (*((_DWORD *)v8 + 1) & 0x1F))) >> 16)
                 + 37
                 * ((unsigned __int8)((unsigned __int16)(v11[1] & (-1 << (*((_DWORD *)v8 + 1) & 0x1F))) >> 8)
                  + 37 * ((unsigned __int8)v12 + 11623883)))))))) & ((*((_DWORD *)v8 + 1) >> 5) - 1));
    }
    else
    {
      v11 = (_QWORD *)*((_QWORD *)v8 + 1);
      v13 = (__int64)v11;
    }
    if ( !v11 )
      goto LABEL_11;
    if ( (*v11 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v5 = (char *)Object;
    v11 = (_QWORD *)*v11;
    if ( ((unsigned __int8)v11 & 1) != 0 )
    {
LABEL_11:
      for ( i = (_QWORD **)(v13 + 8);
            (unsigned __int64)i < *((_QWORD *)v8 + 1) + 8 * ((unsigned __int64)*((unsigned int *)v8 + 1) >> 5);
            ++i )
      {
        v11 = *i;
        if ( ((unsigned __int8)*i & 1) == 0 )
          goto LABEL_14;
      }
      v11 = 0LL;
    }
LABEL_14:
    if ( !v11 )
      break;
    v15 = (unsigned __int16 *)v11[2];
    if ( v9 >= 0x10000000 )
    {
      v7 = -1073741619;
      goto LABEL_78;
    }
    v10 += v15[39];
    v9 += v15[37] + v15[38] + v15[36];
    v16 = v11[3];
    if ( v16 )
      v9 += ((unsigned int)(*(_QWORD *)(v16 + 24) >> 16) >> 1) & 0x1FFFFFFF;
  }
  LODWORD(Size) = 72;
  memset(v72, 0, sizeof(v72));
  HIDWORD(v72[1]) = 96;
  LODWORD(v72[2]) = 8;
  v17 = v63;
  PopEtDataSectionReserve(v72, v63, &Size);
  memset(v81, 0, sizeof(v81));
  v81[3] = 432;
  v81[4] = 8;
  PopEtDataSectionReserve(v81, v17, &Size);
  memset(v71, 0, sizeof(v71));
  v71[3] = 1;
  v71[4] = 4;
  PopEtDataSectionReserve(v71, v10, &Size);
  memset(v70, 0, sizeof(v70));
  v70[3] = 2;
  v70[4] = 2;
  PopEtDataSectionReserve(v70, v9, &Size);
  v18 = Size;
  if ( (unsigned int)Size > a3 || (unsigned int)Size >= 0x7FFFFFFF )
  {
    if ( a3 >= 0xC )
    {
      *(_QWORD *)a2 = 0LL;
      *(_DWORD *)a2 = 2097170;
      *(_DWORD *)(a2 + 8) = v18;
    }
    v7 = -1073741789;
    goto LABEL_78;
  }
  memset((void *)a2, 0, (unsigned int)Size);
  PopEtDataSectionStart(v72, a2);
  PopEtDataSectionStart(v81, v19);
  PopEtDataSectionStart(v71, v20);
  PopEtDataSectionStart(v70, v21);
  v79 = a2;
  *(_DWORD *)a2 = 2097170;
  *(_DWORD *)(a2 + 4) = 72;
  *(_DWORD *)(a2 + 8) = v18;
  *(_DWORD *)(a2 + 12) = *((_DWORD *)v5 + 150);
  *(_DWORD *)(a2 + 24) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *(_DWORD *)(a2 + 36) = v72[0];
  *(_DWORD *)(a2 + 40) = v17;
  *(_DWORD *)(a2 + 56) = 1048672;
  *(_DWORD *)(a2 + 52) = v71[5];
  *(_WORD *)(a2 + 60) = 12;
  v22 = (char *)Object;
  PopEtDataSectionCopyData(v71, (char *)Object + 32, 12LL);
  *(_DWORD *)(a2 + 44) = v71[5];
  PopEtDataSectionCopyData(v71, v22 + 604, 16LL);
  v23 = *(__m128i *)(v22 + 620);
  v66 = v23;
  v66.m128i_i32[0] = *((_DWORD *)v22 + 151) + _mm_cvtsi128_si32(v23);
  v66.m128i_i32[1] = *((_DWORD *)v22 + 152) + v23.m128i_i32[1];
  v66.m128i_i32[2] = *((_DWORD *)v22 + 153) + v23.m128i_i32[2];
  v66.m128i_i32[3] = *((_DWORD *)v22 + 154) + v23.m128i_i32[3];
  *(_DWORD *)(a2 + 48) = v71[5];
  PopEtDataSectionCopyData(v71, &v66, 16LL);
  v24 = 0LL;
  v25 = v72[3];
  while ( 1 )
  {
    v26 = 314159LL;
    v27 = v22 + 48;
    v28 = v22 + 48;
    v67 = v22 + 48;
    if ( !v24 )
    {
      v37 = *((_QWORD *)v22 + 7);
      v69 = (_QWORD *)v37;
      v24 = v37;
      v68 = v37;
      goto LABEL_29;
    }
    v68 = v24;
    v29 = *(_QWORD *)(v24 + 8) & (-1LL << (*((_DWORD *)v22 + 13) & 0x1F));
    v63 = *((_DWORD *)v22 + 13) >> 5;
    v76 = v29;
    v30 = (unsigned __int8 *)&v76;
    v62 = (unsigned __int8 *)&v76;
    v31 = 8LL;
    v77 = 8LL;
    v73 = 314159LL;
    v32 = 314159LL;
    v74 = 314159LL;
    v75 = 314159LL;
    v33 = 314159LL;
    v34 = 314159LL;
    v35 = 314159LL;
    v36 = 314159;
    Size = 314159LL;
    while ( v31 >= 8 )
    {
      Size = *v30 + 37 * v73;
      Size = v30[1] + 37 * Size;
      Size = v30[2] + 37 * Size;
      Size = v30[3] + 37 * Size;
      Size = v30[4] + 37 * Size;
      Size = v30[5] + 37 * Size;
      Size = v30[6] + 37 * Size;
      v73 = v30[7] + 37 * Size;
      v32 = v73;
      v36 = v73;
      Size = v73;
      v30 += 8;
      v62 = v30;
      v31 -= 8LL;
      v77 = v31;
      v74 = v73;
      v75 = v73;
      v33 = v73;
      v34 = v73;
      v35 = v73;
      v26 = v73;
    }
    if ( v31 >= 1 )
    {
      v36 = v32;
      v47 = v31 - 1;
      if ( !v47 )
        goto LABEL_66;
      v48 = v47 - 1;
      if ( !v48 )
        goto LABEL_65;
      v49 = v48 - 1;
      if ( !v49 )
        goto LABEL_64;
      v50 = v49 - 1;
      if ( !v50 )
        goto LABEL_63;
      v51 = v50 - 1;
      if ( !v51 )
      {
        v54 = v75;
        goto LABEL_62;
      }
      v52 = v51 - 1;
      if ( !v52 )
      {
        v53 = v74;
        goto LABEL_60;
      }
      if ( v52 == 1 )
      {
        v53 = 37 * v32 + *v30;
        Size = v53;
        v62 = ++v30;
LABEL_60:
        v54 = 37 * v53 + *v30;
        Size = v54;
        v62 = ++v30;
LABEL_62:
        v33 = *v30 + 37 * v54;
        Size = v33;
        v62 = ++v30;
LABEL_63:
        v34 = *v30 + 37 * v33;
        Size = v34;
        v62 = ++v30;
LABEL_64:
        v35 = *v30 + 37 * v34;
        Size = v35;
        v62 = ++v30;
LABEL_65:
        v26 = *v30 + 37 * v35;
        Size = v26;
        v62 = ++v30;
LABEL_66:
        v55 = *v30;
        v36 = v55 + 37 * v26;
        Size = v55 + 37 * v26;
        v62 = v30 + 1;
      }
    }
    v37 = *((_QWORD *)v27 + 1) + 8LL * (v36 & (v63 - 1));
    v69 = (_QWORD *)v37;
LABEL_29:
    if ( !v24 )
      goto LABEL_34;
    if ( (*(_QWORD *)v24 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
    {
      v25 = v72[3];
      v37 = (__int64)v69;
      v24 = v68;
      v28 = v67;
    }
    if ( v24 && (v24 = *(_QWORD *)v24, (v24 & 1) == 0) )
    {
LABEL_38:
      v68 = v24;
    }
    else
    {
LABEL_34:
      v38 = (__int64 *)(v37 + 8);
      v39 = *((_QWORD *)v28 + 1) + 8 * ((unsigned __int64)*((unsigned int *)v28 + 1) >> 5);
      while ( 1 )
      {
        v78 = v38;
        if ( (unsigned __int64)v38 >= v39 )
          break;
        v24 = *v38;
        if ( (*v38 & 1) == 0 )
        {
          v69 = v38;
          goto LABEL_38;
        }
        ++v38;
      }
      v24 = 0LL;
    }
    if ( !v24 )
      break;
    v40 = *(_QWORD *)(v24 + 16);
    *(_QWORD *)v25 = *(_QWORD *)(v24 + 32);
    *(_DWORD *)(v25 + 8) = *(_DWORD *)(v24 + 40);
    *(_DWORD *)(v25 + 12) = (unsigned __int16)*(_DWORD *)(v24 + 44);
    *(_DWORD *)(v25 + 64) = *(_DWORD *)(v24 + 504);
    *(_DWORD *)(v25 + 68) = *(_DWORD *)(v24 + 508);
    *(_OWORD *)(v25 + 72) = *(_OWORD *)(v24 + 480);
    *(_QWORD *)(v25 + 88) = *(_QWORD *)(v24 + 496);
    *(_DWORD *)(v25 + 20) = **(_DWORD **)(v40 + 32);
    *(_DWORD *)(v25 + 24) = *(_DWORD *)(*(_QWORD *)(v40 + 32) + 4LL);
    *(_DWORD *)(v25 + 40) = v71[5];
    *(_WORD *)(v25 + 52) = *(_WORD *)(v40 + 78);
    PopEtDataSectionCopyData(v71, *(_QWORD *)(v40 + 64), *(unsigned __int16 *)(v40 + 78));
    *(_WORD *)(v25 + 44) = *(_WORD *)(v40 + 72);
    *(_DWORD *)(v25 + 16) = v70[5];
    PopEtDataSectionCopyData(v70, *(_QWORD *)(v40 + 40), 2 * (unsigned int)*(unsigned __int16 *)(v40 + 72));
    *(_WORD *)(v25 + 46) = *(_WORD *)(v40 + 74);
    *(_DWORD *)(v25 + 28) = v70[5];
    PopEtDataSectionCopyData(v70, *(_QWORD *)(v40 + 48), 2 * (unsigned int)*(unsigned __int16 *)(v40 + 74));
    *(_WORD *)(v25 + 48) = *(_WORD *)(v40 + 76);
    *(_DWORD *)(v25 + 32) = v70[5];
    PopEtDataSectionCopyData(v70, *(_QWORD *)(v40 + 56), 2 * (unsigned int)*(unsigned __int16 *)(v40 + 76));
    v41 = *(_QWORD *)(v24 + 24);
    if ( v41 )
    {
      *(_WORD *)(v25 + 50) = (unsigned __int16)WORD1(*(_QWORD *)(v41 + 24)) >> 1;
      *(_DWORD *)(v25 + 36) = v70[5];
      PopEtDataSectionCopyData(v70, *(_QWORD *)(v24 + 24) + 32LL, 2 * (unsigned int)*(unsigned __int16 *)(v25 + 50));
    }
    else
    {
      *(_WORD *)(v25 + 50) = 0;
      *(_DWORD *)(v25 + 36) = v70[5];
    }
    *(_DWORD *)(v25 + 56) = v81[5];
    *(_DWORD *)(v25 + 60) = 432;
    PopEtDataSectionCopyData(v81, v24 + 48, v81[3]);
    if ( (unsigned int)(HIDWORD(v72[1]) + HIDWORD(v72[2])) <= LODWORD(v72[1]) )
    {
      HIDWORD(v72[2]) += HIDWORD(v72[1]);
      v25 += HIDWORD(v72[1]);
      v72[3] = v25;
    }
    v22 = (char *)Object;
  }
  v64 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v65 = KiQueryUnbiasedInterruptTime() / 0x2710uLL;
  v80 = MEMORY[0xFFFFF78000000014];
  v42 = Object;
  v43 = v64;
  v44 = v79;
  *(_DWORD *)(v79 + 16) = v64 - *((_DWORD *)Object + 148);
  *(_DWORD *)(v44 + 20) = v65 - v42[149];
  *(_DWORD *)(v44 + 28) = v43;
  TimelineBitmapTime = KeQueryTimelineBitmapTime();
  *(_DWORD *)(v46 + 32) = TimelineBitmapTime;
  *(_QWORD *)(v46 + 64) = v80;
  for ( j = 0LL; ; *(_DWORD *)(j + 484) &= ~0x80000000 )
  {
    if ( j )
    {
      v57 = *(_QWORD *)(j + 8) & (-1LL << (v42[17] & 0x1F));
      v58 = (__int64 *)(*((_QWORD *)v42 + 9)
                      + 8
                      * ((HIBYTE(v57)
                        + 37
                        * (BYTE6(v57)
                         + 37
                         * (BYTE5(v57)
                          + 37
                          * (BYTE4(v57)
                           + 37
                           * (((*(_DWORD *)(j + 8) & (unsigned int)(-1 << (v42[17] & 0x1F))) >> 24)
                            + 37
                            * ((unsigned __int8)((*(_DWORD *)(j + 8) & (unsigned int)(-1 << (v42[17] & 0x1F))) >> 16)
                             + 37
                             * (37 * ((unsigned __int8)v57 + 11623883)
                              + (unsigned __int8)((unsigned __int16)(*(_WORD *)(j + 8) & (-1 << (v42[17] & 0x1F))) >> 8)))))))) & ((v42[17] >> 5) - 1)));
    }
    else
    {
      j = *((_QWORD *)v42 + 9);
      v58 = (__int64 *)j;
    }
    if ( !j || (j = *(_QWORD *)j, (j & 1) != 0) )
    {
      for ( ++v58; (unsigned __int64)v58 < *((_QWORD *)v42 + 9) + 8 * ((unsigned __int64)(unsigned int)v42[17] >> 5); ++v58 )
      {
        j = *v58;
        if ( (*v58 & 1) == 0 )
          goto LABEL_74;
      }
      j = 0LL;
    }
LABEL_74:
    if ( !j )
      break;
  }
  v5 = (char *)Object;
  PopEtEnergyTrackerCleanupAggregates(Object, v58);
  ++*((_DWORD *)v5 + 150);
  v42[148] = v64;
  v42[149] = v65;
  *(_QWORD *)(v5 + 604) = 0LL;
  *(_QWORD *)(v5 + 612) = 0LL;
  *(__m128i *)(v5 + 620) = v66;
  v7 = 0;
LABEL_78:
  v6 = 1;
LABEL_79:
  if ( v6 )
    PopReleaseRwLock((ULONG_PTR)(v5 + 16));
  if ( v5 )
    ObfDereferenceObjectWithTag(v5, 0x74456F50u);
  return (unsigned int)v7;
}
