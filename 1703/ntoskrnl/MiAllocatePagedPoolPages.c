/*
 * XREFs of MiAllocatePagedPoolPages @ 0x1400F8A60
 * Callers:
 *     MiAllocatePoolPages @ 0x1400212B0 (MiAllocatePoolPages.c)
 *     ExpAllocateBigPool @ 0x14008C2B0 (ExpAllocateBigPool.c)
 * Callees:
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     MiReturnResidentAvailable @ 0x1400CCD70 (MiReturnResidentAvailable.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x1400D0C60 (MiChargeCommit.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MiFlushTbAsNeeded @ 0x1400F9A20 (MiFlushTbAsNeeded.c)
 *     MiChargeResident @ 0x14010EE5C (MiChargeResident.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     MiExpandPagedPool @ 0x140126B48 (MiExpandPagedPool.c)
 *     MiTrimSegmentCache @ 0x140167B80 (MiTrimSegmentCache.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x14017CF18 (MiMakeDemandZeroPte.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140189470 (RtlpInterlockedPopEntrySList.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MiPointerEncode @ 0x140217BDC (MiPointerEncode.c)
 *     MiIssuePageExtendRequestNoWait @ 0x14021A398 (MiIssuePageExtendRequestNoWait.c)
 *     MiFillPagedPoolLockedDown @ 0x1406B6770 (MiFillPagedPoolLockedDown.c)
 */

PSLIST_ENTRY __fastcall MiAllocatePagedPoolPages(int a1, unsigned __int64 a2, __int64 a3)
{
  _BOOL8 v4; // rdi
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rcx
  _SLIST_HEADER *v9; // rcx
  PSLIST_ENTRY v10; // rax
  unsigned __int64 v12; // rbx
  unsigned __int16 *v13; // rax
  ULONG_PTR *v14; // rsi
  unsigned __int64 v15; // r14
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v17; // r15
  ULONG_PTR v18; // r12
  ULONG_PTR v19; // r14
  ULONG_PTR v20; // r13
  ULONG_PTR v21; // rdx
  unsigned __int64 v22; // r13
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // r11
  __int64 v26; // r9
  unsigned __int64 *v27; // rax
  unsigned __int64 v28; // r10
  unsigned int v29; // edx
  bool v30; // zf
  __int64 v31; // rcx
  __int64 v32; // r8
  unsigned __int64 *v33; // r9
  unsigned int v34; // r9d
  __int64 v35; // rdx
  ULONG_PTR v36; // rdx
  bool v37; // sf
  __int64 v38; // rdx
  unsigned int v39; // ecx
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rcx
  unsigned int v44; // r8d
  unsigned __int64 v45; // r10
  unsigned __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rcx
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // r12
  ULONG_PTR v51; // r13
  unsigned __int64 v52; // rcx
  ULONG_PTR v53; // r14
  unsigned __int64 v54; // r15
  ULONG_PTR v55; // r10
  unsigned __int64 v56; // r15
  unsigned __int64 v57; // r9
  unsigned __int64 v58; // rsi
  unsigned __int64 v59; // r11
  __int64 v60; // r8
  unsigned __int64 *v61; // rdx
  unsigned __int64 v62; // r10
  unsigned int v63; // ecx
  __int64 v64; // rax
  __int64 v65; // r8
  unsigned __int64 *v66; // r8
  unsigned int v67; // r8d
  __int64 v68; // rcx
  ULONG_PTR v69; // r10
  bool v70; // sf
  __int64 v71; // rcx
  unsigned int v72; // eax
  unsigned __int64 v73; // rcx
  unsigned __int64 v74; // rax
  __int64 v75; // r9
  unsigned __int64 *v76; // rdi
  __int64 v77; // rax
  unsigned int v78; // r9d
  unsigned __int64 v79; // r10
  unsigned __int64 v80; // rax
  __int64 v81; // r9
  __int64 v82; // rax
  unsigned __int64 v83; // rax
  unsigned __int64 v84; // r14
  unsigned __int64 v85; // rcx
  _BYTE *v86; // rsi
  char v87; // al
  unsigned __int64 v88; // rax
  unsigned __int64 v89; // rdi
  unsigned __int64 v90; // rsi
  struct _KEVENT *v91; // rcx
  struct _KEVENT *v92; // rcx
  __int16 v93; // ax
  unsigned __int64 v94; // r13
  __int64 *v95; // rbx
  __int64 DemandZeroPte; // rdx
  __int64 v97; // rcx
  unsigned __int64 v98; // r10
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  ULONG_PTR BugCheckParameter4; // rax
  ULONG_PTR v103; // rcx
  ULONG_PTR v104; // r9
  ULONG_PTR v105; // [rsp+30h] [rbp-79h]
  unsigned __int64 v106; // [rsp+30h] [rbp-79h]
  unsigned __int64 v107; // [rsp+38h] [rbp-71h]
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-69h]
  unsigned __int64 v109; // [rsp+48h] [rbp-61h]
  __int64 v110; // [rsp+50h] [rbp-59h]
  int v111; // [rsp+58h] [rbp-51h]
  unsigned __int64 v112; // [rsp+88h] [rbp-21h]
  unsigned __int16 *v113; // [rsp+90h] [rbp-19h]
  unsigned __int64 v114; // [rsp+B0h] [rbp+7h]
  unsigned int v115; // [rsp+110h] [rbp+67h]

  v111 = 0;
  v4 = (a2 & 0xFFF) != 0;
  v5 = a2 >> 12;
  v6 = v5 + v4;
  v107 = v6;
  v7 = KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
  v8 = *(unsigned __int16 *)(*(_QWORD *)(v7 + 192) + 146LL);
  v115 = *(unsigned __int16 *)(*(_QWORD *)(v7 + 192) + 146LL);
  if ( (a1 & 0x20) != 0 )
  {
    v12 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    v14 = (ULONG_PTR *)(v12 + 160);
    v13 = (unsigned __int16 *)(v12 + 3008);
  }
  else
  {
    if ( (unsigned __int64)(qword_14036D098 - qword_14036D088) < 0x500 )
    {
      ++dword_14036BD98;
      MiTrimSegmentCache(v8, v5, a3);
      LODWORD(v8) = v115;
    }
    if ( v6 == 1 && a1 >= 0 )
    {
      v9 = &qword_14036C1C8[25 * (unsigned int)v8];
      if ( LOWORD(v9->Alignment) )
      {
        v10 = RtlpInterlockedPopEntrySList(v9);
        if ( v10 )
        {
          if ( v10[-1].Next != (_SLIST_ENTRY *)((unsigned __int64)&v10[-1] ^ qword_14036CFC0) )
          {
            BugCheckParameter4 = MiPointerEncode();
            KeBugCheckEx(0x1Au, 0x5300uLL, v103, v104, BugCheckParameter4);
          }
          return v10 - 1;
        }
      }
    }
    v12 = 0LL;
    v13 = (unsigned __int16 *)&unk_14036D3A0;
    v14 = &qword_14036D058;
  }
  v113 = v13;
  BugCheckParameter2 = (ULONG_PTR)v14;
  v15 = *(_QWORD *)(qword_14036C8F8 + 8LL * v13[86]);
  v109 = v15;
  if ( !(unsigned int)MiChargeCommit(v15, v6, 1uLL) )
    goto LABEL_195;
  v112 = 0LL;
  if ( !v12 && (dword_1403E3104 & 2) != 0 )
  {
    if ( !(unsigned int)MiChargeResident(v15, v6, 0LL) )
      goto LABEL_194;
    v112 = v6;
  }
  CurrentThread = KeGetCurrentThread();
  v17 = v14[1];
  v18 = v14[5];
  v19 = v14[2];
  v20 = v18;
  v110 = (__int64)CurrentThread;
  if ( v18 >= v17 )
    v20 = 0LL;
  v21 = v17 - 1;
  v105 = v20;
  if ( v6 )
  {
    while ( 1 )
    {
      if ( v21 - v20 + 1 < v6 )
      {
LABEL_22:
        v23 = -1LL;
        goto LABEL_46;
      }
      v24 = v21 - v6 + 1;
      v25 = v19 + 8 * (v24 >> 6);
      v26 = *(_QWORD *)(v19 + 8 * (v20 >> 6)) | ((1LL << (v20 & 0x3F)) - 1);
      v27 = (unsigned __int64 *)(v19 + 8 * (v20 >> 6));
      if ( v6 <= 0x7F )
      {
        if ( v6 < 0x40 )
        {
          if ( v6 > 1 )
          {
            v42 = 0LL;
            while ( 1 )
            {
              if ( v26 == -1 )
              {
                while ( 1 )
                {
                  if ( (unsigned __int64)++v27 > v25 )
                    goto LABEL_22;
                  v26 = *v27;
                  if ( *v27 != -1LL )
                  {
                    v42 = 0LL;
                    break;
                  }
                }
              }
              v30 = !_BitScanForward64((unsigned __int64 *)&v43, v26);
              if ( v30 )
                LODWORD(v43) = 64;
              if ( (unsigned int)(v42 + v43) >= v107 )
                break;
              v44 = v107;
              v45 = ~v26;
              while ( 1 )
              {
                v45 &= v45 >> (v44 >> 1);
                if ( !v45 )
                  break;
                v44 -= v44 >> 1;
                if ( v44 <= 1 )
                {
                  _BitScanForward64(&v46, v45);
                  v47 = (unsigned int)v46;
                  goto LABEL_86;
                }
              }
              if ( v27 == (unsigned __int64 *)(v19 + 8 * (v21 >> 6)) )
                goto LABEL_87;
              v30 = !_BitScanReverse64((unsigned __int64 *)&v48, v26);
              v26 = v27[1];
              ++v27;
              if ( v30 )
                v42 = 64LL;
              else
                v42 = (unsigned int)(63 - v48);
            }
            v47 = -v42;
LABEL_86:
            v23 = ((__int64)((__int64)v27 - v19) >> 3 << 6) + v47;
            if ( v23 <= v24 )
              goto LABEL_45;
            goto LABEL_87;
          }
          if ( v26 == -1 )
          {
            do
            {
              if ( (unsigned __int64)++v27 > v25 )
                goto LABEL_87;
              v26 = *v27;
            }
            while ( *v27 == -1LL );
          }
          _BitScanForward64(&v49, ~v26);
          v23 = (unsigned int)v49 + ((__int64)((__int64)v27 - v19) >> 3 << 6);
          if ( v23 > v24 )
          {
            v23 = -1LL;
            goto LABEL_46;
          }
        }
        else
        {
          while ( 2 )
          {
            v37 = v26 < 0;
            while ( 1 )
            {
              if ( v37 )
              {
                do
                {
                  if ( (unsigned __int64)++v27 > v25 )
                    goto LABEL_87;
                  v26 = *v27;
                }
                while ( (*v27 & 0x8000000000000000uLL) != 0LL );
              }
              v30 = !_BitScanReverse64((unsigned __int64 *)&v38, v26);
              if ( v30 )
                v39 = 64;
              else
                v39 = 63 - v38;
              v23 = ((((__int64)((__int64)v27 - v19) >> 3) + 1) << 6) - v39;
              if ( v23 > v24 )
                goto LABEL_87;
              v40 = v6 - v39;
              if ( v6 == v39 )
                goto LABEL_45;
              v26 = v27[1];
              ++v27;
              if ( v40 < 0x40 )
                break;
              v37 = v26 < 0;
              if ( !v26 )
              {
                v40 -= 64LL;
                if ( !v40 )
                  goto LABEL_45;
                v26 = v27[1];
                ++v27;
                break;
              }
            }
            v30 = !_BitScanForward64(&v41, v26);
            if ( v30 )
              v41 = 64LL;
            if ( v41 < v40 )
              continue;
            break;
          }
        }
      }
      else
      {
        v28 = v25 + 8;
        if ( (v24 & 0x3F) == 0 )
          v28 = v19 + 8 * ((v21 - v6 + 1) >> 6);
        if ( v26 )
        {
          if ( *++v27 )
            goto LABEL_32;
          v30 = !_BitScanReverse64((unsigned __int64 *)&v31, v26);
          if ( v30 )
            v29 = 64;
          else
            v29 = 63 - v31;
        }
        else
        {
          v29 = 0;
        }
LABEL_37:
        v23 = ((__int64)((__int64)v27 - v19) >> 3 << 6) - v29;
        if ( v23 > v24 )
          goto LABEL_87;
        v33 = &v27[(v6 - v29) >> 6];
        for ( ++v27; v27 != v33; ++v27 )
        {
          if ( *v27 )
            goto LABEL_32;
        }
        v34 = ((_BYTE)v6 - (_BYTE)v29) & 0x3F;
        if ( (((_BYTE)v6 - (_BYTE)v29) & 0x3F) != 0 )
        {
          v30 = !_BitScanForward64((unsigned __int64 *)&v35, *v27);
          if ( v30 )
            LODWORD(v35) = 64;
          if ( (unsigned int)v35 < v34 )
          {
LABEL_32:
            while ( (unsigned __int64)v27 <= v28 )
            {
              if ( !*++v27 )
              {
                v30 = !_BitScanReverse64((unsigned __int64 *)&v32, *(v27 - 1));
                if ( v30 )
                  v29 = 64;
                else
                  v29 = 63 - v32;
                goto LABEL_37;
              }
            }
LABEL_87:
            v23 = -1LL;
            goto LABEL_46;
          }
        }
      }
LABEL_45:
      if ( v23 != -1LL )
        goto LABEL_93;
LABEL_46:
      if ( !v105 )
      {
LABEL_93:
        v6 = v107;
        v22 = v23;
        v14 = (ULONG_PTR *)BugCheckParameter2;
        CurrentThread = (struct _KTHREAD *)v110;
        goto LABEL_94;
      }
      v6 = v107;
      v20 = 0LL;
      v105 = 0LL;
      v36 = v18 + v107;
      if ( v18 + v107 > v17 )
        v36 = v17;
      v21 = v36 - 1;
    }
  }
  v22 = v20 & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_94:
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v14, 0LL);
  v114 = v14[5];
  v50 = v114;
  if ( v22 < v114 )
    v22 = v14[5];
  v106 = v22;
  v51 = v14[1];
  v52 = v106;
  v53 = v14[2];
  v54 = v106;
  if ( v106 >= v51 )
    v54 = 0LL;
  v55 = v51 - 1;
  if ( !v6 )
  {
    v56 = v54 & 0xFFFFFFFFFFFFFFF8uLL;
    goto LABEL_174;
  }
  while ( 1 )
  {
    if ( v55 - v54 + 1 < v6 )
    {
      v57 = -1LL;
      goto LABEL_126;
    }
    v58 = v55 - v6 + 1;
    v59 = v53 + 8 * (v58 >> 6);
    v60 = *(_QWORD *)(v53 + 8 * (v54 >> 6)) | ((1LL << (v54 & 0x3F)) - 1);
    v61 = (unsigned __int64 *)(v53 + 8 * (v54 >> 6));
    if ( v6 > 0x7F )
    {
      v62 = v59 + 8;
      if ( (v58 & 0x3F) == 0 )
        v62 = v53 + 8 * (v58 >> 6);
      if ( v60 )
      {
        if ( *++v61 )
          goto LABEL_111;
        v30 = !_BitScanReverse64((unsigned __int64 *)&v64, v60);
        if ( v30 )
          v63 = 64;
        else
          v63 = 63 - v64;
      }
      else
      {
        v63 = 0;
      }
LABEL_116:
      v57 = ((__int64)((__int64)v61 - v53) >> 3 << 6) - v63;
      if ( v57 <= v58 )
      {
        v66 = &v61[(v6 - v63) >> 6];
        for ( ++v61; v61 != v66; ++v61 )
        {
          if ( *v61 )
            goto LABEL_111;
        }
        v67 = ((_BYTE)v6 - (_BYTE)v63) & 0x3F;
        if ( (((_BYTE)v6 - (_BYTE)v63) & 0x3F) == 0 )
          goto LABEL_124;
        v30 = !_BitScanForward64((unsigned __int64 *)&v68, *v61);
        if ( v30 )
          LODWORD(v68) = 64;
        if ( (unsigned int)v68 >= v67 )
          goto LABEL_124;
LABEL_111:
        while ( (unsigned __int64)v61 <= v62 )
        {
          if ( !*++v61 )
          {
            v30 = !_BitScanReverse64((unsigned __int64 *)&v65, *(v61 - 1));
            if ( v30 )
              v63 = 64;
            else
              v63 = 63 - v65;
            goto LABEL_116;
          }
        }
      }
      goto LABEL_167;
    }
    if ( v6 >= 0x40 )
    {
      while ( 2 )
      {
        v70 = v60 < 0;
        while ( 1 )
        {
          if ( v70 )
          {
            do
            {
              if ( (unsigned __int64)++v61 > v59 )
                goto LABEL_167;
              v60 = *v61;
            }
            while ( (*v61 & 0x8000000000000000uLL) != 0LL );
          }
          v30 = !_BitScanReverse64((unsigned __int64 *)&v71, v60);
          if ( v30 )
            v72 = 64;
          else
            v72 = 63 - v71;
          v57 = ((((__int64)((__int64)v61 - v53) >> 3) + 1) << 6) - v72;
          if ( v57 > v58 )
            goto LABEL_167;
          v73 = v6 - v72;
          if ( v6 == v72 )
            goto LABEL_124;
          v60 = v61[1];
          ++v61;
          if ( v73 < 0x40 )
            break;
          v70 = v60 < 0;
          if ( !v60 )
          {
            v73 -= 64LL;
            if ( !v73 )
              goto LABEL_124;
            v60 = v61[1];
            ++v61;
            break;
          }
        }
        v30 = !_BitScanForward64(&v74, v60);
        if ( v30 )
          v74 = 64LL;
        if ( v74 < v73 )
          continue;
        break;
      }
LABEL_124:
      if ( v57 != -1LL )
        break;
      goto LABEL_125;
    }
    if ( v6 > 1 )
    {
      v75 = 0LL;
      v76 = (unsigned __int64 *)(v53 + 8 * (v55 >> 6));
      while ( 1 )
      {
        if ( v60 == -1 )
        {
          while ( 1 )
          {
            if ( (unsigned __int64)++v61 > v59 )
              goto LABEL_167;
            v60 = *v61;
            if ( *v61 != -1LL )
            {
              v75 = 0LL;
              break;
            }
          }
        }
        v30 = !_BitScanForward64((unsigned __int64 *)&v77, v60);
        if ( v30 )
          LODWORD(v77) = 64;
        if ( (unsigned int)(v75 + v77) >= v107 )
          break;
        v78 = v107;
        v79 = ~v60;
        while ( 1 )
        {
          v79 &= v79 >> (v78 >> 1);
          if ( !v79 )
            break;
          v78 -= v78 >> 1;
          if ( v78 <= 1 )
          {
            _BitScanForward64(&v80, v79);
            v81 = (unsigned int)v80;
            goto LABEL_166;
          }
        }
        if ( v61 == v76 )
          goto LABEL_167;
        v30 = !_BitScanReverse64((unsigned __int64 *)&v82, v60);
        v60 = v61[1];
        if ( v30 )
        {
          ++v61;
          v75 = 64LL;
        }
        else
        {
          v75 = (unsigned int)(63 - v82);
          ++v61;
        }
      }
      v81 = -v75;
LABEL_166:
      v57 = ((__int64)((__int64)v61 - v53) >> 3 << 6) + v81;
      if ( v57 <= v58 )
        goto LABEL_124;
LABEL_167:
      v57 = -1LL;
      goto LABEL_125;
    }
    if ( v60 == -1 )
    {
      do
      {
        if ( (unsigned __int64)++v61 > v59 )
          goto LABEL_167;
        v60 = *v61;
      }
      while ( *v61 == -1LL );
    }
    _BitScanForward64(&v83, ~v60);
    v57 = v83 + ((__int64)((__int64)v61 - v53) >> 3 << 6);
    if ( v57 <= v58 )
      goto LABEL_124;
    v57 = -1LL;
LABEL_125:
    v52 = v106;
LABEL_126:
    if ( !v54 )
      break;
    v6 = v107;
    v69 = v52 + v107;
    if ( v52 + v107 > v51 )
      v69 = v51;
    v55 = v69 - 1;
    v54 = 0LL;
  }
  v50 = v114;
  v56 = v57;
  v6 = v107;
LABEL_174:
  if ( v56 == -1LL )
  {
    v88 = MiExpandPagedPool(BugCheckParameter2, v6);
    v56 = v88;
    if ( v88 != -1LL )
    {
      if ( (v6 & 0x1FF) == 0 || v6 != 1 && v88 >= v50 )
        goto LABEL_200;
      goto LABEL_203;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KiLeaveGuardedRegionUnsafe(v110);
    v111 = 1;
    v15 = v109;
    if ( !v12 && v112 )
    {
      if ( (ULONG_PTR *)v109 == &MiSystemPartition )
        MiReturnResidentAvailable(v6);
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v109 + 5824), v6);
    }
LABEL_194:
    MiReturnCommit(v15, v6);
    if ( v111 )
    {
LABEL_228:
      MiIssuePageExtendRequestNoWait(v15, v6, 0LL);
      MiTrimSegmentCache(v100, v99, v101);
      return 0LL;
    }
LABEL_195:
    if ( v12 )
    {
      ++dword_14036BD48;
      ++dword_14036BD74;
      ++*(_DWORD *)(v12 + 100);
    }
    else
    {
      ++dword_14036BD3C;
      ++dword_14036BD70;
    }
    goto LABEL_228;
  }
  v84 = v6;
  if ( v6 )
  {
    v85 = v56 & 7;
    v86 = (_BYTE *)(*(_QWORD *)(BugCheckParameter2 + 16) + (v56 >> 3));
    if ( v85 + v6 <= 8 )
    {
      v87 = byte_14029EB30[v6] << v85;
      goto LABEL_184;
    }
    if ( (v56 & 7) != 0 )
    {
      *v86++ |= byte_14029EB40[v85];
      v84 = v6 - (unsigned int)(8 - v85);
    }
    if ( v84 > 8 )
    {
      memset(v86, 255, v84 >> 3);
      v86 += v84 >> 3;
      v6 = v107;
      v84 &= 7u;
    }
    if ( v84 )
    {
      v87 = byte_14029EB30[v84];
LABEL_184:
      *v86 |= v87;
    }
  }
LABEL_200:
  if ( v56 == v50 || v6 == 1 && v106 == v50 )
LABEL_203:
    *(_QWORD *)(BugCheckParameter2 + 40) = v56 + v6;
  *(_QWORD *)(BugCheckParameter2 + 48) += v6;
  v89 = (__int64)((v56 << 28) + (*(_QWORD *)(BugCheckParameter2 + 24) << 25)) >> 16;
  if ( v12 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KiLeaveGuardedRegionUnsafe(v110);
    v94 = v107;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 48), v107);
  }
  else
  {
    v90 = qword_14036D098 - qword_14036D088;
    if ( qword_14036D098 - qword_14036D088 < (unsigned __int64)qword_14036BD88 )
    {
      v91 = *(struct _KEVENT **)(v109 + 288);
      if ( v91->Header.SignalState )
        KeResetEvent(v91);
      if ( v90 <= qword_14036BD80 )
      {
        v92 = *(struct _KEVENT **)(v109 + 280);
        if ( !v92->Header.SignalState )
          KeSetEvent(v92, 0, 0);
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    v93 = *(_WORD *)(v110 + 486) + 1;
    *(_WORD *)(v110 + 486) = v93;
    if ( !v93 && *(_QWORD *)(v110 + 152) != v110 + 152 )
      KiCheckForKernelApcDelivery();
    v94 = v107;
  }
  v95 = (__int64 *)(((v89 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  MiFlushTbAsNeeded((ULONG_PTR)v95);
  if ( v112 )
  {
    MiFillPagedPoolLockedDown(v113, v95, v94, v115);
    return (PSLIST_ENTRY)v89;
  }
  else
  {
    DemandZeroPte = MiMakeDemandZeroPte(4LL);
    do
    {
      *v95 = DemandZeroPte;
      if ( (unsigned int)MiPteInShadowRange(v95) )
        MiWritePteShadow(v97);
      ++v95;
    }
    while ( (unsigned __int64)v95 < v98 );
    return (PSLIST_ENTRY)v89;
  }
}
