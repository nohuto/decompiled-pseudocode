/*
 * XREFs of MiAllocatePagedPoolPages @ 0x1400D9750
 * Callers:
 *     MiAllocatePoolPages @ 0x1400D85D8 (MiAllocatePoolPages.c)
 *     ExpAllocateBigPool @ 0x1400D8A60 (ExpAllocateBigPool.c)
 * Callees:
 *     MiFreePagedPoolPages @ 0x1400094C0 (MiFreePagedPoolPages.c)
 *     MmAllocatePoolMemory @ 0x140025B30 (MmAllocatePoolMemory.c)
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     MiExpandPagedPool @ 0x1400C631C (MiExpandPagedPool.c)
 *     MiFreeExcessSegments @ 0x1400C6548 (MiFreeExcessSegments.c)
 *     RtlSetBitsEx @ 0x1400DA370 (RtlSetBitsEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401B2BD0 (RtlpInterlockedPopEntrySList.c)
 */

ULONG_PTR __fastcall MiAllocatePagedPoolPages(unsigned int a1, unsigned __int64 a2)
{
  int v2; // r8d
  int v3; // r15d
  unsigned __int64 v4; // r14
  unsigned int v5; // ecx
  _SLIST_HEADER *v6; // rcx
  ULONG_PTR v7; // r13
  unsigned __int16 *v8; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r8
  __int64 v12; // r12
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // r9
  __int64 v17; // r8
  unsigned __int64 *v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r10
  unsigned __int64 v21; // rsi
  ULONG_PTR v22; // rdx
  ULONG_PTR v23; // rax
  unsigned __int64 v24; // r12
  unsigned __int64 v25; // rcx
  ULONG_PTR v26; // r10
  __int64 v27; // rsi
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // r15
  unsigned __int64 v30; // r9
  __int64 v31; // r8
  unsigned __int64 *v32; // rdx
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // r10
  unsigned __int64 v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rsi
  ULONG_PTR v40; // rsi
  unsigned __int64 v41; // rdi
  struct _KTHREAD *v42; // rbx
  unsigned int SessionId; // r8d
  unsigned int v44; // edx
  bool v45; // zf
  __int64 v46; // rcx
  int v47; // eax
  __int64 v48; // rcx
  _KLOCK_ENTRY *v49; // rdi
  int v50; // r12d
  __int64 v51; // rdx
  ULONG_PTR result; // rax
  __int64 i; // r10
  __int64 v54; // rcx
  unsigned int v55; // r11d
  unsigned __int64 v56; // r10
  unsigned __int64 v57; // rcx
  __int64 v58; // r10
  unsigned __int64 v59; // rdx
  __int64 v60; // rcx
  unsigned int v61; // r11d
  unsigned __int64 *v62; // rsi
  __int64 v63; // rax
  unsigned int v64; // r11d
  unsigned __int64 v65; // r10
  unsigned __int64 v66; // rax
  __int64 v67; // r10
  __int64 v68; // rax
  unsigned __int64 v69; // rax
  bool v70; // sf
  __int64 v71; // rdx
  unsigned int v72; // ecx
  unsigned __int64 v73; // rdx
  unsigned __int64 v74; // rcx
  bool v75; // sf
  __int64 v76; // rcx
  unsigned int v77; // eax
  unsigned __int64 v78; // rcx
  unsigned __int64 v79; // rax
  unsigned __int64 v80; // r11
  __int64 v81; // r8
  unsigned int v82; // edx
  unsigned __int64 *v83; // r8
  unsigned int v84; // r8d
  __int64 v85; // rdx
  unsigned __int64 v86; // r11
  __int64 v87; // r8
  unsigned int v88; // ecx
  unsigned __int64 *v89; // r8
  unsigned int v90; // r8d
  __int64 v91; // rcx
  __int64 v92; // rcx
  __int64 v93; // rax
  PSLIST_ENTRY v94; // rax
  ULONG_PTR v95; // r10
  struct _KTHREAD *v96; // rbx
  unsigned int v97; // r8d
  unsigned __int8 v98; // si
  unsigned int v99; // edx
  __int64 v100; // rcx
  int v101; // eax
  __int64 v102; // rcx
  _KLOCK_ENTRY *v103; // rdi
  __int64 v104; // rdx
  struct _KEVENT *v105; // rcx
  struct _KEVENT *v106; // rcx
  unsigned __int64 v107; // [rsp+30h] [rbp-89h]
  unsigned __int64 v108; // [rsp+30h] [rbp-89h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-81h]
  unsigned int v110; // [rsp+40h] [rbp-79h]
  struct _KTHREAD *v111; // [rsp+60h] [rbp-59h]
  unsigned __int64 v112; // [rsp+68h] [rbp-51h]
  __int64 v113; // [rsp+70h] [rbp-49h]
  ULONG_PTR v114; // [rsp+78h] [rbp-41h] BYREF
  unsigned int v115; // [rsp+80h] [rbp-39h]
  unsigned int v116; // [rsp+84h] [rbp-35h]
  int v117; // [rsp+88h] [rbp-31h]
  unsigned int v118; // [rsp+8Ch] [rbp-2Dh]
  int v119; // [rsp+90h] [rbp-29h]
  int v120; // [rsp+94h] [rbp-25h]
  unsigned int v121; // [rsp+98h] [rbp-21h]
  unsigned int v122; // [rsp+9Ch] [rbp-1Dh]
  int v123; // [rsp+A0h] [rbp-19h]
  unsigned int v124; // [rsp+A4h] [rbp-15h]
  int v125; // [rsp+A8h] [rbp-11h]
  unsigned int v126; // [rsp+ACh] [rbp-Dh]
  unsigned __int64 v127; // [rsp+B0h] [rbp-9h]
  __int64 v128; // [rsp+B8h] [rbp-1h]
  ULONG_PTR v129[3]; // [rsp+C0h] [rbp+7h] BYREF
  int v131; // [rsp+128h] [rbp+6Fh] BYREF
  int v132; // [rsp+130h] [rbp+77h] BYREF
  unsigned __int64 v133; // [rsp+138h] [rbp+7Fh]

  v2 = a1;
  v3 = 0;
  v4 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v5 = *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 192) + 146LL);
  v110 = v5;
  if ( (v2 & 0x20) != 0 )
  {
    v112 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    v7 = v112 + 160;
    v8 = (unsigned __int16 *)(v112 + 3182);
  }
  else
  {
    if ( (unsigned __int64)(qword_1403CC5D8 - qword_1403CC5C8) < 0x500 )
    {
      ++dword_1403CB198;
      MiFreeExcessSegments();
      v2 = a1;
      v5 = v110;
    }
    if ( v4 == 1 && v2 >= 0 )
    {
      v6 = &qword_1403CB6A8[25 * v5];
      if ( LOWORD(v6->Alignment) )
      {
        v94 = RtlpInterlockedPopEntrySList(v6);
        if ( v94 )
        {
          result = (ULONG_PTR)&v94[-1];
          if ( *(_QWORD *)result != (result ^ qword_1403CC500) )
            KeBugCheckEx(0x1Au, 0x5300uLL, result, *(_QWORD *)result, result ^ qword_1403CC500);
          return result;
        }
      }
    }
    v112 = 0LL;
    v7 = (ULONG_PTR)&::BugCheckParameter2;
    v8 = (unsigned __int16 *)&unk_1403CC98E;
  }
  v128 = *(_QWORD *)(qword_1403CBD88 + 8LL * *v8);
  CurrentThread = KeGetCurrentThread();
  v10 = *(_QWORD *)(v7 + 8);
  v11 = *(_QWORD *)(v7 + 40);
  v12 = *(_QWORD *)(v7 + 16);
  v13 = v11;
  if ( v11 >= v10 )
    v13 = 0LL;
  v111 = CurrentThread;
  v107 = *(_QWORD *)(v7 + 40);
  v14 = v10 - 1;
  v133 = *(_QWORD *)(v7 + 8);
  if ( v4 )
  {
    while ( v14 - v13 + 1 < v4 )
    {
      v20 = -1LL;
LABEL_91:
      if ( !v13 )
      {
LABEL_18:
        v21 = v20;
        CurrentThread = v111;
        v3 = 0;
        goto LABEL_19;
      }
      v59 = v11 + v4;
      if ( v11 + v4 > v10 )
        v59 = v10;
      v14 = v59 - 1;
      v13 = 0LL;
    }
    v15 = v14 - v4 + 1;
    v16 = v12 + 8 * (v15 >> 6);
    v17 = *(_QWORD *)(v12 + 8 * (v13 >> 6)) | ((1LL << (v13 & 0x3F)) - 1);
    v18 = (unsigned __int64 *)(v12 + 8 * (v13 >> 6));
    if ( v4 > 0x7F )
    {
      v80 = v16 + 8;
      if ( (v15 & 0x3F) == 0 )
        v80 = v12 + 8 * ((v14 - v4 + 1) >> 6);
      if ( !v17 )
      {
        v82 = 0;
        goto LABEL_172;
      }
      if ( !*++v18 )
      {
        v45 = !_BitScanReverse64((unsigned __int64 *)&v92, v17);
        if ( v45 )
          v82 = 64;
        else
          v82 = 63 - v92;
        v115 = v82;
        goto LABEL_172;
      }
      while ( (unsigned __int64)v18 <= v80 )
      {
        if ( !*++v18 )
        {
          v45 = !_BitScanReverse64((unsigned __int64 *)&v81, *(v18 - 1));
          if ( v45 )
            v82 = 64;
          else
            v82 = 63 - v81;
          v116 = v82;
LABEL_172:
          v20 = (((__int64)v18 - v12) >> 3 << 6) - v82;
          if ( v20 > v15 )
            break;
          v83 = &v18[(v4 - v82) >> 6];
          if ( ++v18 == v83 )
          {
LABEL_176:
            v84 = ((_BYTE)v4 - (_BYTE)v82) & 0x3F;
            if ( (((_BYTE)v4 - (_BYTE)v82) & 0x3F) == 0 )
              goto LABEL_17;
            v45 = !_BitScanForward64((unsigned __int64 *)&v85, *v18);
            if ( v45 )
              LODWORD(v85) = 64;
            v117 = v85;
            if ( (unsigned int)v85 >= v84 )
              goto LABEL_17;
          }
          else
          {
            while ( !*v18 )
            {
              if ( ++v18 == v83 )
                goto LABEL_176;
            }
          }
        }
      }
    }
    else
    {
      if ( v4 >= 0x40 )
      {
        while ( 2 )
        {
          v70 = v17 < 0;
          while ( 1 )
          {
            if ( v70 )
            {
              do
              {
                if ( (unsigned __int64)++v18 > v16 )
                  goto LABEL_89;
                v17 = *v18;
              }
              while ( (*v18 & 0x8000000000000000uLL) != 0LL );
            }
            v45 = !_BitScanReverse64((unsigned __int64 *)&v71, v17);
            if ( v45 )
              v72 = 64;
            else
              v72 = 63 - v71;
            v118 = v72;
            v20 = (((((__int64)v18 - v12) >> 3) + 1) << 6) - v72;
            if ( v20 > v15 )
              goto LABEL_89;
            v73 = v4 - v72;
            if ( v4 == v72 )
              goto LABEL_17;
            v17 = v18[1];
            ++v18;
            if ( v73 < 0x40 )
              break;
            v70 = v17 < 0;
            if ( !v17 )
            {
              v73 -= 64LL;
              if ( !v73 )
                goto LABEL_17;
              v17 = v18[1];
              ++v18;
              break;
            }
          }
          v45 = !_BitScanForward64(&v74, v17);
          if ( v45 )
            v74 = 64LL;
          v119 = v74;
          if ( v74 < v73 )
            continue;
          break;
        }
LABEL_17:
        if ( v20 != -1LL )
          goto LABEL_18;
        goto LABEL_90;
      }
      if ( v4 > 1 )
      {
        for ( i = 0LL; ; v120 = i )
        {
          if ( v17 == -1 )
          {
            while ( 1 )
            {
              if ( (unsigned __int64)++v18 > v16 )
                goto LABEL_89;
              v17 = *v18;
              if ( *v18 != -1LL )
              {
                i = 0LL;
                break;
              }
            }
          }
          v45 = !_BitScanForward64((unsigned __int64 *)&v54, v17);
          if ( v45 )
            LODWORD(v54) = 64;
          if ( (unsigned int)(i + v54) >= v4 )
            break;
          v55 = v4;
          v56 = ~v17;
          while ( 1 )
          {
            v56 &= v56 >> (v55 >> 1);
            if ( !v56 )
              break;
            v55 -= v55 >> 1;
            if ( v55 <= 1 )
            {
              _BitScanForward64(&v57, v56);
              v58 = (unsigned int)v57;
              goto LABEL_88;
            }
          }
          if ( v18 == (unsigned __int64 *)(v12 + 8 * (v14 >> 6)) )
            goto LABEL_89;
          v45 = !_BitScanReverse64((unsigned __int64 *)&v60, v17);
          if ( v45 )
            i = 64LL;
          else
            i = (unsigned int)(63 - v60);
          v17 = v18[1];
          ++v18;
        }
        v58 = -i;
LABEL_88:
        v20 = (((__int64)v18 - v12) >> 3 << 6) + v58;
        if ( v20 <= v15 )
          goto LABEL_17;
      }
      else
      {
        if ( v17 != -1 )
        {
LABEL_16:
          _BitScanForward64(&v19, ~v17);
          v20 = (unsigned int)v19 + (((__int64)v18 - v12) >> 3 << 6);
          if ( v20 <= v15 )
            goto LABEL_17;
          v20 = -1LL;
LABEL_90:
          v11 = v107;
          v10 = v133;
          goto LABEL_91;
        }
        while ( (unsigned __int64)++v18 <= v16 )
        {
          v17 = *v18;
          if ( *v18 != -1LL )
            goto LABEL_16;
        }
      }
    }
LABEL_89:
    v20 = -1LL;
    goto LABEL_90;
  }
  v21 = v13 & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_19:
  LODWORD(v133) = 0;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(v7, 0LL);
  v22 = *(_QWORD *)(v7 + 8);
  v23 = v7 + 8;
  v127 = *(_QWORD *)(v7 + 40);
  v24 = v127;
  v25 = v127;
  BugCheckParameter2 = v22;
  if ( v21 >= v127 )
    v25 = v21;
  v26 = v22 - 1;
  v27 = *(_QWORD *)(v7 + 16);
  v28 = v25;
  v108 = v25;
  if ( v25 >= v22 )
    v28 = 0LL;
  v113 = *(_QWORD *)(v7 + 16);
  if ( v4 )
  {
    while ( v26 - v28 + 1 < v4 )
    {
      v34 = -1LL;
LABEL_122:
      if ( !v28 )
      {
LABEL_31:
        v24 = v127;
        v23 = v7 + 8;
        v35 = v34;
        v3 = 0;
        goto LABEL_32;
      }
      v27 = v113;
      v95 = v25 + v4;
      v28 = 0LL;
      if ( v25 + v4 > v22 )
        v95 = v22;
      v26 = v95 - 1;
    }
    v29 = v26 - v4 + 1;
    v30 = v27 + 8 * (v29 >> 6);
    v31 = *(_QWORD *)(v27 + 8 * (v28 >> 6)) | ((1LL << (v28 & 0x3F)) - 1);
    v32 = (unsigned __int64 *)(v27 + 8 * (v28 >> 6));
    if ( v4 <= 0x7F )
    {
      if ( v4 >= 0x40 )
      {
        while ( 2 )
        {
          v75 = v31 < 0;
          while ( 1 )
          {
            if ( v75 )
            {
              do
              {
                if ( (unsigned __int64)++v32 > v30 )
                  goto LABEL_120;
                v31 = *v32;
              }
              while ( (*v32 & 0x8000000000000000uLL) != 0LL );
            }
            v45 = !_BitScanReverse64((unsigned __int64 *)&v76, v31);
            if ( v45 )
              v77 = 64;
            else
              v77 = 63 - v76;
            v124 = v77;
            v34 = (((((__int64)v32 - v27) >> 3) + 1) << 6) - v77;
            if ( v34 > v29 )
              goto LABEL_120;
            v78 = v4 - v77;
            if ( v4 == v77 )
              goto LABEL_30;
            v31 = v32[1];
            ++v32;
            if ( v78 < 0x40 )
              break;
            v75 = v31 < 0;
            if ( !v31 )
            {
              v78 -= 64LL;
              if ( !v78 )
                goto LABEL_30;
              v31 = v32[1];
              ++v32;
              break;
            }
          }
          v45 = !_BitScanForward64(&v79, v31);
          if ( v45 )
            v79 = 64LL;
          v125 = v79;
          if ( v79 < v78 )
            continue;
          break;
        }
LABEL_30:
        if ( v34 != -1LL )
          goto LABEL_31;
        goto LABEL_121;
      }
      if ( v4 > 1 )
      {
        v61 = 0;
        v62 = (unsigned __int64 *)(v27 + 8 * (v26 >> 6));
        while ( 1 )
        {
          if ( v31 == -1 )
          {
            while ( 1 )
            {
              if ( (unsigned __int64)++v32 > v30 )
                goto LABEL_120;
              v31 = *v32;
              if ( *v32 != -1LL )
              {
                v61 = 0;
                break;
              }
            }
          }
          v45 = !_BitScanForward64((unsigned __int64 *)&v63, v31);
          if ( v45 )
            LODWORD(v63) = 64;
          if ( v61 + (unsigned int)v63 >= v4 )
            break;
          v64 = v4;
          v65 = ~v31;
          while ( 1 )
          {
            v65 &= v65 >> (v64 >> 1);
            if ( !v65 )
              break;
            v64 -= v64 >> 1;
            if ( v64 <= 1 )
            {
              _BitScanForward64(&v66, v65);
              v67 = (unsigned int)v66;
              goto LABEL_108;
            }
          }
          if ( v32 == v62 )
            goto LABEL_120;
          v45 = !_BitScanReverse64((unsigned __int64 *)&v68, v31);
          if ( v45 )
            v61 = 64;
          else
            v61 = 63 - v68;
          v31 = v32[1];
          ++v32;
          v126 = v61;
        }
        v67 = -(__int64)v61;
LABEL_108:
        v34 = (((__int64)v32 - v113) >> 3 << 6) + v67;
        if ( v34 <= v29 )
          goto LABEL_30;
      }
      else
      {
        if ( v31 != -1 )
        {
LABEL_29:
          _BitScanForward64(&v33, ~v31);
          v34 = v33 + (((__int64)v32 - v27) >> 3 << 6);
          if ( v34 <= v29 )
            goto LABEL_30;
          v34 = -1LL;
LABEL_121:
          v22 = BugCheckParameter2;
          v25 = v108;
          goto LABEL_122;
        }
        while ( (unsigned __int64)++v32 <= v30 )
        {
          v31 = *v32;
          if ( *v32 != -1LL )
            goto LABEL_29;
        }
      }
LABEL_109:
      v34 = -1LL;
      goto LABEL_121;
    }
    v86 = v30 + 8;
    if ( (v29 & 0x3F) == 0 )
      v86 = v27 + 8 * ((v26 - v4 + 1) >> 6);
    if ( !v31 )
    {
      v88 = 0;
      goto LABEL_190;
    }
    if ( !*++v32 )
    {
      v45 = !_BitScanReverse64((unsigned __int64 *)&v93, v31);
      if ( v45 )
        v88 = 64;
      else
        v88 = 63 - v93;
      v121 = v88;
      goto LABEL_190;
    }
    while ( (unsigned __int64)v32 <= v86 )
    {
      if ( !*++v32 )
      {
        v45 = !_BitScanReverse64((unsigned __int64 *)&v87, *(v32 - 1));
        if ( v45 )
          v88 = 64;
        else
          v88 = 63 - v87;
        v122 = v88;
LABEL_190:
        v34 = (((__int64)v32 - v27) >> 3 << 6) - v88;
        if ( v34 > v29 )
          goto LABEL_109;
        v89 = &v32[(v4 - v88) >> 6];
        if ( ++v32 == v89 )
        {
LABEL_194:
          v90 = ((_BYTE)v4 - (_BYTE)v88) & 0x3F;
          if ( (((_BYTE)v4 - (_BYTE)v88) & 0x3F) == 0 )
            goto LABEL_30;
          v45 = !_BitScanForward64((unsigned __int64 *)&v91, *v32);
          if ( v45 )
            LODWORD(v91) = 64;
          v123 = v91;
          if ( (unsigned int)v91 >= v90 )
            goto LABEL_30;
        }
        else
        {
          while ( !*v32 )
          {
            if ( ++v32 == v89 )
              goto LABEL_194;
          }
        }
      }
    }
LABEL_120:
    v34 = -1LL;
    goto LABEL_121;
  }
  v35 = v28 & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_32:
  if ( v35 != -1LL )
  {
    RtlSetBitsEx(v23, v35, v4);
LABEL_34:
    if ( v35 != v24 && (v108 != v24 || v4 != 1) )
    {
LABEL_36:
      v39 = *(_QWORD *)(v7 + 24);
      *(_QWORD *)(v7 + 48) += v4;
      v40 = (__int64)((v35 << 28) + (v39 << 25)) >> 16;
      if ( v112 )
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v112 + 48), v4);
      }
      else
      {
        v41 = qword_1403CC5D8 - qword_1403CC5C8;
        if ( qword_1403CC5D8 - qword_1403CC5C8 < (unsigned __int64)qword_1403CB188 )
        {
          v105 = *(struct _KEVENT **)(v128 + 248);
          if ( v105->Header.SignalState )
            KeResetEvent(v105);
          if ( v41 <= qword_1403CB180 )
          {
            v106 = *(struct _KEVENT **)(v128 + 240);
            if ( !v106->Header.SignalState )
              KeSetEvent(v106, 0, 0);
          }
        }
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v7, v36, v37, v38);
      v132 = 0;
      v42 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v7) == 1 )
        SessionId = MmGetSessionIdEx(v42->ApcState.Process);
      else
        SessionId = -1;
      --v42->SpecialApcDisable;
      if ( ++v42->AbAllocationRegionCount == 1 )
        v3 = 1;
      v44 = ((char)v42->AbEntrySummary | (char)v42->AbOrphanedEntrySummary) ^ 0x3F;
      v45 = !_BitScanReverse((unsigned int *)&v46, v44);
      if ( v45 )
        goto LABEL_77;
      while ( 1 )
      {
        v47 = 1 << v46;
        v48 = v46;
        v49 = &v42->LockEntries[v48];
        v44 &= ~v47;
        if ( (v49->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v49->LockState.0 & 1) == 0
          && (*(_QWORD *)&v49->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v7 & 0x7FFFFFFFFFFFFFFCLL)
          && v49->LockState.SessionId == SessionId )
        {
          v49->AcquiredByte &= ~1u;
          if ( v49->LockState.0 )
            break;
        }
        v45 = !_BitScanReverse((unsigned int *)&v46, v44);
        if ( v45 )
          goto LABEL_77;
      }
      if ( !v49 )
      {
LABEL_77:
        if ( (*((_DWORD *)&v42->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v42, v7, SessionId, 0LL);
        v50 = 0;
      }
      else
      {
        v49->CrossThreadReleasableAndBusyByte |= 2u;
        if ( (__int64)v49->LockState.LockState < 0 )
          KiAbEntryRemoveFromTree(&v42->LockEntries[v48].TreeNode);
        v50 = 0;
        v132 = 0;
        v132 = v49->BoostBitmap.AllFields & 0x1FFFF;
        v49->BoostBitmap.AllFields &= 0xFFFE0000;
        v49->ThreadLocalFlags &= ~1u;
        v49->LockState.0 = 0LL;
        v51 = ((char *)v49 - (char *)v42 - 800) / 96;
        if ( v3 )
          v42->AbEntrySummary |= 1 << v51;
        else
          _InterlockedOr8((volatile signed __int8 *)&v42->AbOrphanedEntrySummary, 1 << v51);
      }
      --v42->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts(v42, v7, &v132);
      v45 = v42->SpecialApcDisable++ == -1;
      if ( v45 && ($005F0E83B22994B61E86C72E0CE43C71 *)v42->ApcState.ApcListHead[0].Flink != &v42->152 )
        KiCheckForKernelApcDelivery();
      v45 = v111->SpecialApcDisable++ == -1;
      if ( v45 && ($005F0E83B22994B61E86C72E0CE43C71 *)v111->ApcState.ApcListHead[0].Flink != &v111->152 )
        KiCheckForKernelApcDelivery();
      if ( (_DWORD)v133 )
        return v40;
      v114 = v4 << 12;
      v129[0] = v40;
      if ( (int)MmAllocatePoolMemory(v129, &v114, (v110 + 1) | 0x1000, 4u, a1) >= 0 )
        return v40;
      MiFreePagedPoolPages(v40, v114, 0, 1);
      goto LABEL_259;
    }
LABEL_72:
    *(_QWORD *)(v7 + 40) = v35 + v4;
    goto LABEL_36;
  }
  v69 = MiExpandPagedPool((ULONG_PTR *)v7, v4);
  v35 = v69;
  if ( v69 != -1LL )
  {
    LODWORD(v133) = 1;
    if ( (v4 & 0x1FF) != 0 && (v4 == 1 || v69 < v24) )
      goto LABEL_72;
    goto LABEL_34;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v7, v36, v37, v38);
  v131 = 0;
  v96 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v7) == 1 )
    v97 = MmGetSessionIdEx(v96->ApcState.Process);
  else
    v97 = -1;
  --v96->SpecialApcDisable;
  v98 = ++v96->AbAllocationRegionCount;
  v99 = ((char)v96->AbEntrySummary | (char)v96->AbOrphanedEntrySummary) ^ 0x3F;
  v45 = !_BitScanReverse((unsigned int *)&v100, v99);
  if ( v45 )
    goto LABEL_248;
  while ( 1 )
  {
    v101 = 1 << v100;
    v102 = v100;
    v103 = &v96->LockEntries[v102];
    v99 &= ~v101;
    if ( (v103->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v103->LockState.0 & 1) == 0
      && (*(_QWORD *)&v103->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v7 & 0x7FFFFFFFFFFFFFFCLL)
      && v103->LockState.SessionId == v97 )
    {
      v103->AcquiredByte &= ~1u;
      if ( v103->LockState.0 )
        break;
    }
    v45 = !_BitScanReverse((unsigned int *)&v100, v99);
    if ( v45 )
      goto LABEL_248;
  }
  if ( !v103 )
  {
LABEL_248:
    if ( (*((_DWORD *)&v96->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v96, v7, v97, 0LL);
  }
  else
  {
    v103->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v103->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&v96->LockEntries[v102].TreeNode);
    v131 = 0;
    v131 = v103->BoostBitmap.AllFields & 0x1FFFF;
    v103->BoostBitmap.AllFields &= 0xFFFE0000;
    v103->ThreadLocalFlags &= ~1u;
    v103->LockState.0 = 0LL;
    v104 = ((char *)v103 - (char *)v96 - 800) / 96;
    if ( v98 == 1 )
      v96->AbEntrySummary |= 1 << v104;
    else
      _InterlockedOr8((volatile signed __int8 *)&v96->AbOrphanedEntrySummary, 1 << v104);
  }
  --v96->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(v96, v7, &v131);
  v45 = v96->SpecialApcDisable++ == -1;
  if ( v45 && ($005F0E83B22994B61E86C72E0CE43C71 *)v96->ApcState.ApcListHead[0].Flink != &v96->152 )
    KiCheckForKernelApcDelivery();
  KiLeaveGuardedRegionUnsafe(v111);
  v50 = 1;
LABEL_259:
  MiFreeExcessSegments();
  if ( !v50 )
  {
    if ( v112 )
    {
      ++dword_1403CB148;
      ++dword_1403CB174;
      ++*(_DWORD *)(v112 + 100);
    }
    else
    {
      ++dword_1403CB13C;
      ++dword_1403CB170;
    }
  }
  return 0LL;
}
