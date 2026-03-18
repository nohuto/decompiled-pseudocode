/*
 * XREFs of PopEtEnergyTrackerQuery @ 0x1406D1744
 * Callers:
 *     NtPowerInformation @ 0x1404C2F2C (NtPowerInformation.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x14007157C (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140088D60 (PopReleaseRwLock.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008AB1C (KiQueryUnbiasedInterruptTime.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     memset @ 0x140192D80 (memset.c)
 *     KeQueryTimelineBitmapTime @ 0x1401FD9A4 (KeQueryTimelineBitmapTime.c)
 *     PsEnumProcesses @ 0x1404B0354 (PsEnumProcesses.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     PopEtDataSectionCopyData @ 0x1406D0E9C (PopEtDataSectionCopyData.c)
 *     PopEtDataSectionReserve @ 0x1406D0EE8 (PopEtDataSectionReserve.c)
 *     PopEtDataSectionStart @ 0x1406D0F34 (PopEtDataSectionStart.c)
 *     PopEtEnergyTrackerCleanupAggregates @ 0x1406D12B8 (PopEtEnergyTrackerCleanupAggregates.c)
 */

__int64 __fastcall PopEtEnergyTrackerQuery(void *a1, __int64 a2, unsigned int a3)
{
  char *v5; // rbx
  char v6; // r12
  int v7; // esi
  char *v8; // r10
  unsigned int v9; // esi
  unsigned int v10; // r15d
  _QWORD *v11; // r9
  unsigned int v12; // r8d
  __int64 v13; // rcx
  _DWORD *i; // r9
  int v15; // esi
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  char *v19; // r13
  __m128i v20; // xmm0
  __int64 v21; // rsi
  __int64 v22; // r14
  unsigned int v23; // r15d
  char *v24; // r10
  int v25; // ebx
  unsigned __int8 *v26; // r8
  __int64 v27; // r9
  int v28; // edx
  int v29; // r9d
  int v30; // r9d
  int v31; // r9d
  int v32; // r9d
  int v33; // r9d
  int v34; // r9d
  __int64 v35; // rdx
  __int64 *v36; // rdx
  unsigned __int64 v37; // r8
  unsigned __int64 UnbiasedInterruptTime; // rax
  unsigned int *v39; // rsi
  int v40; // r11d
  __int64 v41; // rcx
  int TimelineBitmapTime; // eax
  __int64 v43; // rcx
  __int64 j; // r9
  __int64 v45; // rcx
  _DWORD *k; // r9
  __int64 v47; // rbx
  __int64 v48; // rax
  unsigned __int16 *v49; // rdx
  __int64 v50; // rax
  unsigned int v52; // [rsp+30h] [rbp-178h]
  size_t Size; // [rsp+38h] [rbp-170h] BYREF
  __int64 *v54; // [rsp+40h] [rbp-168h]
  char *v55; // [rsp+48h] [rbp-160h]
  __m128i v56; // [rsp+50h] [rbp-158h] BYREF
  unsigned int v57; // [rsp+60h] [rbp-148h]
  unsigned int v58; // [rsp+64h] [rbp-144h]
  char *v59; // [rsp+68h] [rbp-140h]
  __int64 v60; // [rsp+70h] [rbp-138h]
  _QWORD *v61; // [rsp+78h] [rbp-130h]
  unsigned int v62[8]; // [rsp+80h] [rbp-128h] BYREF
  _QWORD v63[4]; // [rsp+A0h] [rbp-108h] BYREF
  unsigned int v64[8]; // [rsp+C0h] [rbp-E8h] BYREF
  PVOID Object; // [rsp+E0h] [rbp-C8h] BYREF
  __int64 v66; // [rsp+E8h] [rbp-C0h] BYREF
  __int64 v67; // [rsp+F0h] [rbp-B8h]
  __int64 *v68; // [rsp+F8h] [rbp-B0h]
  __int64 v69; // [rsp+100h] [rbp-A8h]
  _QWORD *v70; // [rsp+110h] [rbp-98h]
  __int64 v71; // [rsp+118h] [rbp-90h]
  __int64 v72; // [rsp+128h] [rbp-80h]
  __int64 v73; // [rsp+130h] [rbp-78h]
  unsigned int v74[8]; // [rsp+138h] [rbp-70h] BYREF
  _QWORD v75[5]; // [rsp+158h] [rbp-50h] BYREF
  __int64 v76; // [rsp+1C8h] [rbp+20h]

  v5 = 0LL;
  v6 = 0;
  if ( !PopEtGlobals )
  {
    v7 = -1073741637;
    goto LABEL_89;
  }
  v7 = ObReferenceObjectByHandle(
         a1,
         1u,
         *(POBJECT_TYPE *)(PopEtGlobals + 32),
         KeGetCurrentThread()->PreviousMode,
         &Object,
         0LL);
  v5 = (char *)Object;
  v55 = (char *)Object;
  if ( v7 >= 0 )
  {
    memset(v75, 0, 0x20uLL);
    LODWORD(v75[2]) = 2;
    v75[1] = Object;
    v7 = PsEnumProcesses(
           (__int64 (__fastcall *)(unsigned __int64, __int64))PopEtProcessEnumSnapshotCallback,
           (__int64)v75);
    if ( v7 >= 0 )
    {
      PopAcquireRwLockExclusive((ULONG_PTR)(v5 + 16));
      v6 = 1;
      v8 = v5 + 48;
      v52 = *((_DWORD *)v5 + 12);
      v9 = 0;
      v10 = 44;
      v11 = 0LL;
      while ( 1 )
      {
        if ( v11 )
        {
          v70 = v11;
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
          v70 = (_QWORD *)v13;
        }
        v71 = v13;
        if ( !v11 )
          goto LABEL_14;
        if ( (*v11 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
        {
          v5 = v55;
          v13 = v71;
          v11 = v70;
        }
        if ( !v11 || (v11 = (_QWORD *)*v11, ((unsigned __int8)v11 & 1) != 0) )
        {
LABEL_14:
          for ( i = (_DWORD *)(v13 + 8); ; i += 2 )
          {
            if ( (unsigned __int64)i >= *((_QWORD *)v8 + 1) + 8 * ((unsigned __int64)*((unsigned int *)v8 + 1) >> 5) )
            {
              v11 = 0LL;
              goto LABEL_20;
            }
            if ( (*i & 1) == 0 )
              break;
          }
          v11 = *(_QWORD **)i;
        }
LABEL_20:
        if ( !v11 )
          break;
        v49 = (unsigned __int16 *)v11[2];
        if ( v9 >= 0x10000000 )
        {
          v7 = -1073741619;
          goto LABEL_89;
        }
        v10 += v49[39];
        v9 += v49[37] + v49[38] + v49[36];
        v50 = v11[3];
        if ( v50 )
          v9 += ((unsigned int)(*(_QWORD *)(v50 + 24) >> 16) >> 1) & 0x1FFFFFFF;
      }
      LODWORD(Size) = 64;
      memset(v63, 0, sizeof(v63));
      HIDWORD(v63[1]) = 96;
      LODWORD(v63[2]) = 8;
      PopEtDataSectionReserve((unsigned int *)v63, v52, &Size);
      memset(v74, 0, sizeof(v74));
      v74[3] = 344;
      v74[4] = 8;
      PopEtDataSectionReserve(v74, v52, &Size);
      memset(v64, 0, sizeof(v64));
      v64[3] = 1;
      v64[4] = 4;
      PopEtDataSectionReserve(v64, v10, &Size);
      memset(v62, 0, sizeof(v62));
      v62[3] = 2;
      v62[4] = 2;
      PopEtDataSectionReserve(v62, v9, &Size);
      v15 = Size;
      if ( (unsigned int)Size > a3 || (unsigned int)Size >= 0x7FFFFFFF )
      {
        if ( a3 >= 0xC )
        {
          *(_QWORD *)a2 = 0LL;
          *(_DWORD *)a2 = 2097169;
          *(_DWORD *)(a2 + 8) = v15;
        }
        v7 = -1073741789;
        goto LABEL_89;
      }
      memset((void *)a2, 0, (unsigned int)Size);
      PopEtDataSectionStart((unsigned int *)v63, a2);
      PopEtDataSectionStart(v74, v16);
      PopEtDataSectionStart(v64, v17);
      PopEtDataSectionStart(v62, v18);
      v69 = a2;
      *(_DWORD *)a2 = 2097169;
      *(_DWORD *)(a2 + 4) = 64;
      *(_DWORD *)(a2 + 8) = v15;
      *(_DWORD *)(a2 + 12) = *((_DWORD *)v5 + 128);
      *(_DWORD *)(a2 + 24) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      *(_DWORD *)(a2 + 36) = v63[0];
      *(_DWORD *)(a2 + 40) = v52;
      *(_DWORD *)(a2 + 56) = 1048672;
      *(_DWORD *)(a2 + 52) = v64[5];
      *(_WORD *)(a2 + 60) = 12;
      v19 = v55;
      PopEtDataSectionCopyData((__int64)v64, v55 + 32, 0xCu);
      *(_DWORD *)(a2 + 44) = v64[5];
      PopEtDataSectionCopyData((__int64)v64, v19 + 516, 0x10u);
      v20 = *(__m128i *)(v19 + 532);
      v56 = v20;
      v56.m128i_i32[0] = *((_DWORD *)v19 + 129) + _mm_cvtsi128_si32(v20);
      v56.m128i_i32[1] = *((_DWORD *)v19 + 130) + v20.m128i_i32[1];
      v56.m128i_i32[2] = *((_DWORD *)v19 + 131) + v20.m128i_i32[2];
      v56.m128i_i32[3] = *((_DWORD *)v19 + 132) + v20.m128i_i32[3];
      *(_DWORD *)(a2 + 48) = v64[5];
      PopEtDataSectionCopyData((__int64)v64, &v56, 0x10u);
      v21 = 0LL;
      v22 = v63[3];
      v23 = HIDWORD(v63[1]);
      while ( 1 )
      {
        v24 = v19 + 48;
        v59 = v19 + 48;
        if ( !v21 )
        {
          v35 = *((_QWORD *)v19 + 7);
          v61 = (_QWORD *)v35;
          v21 = v35;
          v60 = v35;
          goto LABEL_45;
        }
        v60 = v21;
        v25 = *((_DWORD *)v19 + 13) >> 5;
        v66 = *(_QWORD *)(v21 + 8) & (-1LL << (v19[52] & 0x1F));
        v26 = (unsigned __int8 *)&v66;
        v54 = &v66;
        v27 = 8LL;
        v67 = 8LL;
        v28 = 314159;
        while ( v27 >= 8 )
        {
          v28 = 37
              * (37 * (37 * (37 * (37 * (37 * (37 * (*v26 + 37 * v28) + v26[1]) + v26[2]) + v26[3]) + v26[4]) + v26[5])
               + v26[6])
              + v26[7];
          v26 += 8;
          v54 = (__int64 *)v26;
          v27 -= 8LL;
          v67 = v27;
        }
        if ( (unsigned __int64)(v27 - 1) <= 6 )
        {
          v29 = v27 - 1;
          if ( !v29 )
            goto LABEL_42;
          v30 = v29 - 1;
          if ( !v30 )
            goto LABEL_41;
          v31 = v30 - 1;
          if ( !v31 )
            goto LABEL_40;
          v32 = v31 - 1;
          if ( !v32 )
            goto LABEL_39;
          v33 = v32 - 1;
          if ( !v33 )
            goto LABEL_38;
          v34 = v33 - 1;
          if ( !v34 )
            goto LABEL_37;
          if ( v34 == 1 )
            break;
        }
LABEL_43:
        v35 = *((_QWORD *)v19 + 7) + 8LL * (v28 & (unsigned int)(v25 - 1));
        v61 = (_QWORD *)v35;
LABEL_45:
        if ( !v21 )
          goto LABEL_51;
        if ( (*(_QWORD *)v21 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
        {
          v19 = v55;
          v22 = v63[3];
          v23 = HIDWORD(v63[1]);
          v35 = (__int64)v61;
          v21 = v60;
          v24 = v59;
        }
        if ( v21 && (v21 = *(_QWORD *)v21, (v21 & 1) == 0) )
        {
LABEL_50:
          v60 = v21;
        }
        else
        {
LABEL_51:
          v36 = (__int64 *)(v35 + 8);
          v37 = *((_QWORD *)v24 + 1) + 8 * ((unsigned __int64)*((unsigned int *)v24 + 1) >> 5);
          while ( 1 )
          {
            v68 = v36;
            if ( (unsigned __int64)v36 >= v37 )
              break;
            v21 = *v36;
            if ( (*v36 & 1) == 0 )
            {
              v61 = v36;
              goto LABEL_50;
            }
            ++v36;
          }
          v21 = 0LL;
        }
        if ( !v21 )
        {
          v57 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
          v58 = UnbiasedInterruptTime / 0x2710;
          v39 = (unsigned int *)v55;
          v41 = v69;
          *(_DWORD *)(v69 + 16) = v40 - *((_DWORD *)v55 + 126);
          *(_DWORD *)(v41 + 20) = UnbiasedInterruptTime / 0x2710 - v39[127];
          *(_DWORD *)(v41 + 28) = v40;
          TimelineBitmapTime = KeQueryTimelineBitmapTime();
          *(_DWORD *)(v43 + 32) = TimelineBitmapTime;
          for ( j = 0LL; ; *(_DWORD *)(j + 396) &= ~0x80000000 )
          {
            if ( j )
            {
              v72 = j;
              v76 = *(_QWORD *)(j + 8) & (-1LL << (v39[17] & 0x1F));
              v45 = *((_QWORD *)v39 + 9)
                  + 8LL
                  * ((37
                    * (BYTE6(v76)
                     + 37
                     * (BYTE5(v76)
                      + 37
                      * (BYTE4(v76)
                       + 37
                       * (BYTE3(v76) + 37 * (BYTE2(v76) + 37 * (BYTE1(v76) + 37 * ((unsigned __int8)v76 + 11623883)))))))
                    + HIBYTE(v76)) & ((v39[17] >> 5) - 1));
            }
            else
            {
              v45 = *((_QWORD *)v39 + 9);
              j = v45;
              v72 = v45;
            }
            v73 = v45;
            if ( !j )
              goto LABEL_67;
            if ( (*(_QWORD *)j & 0x8000000000000002uLL) == 0x8000000000000002uLL )
            {
              v45 = v73;
              j = v72;
            }
            if ( !j || (j = *(_QWORD *)j, (j & 1) != 0) )
            {
LABEL_67:
              for ( k = (_DWORD *)(v45 + 8); ; k += 2 )
              {
                if ( (unsigned __int64)k >= *((_QWORD *)v39 + 9) + 8 * ((unsigned __int64)v39[17] >> 5) )
                {
                  j = 0LL;
                  goto LABEL_73;
                }
                if ( (*k & 1) == 0 )
                  break;
              }
              j = *(_QWORD *)k;
            }
LABEL_73:
            if ( !j )
              break;
          }
          v5 = v55;
          PopEtEnergyTrackerCleanupAggregates((__int64)v55);
          ++*((_DWORD *)v5 + 128);
          v39[126] = v57;
          v39[127] = v58;
          *(_QWORD *)(v5 + 516) = 0LL;
          *(_QWORD *)(v5 + 524) = 0LL;
          *(__m128i *)(v5 + 532) = v56;
          v7 = 0;
          goto LABEL_89;
        }
        v47 = *(_QWORD *)(v21 + 16);
        *(_QWORD *)v22 = *(_QWORD *)(v21 + 32);
        *(_DWORD *)(v22 + 8) = *(_DWORD *)(v21 + 40);
        *(_DWORD *)(v22 + 12) = (unsigned __int16)*(_DWORD *)(v21 + 44);
        *(_DWORD *)(v22 + 64) = *(_DWORD *)(v21 + 416);
        *(_OWORD *)(v22 + 68) = *(_OWORD *)(v21 + 392);
        *(_QWORD *)(v22 + 84) = *(_QWORD *)(v21 + 408);
        *(_DWORD *)(v22 + 20) = **(_DWORD **)(v47 + 32);
        *(_DWORD *)(v22 + 24) = *(_DWORD *)(*(_QWORD *)(v47 + 32) + 4LL);
        *(_DWORD *)(v22 + 40) = v64[5];
        *(_WORD *)(v22 + 52) = *(_WORD *)(v47 + 78);
        PopEtDataSectionCopyData((__int64)v64, *(const void **)(v47 + 64), *(unsigned __int16 *)(v47 + 78));
        *(_WORD *)(v22 + 44) = *(_WORD *)(v47 + 72);
        *(_DWORD *)(v22 + 16) = v62[5];
        PopEtDataSectionCopyData((__int64)v62, *(const void **)(v47 + 40), 2 * *(unsigned __int16 *)(v47 + 72));
        *(_WORD *)(v22 + 46) = *(_WORD *)(v47 + 74);
        *(_DWORD *)(v22 + 28) = v62[5];
        PopEtDataSectionCopyData((__int64)v62, *(const void **)(v47 + 48), 2 * *(unsigned __int16 *)(v47 + 74));
        *(_WORD *)(v22 + 48) = *(_WORD *)(v47 + 76);
        *(_DWORD *)(v22 + 32) = v62[5];
        PopEtDataSectionCopyData((__int64)v62, *(const void **)(v47 + 56), 2 * *(unsigned __int16 *)(v47 + 76));
        v48 = *(_QWORD *)(v21 + 24);
        if ( v48 )
        {
          *(_WORD *)(v22 + 50) = (unsigned __int16)HIWORD(*(_DWORD *)(v48 + 24)) >> 1;
          *(_DWORD *)(v22 + 36) = v62[5];
          PopEtDataSectionCopyData(
            (__int64)v62,
            (const void *)(*(_QWORD *)(v21 + 24) + 32LL),
            2 * *(unsigned __int16 *)(v22 + 50));
        }
        else
        {
          *(_WORD *)(v22 + 50) = 0;
          *(_DWORD *)(v22 + 36) = v62[5];
        }
        *(_DWORD *)(v22 + 56) = v74[5];
        *(_DWORD *)(v22 + 60) = 344;
        PopEtDataSectionCopyData((__int64)v74, (const void *)(v21 + 48), v74[3]);
        if ( v23 + HIDWORD(v63[2]) <= LODWORD(v63[1]) )
        {
          HIDWORD(v63[2]) += v23;
          v22 += v23;
          v63[3] = v22;
        }
      }
      v28 = *v26++ + 37 * v28;
      v54 = (__int64 *)v26;
LABEL_37:
      v28 = *v26++ + 37 * v28;
      v54 = (__int64 *)v26;
LABEL_38:
      v28 = *v26++ + 37 * v28;
      v54 = (__int64 *)v26;
LABEL_39:
      v28 = *v26++ + 37 * v28;
      v54 = (__int64 *)v26;
LABEL_40:
      v28 = *v26++ + 37 * v28;
      v54 = (__int64 *)v26;
LABEL_41:
      v28 = *v26++ + 37 * v28;
      v54 = (__int64 *)v26;
LABEL_42:
      v28 = *v26 + 37 * v28;
      v54 = (__int64 *)(v26 + 1);
      goto LABEL_43;
    }
  }
LABEL_89:
  if ( v6 )
    PopReleaseRwLock((ULONG_PTR)(v5 + 16));
  if ( v5 )
    ObfDereferenceObject(v5);
  return (unsigned int)v7;
}
