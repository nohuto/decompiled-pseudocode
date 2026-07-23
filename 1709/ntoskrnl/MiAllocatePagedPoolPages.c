/*
 * XREFs of MiAllocatePagedPoolPages @ 0x14009B1E0
 * Callers:
 *     ExpAllocateBigPool @ 0x1400C0CC0 (ExpAllocateBigPool.c)
 *     MiAllocatePoolPages @ 0x1400C3740 (MiAllocatePoolPages.c)
 * Callees:
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     MiChargeResident @ 0x14002ADAC (MiChargeResident.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     MiFlushTbAsNeeded @ 0x14009BE70 (MiFlushTbAsNeeded.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 *     MiExpandPagedPool @ 0x1400F7CD0 (MiExpandPagedPool.c)
 *     MiFreeExcessSegments @ 0x1400F7E68 (MiFreeExcessSegments.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140188F70 (RtlpInterlockedPopEntrySList.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MiPointerEncode @ 0x140221518 (MiPointerEncode.c)
 *     MiFillPagedPoolLockedDown @ 0x1406E3220 (MiFillPagedPoolLockedDown.c)
 */

PSLIST_ENTRY __fastcall MiAllocatePagedPoolPages(int a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rdi
  unsigned int v6; // ecx
  _SLIST_HEADER *v7; // rcx
  PSLIST_ENTRY v8; // rax
  unsigned __int64 v10; // rbx
  unsigned __int16 *v11; // rax
  ULONG_PTR *v12; // rsi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v14; // r15
  ULONG_PTR v15; // r12
  ULONG_PTR v16; // r14
  ULONG_PTR v17; // r13
  ULONG_PTR v18; // rdx
  unsigned __int64 v19; // r13
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // r11
  __int64 v23; // r9
  unsigned __int64 *v24; // rax
  unsigned __int64 v25; // r10
  unsigned int v26; // edx
  bool v27; // zf
  __int64 v28; // rcx
  __int64 v29; // r8
  unsigned __int64 *v30; // r9
  unsigned int v31; // r9d
  __int64 v32; // rdx
  ULONG_PTR v33; // rdx
  bool v34; // sf
  __int64 v35; // rdx
  unsigned int v36; // ecx
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rcx
  unsigned int v41; // r8d
  unsigned __int64 v42; // r10
  unsigned __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rcx
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // r12
  ULONG_PTR v48; // r13
  unsigned __int64 v49; // rcx
  ULONG_PTR v50; // r14
  unsigned __int64 v51; // r15
  ULONG_PTR v52; // r10
  unsigned __int64 v53; // r15
  unsigned __int64 v54; // r9
  unsigned __int64 v55; // rsi
  unsigned __int64 v56; // r11
  __int64 v57; // r8
  unsigned __int64 *v58; // rdx
  unsigned __int64 v59; // r10
  unsigned int v60; // ecx
  __int64 v61; // rax
  __int64 v62; // r8
  unsigned __int64 *v63; // r8
  unsigned int v64; // r8d
  __int64 v65; // rcx
  ULONG_PTR v66; // r10
  bool v67; // sf
  __int64 v68; // rcx
  unsigned int v69; // eax
  unsigned __int64 v70; // rcx
  unsigned __int64 v71; // rax
  __int64 v72; // r9
  unsigned __int64 *v73; // rdi
  __int64 v74; // rax
  unsigned int v75; // r9d
  unsigned __int64 v76; // r10
  unsigned __int64 v77; // rax
  __int64 v78; // r9
  __int64 v79; // rax
  unsigned __int64 v80; // rax
  unsigned __int64 v81; // r14
  unsigned __int64 v82; // rcx
  _BYTE *v83; // rsi
  char v84; // al
  unsigned __int64 v85; // rax
  unsigned __int64 v86; // rdi
  unsigned __int64 v87; // rsi
  __int64 v88; // rax
  struct _KEVENT *v89; // rcx
  struct _KEVENT *v90; // rcx
  unsigned __int64 v91; // r13
  __int64 *v92; // rbx
  __int64 DemandZeroPte; // rdx
  unsigned __int64 v94; // r11
  __int64 *v95; // r10
  ULONG_PTR BugCheckParameter4; // rax
  ULONG_PTR v97; // rcx
  ULONG_PTR v98; // r9
  ULONG_PTR v99; // [rsp+30h] [rbp-79h]
  unsigned __int64 v100; // [rsp+30h] [rbp-79h]
  unsigned __int64 v101; // [rsp+38h] [rbp-71h]
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-69h]
  __int64 v103; // [rsp+48h] [rbp-61h]
  __int64 v104; // [rsp+50h] [rbp-59h]
  int v105; // [rsp+58h] [rbp-51h]
  unsigned __int64 v106; // [rsp+88h] [rbp-21h]
  unsigned __int16 *v107; // [rsp+90h] [rbp-19h]
  unsigned __int64 v108; // [rsp+B0h] [rbp+7h]
  unsigned int v109; // [rsp+110h] [rbp+67h]

  v105 = 0;
  v5 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v101 = v5;
  v6 = *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 192) + 146LL);
  v109 = v6;
  if ( (a1 & 0x20) != 0 )
  {
    v10 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    v12 = (ULONG_PTR *)(v10 + 160);
    v11 = (unsigned __int16 *)(v10 + 3008);
  }
  else
  {
    if ( (unsigned __int64)(qword_140389358 - qword_140389348) < 0x500 )
    {
      ++dword_140388098;
      MiFreeExcessSegments();
      v6 = v109;
    }
    if ( v5 == 1 && a1 >= 0 )
    {
      v7 = &qword_140388510[25 * v6];
      if ( LOWORD(v7->Alignment) )
      {
        v8 = RtlpInterlockedPopEntrySList(v7);
        if ( v8 )
        {
          if ( v8[-1].Next != (_SLIST_ENTRY *)((unsigned __int64)&v8[-1] ^ qword_140389280) )
          {
            BugCheckParameter4 = MiPointerEncode();
            KeBugCheckEx(0x1Au, 0x5300uLL, v97, v98, BugCheckParameter4);
          }
          return v8 - 1;
        }
      }
    }
    v10 = 0LL;
    v11 = (unsigned __int16 *)&unk_140389660;
    v12 = &qword_140389318;
  }
  v107 = v11;
  BugCheckParameter2 = (ULONG_PTR)v12;
  v103 = *(_QWORD *)(qword_140388AF0 + 8LL * v11[86]);
  if ( !(unsigned int)MiChargeCommit(v103, v5, 1LL, a4) )
    goto LABEL_195;
  v106 = 0LL;
  if ( !v10 && (dword_140400104 & 2) != 0 )
  {
    if ( !(unsigned int)MiChargeResident((ULONG_PTR *)v103, v5) )
      goto LABEL_194;
    v106 = v5;
  }
  CurrentThread = KeGetCurrentThread();
  v14 = v12[1];
  v15 = v12[5];
  v16 = v12[2];
  v17 = v15;
  v104 = (__int64)CurrentThread;
  if ( v15 >= v14 )
    v17 = 0LL;
  v18 = v14 - 1;
  v99 = v17;
  if ( v5 )
  {
    while ( 1 )
    {
      if ( v18 - v17 + 1 < v5 )
      {
LABEL_22:
        v20 = -1LL;
        goto LABEL_46;
      }
      v21 = v18 - v5 + 1;
      v22 = v16 + 8 * (v21 >> 6);
      v23 = *(_QWORD *)(v16 + 8 * (v17 >> 6)) | ((1LL << (v17 & 0x3F)) - 1);
      v24 = (unsigned __int64 *)(v16 + 8 * (v17 >> 6));
      if ( v5 <= 0x7F )
      {
        if ( v5 < 0x40 )
        {
          if ( v5 > 1 )
          {
            v39 = 0LL;
            while ( 1 )
            {
              if ( v23 == -1 )
              {
                while ( 1 )
                {
                  if ( (unsigned __int64)++v24 > v22 )
                    goto LABEL_22;
                  v23 = *v24;
                  if ( *v24 != -1LL )
                  {
                    v39 = 0LL;
                    break;
                  }
                }
              }
              v27 = !_BitScanForward64((unsigned __int64 *)&v40, v23);
              if ( v27 )
                LODWORD(v40) = 64;
              if ( (unsigned int)(v39 + v40) >= v101 )
                break;
              v41 = v101;
              v42 = ~v23;
              while ( 1 )
              {
                v42 &= v42 >> (v41 >> 1);
                if ( !v42 )
                  break;
                v41 -= v41 >> 1;
                if ( v41 <= 1 )
                {
                  _BitScanForward64(&v43, v42);
                  v44 = (unsigned int)v43;
                  goto LABEL_86;
                }
              }
              if ( v24 == (unsigned __int64 *)(v16 + 8 * (v18 >> 6)) )
                goto LABEL_87;
              v27 = !_BitScanReverse64((unsigned __int64 *)&v45, v23);
              v23 = v24[1];
              ++v24;
              if ( v27 )
                v39 = 64LL;
              else
                v39 = (unsigned int)(63 - v45);
            }
            v44 = -v39;
LABEL_86:
            v20 = ((__int64)((__int64)v24 - v16) >> 3 << 6) + v44;
            if ( v20 <= v21 )
              goto LABEL_45;
            goto LABEL_87;
          }
          if ( v23 == -1 )
          {
            do
            {
              if ( (unsigned __int64)++v24 > v22 )
                goto LABEL_87;
              v23 = *v24;
            }
            while ( *v24 == -1LL );
          }
          _BitScanForward64(&v46, ~v23);
          v20 = (unsigned int)v46 + ((__int64)((__int64)v24 - v16) >> 3 << 6);
          if ( v20 > v21 )
          {
            v20 = -1LL;
            goto LABEL_46;
          }
        }
        else
        {
          while ( 2 )
          {
            v34 = v23 < 0;
            while ( 1 )
            {
              if ( v34 )
              {
                do
                {
                  if ( (unsigned __int64)++v24 > v22 )
                    goto LABEL_87;
                  v23 = *v24;
                }
                while ( (*v24 & 0x8000000000000000uLL) != 0LL );
              }
              v27 = !_BitScanReverse64((unsigned __int64 *)&v35, v23);
              if ( v27 )
                v36 = 64;
              else
                v36 = 63 - v35;
              v20 = ((((__int64)((__int64)v24 - v16) >> 3) + 1) << 6) - v36;
              if ( v20 > v21 )
                goto LABEL_87;
              v37 = v5 - v36;
              if ( v5 == v36 )
                goto LABEL_45;
              v23 = v24[1];
              ++v24;
              if ( v37 < 0x40 )
                break;
              v34 = v23 < 0;
              if ( !v23 )
              {
                v37 -= 64LL;
                if ( !v37 )
                  goto LABEL_45;
                v23 = v24[1];
                ++v24;
                break;
              }
            }
            v27 = !_BitScanForward64(&v38, v23);
            if ( v27 )
              v38 = 64LL;
            if ( v38 < v37 )
              continue;
            break;
          }
        }
      }
      else
      {
        v25 = v22 + 8;
        if ( (v21 & 0x3F) == 0 )
          v25 = v16 + 8 * ((v18 - v5 + 1) >> 6);
        if ( v23 )
        {
          if ( *++v24 )
            goto LABEL_32;
          v27 = !_BitScanReverse64((unsigned __int64 *)&v28, v23);
          if ( v27 )
            v26 = 64;
          else
            v26 = 63 - v28;
        }
        else
        {
          v26 = 0;
        }
LABEL_37:
        v20 = ((__int64)((__int64)v24 - v16) >> 3 << 6) - v26;
        if ( v20 > v21 )
          goto LABEL_87;
        v30 = &v24[(v5 - v26) >> 6];
        for ( ++v24; v24 != v30; ++v24 )
        {
          if ( *v24 )
            goto LABEL_32;
        }
        v31 = ((_BYTE)v5 - (_BYTE)v26) & 0x3F;
        if ( (((_BYTE)v5 - (_BYTE)v26) & 0x3F) != 0 )
        {
          v27 = !_BitScanForward64((unsigned __int64 *)&v32, *v24);
          if ( v27 )
            LODWORD(v32) = 64;
          if ( (unsigned int)v32 < v31 )
          {
LABEL_32:
            while ( (unsigned __int64)v24 <= v25 )
            {
              if ( !*++v24 )
              {
                v27 = !_BitScanReverse64((unsigned __int64 *)&v29, *(v24 - 1));
                if ( v27 )
                  v26 = 64;
                else
                  v26 = 63 - v29;
                goto LABEL_37;
              }
            }
LABEL_87:
            v20 = -1LL;
            goto LABEL_46;
          }
        }
      }
LABEL_45:
      if ( v20 != -1LL )
        goto LABEL_93;
LABEL_46:
      if ( !v99 )
      {
LABEL_93:
        v5 = v101;
        v19 = v20;
        v12 = (ULONG_PTR *)BugCheckParameter2;
        CurrentThread = (struct _KTHREAD *)v104;
        goto LABEL_94;
      }
      v5 = v101;
      v17 = 0LL;
      v99 = 0LL;
      v33 = v15 + v101;
      if ( v15 + v101 > v14 )
        v33 = v14;
      v18 = v33 - 1;
    }
  }
  v19 = v17 & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_94:
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v12, 0LL);
  v108 = v12[5];
  v47 = v108;
  if ( v19 < v108 )
    v19 = v12[5];
  v100 = v19;
  v48 = v12[1];
  v49 = v100;
  v50 = v12[2];
  v51 = v100;
  if ( v100 >= v48 )
    v51 = 0LL;
  v52 = v48 - 1;
  if ( !v5 )
  {
    v53 = v51 & 0xFFFFFFFFFFFFFFF8uLL;
    goto LABEL_174;
  }
  while ( 1 )
  {
    if ( v52 - v51 + 1 < v5 )
    {
      v54 = -1LL;
      goto LABEL_126;
    }
    v55 = v52 - v5 + 1;
    v56 = v50 + 8 * (v55 >> 6);
    v57 = *(_QWORD *)(v50 + 8 * (v51 >> 6)) | ((1LL << (v51 & 0x3F)) - 1);
    v58 = (unsigned __int64 *)(v50 + 8 * (v51 >> 6));
    if ( v5 > 0x7F )
    {
      v59 = v56 + 8;
      if ( (v55 & 0x3F) == 0 )
        v59 = v50 + 8 * (v55 >> 6);
      if ( v57 )
      {
        if ( *++v58 )
          goto LABEL_111;
        v27 = !_BitScanReverse64((unsigned __int64 *)&v61, v57);
        if ( v27 )
          v60 = 64;
        else
          v60 = 63 - v61;
      }
      else
      {
        v60 = 0;
      }
LABEL_116:
      v54 = ((__int64)((__int64)v58 - v50) >> 3 << 6) - v60;
      if ( v54 <= v55 )
      {
        v63 = &v58[(v5 - v60) >> 6];
        for ( ++v58; v58 != v63; ++v58 )
        {
          if ( *v58 )
            goto LABEL_111;
        }
        v64 = ((_BYTE)v5 - (_BYTE)v60) & 0x3F;
        if ( (((_BYTE)v5 - (_BYTE)v60) & 0x3F) == 0 )
          goto LABEL_124;
        v27 = !_BitScanForward64((unsigned __int64 *)&v65, *v58);
        if ( v27 )
          LODWORD(v65) = 64;
        if ( (unsigned int)v65 >= v64 )
          goto LABEL_124;
LABEL_111:
        while ( (unsigned __int64)v58 <= v59 )
        {
          if ( !*++v58 )
          {
            v27 = !_BitScanReverse64((unsigned __int64 *)&v62, *(v58 - 1));
            if ( v27 )
              v60 = 64;
            else
              v60 = 63 - v62;
            goto LABEL_116;
          }
        }
      }
      goto LABEL_167;
    }
    if ( v5 >= 0x40 )
    {
      while ( 2 )
      {
        v67 = v57 < 0;
        while ( 1 )
        {
          if ( v67 )
          {
            do
            {
              if ( (unsigned __int64)++v58 > v56 )
                goto LABEL_167;
              v57 = *v58;
            }
            while ( (*v58 & 0x8000000000000000uLL) != 0LL );
          }
          v27 = !_BitScanReverse64((unsigned __int64 *)&v68, v57);
          if ( v27 )
            v69 = 64;
          else
            v69 = 63 - v68;
          v54 = ((((__int64)((__int64)v58 - v50) >> 3) + 1) << 6) - v69;
          if ( v54 > v55 )
            goto LABEL_167;
          v70 = v5 - v69;
          if ( v5 == v69 )
            goto LABEL_124;
          v57 = v58[1];
          ++v58;
          if ( v70 < 0x40 )
            break;
          v67 = v57 < 0;
          if ( !v57 )
          {
            v70 -= 64LL;
            if ( !v70 )
              goto LABEL_124;
            v57 = v58[1];
            ++v58;
            break;
          }
        }
        v27 = !_BitScanForward64(&v71, v57);
        if ( v27 )
          v71 = 64LL;
        if ( v71 < v70 )
          continue;
        break;
      }
LABEL_124:
      if ( v54 != -1LL )
        break;
      goto LABEL_125;
    }
    if ( v5 > 1 )
    {
      v72 = 0LL;
      v73 = (unsigned __int64 *)(v50 + 8 * (v52 >> 6));
      while ( 1 )
      {
        if ( v57 == -1 )
        {
          while ( 1 )
          {
            if ( (unsigned __int64)++v58 > v56 )
              goto LABEL_167;
            v57 = *v58;
            if ( *v58 != -1LL )
            {
              v72 = 0LL;
              break;
            }
          }
        }
        v27 = !_BitScanForward64((unsigned __int64 *)&v74, v57);
        if ( v27 )
          LODWORD(v74) = 64;
        if ( (unsigned int)(v72 + v74) >= v101 )
          break;
        v75 = v101;
        v76 = ~v57;
        while ( 1 )
        {
          v76 &= v76 >> (v75 >> 1);
          if ( !v76 )
            break;
          v75 -= v75 >> 1;
          if ( v75 <= 1 )
          {
            _BitScanForward64(&v77, v76);
            v78 = (unsigned int)v77;
            goto LABEL_166;
          }
        }
        if ( v58 == v73 )
          goto LABEL_167;
        v27 = !_BitScanReverse64((unsigned __int64 *)&v79, v57);
        v57 = v58[1];
        if ( v27 )
        {
          ++v58;
          v72 = 64LL;
        }
        else
        {
          v72 = (unsigned int)(63 - v79);
          ++v58;
        }
      }
      v78 = -v72;
LABEL_166:
      v54 = ((__int64)((__int64)v58 - v50) >> 3 << 6) + v78;
      if ( v54 <= v55 )
        goto LABEL_124;
LABEL_167:
      v54 = -1LL;
      goto LABEL_125;
    }
    if ( v57 == -1 )
    {
      do
      {
        if ( (unsigned __int64)++v58 > v56 )
          goto LABEL_167;
        v57 = *v58;
      }
      while ( *v58 == -1LL );
    }
    _BitScanForward64(&v80, ~v57);
    v54 = v80 + ((__int64)((__int64)v58 - v50) >> 3 << 6);
    if ( v54 <= v55 )
      goto LABEL_124;
    v54 = -1LL;
LABEL_125:
    v49 = v100;
LABEL_126:
    if ( !v51 )
      break;
    v5 = v101;
    v66 = v49 + v101;
    if ( v49 + v101 > v48 )
      v66 = v48;
    v52 = v66 - 1;
    v51 = 0LL;
  }
  v47 = v108;
  v53 = v54;
  v5 = v101;
LABEL_174:
  if ( v53 == -1LL )
  {
    v85 = MiExpandPagedPool(BugCheckParameter2, v5);
    v53 = v85;
    if ( v85 != -1LL )
    {
      if ( (v5 & 0x1FF) == 0 || v5 != 1 && v85 >= v47 )
        goto LABEL_200;
      goto LABEL_203;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KiLeaveGuardedRegionUnsafe(v104);
    v105 = 1;
    if ( !v10 && v106 )
    {
      if ( (ULONG_PTR *)v103 == &MiSystemPartition )
        MiReturnResidentAvailable(v5);
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v103 + 6016), v5);
    }
LABEL_194:
    MiReturnCommit(v103, v5);
    MiFreeExcessSegments();
    if ( v105 )
      return 0LL;
LABEL_195:
    if ( v10 )
    {
      ++dword_140388048;
      ++dword_140388074;
      ++*(_DWORD *)(v10 + 100);
    }
    else
    {
      ++dword_14038803C;
      ++dword_140388070;
    }
    return 0LL;
  }
  v81 = v5;
  if ( v5 )
  {
    v82 = v53 & 7;
    v83 = (_BYTE *)(*(_QWORD *)(BugCheckParameter2 + 16) + (v53 >> 3));
    if ( v82 + v5 <= 8 )
    {
      v84 = byte_1402C7730[v5] << v82;
      goto LABEL_184;
    }
    if ( (v53 & 7) != 0 )
    {
      *v83++ |= byte_1402C7740[v82];
      v81 = v5 - (unsigned int)(8 - v82);
    }
    if ( v81 > 8 )
    {
      memset(v83, 255, v81 >> 3);
      v83 += v81 >> 3;
      v5 = v101;
      v81 &= 7u;
    }
    if ( v81 )
    {
      v84 = byte_1402C7730[v81];
LABEL_184:
      *v83 |= v84;
    }
  }
LABEL_200:
  if ( v53 == v47 || v5 == 1 && v100 == v47 )
LABEL_203:
    *(_QWORD *)(BugCheckParameter2 + 40) = v53 + v5;
  *(_QWORD *)(BugCheckParameter2 + 48) += v5;
  v86 = (__int64)((v53 << 28) + (*(_QWORD *)(BugCheckParameter2 + 24) << 25)) >> 16;
  if ( v10 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KiLeaveGuardedRegionUnsafe(v104);
    v91 = v101;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 48), v101);
  }
  else
  {
    v87 = qword_140389358 - qword_140389348;
    if ( qword_140389358 - qword_140389348 < (unsigned __int64)qword_140388088 )
    {
      v88 = v103;
      v89 = *(struct _KEVENT **)(v103 + 248);
      if ( v89->Header.SignalState )
      {
        KeResetEvent(v89);
        v88 = v103;
      }
      if ( v87 <= qword_140388080 )
      {
        v90 = *(struct _KEVENT **)(v88 + 240);
        if ( !v90->Header.SignalState )
          KeSetEvent(v90, 0, 0);
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    v27 = (*(_WORD *)(v104 + 486))++ == 0xFFFF;
    if ( v27 && *(_QWORD *)(v104 + 152) != v104 + 152 )
      KiCheckForKernelApcDelivery();
    v91 = v101;
  }
  v92 = (__int64 *)(((v86 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  MiFlushTbAsNeeded((ULONG_PTR)v92);
  if ( v106 )
  {
    MiFillPagedPoolLockedDown(v107, v92, v91, v109);
    return (PSLIST_ENTRY)v86;
  }
  else
  {
    DemandZeroPte = MiMakeDemandZeroPte(4LL);
    v94 = 0xFFFFF6FB7DBED000uLL;
    v95 = &v92[v91];
    do
    {
      *v92 = DemandZeroPte;
      if ( (unsigned __int64)v92 >= v94 && (unsigned __int64)v92 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow(v92, DemandZeroPte);
      ++v92;
    }
    while ( v92 < v95 );
    return (PSLIST_ENTRY)v86;
  }
}
