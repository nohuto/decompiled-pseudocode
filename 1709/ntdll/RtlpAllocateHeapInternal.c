/*
 * XREFs of RtlpAllocateHeapInternal @ 0x180040E70
 * Callers:
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlpHpAllocWithExceptionProtection @ 0x180042900 (RtlpHpAllocWithExceptionProtection.c)
 *     RtlpHpTagAllocateHeap @ 0x180061FE4 (RtlpHpTagAllocateHeap.c)
 * Callees:
 *     RtlpHpLfhBucketActivate @ 0x180007258 (RtlpHpLfhBucketActivate.c)
 *     RtlNtStatusToDosError @ 0x18001AD60 (RtlNtStatusToDosError.c)
 *     RtlpHpSegAlloc @ 0x18003827C (RtlpHpSegAlloc.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVsChunkSplit @ 0x18003D9A0 (RtlpHpVsChunkSplit.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x180041A70 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpHpLfhSlotAllocate @ 0x180042C90 (RtlpHpLfhSlotAllocate.c)
 *     RtlpAllocateHeap @ 0x1800437B0 (RtlpAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x18006206C (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeAlloc @ 0x18006EC20 (RtlpHpLargeAlloc.c)
 *     RtlpHpLargeAllocSetExtraPresent @ 0x18006F438 (RtlpHpLargeAllocSetExtraPresent.c)
 *     RtlpHpVsFreeChunkInsert @ 0x180071FAC (RtlpHpVsFreeChunkInsert.c)
 *     RtlpWakeSRWLock @ 0x180075F18 (RtlpWakeSRWLock.c)
 *     RtlpHpVsSubsegmentCreate @ 0x18007894C (RtlpHpVsSubsegmentCreate.c)
 *     RtlpLogHeapFailure @ 0x18009FBBC (RtlpLogHeapFailure.c)
 *     RtlGetCurrentProcessorNumber @ 0x1800A4830 (RtlGetCurrentProcessorNumber.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     RtlpCallInterceptRoutine @ 0x1800EFE04 (RtlpCallInterceptRoutine.c)
 *     RtlpAllocateHeapRaiseException @ 0x1800F2B10 (RtlpAllocateHeapRaiseException.c)
 *     RtlpSetupExtendedBlock @ 0x1800F2EB8 (RtlpSetupExtendedBlock.c)
 *     RtlpHpStackTraceAddStack @ 0x1800FFF48 (RtlpHpStackTraceAddStack.c)
 *     RtlpLogHeapAllocateEvent @ 0x180101360 (RtlpLogHeapAllocateEvent.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x1801088E8 (RtlpHpSegGetDescriptorValidateSafe.c)
 */

unsigned __int64 __fastcall RtlpAllocateHeapInternal(__int64 a1, size_t a2, int a3, __int16 a4)
{
  int v7; // edx
  unsigned int v8; // r14d
  unsigned __int64 v9; // rsi
  int v10; // r12d
  __int64 v11; // rsi
  unsigned __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // r9d
  unsigned __int64 Heap; // r13
  _DWORD *v17; // rcx
  __int64 v18; // rcx
  int v20; // r10d
  unsigned int v21; // ecx
  int v22; // edx
  int v23; // ecx
  int v24; // edx
  int v25; // r8d
  size_t v26; // r13
  int v27; // r12d
  __int64 v28; // rax
  unsigned int v29; // r14d
  int v30; // r10d
  unsigned int v31; // r12d
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rdx
  unsigned int v34; // r14d
  __int64 v35; // r10
  int v36; // eax
  unsigned __int8 *v37; // rdx
  signed __int64 *v38; // rcx
  signed __int64 v39; // rax
  signed __int64 v40; // rcx
  unsigned __int8 v41; // al
  void *v42; // rax
  size_t v43; // r14
  unsigned int v44; // r8d
  int v45; // eax
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rdi
  size_t v48; // rdi
  unsigned __int64 v49; // rcx
  int v50; // eax
  __int64 v51; // rcx
  __int64 v52; // rsi
  unsigned __int64 DescriptorValidateSafe; // r8
  _BYTE *v54; // rdx
  __int64 v55; // r8
  int v56; // esi
  _DWORD *SharedData; // rcx
  __int64 v58; // rcx
  __int64 v59; // rax
  struct _TEB *v60; // rdi
  char CurrentProcessorNumber; // al
  unsigned int v62; // eax
  unsigned int v63; // ecx
  __int64 *v64; // rcx
  unsigned __int64 v65; // rdx
  unsigned __int64 v66; // rdi
  __int64 *v67; // rax
  int v68; // eax
  __int64 v69; // r11
  unsigned int v70; // r10d
  int v71; // r13d
  unsigned int v72; // r8d
  _QWORD *v73; // r9
  unsigned __int64 v74; // rcx
  unsigned int v75; // eax
  int v76; // eax
  unsigned __int64 v77; // rax
  __int64 v78; // r13
  __int64 v79; // r9
  int v80; // eax
  __int64 v81; // rdx
  int v82; // ecx
  unsigned __int64 v83; // rdx
  __int64 v84; // rcx
  signed __int64 v85; // rax
  __int64 v86; // r11
  volatile signed __int64 *v87; // r9
  volatile signed __int64 v88; // rax
  signed __int64 v89; // rax
  unsigned __int64 v90; // rcx
  unsigned __int64 v91; // rcx
  __int64 v92; // r13
  __int64 v93; // rcx
  __int64 v94; // rdx
  __int64 v95; // rdx
  signed __int64 v96; // rcx
  signed __int64 v97; // rdx
  signed __int64 v98; // rtt
  unsigned int v99; // r9d
  void *v100; // rax
  __int64 v101; // rax
  int v102; // r8d
  __int64 v103; // rax
  struct _TEB *v104; // rdi
  __int64 v105; // rax
  unsigned __int64 v106; // rcx
  __int64 v107; // rax
  _BYTE *v108; // rdx
  char v109; // r8
  unsigned __int64 v110; // rcx
  signed __int32 v111[8]; // [rsp+0h] [rbp-B8h] BYREF
  unsigned __int64 v112; // [rsp+20h] [rbp-98h]
  size_t Size; // [rsp+30h] [rbp-88h]
  unsigned int v114; // [rsp+38h] [rbp-80h] BYREF
  unsigned int v115; // [rsp+3Ch] [rbp-7Ch] BYREF
  signed __int64 v116; // [rsp+40h] [rbp-78h]
  volatile signed __int64 *v117; // [rsp+48h] [rbp-70h]
  unsigned __int64 v118; // [rsp+50h] [rbp-68h]
  signed __int64 *v119; // [rsp+58h] [rbp-60h]
  int v120; // [rsp+60h] [rbp-58h]
  int v121; // [rsp+64h] [rbp-54h]
  __int64 v122; // [rsp+68h] [rbp-50h]
  unsigned __int64 v123; // [rsp+70h] [rbp-48h] BYREF
  int v124; // [rsp+78h] [rbp-40h]
  int v125; // [rsp+7Ch] [rbp-3Ch]
  _QWORD *v126; // [rsp+80h] [rbp-38h]
  int v127; // [rsp+C0h] [rbp+8h]

  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    v20 = a3 & 1 | 2;
    if ( (a3 & 8) == 0 )
      v20 = a3 & 1;
    v21 = v20 | 0x80000000;
    if ( (a3 & 4) == 0 )
      v21 = v20;
    v22 = v21 | 0x100;
    if ( (a3 & 0x100) == 0 )
      v22 = v21;
    v23 = v22 | a3 & 0xE00;
    if ( (a3 & 0xE00) == 0 )
      v23 = v22;
    if ( (a3 & 0x10) != 0 )
      v23 |= 0x2000000u;
    if ( (a3 & 2) != 0 )
      v23 |= 0x1000000u;
    v24 = *(_DWORD *)(a1 + 64);
    v25 = 0;
    if ( v24 )
      LOBYTE(v25) = v24 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
    v26 = a2;
    v27 = v23 | 1;
    if ( !v25 )
      v27 = v23;
    v127 = v27;
    if ( (RtlpHpAppCompatFlags & 2) != 0 )
    {
      if ( a2 + 16 >= a2 )
        v26 = a2 + 16;
      Size = v26;
    }
    else
    {
      Size = a2;
    }
    v28 = 0LL;
    v29 = (*(_DWORD *)(a1 + 20) | v27) & 0x93000F0B;
    v115 = 0;
    v121 = 0;
    if ( (v29 & 0x1000000) == 0 )
    {
      v30 = *(_DWORD *)(a1 + 56);
      v121 = v30;
      if ( v30 )
      {
        v29 |= 8u;
        if ( (int)RtlpCallInterceptRoutine(v30, a1, 0, 1, (__int64)&v115) < 0 )
        {
          Heap = 0LL;
          v33 = 0LL;
          v44 = 0;
          goto LABEL_84;
        }
        v28 = v115;
      }
    }
    v31 = v29 | 8;
    if ( !a4 )
      v31 = v29;
    v32 = v26 + v28;
    v124 = v31 & 0x10000000;
    if ( (v31 & 0x10000000) != 0 )
      v32 += 16LL;
    v125 = v31 & 0x20000F08;
    if ( (v31 & 0x20000F08) != 0 )
      v32 = ((v32 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
    v33 = 1LL;
    if ( v32 )
      v33 = v32;
    v118 = v33;
    if ( v33 < v26 || v26 > 0x7FFFFFFFFFFFFFFFLL )
    {
      Heap = 0LL;
      v44 = 0;
      goto LABEL_83;
    }
    v122 = 3LL;
    v34 = v31 & 0x13000003;
    v120 = v31 & 0x13000003;
    if ( v33 > 0x3FF0 )
      goto LABEL_110;
    v35 = a1 + 480;
    v36 = v33;
    if ( (_DWORD)v26 != (_DWORD)v33 )
      v36 = v33 + 2;
    v37 = &RtlpLfhBucketIndexMap[(unsigned __int64)(unsigned int)(v36 + 15) >> 4];
    v38 = (signed __int64 *)(v35 + 8 * (*v37 + 26LL));
    v39 = *v38;
    v119 = v38;
    if ( (v39 & 1) == 0 )
      goto LABEL_50;
    v86 = *v37;
    v87 = (volatile signed __int64 *)(a1 + 688 + 8 * v86);
    v88 = *v87;
    v117 = v87;
    if ( (v88 & 1) != 0 )
    {
      do
      {
        v89 = *v87;
        v116 = v89;
        v90 = v89;
        if ( (v89 & 1) == 0 )
          break;
        if ( (BYTE2(v89) & 0x1Fu) > 0x10 )
          break;
        if ( WORD1(v89) > 0xFF00u )
          break;
        WORD1(v116) = WORD1(v89) + 33;
        v90 = v116;
      }
      while ( v89 != _InterlockedCompareExchange64(v87, v116, v89) );
      v91 = v90 >> 16;
      if ( (v91 & 0x1F) > 0x10 || (unsigned __int16)v91 > 0xFF00u )
      {
        RtlpHpLfhBucketActivate(a1 + 480, v86);
        v87 = v117;
        LODWORD(v35) = a1 + 480;
      }
      v38 = v119;
    }
    if ( (*v87 & 1) != 0 )
    {
      Heap = -1LL;
    }
    else
    {
LABEL_50:
      v40 = *v38;
      v116 = v40;
      if ( (RtlpHpLfhPerfFlags & 0x10) != 0 && *(_BYTE *)(v40 + 2) == 1 )
      {
        v41 = 0;
      }
      else
      {
        CurrentProcessorNumber = RtlGetCurrentProcessorNumber();
        LODWORD(v35) = a1 + 480;
        v62 = CurrentProcessorNumber & 0x3F;
        v63 = *(unsigned __int8 *)(a1 + 528);
        if ( v62 >= v63 )
        {
          if ( v62 == v63 || (_BYTE)v63 == 1 )
            v62 = 0;
          else
            v62 = *(unsigned __int8 *)(v62 - v63 - 1 + *(_QWORD *)(a1 + 536));
        }
        v40 = v116;
        v41 = *(_BYTE *)(v62 + *(_QWORD *)(v116 + 88));
      }
      v42 = (void *)RtlpHpLfhSlotAllocate(
                      v35,
                      v40,
                      *(_QWORD *)(*(_QWORD *)(v40 + 96) + 8LL * v41),
                      v26,
                      v31 & 0x13000003);
      Heap = (unsigned __int64)v42;
      if ( v42 )
      {
        v43 = Size;
        if ( (v31 & 2) != 0 )
          memset(v42, 0, (unsigned int)Size);
        goto LABEL_56;
      }
    }
    v43 = Size;
LABEL_56:
    if ( Heap != -1LL )
    {
      v44 = 2;
      v122 = 2LL;
LABEL_58:
      if ( !Heap || (v31 & 0x30000F08) == 0 )
      {
LABEL_82:
        v33 = v118;
LABEL_83:
        v27 = v127;
LABEL_84:
        SharedData = NtCurrentPeb()->SharedData;
        if ( SharedData && *SharedData )
          v58 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v58 = 2147353472LL;
        if ( *(_BYTE *)v58 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapAllocateEvent(a1, Heap, v33, v44);
        if ( Heap )
        {
          if ( (RtlpHpAppCompatFlags & 2) != 0
            && ((_WORD)Heap || (v105 = RtlCSparseBitmapBitmaskRead(v58, 2 * (Heap >> 20))) != 0 && (_DWORD)v105 != 3) )
          {
            Heap += 16LL;
          }
          if ( (dword_180160378 & 1) != 0
            && (dword_180160378 & 2) != 0
            && a1 != RtlpHpMetadataHeap
            && NtCurrentPeb()->ProcessHeap )
          {
            goto LABEL_261;
          }
        }
        else
        {
          NtCurrentTeb()->LastStatusValue = -1073741801;
          v104 = NtCurrentTeb();
          v104->LastErrorValue = RtlNtStatusToDosError(-1073741801);
          if ( (*(_DWORD *)(a1 + 20) | v27) < 0 )
            RtlpAllocateHeapRaiseException(a2);
        }
        return Heap;
      }
      v45 = v124;
      v46 = v115;
      if ( v124 )
      {
        *(_QWORD *)(v43 + Heap) = 0xABABABABABABABABuLL;
        *(_QWORD *)(v43 + Heap + 8) = 0xABABABABABABABABuLL;
      }
      v47 = 0LL;
      if ( !v125 )
      {
LABEL_80:
        v56 = v121;
        if ( v121 )
        {
          *(_BYTE *)(v47 + 2) &= 0xF0u;
          *(_BYTE *)(v47 + 2) |= v56 & 0xF;
          if ( (RtlpHpAppCompatFlags & 2) != 0 )
          {
            if ( (_WORD)Heap || (v103 = RtlCSparseBitmapBitmaskRead(v46, 2 * (Heap >> 20))) != 0 && (_DWORD)v103 != 3 )
              v102 = Heap + 16;
            else
              v102 = Heap;
          }
          else
          {
            v102 = Heap;
          }
          if ( (int)RtlpCallInterceptRoutine(v56, a1, v102, 2, v47 + 16) < 0 )
          {
            RtlFreeHeap(a1, 0, Heap);
            Heap = 0LL;
          }
        }
        v44 = v122;
        goto LABEL_82;
      }
      v48 = v43 + Heap;
      if ( v45 )
        v48 += 16LL;
      v47 = (v48 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
      *(_QWORD *)v47 = 0LL;
      *(_QWORD *)(v47 + 8) = 0LL;
      *(_BYTE *)(v47 + 2) &= 0xFu;
      *(_WORD *)v47 = a4;
      *(_BYTE *)(v47 + 2) |= 16 * (BYTE1(v31) & 0xFE);
      v49 = v46 >> 4;
      *(_BYTE *)(v47 + 3) = v49;
      _InterlockedOr(v111, 0);
      if ( (_WORD)Heap )
      {
        v50 = 0;
      }
      else
      {
        v101 = RtlCSparseBitmapBitmaskRead(v49, 2 * (Heap >> 20));
        if ( !v101 || (v50 = v101 - 1, v50 == 2) )
        {
          RtlpHpLargeAllocSetExtraPresent(a1, Heap, v31);
          goto LABEL_80;
        }
      }
      v51 = 104LL * v50;
      v52 = v51 + a1 + 112;
      if ( (RtlpHpAppCompatFlags & 1) != 0 )
      {
        DescriptorValidateSafe = RtlpHpSegGetDescriptorValidateSafe(v51 + a1 + 112, Heap);
      }
      else
      {
        v46 = 0xA2E64EADA2E64EADuLL;
        if ( (RtlpHeapKey ^ v52 ^ *(_QWORD *)v52 & Heap ^ *(_QWORD *)((*(_QWORD *)v52 & Heap) + 0x10)) == 0xA2E64EADA2E64EADuLL )
        {
          v46 = *(unsigned __int8 *)(v52 + 8);
          DescriptorValidateSafe = (*(_QWORD *)v52 & Heap)
                                 + 32 * (((unsigned int)Heap - (*(_DWORD *)v52 & (unsigned int)Heap)) >> v46);
        }
        else
        {
          DescriptorValidateSafe = 0LL;
        }
      }
      if ( DescriptorValidateSafe )
      {
        v46 = *(unsigned __int8 *)(DescriptorValidateSafe + 24);
        if ( (v46 & 1) != 0 )
        {
          v46 = *(unsigned __int8 *)(DescriptorValidateSafe + 24);
          if ( (v46 & 2) != 0 )
          {
            if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 0xC) != 0
              || (v46 = *(unsigned __int8 *)(v52 + 8),
                  Heap == (*(_QWORD *)v52 & DescriptorValidateSafe)
                        + ((__int64)(DescriptorValidateSafe - (*(_QWORD *)v52 & DescriptorValidateSafe)) >> 5 << v46)) )
            {
LABEL_76:
              v54 = (_BYTE *)(DescriptorValidateSafe + 24);
              if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 0xC) != 0 )
              {
                v55 = (*(_QWORD *)v52 & DescriptorValidateSafe)
                    + ((__int64)(DescriptorValidateSafe - (*(_QWORD *)v52 & DescriptorValidateSafe)) >> 5 << *(_BYTE *)(v52 + 8));
                if ( (*v54 & 4) != 0 )
                  v46 = (unsigned __int16)RtlpLFHKey ^ *(unsigned __int16 *)(v55 + 40) ^ (unsigned __int64)(unsigned __int16)((unsigned int)v55 >> 12);
                else
                  v46 = 16 * (WORD1(RtlpHeapKey) ^ ((unsigned int)(Heap - 16) >> 16) ^ *(unsigned __int16 *)(Heap - 14))
                      - 16;
                *(_WORD *)(v46 + Heap - 2) |= 0x4000u;
              }
              else
              {
                *(_WORD *)(DescriptorValidateSafe + 8) |= 1u;
              }
              goto LABEL_80;
            }
          }
          else
          {
            DescriptorValidateSafe += -32LL * *(unsigned __int8 *)(DescriptorValidateSafe + 31);
            if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 1) != 0
              && (*(_BYTE *)(DescriptorValidateSafe + 24) & 2) != 0
              && (*(_BYTE *)(DescriptorValidateSafe + 24) & 0xC) != 0 )
            {
              goto LABEL_76;
            }
          }
        }
      }
      DescriptorValidateSafe = 0LL;
      goto LABEL_76;
    }
    v26 = Size;
    v33 = v118;
    v34 = v120;
LABEL_110:
    if ( v33 <= 0x20000 )
    {
      LODWORD(v119) = v33;
      v68 = v33;
      v69 = a1 + 360;
      if ( (_DWORD)v26 != (_DWORD)v33 )
      {
        v68 = v33 + 2;
        LODWORD(v119) = v33 + 2;
      }
      v70 = ((unsigned int)(v68 + 15) >> 4) + 1;
      v71 = v34 & 1;
      LODWORD(v116) = v70;
      LODWORD(v117) = v71;
      if ( (v34 & 1) == 0 )
      {
        RtlAcquireSRWLockExclusive(a1 + 360);
        v70 = v116;
        v69 = a1 + 360;
      }
      v72 = v70 << 16;
      v126 = (_QWORD *)(v70 << 16);
      while ( 1 )
      {
        v73 = 0LL;
        v74 = *(_QWORD *)(v69 + 8);
        while ( v74 )
        {
          v75 = RtlpHeapKey ^ *(_DWORD *)(v74 - 8) ^ (v74 - 8);
          if ( v72 < v75 )
            v76 = -1;
          else
            v76 = v72 > v75;
          if ( !v76 )
            goto LABEL_125;
          if ( v76 < 0 )
          {
            v77 = *(_QWORD *)v74;
            v73 = (_QWORD *)v74;
            if ( (*(_BYTE *)(v69 + 16) & 1) != 0 && v77 )
            {
LABEL_201:
              v74 ^= v77;
              continue;
            }
          }
          else
          {
            v77 = *(_QWORD *)(v74 + 8);
            if ( (*(_BYTE *)(v69 + 16) & 1) != 0 && v77 )
              goto LABEL_201;
          }
          v74 = v77;
        }
        v74 = (unsigned __int64)v73;
LABEL_125:
        if ( v74 )
          break;
        if ( !v71 )
        {
          RtlReleaseSRWLockExclusive((volatile signed __int64 *)v69);
          v69 = a1 + 360;
        }
        v92 = RtlpHpVsSubsegmentCreate(v69, (unsigned int)v119, v34, v73);
        if ( !v92 )
        {
          Heap = 0LL;
          goto LABEL_174;
        }
        if ( !(_DWORD)v117 )
          RtlAcquireSRWLockExclusive(a1 + 360);
        v93 = (a1 + 384) ^ *(_QWORD *)(a1 + 392);
        if ( (*(_QWORD *)v93 ^ v93) != a1 + 384 )
          __fastfail(3u);
        v94 = v92 ^ (a1 + 384);
        *(_QWORD *)v92 = v94;
        *(_QWORD *)(v92 + 8) = v92 ^ v93;
        *(_QWORD *)v93 = v92 ^ v93;
        *(_QWORD *)(a1 + 392) = v94;
        RtlpHpVsFreeChunkInsert(a1 + 360, v92, v92 + 48);
        v72 = (unsigned int)v126;
        v69 = a1 + 360;
        v71 = (int)v117;
      }
      v78 = v74 - 8;
      v79 = HIDWORD(*(_QWORD *)(v74 - 8));
      v126 = (_QWORD *)(v74 - 8);
      v80 = v79 ^ ((v74 - 8) >> 32) ^ HIDWORD(RtlpHeapKey);
      v81 = v74 - 8;
      if ( (v80 & 0xFF0000) != 0 )
      {
        v82 = (unsigned __int8)(RtlpHeapKey ^ (v74 - 8) ^ *(_BYTE *)v74);
      }
      else if ( (_WORD)v80 )
      {
        v81 = v78 - 16LL * (unsigned __int16)(v79 ^ WORD2(v78) ^ WORD2(RtlpHeapKey));
        v82 = (unsigned __int8)(RtlpHeapKey ^ v81 ^ *(_BYTE *)(v81 + 8));
      }
      else
      {
        v82 = 0;
      }
      v83 = (v81 - (unsigned int)(v82 << 12)) & 0xFFFFFFFFFFFFF000uLL;
      if ( (*(_WORD *)(v83 + 34) ^ 0xABED) == *(_WORD *)(v83 + 32) )
      {
        if ( (unsigned int)RtlpHpVsChunkSplit(v69, v83, v78, v116, v34) )
        {
          Heap = v78 + 16;
          v43 = Size;
          v84 = 16 * ((WORD1(RtlpHeapKey) ^ ((unsigned int)v126 >> 16) ^ *((unsigned __int16 *)v126 + 1)) - 1);
          if ( (unsigned int)Size >= (unsigned int)v84 )
          {
            *((_DWORD *)v126 + 2) &= ~0x100u;
          }
          else
          {
            *((_DWORD *)v126 + 2) |= 0x100u;
            *(_BYTE *)(v84 + Heap - 1) = 0;
            if ( (_DWORD)v84 - (_DWORD)v43 == 1 )
            {
              *(_WORD *)((unsigned int)v84 + Heap - 2) |= 0x8000u;
            }
            else
            {
              *(_WORD *)((unsigned int)v84 + Heap - 2) &= 0xE000u;
              *(_WORD *)((unsigned int)v84 + Heap - 2) |= (v84 - v43) & 0x1FFF;
            }
          }
          if ( !(_DWORD)v117 )
          {
            v85 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 360), 0LL, 1LL);
            if ( v85 != 1 )
            {
              do
              {
                v95 = 3LL;
                v96 = v85 & 6;
                if ( v96 != 2 )
                  v95 = -1LL;
                v97 = v85 + v95;
                v98 = v85;
                v85 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 360), v97, v85);
              }
              while ( v98 != v85 );
              if ( v96 == 2 )
                RtlpWakeSRWLock(a1 + 360, v97, 0LL);
            }
          }
          if ( (v120 & 2) != 0 )
          {
            memset((void *)Heap, 0, (unsigned int)v43);
            v44 = 3;
            goto LABEL_58;
          }
          goto LABEL_137;
        }
      }
      else
      {
        RtlpLogHeapFailure(17, *(_QWORD *)(v69 + 56), v83, v78, 0LL, 0LL);
      }
      Heap = 0LL;
      if ( !(_DWORD)v117 )
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 360));
LABEL_174:
      v43 = Size;
LABEL_137:
      v44 = 3;
      goto LABEL_58;
    }
    v99 = v34;
    if ( v33 > *(unsigned int *)(a1 + 128) )
    {
      if ( v33 <= *(unsigned int *)(a1 + 232) )
      {
        v43 = Size;
        Heap = (unsigned __int64)RtlpHpSegAlloc(a1 + 216, v26, v33, v99);
        goto LABEL_137;
      }
      v100 = (void *)RtlpHpLargeAlloc(a1, v26, v33, v34);
    }
    else
    {
      v100 = RtlpHpSegAlloc(a1 + 112, v26, v33, v34);
    }
    Heap = (unsigned __int64)v100;
    goto LABEL_174;
  }
  v7 = *(_DWORD *)(a1 + 116);
  v8 = v7 | a3;
  v114 = 0;
  v123 = 0LL;
  v9 = 0LL;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
  {
    v114 = 5;
  }
  else
  {
    v10 = *(_DWORD *)(a1 + 144);
    if ( !v10 )
    {
LABEL_4:
      if ( a2 )
        v11 = a2;
      else
        v11 = 1LL;
      v9 = (v11 + 23) & 0xFFFFFFFFFFFFFFF0uLL;
      v12 = v9 >> 4;
      if ( (v8 & 0x7D810F61) != 0 )
        goto LABEL_95;
      if ( a2 <= RtlpLargestLfhBlock
        && ((unsigned __int8)(1 << ((v9 >> 4) & 7)) & *(_BYTE *)((v9 >> 7) + a1 + 402)) != 0 )
      {
        v13 = *(_QWORD *)(a1 + 392);
        v14 = *(_QWORD *)(a1 + 376);
        v114 = 2;
        Heap = RtlpLowFragHeapAllocFromContext(v14, *(unsigned __int16 *)(v13 + 2 * v12), a2, v8);
        if ( Heap )
        {
LABEL_10:
          if ( !v10 )
            goto LABEL_11;
          a2 -= v123;
          v107 = RtlpSetupExtendedBlock(a1, v8, Heap, v15, v123, v10);
          v112 = Heap;
          Heap = v107;
          if ( (int)RtlpCallInterceptRoutine(v10, a1, v107, 2, v112) >= 0 )
            goto LABEL_11;
          RtlFreeHeap(a1, 0, Heap);
          goto LABEL_239;
        }
      }
      v64 = *(__int64 **)(a1 + 312);
      if ( v12 >= *((unsigned int *)v64 + 2) )
      {
        while ( 1 )
        {
          v67 = (__int64 *)*v64;
          if ( !*v64 )
            break;
          v64 = (__int64 *)*v64;
          if ( v12 < *((unsigned int *)v67 + 2) )
            goto LABEL_102;
        }
        v12 = (unsigned int)(*((_DWORD *)v64 + 2) - 1);
      }
LABEL_102:
      v65 = (unsigned int)(*((_DWORD *)v64 + 2) - 1);
      if ( v12 < v65 || *v64 && v12 == v65 )
      {
        v66 = v12 - *((unsigned int *)v64 + 6);
        if ( *((_DWORD *)v64 + 3) )
          v66 *= 2LL;
        v59 = v64[6] + 8 * v66;
      }
      else
      {
LABEL_95:
        v59 = 0LL;
      }
      Heap = RtlpAllocateHeap((void *)a1, v59, (__int64)&v114);
      if ( !Heap )
        goto LABEL_97;
      goto LABEL_10;
    }
    if ( (v8 & 0x3C000102) != 0 || (v7 & 0x1000000) != 0 )
    {
      v10 = 0;
      goto LABEL_4;
    }
    if ( (int)RtlpCallInterceptRoutine(v10, a1, 0, 1, (__int64)&v123) >= 0 )
    {
      v106 = (v123 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
      a2 += v106 + 16;
      v123 = v106 + 16;
      goto LABEL_4;
    }
  }
LABEL_239:
  Heap = 0LL;
LABEL_97:
  NtCurrentTeb()->LastStatusValue = -1073741801;
  v60 = NtCurrentTeb();
  v60->LastErrorValue = RtlNtStatusToDosError(-1073741801);
  if ( (v8 & 4) != 0 )
  {
    if ( !v9 )
      v9 = a2;
    RtlpAllocateHeapRaiseException(v9);
  }
LABEL_11:
  v17 = NtCurrentPeb()->SharedData;
  if ( v17 && *v17 )
    v18 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v18 = 2147353472LL;
  if ( *(_BYTE *)v18
    && (NtCurrentPeb()->TracingFlags & 1) != 0
    && (*(_DWORD *)(a1 + 116) & 0x1000000) == 0
    && ((v8 & 0x61000000) == 0 || (v8 & 0x10000000) != 0)
    && v114 != 5 )
  {
    if ( !Heap )
      goto LABEL_255;
    v108 = (_BYTE *)(Heap - 16);
    _m_prefetchw((const void *)(Heap - 16));
    v109 = *(_BYTE *)(Heap - 16 + 15);
    v110 = Heap - 16;
    if ( v109 == 5 )
      v110 -= 16LL * (unsigned __int8)v108[14];
    if ( *(char *)(v110 + 15) < 0 )
      goto LABEL_255;
    _m_prefetchw(v108);
    if ( v109 == 5 )
      v108 -= 16 * (unsigned __int8)v108[14];
    if ( ((v108[10] ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 17))) & 8) == 0 )
LABEL_255:
      RtlpLogHeapAllocateEvent(a1, Heap, a2, v114);
  }
  if ( (dword_180160378 & 1) != 0
    && (dword_180160378 & 2) != 0
    && a1 != RtlpHpMetadataHeap
    && NtCurrentPeb()->ProcessHeap
    && Heap
    && (v8 & 0x10000000) == 0 )
  {
LABEL_261:
    RtlpHpStackTraceAddStack(a1, Heap);
  }
  return Heap;
}
