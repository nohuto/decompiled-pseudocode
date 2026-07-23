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
  int v8; // r14d
  unsigned __int64 v9; // rsi
  int v10; // r12d
  __int64 v11; // rsi
  unsigned __int64 v12; // rdi
  _RTL_SRWLOCK *v13; // rcx
  int v14; // r9d
  unsigned __int64 Heap; // r13
  _DWORD *v16; // rcx
  __int64 v17; // rcx
  int v19; // r10d
  unsigned int v20; // ecx
  int v21; // edx
  int v22; // ecx
  int v23; // edx
  int v24; // r8d
  size_t v25; // r13
  int v26; // r12d
  __int64 v27; // rax
  unsigned int v28; // r14d
  int v29; // r10d
  unsigned int v30; // r12d
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rdx
  unsigned int v33; // r14d
  __int64 v34; // r10
  int v35; // eax
  unsigned __int8 *v36; // rdx
  signed __int64 *v37; // rcx
  signed __int64 v38; // rax
  signed __int64 v39; // rcx
  unsigned __int8 v40; // al
  void *v41; // rax
  size_t v42; // r14
  unsigned int v43; // r8d
  int v44; // eax
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rdi
  size_t v47; // rdi
  unsigned __int64 v48; // rcx
  int v49; // eax
  __int64 v50; // rcx
  __int64 v51; // rsi
  unsigned __int64 DescriptorValidateSafe; // r8
  _BYTE *v53; // rdx
  __int64 v54; // r8
  int v55; // esi
  _DWORD *SharedData; // rcx
  __int64 v57; // rcx
  __int64 v58; // rax
  struct _TEB *v59; // rdi
  char CurrentProcessorNumber; // al
  unsigned int v61; // eax
  unsigned int v62; // ecx
  __int64 *v63; // rcx
  unsigned __int64 v64; // rdx
  unsigned __int64 v65; // rdi
  __int64 *v66; // rax
  int v67; // eax
  __int64 v68; // r11
  unsigned int v69; // r10d
  int v70; // r13d
  unsigned int v71; // r8d
  _QWORD *v72; // r9
  unsigned __int64 v73; // rcx
  unsigned int v74; // eax
  int v75; // eax
  unsigned __int64 v76; // rax
  __int64 v77; // r13
  __int64 v78; // r9
  int v79; // eax
  __int64 v80; // rdx
  int v81; // ecx
  unsigned __int64 v82; // rdx
  __int64 v83; // rcx
  signed __int64 v84; // rax
  __int64 v85; // r11
  volatile signed __int64 *v86; // r9
  volatile signed __int64 v87; // rax
  signed __int64 v88; // rax
  unsigned __int64 v89; // rcx
  unsigned __int64 v90; // rcx
  __int64 v91; // r13
  __int64 v92; // rcx
  __int64 v93; // rdx
  __int64 v94; // rdx
  signed __int64 v95; // rcx
  signed __int64 v96; // rdx
  signed __int64 v97; // rtt
  unsigned int v98; // r9d
  void *v99; // rax
  __int64 v100; // rax
  int v101; // r8d
  __int64 v102; // rax
  struct _TEB *v103; // rdi
  __int64 v104; // rax
  unsigned __int64 v105; // rcx
  __int64 v106; // rax
  _BYTE *v107; // rdx
  char v108; // r8
  unsigned __int64 v109; // rcx
  signed __int32 v110[8]; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v111; // [rsp+20h] [rbp-98h]
  size_t Size; // [rsp+30h] [rbp-88h]
  unsigned int v113; // [rsp+38h] [rbp-80h] BYREF
  unsigned int v114; // [rsp+3Ch] [rbp-7Ch] BYREF
  signed __int64 v115; // [rsp+40h] [rbp-78h]
  volatile signed __int64 *v116; // [rsp+48h] [rbp-70h]
  unsigned __int64 v117; // [rsp+50h] [rbp-68h]
  signed __int64 *v118; // [rsp+58h] [rbp-60h]
  int v119; // [rsp+60h] [rbp-58h]
  int v120; // [rsp+64h] [rbp-54h]
  __int64 v121; // [rsp+68h] [rbp-50h]
  unsigned __int64 v122; // [rsp+70h] [rbp-48h] BYREF
  int v123; // [rsp+78h] [rbp-40h]
  int v124; // [rsp+7Ch] [rbp-3Ch]
  _QWORD *v125; // [rsp+80h] [rbp-38h]
  int v126; // [rsp+C0h] [rbp+8h]

  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    v19 = a3 & 1 | 2;
    if ( (a3 & 8) == 0 )
      v19 = a3 & 1;
    v20 = v19 | 0x80000000;
    if ( (a3 & 4) == 0 )
      v20 = v19;
    v21 = v20 | 0x100;
    if ( (a3 & 0x100) == 0 )
      v21 = v20;
    v22 = v21 | a3 & 0xE00;
    if ( (a3 & 0xE00) == 0 )
      v22 = v21;
    if ( (a3 & 0x10) != 0 )
      v22 |= 0x2000000u;
    if ( (a3 & 2) != 0 )
      v22 |= 0x1000000u;
    v23 = *(_DWORD *)(a1 + 64);
    v24 = 0;
    if ( v23 )
      LOBYTE(v24) = v23 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
    v25 = a2;
    v26 = v22 | 1;
    if ( !v24 )
      v26 = v22;
    v126 = v26;
    if ( (RtlpHpAppCompatFlags & 2) != 0 )
    {
      if ( a2 + 16 >= a2 )
        v25 = a2 + 16;
      Size = v25;
    }
    else
    {
      Size = a2;
    }
    v27 = 0LL;
    v28 = (*(_DWORD *)(a1 + 20) | v26) & 0x93000F0B;
    v114 = 0;
    v120 = 0;
    if ( (v28 & 0x1000000) == 0 )
    {
      v29 = *(_DWORD *)(a1 + 56);
      v120 = v29;
      if ( v29 )
      {
        v28 |= 8u;
        if ( (int)RtlpCallInterceptRoutine(v29, a1, 0, 1, (__int64)&v114) < 0 )
        {
          Heap = 0LL;
          v32 = 0LL;
          v43 = 0;
          goto LABEL_84;
        }
        v27 = v114;
      }
    }
    v30 = v28 | 8;
    if ( !a4 )
      v30 = v28;
    v31 = v25 + v27;
    v123 = v30 & 0x10000000;
    if ( (v30 & 0x10000000) != 0 )
      v31 += 16LL;
    v124 = v30 & 0x20000F08;
    if ( (v30 & 0x20000F08) != 0 )
      v31 = ((v31 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
    v32 = 1LL;
    if ( v31 )
      v32 = v31;
    v117 = v32;
    if ( v32 < v25 || v25 > 0x7FFFFFFFFFFFFFFFLL )
    {
      Heap = 0LL;
      v43 = 0;
      goto LABEL_83;
    }
    v121 = 3LL;
    v33 = v30 & 0x13000003;
    v119 = v30 & 0x13000003;
    if ( v32 > 0x3FF0 )
      goto LABEL_110;
    v34 = a1 + 480;
    v35 = v32;
    if ( (_DWORD)v25 != (_DWORD)v32 )
      v35 = v32 + 2;
    v36 = &RtlpLfhBucketIndexMap[(unsigned __int64)(unsigned int)(v35 + 15) >> 4];
    v37 = (signed __int64 *)(v34 + 8 * (*v36 + 26LL));
    v38 = *v37;
    v118 = v37;
    if ( (v38 & 1) == 0 )
      goto LABEL_50;
    v85 = *v36;
    v86 = (volatile signed __int64 *)(a1 + 688 + 8 * v85);
    v87 = *v86;
    v116 = v86;
    if ( (v87 & 1) != 0 )
    {
      do
      {
        v88 = *v86;
        v115 = v88;
        v89 = v88;
        if ( (v88 & 1) == 0 )
          break;
        if ( (BYTE2(v88) & 0x1Fu) > 0x10 )
          break;
        if ( WORD1(v88) > 0xFF00u )
          break;
        WORD1(v115) = WORD1(v88) + 33;
        v89 = v115;
      }
      while ( v88 != _InterlockedCompareExchange64(v86, v115, v88) );
      v90 = v89 >> 16;
      if ( (v90 & 0x1F) > 0x10 || (unsigned __int16)v90 > 0xFF00u )
      {
        RtlpHpLfhBucketActivate(a1 + 480, v85);
        v86 = v116;
        LODWORD(v34) = a1 + 480;
      }
      v37 = v118;
    }
    if ( (*v86 & 1) != 0 )
    {
      Heap = -1LL;
    }
    else
    {
LABEL_50:
      v39 = *v37;
      v115 = v39;
      if ( (RtlpHpLfhPerfFlags & 0x10) != 0 && *(_BYTE *)(v39 + 2) == 1 )
      {
        v40 = 0;
      }
      else
      {
        CurrentProcessorNumber = RtlGetCurrentProcessorNumber();
        LODWORD(v34) = a1 + 480;
        v61 = CurrentProcessorNumber & 0x3F;
        v62 = *(unsigned __int8 *)(a1 + 528);
        if ( v61 >= v62 )
        {
          if ( v61 == v62 || (_BYTE)v62 == 1 )
            v61 = 0;
          else
            v61 = *(unsigned __int8 *)(v61 - v62 - 1 + *(_QWORD *)(a1 + 536));
        }
        v39 = v115;
        v40 = *(_BYTE *)(v61 + *(_QWORD *)(v115 + 88));
      }
      v41 = (void *)RtlpHpLfhSlotAllocate(
                      v34,
                      v39,
                      *(_QWORD *)(*(_QWORD *)(v39 + 96) + 8LL * v40),
                      v25,
                      v30 & 0x13000003);
      Heap = (unsigned __int64)v41;
      if ( v41 )
      {
        v42 = Size;
        if ( (v30 & 2) != 0 )
          memset(v41, 0, (unsigned int)Size);
        goto LABEL_56;
      }
    }
    v42 = Size;
LABEL_56:
    if ( Heap != -1LL )
    {
      v43 = 2;
      v121 = 2LL;
LABEL_58:
      if ( !Heap || (v30 & 0x30000F08) == 0 )
      {
LABEL_82:
        v32 = v117;
LABEL_83:
        v26 = v126;
LABEL_84:
        SharedData = NtCurrentPeb()->SharedData;
        if ( SharedData && *SharedData )
          v57 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v57 = 2147353472LL;
        if ( *(_BYTE *)v57 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapAllocateEvent(a1, Heap, v32, v43);
        if ( Heap )
        {
          if ( (RtlpHpAppCompatFlags & 2) != 0
            && ((_WORD)Heap || (v104 = RtlCSparseBitmapBitmaskRead(v57, 2 * (Heap >> 20))) != 0 && (_DWORD)v104 != 3) )
          {
            Heap += 16LL;
          }
          if ( (dword_180160378 & 1) != 0
            && (dword_180160378 & 2) != 0
            && (PVOID)a1 != RtlpHpMetadataHeap
            && NtCurrentPeb()->ProcessHeap )
          {
            goto LABEL_261;
          }
        }
        else
        {
          NtCurrentTeb()->LastStatusValue = -1073741801;
          v103 = NtCurrentTeb();
          v103->LastErrorValue = RtlNtStatusToDosError(-1073741801);
          if ( (*(_DWORD *)(a1 + 20) | v26) < 0 )
            RtlpAllocateHeapRaiseException(a2);
        }
        return Heap;
      }
      v44 = v123;
      v45 = v114;
      if ( v123 )
      {
        *(_QWORD *)(v42 + Heap) = 0xABABABABABABABABuLL;
        *(_QWORD *)(v42 + Heap + 8) = 0xABABABABABABABABuLL;
      }
      v46 = 0LL;
      if ( !v124 )
      {
LABEL_80:
        v55 = v120;
        if ( v120 )
        {
          *(_BYTE *)(v46 + 2) &= 0xF0u;
          *(_BYTE *)(v46 + 2) |= v55 & 0xF;
          if ( (RtlpHpAppCompatFlags & 2) != 0 )
          {
            if ( (_WORD)Heap || (v102 = RtlCSparseBitmapBitmaskRead(v45, 2 * (Heap >> 20))) != 0 && (_DWORD)v102 != 3 )
              v101 = Heap + 16;
            else
              v101 = Heap;
          }
          else
          {
            v101 = Heap;
          }
          if ( (int)RtlpCallInterceptRoutine(v55, a1, v101, 2, v46 + 16) < 0 )
          {
            RtlFreeHeap((PVOID)a1, 0, (PVOID)Heap);
            Heap = 0LL;
          }
        }
        v43 = v121;
        goto LABEL_82;
      }
      v47 = v42 + Heap;
      if ( v44 )
        v47 += 16LL;
      v46 = (v47 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
      *(_QWORD *)v46 = 0LL;
      *(_QWORD *)(v46 + 8) = 0LL;
      *(_BYTE *)(v46 + 2) &= 0xFu;
      *(_WORD *)v46 = a4;
      *(_BYTE *)(v46 + 2) |= 16 * (BYTE1(v30) & 0xFE);
      v48 = v45 >> 4;
      *(_BYTE *)(v46 + 3) = v48;
      _InterlockedOr(v110, 0);
      if ( (_WORD)Heap )
      {
        v49 = 0;
      }
      else
      {
        v100 = RtlCSparseBitmapBitmaskRead(v48, 2 * (Heap >> 20));
        if ( !v100 || (v49 = v100 - 1, v49 == 2) )
        {
          RtlpHpLargeAllocSetExtraPresent(a1, Heap, v30);
          goto LABEL_80;
        }
      }
      v50 = 104LL * v49;
      v51 = v50 + a1 + 112;
      if ( (RtlpHpAppCompatFlags & 1) != 0 )
      {
        DescriptorValidateSafe = RtlpHpSegGetDescriptorValidateSafe(v50 + a1 + 112, Heap);
      }
      else
      {
        v45 = 0xA2E64EADA2E64EADuLL;
        if ( (RtlpHeapKey ^ v51 ^ *(_QWORD *)v51 & Heap ^ *(_QWORD *)((*(_QWORD *)v51 & Heap) + 0x10)) == 0xA2E64EADA2E64EADuLL )
        {
          v45 = *(unsigned __int8 *)(v51 + 8);
          DescriptorValidateSafe = (*(_QWORD *)v51 & Heap)
                                 + 32 * (((unsigned int)Heap - (*(_DWORD *)v51 & (unsigned int)Heap)) >> v45);
        }
        else
        {
          DescriptorValidateSafe = 0LL;
        }
      }
      if ( DescriptorValidateSafe )
      {
        v45 = *(unsigned __int8 *)(DescriptorValidateSafe + 24);
        if ( (v45 & 1) != 0 )
        {
          v45 = *(unsigned __int8 *)(DescriptorValidateSafe + 24);
          if ( (v45 & 2) != 0 )
          {
            if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 0xC) != 0
              || (v45 = *(unsigned __int8 *)(v51 + 8),
                  Heap == (*(_QWORD *)v51 & DescriptorValidateSafe)
                        + ((__int64)(DescriptorValidateSafe - (*(_QWORD *)v51 & DescriptorValidateSafe)) >> 5 << v45)) )
            {
LABEL_76:
              v53 = (_BYTE *)(DescriptorValidateSafe + 24);
              if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 0xC) != 0 )
              {
                v54 = (*(_QWORD *)v51 & DescriptorValidateSafe)
                    + ((__int64)(DescriptorValidateSafe - (*(_QWORD *)v51 & DescriptorValidateSafe)) >> 5 << *(_BYTE *)(v51 + 8));
                if ( (*v53 & 4) != 0 )
                  v45 = (unsigned __int16)RtlpLFHKey ^ *(unsigned __int16 *)(v54 + 40) ^ (unsigned __int64)(unsigned __int16)((unsigned int)v54 >> 12);
                else
                  v45 = 16 * (WORD1(RtlpHeapKey) ^ ((unsigned int)(Heap - 16) >> 16) ^ *(unsigned __int16 *)(Heap - 14))
                      - 16;
                *(_WORD *)(v45 + Heap - 2) |= 0x4000u;
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
    v25 = Size;
    v32 = v117;
    v33 = v119;
LABEL_110:
    if ( v32 <= 0x20000 )
    {
      LODWORD(v118) = v32;
      v67 = v32;
      v68 = a1 + 360;
      if ( (_DWORD)v25 != (_DWORD)v32 )
      {
        v67 = v32 + 2;
        LODWORD(v118) = v32 + 2;
      }
      v69 = ((unsigned int)(v67 + 15) >> 4) + 1;
      v70 = v33 & 1;
      LODWORD(v115) = v69;
      LODWORD(v116) = v70;
      if ( (v33 & 1) == 0 )
      {
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 360));
        v69 = v115;
        v68 = a1 + 360;
      }
      v71 = v69 << 16;
      v125 = (_QWORD *)(v69 << 16);
      while ( 1 )
      {
        v72 = 0LL;
        v73 = *(_QWORD *)(v68 + 8);
        while ( v73 )
        {
          v74 = RtlpHeapKey ^ *(_DWORD *)(v73 - 8) ^ (v73 - 8);
          if ( v71 < v74 )
            v75 = -1;
          else
            v75 = v71 > v74;
          if ( !v75 )
            goto LABEL_125;
          if ( v75 < 0 )
          {
            v76 = *(_QWORD *)v73;
            v72 = (_QWORD *)v73;
            if ( (*(_BYTE *)(v68 + 16) & 1) != 0 && v76 )
            {
LABEL_201:
              v73 ^= v76;
              continue;
            }
          }
          else
          {
            v76 = *(_QWORD *)(v73 + 8);
            if ( (*(_BYTE *)(v68 + 16) & 1) != 0 && v76 )
              goto LABEL_201;
          }
          v73 = v76;
        }
        v73 = (unsigned __int64)v72;
LABEL_125:
        if ( v73 )
          break;
        if ( !v70 )
        {
          RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v68);
          v68 = a1 + 360;
        }
        v91 = RtlpHpVsSubsegmentCreate(v68, (unsigned int)v118, v33, v72);
        if ( !v91 )
        {
          Heap = 0LL;
          goto LABEL_174;
        }
        if ( !(_DWORD)v116 )
          RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 360));
        v92 = (a1 + 384) ^ *(_QWORD *)(a1 + 392);
        if ( (*(_QWORD *)v92 ^ v92) != a1 + 384 )
          __fastfail(3u);
        v93 = v91 ^ (a1 + 384);
        *(_QWORD *)v91 = v93;
        *(_QWORD *)(v91 + 8) = v91 ^ v92;
        *(_QWORD *)v92 = v91 ^ v92;
        *(_QWORD *)(a1 + 392) = v93;
        RtlpHpVsFreeChunkInsert(a1 + 360, v91, v91 + 48);
        v71 = (unsigned int)v125;
        v68 = a1 + 360;
        v70 = (int)v116;
      }
      v77 = v73 - 8;
      v78 = HIDWORD(*(_QWORD *)(v73 - 8));
      v125 = (_QWORD *)(v73 - 8);
      v79 = v78 ^ ((v73 - 8) >> 32) ^ HIDWORD(RtlpHeapKey);
      v80 = v73 - 8;
      if ( (v79 & 0xFF0000) != 0 )
      {
        v81 = (unsigned __int8)(RtlpHeapKey ^ (v73 - 8) ^ *(_BYTE *)v73);
      }
      else if ( (_WORD)v79 )
      {
        v80 = v77 - 16LL * (unsigned __int16)(v78 ^ WORD2(v77) ^ WORD2(RtlpHeapKey));
        v81 = (unsigned __int8)(RtlpHeapKey ^ v80 ^ *(_BYTE *)(v80 + 8));
      }
      else
      {
        v81 = 0;
      }
      v82 = (v80 - (unsigned int)(v81 << 12)) & 0xFFFFFFFFFFFFF000uLL;
      if ( (*(_WORD *)(v82 + 34) ^ 0xABED) == *(_WORD *)(v82 + 32) )
      {
        if ( (unsigned int)RtlpHpVsChunkSplit(v68, v82, v77, v115, v33) )
        {
          Heap = v77 + 16;
          v42 = Size;
          v83 = 16 * ((WORD1(RtlpHeapKey) ^ ((unsigned int)v125 >> 16) ^ *((unsigned __int16 *)v125 + 1)) - 1);
          if ( (unsigned int)Size >= (unsigned int)v83 )
          {
            *((_DWORD *)v125 + 2) &= ~0x100u;
          }
          else
          {
            *((_DWORD *)v125 + 2) |= 0x100u;
            *(_BYTE *)(v83 + Heap - 1) = 0;
            if ( (_DWORD)v83 - (_DWORD)v42 == 1 )
            {
              *(_WORD *)((unsigned int)v83 + Heap - 2) |= 0x8000u;
            }
            else
            {
              *(_WORD *)((unsigned int)v83 + Heap - 2) &= 0xE000u;
              *(_WORD *)((unsigned int)v83 + Heap - 2) |= (v83 - v42) & 0x1FFF;
            }
          }
          if ( !(_DWORD)v116 )
          {
            v84 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 360), 0LL, 1LL);
            if ( v84 != 1 )
            {
              do
              {
                v94 = 3LL;
                v95 = v84 & 6;
                if ( v95 != 2 )
                  v94 = -1LL;
                v96 = v84 + v94;
                v97 = v84;
                v84 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 360), v96, v84);
              }
              while ( v97 != v84 );
              if ( v95 == 2 )
                RtlpWakeSRWLock(a1 + 360, v96, 0LL);
            }
          }
          if ( (v119 & 2) != 0 )
          {
            memset((void *)Heap, 0, (unsigned int)v42);
            v43 = 3;
            goto LABEL_58;
          }
          goto LABEL_137;
        }
      }
      else
      {
        RtlpLogHeapFailure(17, *(_QWORD *)(v68 + 56), v82, v77, 0LL, 0LL);
      }
      Heap = 0LL;
      if ( !(_DWORD)v116 )
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 360));
LABEL_174:
      v42 = Size;
LABEL_137:
      v43 = 3;
      goto LABEL_58;
    }
    v98 = v33;
    if ( v32 > *(unsigned int *)(a1 + 128) )
    {
      if ( v32 <= *(unsigned int *)(a1 + 232) )
      {
        v42 = Size;
        Heap = (unsigned __int64)RtlpHpSegAlloc(a1 + 216, v25, v32, v98);
        goto LABEL_137;
      }
      v99 = (void *)RtlpHpLargeAlloc((PVOID)a1);
    }
    else
    {
      v99 = RtlpHpSegAlloc(a1 + 112, v25, v32, v33);
    }
    Heap = (unsigned __int64)v99;
    goto LABEL_174;
  }
  v7 = *(_DWORD *)(a1 + 116);
  v8 = v7 | a3;
  v113 = 0;
  v122 = 0LL;
  v9 = 0LL;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
  {
    v113 = 5;
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
        v13 = *(_RTL_SRWLOCK **)(a1 + 376);
        v113 = 2;
        Heap = RtlpLowFragHeapAllocFromContext(v13);
        if ( Heap )
        {
LABEL_10:
          if ( !v10 )
            goto LABEL_11;
          a2 -= v122;
          v106 = RtlpSetupExtendedBlock(a1, v8, Heap, v14, v122, v10);
          v111 = Heap;
          Heap = v106;
          if ( (int)RtlpCallInterceptRoutine(v10, a1, v106, 2, v111) >= 0 )
            goto LABEL_11;
          RtlFreeHeap((PVOID)a1, 0, (PVOID)Heap);
          goto LABEL_239;
        }
      }
      v63 = *(__int64 **)(a1 + 312);
      if ( v12 >= *((unsigned int *)v63 + 2) )
      {
        while ( 1 )
        {
          v66 = (__int64 *)*v63;
          if ( !*v63 )
            break;
          v63 = (__int64 *)*v63;
          if ( v12 < *((unsigned int *)v66 + 2) )
            goto LABEL_102;
        }
        v12 = (unsigned int)(*((_DWORD *)v63 + 2) - 1);
      }
LABEL_102:
      v64 = (unsigned int)(*((_DWORD *)v63 + 2) - 1);
      if ( v12 < v64 || *v63 && v12 == v64 )
      {
        v65 = v12 - *((unsigned int *)v63 + 6);
        if ( *((_DWORD *)v63 + 3) )
          v65 *= 2LL;
        v58 = v63[6] + 8 * v65;
      }
      else
      {
LABEL_95:
        v58 = 0LL;
      }
      Heap = RtlpAllocateHeap(a1, v58, (__int64)&v113);
      if ( !Heap )
        goto LABEL_97;
      goto LABEL_10;
    }
    if ( (v8 & 0x3C000102) != 0 || (v7 & 0x1000000) != 0 )
    {
      v10 = 0;
      goto LABEL_4;
    }
    if ( (int)RtlpCallInterceptRoutine(v10, a1, 0, 1, (__int64)&v122) >= 0 )
    {
      v105 = (v122 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
      a2 += v105 + 16;
      v122 = v105 + 16;
      goto LABEL_4;
    }
  }
LABEL_239:
  Heap = 0LL;
LABEL_97:
  NtCurrentTeb()->LastStatusValue = -1073741801;
  v59 = NtCurrentTeb();
  v59->LastErrorValue = RtlNtStatusToDosError(-1073741801);
  if ( (v8 & 4) != 0 )
  {
    if ( !v9 )
      v9 = a2;
    RtlpAllocateHeapRaiseException(v9);
  }
LABEL_11:
  v16 = NtCurrentPeb()->SharedData;
  if ( v16 && *v16 )
    v17 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v17 = 2147353472LL;
  if ( *(_BYTE *)v17
    && (NtCurrentPeb()->TracingFlags & 1) != 0
    && (*(_DWORD *)(a1 + 116) & 0x1000000) == 0
    && ((v8 & 0x61000000) == 0 || (v8 & 0x10000000) != 0)
    && v113 != 5 )
  {
    if ( !Heap )
      goto LABEL_255;
    v107 = (_BYTE *)(Heap - 16);
    _m_prefetchw((const void *)(Heap - 16));
    v108 = *(_BYTE *)(Heap - 16 + 15);
    v109 = Heap - 16;
    if ( v108 == 5 )
      v109 -= 16LL * (unsigned __int8)v107[14];
    if ( *(char *)(v109 + 15) < 0 )
      goto LABEL_255;
    _m_prefetchw(v107);
    if ( v108 == 5 )
      v107 -= 16 * (unsigned __int8)v107[14];
    if ( ((v107[10] ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 17))) & 8) == 0 )
LABEL_255:
      RtlpLogHeapAllocateEvent(a1, Heap, a2, v113);
  }
  if ( (dword_180160378 & 1) != 0
    && (dword_180160378 & 2) != 0
    && (PVOID)a1 != RtlpHpMetadataHeap
    && NtCurrentPeb()->ProcessHeap
    && Heap
    && (v8 & 0x10000000) == 0 )
  {
LABEL_261:
    RtlpHpStackTraceAddStack(a1, Heap);
  }
  return Heap;
}
