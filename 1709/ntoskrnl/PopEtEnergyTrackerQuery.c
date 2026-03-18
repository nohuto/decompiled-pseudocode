/*
 * XREFs of PopEtEnergyTrackerQuery @ 0x140445B34
 * Callers:
 *     NtPowerInformation @ 0x1404E90A0 (NtPowerInformation.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140016D50 (KiQueryUnbiasedInterruptTime.c)
 *     KeQueryTimelineBitmapTime @ 0x140025A10 (KeQueryTimelineBitmapTime.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PopEtDataSectionCopyData @ 0x140446748 (PopEtDataSectionCopyData.c)
 *     PopEtDataSectionReserve @ 0x140446794 (PopEtDataSectionReserve.c)
 *     PopEtDataSectionStart @ 0x1404467E0 (PopEtDataSectionStart.c)
 *     PopEtEnergyTrackerCleanupAggregates @ 0x140446800 (PopEtEnergyTrackerCleanupAggregates.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     PsEnumProcesses @ 0x1404FD1C8 (PsEnumProcesses.c)
 */

__int64 __fastcall PopEtEnergyTrackerQuery(void *a1, __int64 a2, unsigned int a3)
{
  char *v5; // rbx
  char v6; // r12
  NTSTATUS v7; // esi
  char *v8; // r10
  unsigned int v9; // esi
  unsigned int v10; // r15d
  _QWORD *v11; // r9
  unsigned int v12; // r8d
  __int64 v13; // rcx
  _QWORD **i; // r9
  unsigned __int16 *v15; // rdx
  __int64 v16; // rax
  int v17; // esi
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  char *v21; // r13
  __m128i v22; // xmm0
  __int64 v23; // rsi
  __int64 v24; // r14
  unsigned int v25; // r15d
  char *v26; // r10
  int v27; // ebx
  unsigned __int8 *v28; // r8
  __int64 v29; // r9
  int v30; // edx
  __int64 v31; // rdx
  __int64 *v32; // rdx
  unsigned __int64 v33; // r8
  __int64 v34; // rbx
  __int64 v35; // rax
  char *v36; // rsi
  int v37; // ecx
  __int64 v38; // rdx
  int TimelineBitmapTime; // eax
  __int64 v40; // rdx
  int v41; // r9d
  int v42; // r9d
  int v43; // r9d
  int v44; // r9d
  int v45; // r9d
  int v46; // r9d
  __int64 j; // r9
  __int64 v48; // rcx
  __int64 *k; // r9
  unsigned int v51; // [rsp+30h] [rbp-148h]
  size_t Size; // [rsp+38h] [rbp-140h] BYREF
  __int64 *v53; // [rsp+40h] [rbp-138h]
  char *v54; // [rsp+48h] [rbp-130h]
  int v55; // [rsp+50h] [rbp-128h]
  int v56; // [rsp+54h] [rbp-124h]
  __m128i v57; // [rsp+58h] [rbp-120h] BYREF
  char *v58; // [rsp+68h] [rbp-110h]
  __int64 v59; // [rsp+70h] [rbp-108h]
  _QWORD *v60; // [rsp+78h] [rbp-100h]
  _DWORD v61[8]; // [rsp+80h] [rbp-F8h] BYREF
  _QWORD v62[4]; // [rsp+A0h] [rbp-D8h] BYREF
  _DWORD v63[8]; // [rsp+C0h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+E0h] [rbp-98h] BYREF
  __int64 v65; // [rsp+E8h] [rbp-90h] BYREF
  __int64 v66; // [rsp+F0h] [rbp-88h]
  __int64 *v67; // [rsp+F8h] [rbp-80h]
  __int64 v68; // [rsp+100h] [rbp-78h]
  __int64 v69; // [rsp+108h] [rbp-70h]
  _DWORD v70[8]; // [rsp+110h] [rbp-68h] BYREF
  _QWORD v71[4]; // [rsp+130h] [rbp-48h] BYREF
  __int64 v72; // [rsp+198h] [rbp+20h]

  v5 = 0LL;
  v6 = 0;
  if ( !PopEtGlobals )
  {
    v7 = -1073741637;
    goto LABEL_80;
  }
  v7 = ObReferenceObjectByHandle(
         a1,
         1u,
         *(POBJECT_TYPE *)(PopEtGlobals + 32),
         KeGetCurrentThread()->PreviousMode,
         &Object,
         0LL);
  v5 = (char *)Object;
  v54 = (char *)Object;
  if ( v7 >= 0 )
  {
    memset(v71, 0, sizeof(v71));
    LODWORD(v71[0]) = 2;
    v71[2] = Object;
    v7 = PsEnumProcesses(PopEtProcessEnumSnapshotCallback, v71);
    if ( v7 >= 0 )
    {
      PopAcquireRwLockExclusive((ULONG_PTR)(v5 + 16));
      v6 = 1;
      v8 = v5 + 48;
      v51 = *((_DWORD *)v5 + 12);
      v9 = 0;
      v10 = 44;
      v11 = 0LL;
      while ( 1 )
      {
        if ( v11 )
        {
          v12 = *((_DWORD *)v8 + 1);
          Size = v11[1] & (-1LL << (v12 & 0x1F));
          v13 = *((_QWORD *)v8 + 1)
              + 8LL
              * ((37
                * (BYTE6(Size)
                 + 37
                 * (BYTE5(Size)
                  + 37
                  * (BYTE4(Size)
                   + 37
                   * (BYTE3(Size) + 37 * (BYTE2(Size) + 37 * (BYTE1(Size) + 37 * ((unsigned __int8)Size + 11623883)))))))
                + HIBYTE(Size)) & ((v12 >> 5) - 1));
        }
        else
        {
          v13 = *((_QWORD *)v8 + 1);
          v11 = (_QWORD *)v13;
        }
        if ( !v11 )
          goto LABEL_11;
        if ( (*v11 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
          v5 = v54;
        v11 = (_QWORD *)*v11;
        if ( ((unsigned __int8)v11 & 1) != 0 )
        {
LABEL_11:
          for ( i = (_QWORD **)(v13 + 8);
                (unsigned __int64)i < *((_QWORD *)v8 + 1) + 8 * ((unsigned __int64)*((unsigned int *)v8 + 1) >> 5);
                ++i )
          {
            if ( (*(_DWORD *)i & 1) == 0 )
            {
              v11 = *i;
              goto LABEL_15;
            }
          }
          v11 = 0LL;
        }
LABEL_15:
        if ( !v11 )
          break;
        v15 = (unsigned __int16 *)v11[2];
        if ( v9 >= 0x10000000 )
        {
          v7 = -1073741619;
          goto LABEL_80;
        }
        v10 += v15[39];
        v9 += v15[37] + v15[38] + v15[36];
        v16 = v11[3];
        if ( v16 )
          v9 += ((unsigned int)(*(_QWORD *)(v16 + 24) >> 16) >> 1) & 0x1FFFFFFF;
      }
      LODWORD(Size) = 72;
      memset(v62, 0, sizeof(v62));
      HIDWORD(v62[1]) = 96;
      LODWORD(v62[2]) = 8;
      PopEtDataSectionReserve(v62, v51, &Size);
      memset(v70, 0, sizeof(v70));
      v70[3] = 432;
      v70[4] = 8;
      PopEtDataSectionReserve(v70, v51, &Size);
      memset(v63, 0, sizeof(v63));
      v63[3] = 1;
      v63[4] = 4;
      PopEtDataSectionReserve(v63, v10, &Size);
      memset(v61, 0, sizeof(v61));
      v61[3] = 2;
      v61[4] = 2;
      PopEtDataSectionReserve(v61, v9, &Size);
      v17 = Size;
      if ( (unsigned int)Size > a3 || (unsigned int)Size >= 0x7FFFFFFF )
      {
        if ( a3 >= 0xC )
        {
          *(_QWORD *)a2 = 0LL;
          *(_DWORD *)a2 = 2097170;
          *(_DWORD *)(a2 + 8) = v17;
        }
        v7 = -1073741789;
        goto LABEL_80;
      }
      memset((void *)a2, 0, (unsigned int)Size);
      PopEtDataSectionStart(v62, a2);
      PopEtDataSectionStart(v70, v18);
      PopEtDataSectionStart(v63, v19);
      PopEtDataSectionStart(v61, v20);
      v68 = a2;
      *(_DWORD *)a2 = 2097170;
      *(_DWORD *)(a2 + 4) = 72;
      *(_DWORD *)(a2 + 8) = v17;
      *(_DWORD *)(a2 + 12) = *((_DWORD *)v5 + 150);
      *(_DWORD *)(a2 + 24) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      *(_DWORD *)(a2 + 36) = v62[0];
      *(_DWORD *)(a2 + 40) = v51;
      *(_DWORD *)(a2 + 56) = 1048672;
      *(_DWORD *)(a2 + 52) = v63[5];
      *(_WORD *)(a2 + 60) = 12;
      v21 = v54;
      PopEtDataSectionCopyData(v63, v54 + 32, 12LL);
      *(_DWORD *)(a2 + 44) = v63[5];
      PopEtDataSectionCopyData(v63, v21 + 604, 16LL);
      v22 = *(__m128i *)(v21 + 620);
      v57 = v22;
      v57.m128i_i32[0] = *((_DWORD *)v21 + 151) + _mm_cvtsi128_si32(v22);
      v57.m128i_i32[1] = *((_DWORD *)v21 + 152) + v22.m128i_i32[1];
      v57.m128i_i32[2] = *((_DWORD *)v21 + 153) + v22.m128i_i32[2];
      v57.m128i_i32[3] = *((_DWORD *)v21 + 154) + v22.m128i_i32[3];
      *(_DWORD *)(a2 + 48) = v63[5];
      PopEtDataSectionCopyData(v63, &v57, 16LL);
      v23 = 0LL;
      v24 = v62[3];
      v25 = HIDWORD(v62[1]);
      while ( 1 )
      {
        v26 = v21 + 48;
        v58 = v21 + 48;
        if ( !v23 )
        {
          v31 = *((_QWORD *)v21 + 7);
          v60 = (_QWORD *)v31;
          v23 = v31;
          v59 = v31;
          goto LABEL_30;
        }
        v59 = v23;
        v27 = *((_DWORD *)v21 + 13) >> 5;
        v65 = *(_QWORD *)(v23 + 8) & (-1LL << (v21[52] & 0x1F));
        v28 = (unsigned __int8 *)&v65;
        v53 = &v65;
        v29 = 8LL;
        v66 = 8LL;
        v30 = 314159;
        while ( v29 >= 8 )
        {
          v30 = 37
              * (37 * (37 * (37 * (37 * (37 * (37 * (*v28 + 37 * v30) + v28[1]) + v28[2]) + v28[3]) + v28[4]) + v28[5])
               + v28[6])
              + v28[7];
          v28 += 8;
          v53 = (__int64 *)v28;
          v29 -= 8LL;
          v66 = v29;
        }
        if ( v29 >= 1 )
        {
          v41 = v29 - 1;
          if ( !v41 )
            goto LABEL_64;
          v42 = v41 - 1;
          if ( !v42 )
            goto LABEL_63;
          v43 = v42 - 1;
          if ( !v43 )
            goto LABEL_62;
          v44 = v43 - 1;
          if ( !v44 )
            goto LABEL_61;
          v45 = v44 - 1;
          if ( !v45 )
            goto LABEL_60;
          v46 = v45 - 1;
          if ( !v46 )
            goto LABEL_59;
          if ( v46 == 1 )
            break;
        }
LABEL_29:
        v31 = *((_QWORD *)v21 + 7) + 8LL * (v30 & (unsigned int)(v27 - 1));
        v60 = (_QWORD *)v31;
LABEL_30:
        if ( !v23 )
          goto LABEL_35;
        if ( (*(_QWORD *)v23 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
        {
          v21 = v54;
          v24 = v62[3];
          v25 = HIDWORD(v62[1]);
          v31 = (__int64)v60;
          v23 = v59;
          v26 = v58;
        }
        if ( v23 && (v23 = *(_QWORD *)v23, (v23 & 1) == 0) )
        {
LABEL_39:
          v59 = v23;
        }
        else
        {
LABEL_35:
          v32 = (__int64 *)(v31 + 8);
          v33 = *((_QWORD *)v26 + 1) + 8 * ((unsigned __int64)*((unsigned int *)v26 + 1) >> 5);
          while ( 1 )
          {
            v67 = v32;
            if ( (unsigned __int64)v32 >= v33 )
              break;
            v23 = *v32;
            if ( (*v32 & 1) == 0 )
            {
              v60 = v32;
              goto LABEL_39;
            }
            ++v32;
          }
          v23 = 0LL;
        }
        if ( !v23 )
        {
          v55 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          v56 = KiQueryUnbiasedInterruptTime() / 0x2710uLL;
          v69 = MEMORY[0xFFFFF78000000014];
          v36 = v54;
          v37 = v55;
          v38 = v68;
          *(_DWORD *)(v68 + 16) = v55 - *((_DWORD *)v54 + 148);
          *(_DWORD *)(v38 + 20) = v56 - *((_DWORD *)v36 + 149);
          *(_DWORD *)(v38 + 28) = v37;
          TimelineBitmapTime = KeQueryTimelineBitmapTime();
          *(_DWORD *)(v40 + 32) = TimelineBitmapTime;
          *(_QWORD *)(v40 + 64) = v69;
          for ( j = 0LL; ; *(_DWORD *)(j + 484) &= ~0x80000000 )
          {
            if ( j )
            {
              v72 = *(_QWORD *)(j + 8) & (-1LL << (*((_DWORD *)v36 + 17) & 0x1F));
              v48 = *((_QWORD *)v36 + 9)
                  + 8LL
                  * ((37
                    * (BYTE6(v72)
                     + 37
                     * (BYTE5(v72)
                      + 37
                      * (BYTE4(v72)
                       + 37
                       * (BYTE3(v72) + 37 * (BYTE2(v72) + 37 * (BYTE1(v72) + 37 * ((unsigned __int8)v72 + 11623883)))))))
                    + HIBYTE(v72)) & (unsigned int)((*((_DWORD *)v36 + 17) >> 5) - 1));
            }
            else
            {
              v48 = *((_QWORD *)v36 + 9);
              j = v48;
            }
            if ( !j || (j = *(_QWORD *)j, (j & 1) != 0) )
            {
              for ( k = (__int64 *)(v48 + 8);
                    (unsigned __int64)k < *((_QWORD *)v36 + 9)
                                        + 8 * ((unsigned __int64)*((unsigned int *)v36 + 17) >> 5);
                    ++k )
              {
                if ( (*(_DWORD *)k & 1) == 0 )
                {
                  j = *k;
                  goto LABEL_74;
                }
              }
              j = 0LL;
            }
LABEL_74:
            if ( !j )
              break;
          }
          v5 = v54;
          PopEtEnergyTrackerCleanupAggregates(v54);
          ++*((_DWORD *)v5 + 150);
          *((_DWORD *)v36 + 148) = v55;
          *((_DWORD *)v36 + 149) = v56;
          *(_QWORD *)(v5 + 604) = 0LL;
          *(_QWORD *)(v5 + 612) = 0LL;
          *(__m128i *)(v5 + 620) = v57;
          v7 = 0;
          goto LABEL_80;
        }
        v34 = *(_QWORD *)(v23 + 16);
        *(_QWORD *)v24 = *(_QWORD *)(v23 + 32);
        *(_DWORD *)(v24 + 8) = *(_DWORD *)(v23 + 40);
        *(_DWORD *)(v24 + 12) = (unsigned __int16)*(_DWORD *)(v23 + 44);
        *(_DWORD *)(v24 + 64) = *(_DWORD *)(v23 + 504);
        *(_DWORD *)(v24 + 68) = *(_DWORD *)(v23 + 508);
        *(_OWORD *)(v24 + 72) = *(_OWORD *)(v23 + 480);
        *(_QWORD *)(v24 + 88) = *(_QWORD *)(v23 + 496);
        *(_DWORD *)(v24 + 20) = **(_DWORD **)(v34 + 32);
        *(_DWORD *)(v24 + 24) = *(_DWORD *)(*(_QWORD *)(v34 + 32) + 4LL);
        *(_DWORD *)(v24 + 40) = v63[5];
        *(_WORD *)(v24 + 52) = *(_WORD *)(v34 + 78);
        PopEtDataSectionCopyData(v63, *(_QWORD *)(v34 + 64), *(unsigned __int16 *)(v34 + 78));
        *(_WORD *)(v24 + 44) = *(_WORD *)(v34 + 72);
        *(_DWORD *)(v24 + 16) = v61[5];
        PopEtDataSectionCopyData(v61, *(_QWORD *)(v34 + 40), 2 * (unsigned int)*(unsigned __int16 *)(v34 + 72));
        *(_WORD *)(v24 + 46) = *(_WORD *)(v34 + 74);
        *(_DWORD *)(v24 + 28) = v61[5];
        PopEtDataSectionCopyData(v61, *(_QWORD *)(v34 + 48), 2 * (unsigned int)*(unsigned __int16 *)(v34 + 74));
        *(_WORD *)(v24 + 48) = *(_WORD *)(v34 + 76);
        *(_DWORD *)(v24 + 32) = v61[5];
        PopEtDataSectionCopyData(v61, *(_QWORD *)(v34 + 56), 2 * (unsigned int)*(unsigned __int16 *)(v34 + 76));
        v35 = *(_QWORD *)(v23 + 24);
        if ( v35 )
        {
          *(_WORD *)(v24 + 50) = (unsigned __int16)WORD1(*(_QWORD *)(v35 + 24)) >> 1;
          *(_DWORD *)(v24 + 36) = v61[5];
          PopEtDataSectionCopyData(v61, *(_QWORD *)(v23 + 24) + 32LL, 2 * (unsigned int)*(unsigned __int16 *)(v24 + 50));
        }
        else
        {
          *(_WORD *)(v24 + 50) = 0;
          *(_DWORD *)(v24 + 36) = v61[5];
        }
        *(_DWORD *)(v24 + 56) = v70[5];
        *(_DWORD *)(v24 + 60) = 432;
        PopEtDataSectionCopyData(v70, v23 + 48, v70[3]);
        if ( v25 + HIDWORD(v62[2]) <= LODWORD(v62[1]) )
        {
          HIDWORD(v62[2]) += v25;
          v24 += v25;
          v62[3] = v24;
        }
      }
      v30 = *v28++ + 37 * v30;
      v53 = (__int64 *)v28;
LABEL_59:
      v30 = *v28++ + 37 * v30;
      v53 = (__int64 *)v28;
LABEL_60:
      v30 = *v28++ + 37 * v30;
      v53 = (__int64 *)v28;
LABEL_61:
      v30 = *v28++ + 37 * v30;
      v53 = (__int64 *)v28;
LABEL_62:
      v30 = *v28++ + 37 * v30;
      v53 = (__int64 *)v28;
LABEL_63:
      v30 = *v28++ + 37 * v30;
      v53 = (__int64 *)v28;
LABEL_64:
      v30 = *v28 + 37 * v30;
      v53 = (__int64 *)(v28 + 1);
      goto LABEL_29;
    }
  }
LABEL_80:
  if ( v6 )
    PopReleaseRwLock((ULONG_PTR)(v5 + 16));
  if ( v5 )
    ObfDereferenceObject(v5);
  return (unsigned int)v7;
}
