/*
 * XREFs of MiInsertInSystemSpace @ 0x140060AA0
 * Callers:
 *     MiMapViewInSystemSpace @ 0x140497594 (MiMapViewInSystemSpace.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiRemoveFromSystemSpace @ 0x140060690 (MiRemoveFromSystemSpace.c)
 *     KeFlushTb @ 0x140063C74 (KeFlushTb.c)
 *     MiReturnSystemPtes @ 0x1400821DC (MiReturnSystemPtes.c)
 *     MiAttemptCoalesce @ 0x1400849D0 (MiAttemptCoalesce.c)
 *     RtlAvlInsertNodeEx @ 0x140098EF0 (RtlAvlInsertNodeEx.c)
 *     MiControlAreaRequiresCharge @ 0x1400996E8 (MiControlAreaRequiresCharge.c)
 *     MiReferenceActiveSubsection @ 0x14009A070 (MiReferenceActiveSubsection.c)
 *     MiOffsetToProtos @ 0x14009DAD0 (MiOffsetToProtos.c)
 *     MiInsertCachedPte @ 0x1400A2790 (MiInsertCachedPte.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiManageSubsectionView @ 0x1400A98F0 (MiManageSubsectionView.c)
 *     MiGetAnyMultiplexedVm @ 0x1400B1BCC (MiGetAnyMultiplexedVm.c)
 *     MiSectionControlArea @ 0x1400CDE10 (MiSectionControlArea.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x1400D0C60 (MiChargeCommit.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     KeFlushMultipleRangeTb @ 0x1400D9210 (KeFlushMultipleRangeTb.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     MiReservePtes @ 0x1400F7CA0 (MiReservePtes.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x140143868 (KeFlushMultipleRangeCurrentTb.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeFlushCurrentTbOnly @ 0x14017BB28 (KeFlushCurrentTbOnly.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiGetPteTimeStamp @ 0x14017CE80 (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x14017D06C (MiUpdatePageFileHighInPte.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiAddMappedPtes @ 0x1404976A0 (MiAddMappedPtes.c)
 *     MiReferenceFileObjectForMap @ 0x140511430 (MiReferenceFileObjectForMap.c)
 *     MiCreatePerSessionProtos @ 0x1406BDE0C (MiCreatePerSessionProtos.c)
 *     MiDereferencePerSessionProtos @ 0x1406BDF80 (MiDereferencePerSessionProtos.c)
 */

__int64 __fastcall MiInsertInSystemSpace(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        _QWORD *a4,
        char a5,
        __int64 a6,
        ULONG_PTR *a7)
{
  __int64 *v7; // r12
  int v8; // ebx
  __int64 v11; // r14
  __int64 *v12; // r9
  unsigned int v13; // r10d
  __int64 v14; // r11
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r8
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 AnyMultiplexedVm; // r14
  int v22; // edi
  int v23; // r12d
  unsigned int v24; // edi
  _KPROCESS *v25; // rcx
  __int64 v26; // rax
  ULONG_PTR v27; // r15
  PVOID PoolWithTag; // rax
  int v29; // edi
  __int64 v30; // r8
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rax
  ULONG_PTR v34; // r11
  ULONG_PTR v35; // r8
  unsigned __int64 v36; // r10
  unsigned __int64 i; // rcx
  ULONG_PTR BugCheckParameter4; // rcx
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // r9
  unsigned __int64 j; // r11
  unsigned __int64 v42; // r9
  unsigned __int64 v43; // rdx
  volatile signed __int32 *v44; // r8
  unsigned int v45; // eax
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // r9
  volatile signed __int32 *v48; // r8
  unsigned int v49; // eax
  unsigned int v50; // r11d
  unsigned __int64 v51; // rsi
  __int64 v52; // r13
  unsigned __int64 v53; // r15
  int v54; // r10d
  unsigned __int64 v55; // rcx
  unsigned __int64 v56; // r10
  __int64 v57; // rcx
  __int64 *v58; // r8
  __int64 *v59; // r9
  __int64 v60; // rax
  __int64 *v61; // r8
  __int64 v62; // rcx
  __int64 v63; // r10
  __int64 *v64; // r14
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r10
  __int64 *v69; // r14
  char v70; // al
  char v71; // al
  unsigned __int64 v72; // r8
  __int64 v73; // rcx
  _KPROCESS *Process; // rdx
  __int64 v75; // rdx
  unsigned __int64 v76; // r9
  unsigned __int64 v77; // r8
  volatile signed __int32 *v78; // rdx
  int v79; // eax
  unsigned __int64 v80; // rcx
  void *v81; // rcx
  _QWORD *v83; // rdi
  unsigned __int64 v84; // rax
  __int64 v85; // rcx
  unsigned __int64 v86; // rcx
  _QWORD *v87; // rax
  __int64 SharedVm; // rdi
  KIRQL v89; // al
  unsigned __int64 v90; // r8
  KIRQL v91; // r12
  _QWORD *v92; // rdx
  _QWORD *v93; // rax
  volatile signed __int64 *v94; // r12
  int v95; // edi
  unsigned __int64 v96; // r11
  __int64 v97; // rcx
  int v98; // r10d
  int v99; // ebx
  signed __int32 v100[8]; // [rsp+0h] [rbp-238h] BYREF
  int active; // [rsp+30h] [rbp-208h]
  ULONG_PTR BugCheckParameter3; // [rsp+38h] [rbp-200h]
  int SessionId; // [rsp+40h] [rbp-1F8h]
  void *v104; // [rsp+48h] [rbp-1F0h]
  int v105; // [rsp+50h] [rbp-1E8h]
  __int64 v106; // [rsp+58h] [rbp-1E0h]
  __int64 updated; // [rsp+60h] [rbp-1D8h] BYREF
  __int64 v108; // [rsp+68h] [rbp-1D0h]
  __int64 v109; // [rsp+70h] [rbp-1C8h]
  PVOID P; // [rsp+78h] [rbp-1C0h]
  __int64 v111; // [rsp+80h] [rbp-1B8h]
  struct _KTHREAD *CurrentThread; // [rsp+88h] [rbp-1B0h]
  unsigned __int64 v113; // [rsp+90h] [rbp-1A8h]
  unsigned __int64 v114; // [rsp+98h] [rbp-1A0h]
  _QWORD *v115; // [rsp+A0h] [rbp-198h]
  ULONG_PTR *v116; // [rsp+A8h] [rbp-190h]
  char v117[16]; // [rsp+B0h] [rbp-188h] BYREF
  __int64 v118[14]; // [rsp+C0h] [rbp-178h] BYREF
  unsigned int v119; // [rsp+130h] [rbp-108h] BYREF
  __int16 v120; // [rsp+134h] [rbp-104h]
  __int64 v121; // [rsp+138h] [rbp-100h]
  unsigned __int64 v122; // [rsp+140h] [rbp-F8h]
  _QWORD v123[21]; // [rsp+148h] [rbp-F0h] BYREF

  v7 = (__int64 *)&unk_14036CD30;
  v8 = 0;
  CurrentThread = (struct _KTHREAD *)a3;
  v115 = a4;
  v114 = a2;
  *a7 = 0LL;
  v116 = a7;
  P = 0LL;
  v11 = 0LL;
  v109 = 0LL;
  v105 = 0x7FFFF;
  BugCheckParameter3 = 0LL;
  v108 = 0LL;
  v104 = &unk_14036CD30;
  v14 = MiSectionControlArea(a3, a2, a2);
  v106 = v14;
  LOBYTE(v15) = 2;
  v17 = ((_WORD)v16 != 0) + (unsigned int)(v16 >> 16);
  if ( v17 >= 0x10000 )
  {
    active = -1073741793;
    goto LABEL_35;
  }
  v18 = *v12;
  BugCheckParameter3 = 16 * v17;
  v19 = MiOffsetToProtos(v14, v18, v117);
  v20 = v19;
  if ( !v19 )
  {
    active = -1073741801;
LABEL_34:
    v13 = BugCheckParameter3;
    LOBYTE(v15) = 2;
LABEL_35:
    ++*(_DWORD *)(a1 + 28);
    if ( !v11 )
    {
LABEL_139:
      if ( v105 != 0x7FFFF )
        MiDereferencePerSessionProtos(v106);
      if ( v109 )
        MiReturnCommit(v108, v109);
      if ( P )
        ExFreePoolWithTag(P, 0);
      return (unsigned int)active;
    }
    if ( v7 == &qword_14036D0A0 && (dword_1403E310C & 2) != 0 )
    {
      v34 = v13;
      v35 = v11 << 25 >> 16;
      if ( !v13 )
        KeBugCheckEx(0xDAu, 0x300uLL, v35, 0LL, 0LL);
      if ( v35 < 0xFFFF800000000000uLL || byte_14036D700[((v35 >> 39) & 0x1FF) - 256] != 9 )
        KeBugCheckEx(0xDAu, 0x301uLL, v35, 0LL, 0LL);
      v36 = 2LL * (unsigned int)((v11 - qword_14036D0B0) >> 3);
      if ( _bittest64((const signed __int64 *)qword_14036CD20, v36) )
        KeBugCheckEx(0xDAu, 0x303uLL, v35, v34, 0LL);
      if ( v36 && *(_DWORD *)(qword_14036CD20 + 4 * ((v36 - 2) >> 5)) >> ((v36 - 2) & 0x1F) == 2 )
        KeBugCheckEx(0xDAu, 0x304uLL, v35, v34, 0LL);
      for ( i = v36 + 1; _bittest64((const signed __int64 *)qword_14036CD20, i) == 1; i += 2LL )
        ;
      BugCheckParameter4 = ((i - v36) >> 1) + 1;
      if ( BugCheckParameter4 != v34 )
        KeBugCheckEx(0xDAu, 0x305uLL, v35, v34, BugCheckParameter4);
      v39 = v36 + 2 * BugCheckParameter4;
      v40 = 2LL * (unsigned int)((v11 - qword_14036D0B0) >> 3);
      if ( v36 < v39 )
      {
        do
        {
          if ( _bittest64((const signed __int64 *)qword_14036CD20, v40) == 1 )
            KeBugCheckEx(0xDAu, 0x306uLL, v35, v35 + (((v40 - v36) << 11) & 0xFFFFFFFFFFFFF000uLL), BugCheckParameter4);
          v40 += 2LL;
        }
        while ( v40 < v39 );
      }
      for ( j = v36 + 2 * (v34 - 1); v36 < j; v36 += 2LL )
      {
        v42 = v36 & 0x1F;
        LOBYTE(v43) = 1;
        v44 = (volatile signed __int32 *)(qword_14036CD20 + 4 * (v36 >> 5));
        if ( v42 + 1 > 0x20 )
        {
          if ( (v36 & 0x1F) != 0 )
          {
            _InterlockedOr(v44++, ((1 << (32 - (v36 & 0x1F))) - 1) << v42);
            v43 = 1LL - (32 - (unsigned int)(v36 & 0x1F));
            if ( v43 >= 0x20 )
            {
              v46 = v43 >> 5;
              v43 += -32LL * (v43 >> 5);
              do
              {
                *v44++ = -1;
                --v46;
              }
              while ( v46 );
            }
            if ( !v43 )
              continue;
          }
          v45 = (1 << v43) - 1;
        }
        else
        {
          v45 = 1 << v42;
        }
        _InterlockedOr(v44, v45);
      }
      v47 = v36 & 0x1F;
      v48 = (volatile signed __int32 *)(qword_14036CD20 + 4 * (v36 >> 5));
      if ( v47 + 2 <= 0x20 )
      {
        v49 = 3 << v47;
LABEL_63:
        _InterlockedOr(v48, v49);
        goto LABEL_64;
      }
      if ( (v36 & 0x1F) == 0 )
        goto LABEL_74;
      v54 = v36 & 0x1F;
      _InterlockedOr(v48++, ((1 << (32 - v54)) - 1) << v47);
      v15 = 2LL - (unsigned int)(32 - v54);
      if ( v15 >= 0x20 )
      {
        v55 = v15 >> 5;
        v15 += -32LL * (v15 >> 5);
        do
        {
          *v48++ = -1;
          --v55;
        }
        while ( v55 );
      }
      if ( v15 )
      {
LABEL_74:
        v49 = (1 << v15) - 1;
        goto LABEL_63;
      }
    }
LABEL_64:
    v50 = BugCheckParameter3;
    v51 = (v11 - v7[2]) >> 3;
    v52 = (unsigned int)BugCheckParameter3;
    v53 = (unsigned int)BugCheckParameter3;
    if ( (v7[3] & 4) != 0 )
    {
      v51 >>= 4;
      v53 = (unsigned __int64)(unsigned int)BugCheckParameter3 >> 4;
    }
    if ( (unsigned int)BugCheckParameter3 >= 0x200 && v7 == &qword_14036D0A0 )
    {
      SessionId = 1;
      goto LABEL_88;
    }
    SessionId = 0;
    v56 = v53 + v51 - 1;
    if ( v56 < *v7 )
    {
      if ( v53 <= 1 )
      {
        if ( v53 != 1 || !_bittest64((const signed __int64 *)v7[1], v51) )
          goto LABEL_178;
LABEL_88:
        if ( (_DWORD)BugCheckParameter3 )
        {
          do
          {
            *(_QWORD *)v11 = 0LL;
            if ( (unsigned int)MiPteInShadowRange(v11) )
              MiWritePteShadow(v62);
            v11 += 8LL;
          }
          while ( v63 != 1 );
        }
        v64 = (__int64 *)(v11 - 8 * v52);
        if ( SessionId )
          goto LABEL_137;
        if ( (*((_DWORD *)v104 + 6) & 1) != 0 && (unsigned int)MiInsertCachedPte(v104, v64, v50) == 1 )
          goto LABEL_139;
        updated = 0LL;
        v65 = MI_READ_PTE_LOCK_FREE(&updated);
        _InterlockedOr(v100, 0);
        updated = MiUpdatePageFileHighInPte(v65, (unsigned int)KiTbFlushTimeStamp);
        if ( (unsigned int)MiPteInShadowRange(&updated) )
          MiWritePteShadow(&updated);
        v66 = updated;
        if ( (_DWORD)BugCheckParameter3 )
        {
          do
          {
            *v64 = v66;
            if ( (unsigned int)MiPteInShadowRange(v64) )
              MiWritePteShadow(v67);
            ++v64;
          }
          while ( v68 != 1 );
        }
        v69 = &v64[-v52];
        if ( MiGetPteTimeStamp(v66) )
        {
LABEL_125:
          v76 = v51 & 0x1F;
          v77 = v53;
          v78 = (volatile signed __int32 *)(*((_QWORD *)v104 + 1) + 4 * (v51 >> 5));
          if ( v53 + v76 > 0x20 )
          {
            if ( (v51 & 0x1F) != 0 )
            {
              _InterlockedAnd(v78, ~(((1 << (32 - (v51 & 0x1F))) - 1) << v76));
              v77 = v53 - (32 - (unsigned int)(v51 & 0x1F));
              ++v78;
            }
            if ( v77 >= 0x20 )
            {
              v80 = v77 >> 5;
              v77 += -32LL * (v77 >> 5);
              do
              {
                *v78++ = 0;
                --v80;
              }
              while ( v80 );
            }
            if ( !v77 )
              goto LABEL_137;
            v79 = (1 << v77) - 1;
          }
          else
          {
            if ( v53 == 32 )
            {
              *v78 = 0;
              goto LABEL_137;
            }
            v79 = ((1 << v53) - 1) << v76;
          }
          _InterlockedAnd(v78, ~v79);
LABEL_137:
          v81 = v104;
          _InterlockedExchangeAdd64((volatile signed __int64 *)v104 + 12, v53);
          if ( SessionId == 1 )
            MiReturnSystemPtes(v81, v51, (v50 + 511) & 0xFFFFFE00, 1LL);
          else
            MiAttemptCoalesce(v81, v51, v53);
          goto LABEL_139;
        }
        v121 = 20LL;
        v120 = 0;
        v122 = 0LL;
        v70 = ~(unsigned __int8)*((_DWORD *)v104 + 6);
        v123[0] = 0LL;
        v119 = v70 & 2;
        MiInsertTbFlushEntry(&v119, (__int64)((_QWORD)v69 << 25) >> 16, v52, 0LL);
        if ( !HIDWORD(v121) )
        {
LABEL_124:
          v50 = BugCheckParameter3;
          goto LABEL_125;
        }
        v71 = v120;
        v72 = qword_14036C218;
        if ( (v120 & 2) != 0 )
        {
          v73 = v119;
LABEL_116:
          if ( (_DWORD)v73 == 1 )
          {
            v75 = 0LL;
LABEL_109:
            if ( HIBYTE(v120) || v122 > v72 )
            {
              if ( (v71 & 1) != 0 )
                KeFlushCurrentTbOnly(v73, v75, v72);
              else
                KeFlushTb(v73, v75, v72);
              HIBYTE(v120) = 0;
            }
            else if ( (v71 & 1) != 0 )
            {
              KeFlushMultipleRangeCurrentTb(HIDWORD(v121), v123, (unsigned int)v73);
            }
            else
            {
              KeFlushMultipleRangeTb(HIDWORD(v121), v123, (unsigned int)v73, (unsigned int)v75);
            }
            LOBYTE(v120) = v120 & 0xF7;
            HIDWORD(v121) = 0;
            v122 = 0LL;
            goto LABEL_124;
          }
LABEL_108:
          v75 = (unsigned int)((v71 & 8) != 0) + 1;
          goto LABEL_109;
        }
        v73 = v119;
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( !Process[2].ActiveProcessors.Bitmap[13] )
        {
          if ( !Process->SecurePid )
          {
LABEL_114:
            v71 = v120;
            goto LABEL_116;
          }
          if ( v119 != 1 )
          {
            v71 = v120;
            goto LABEL_108;
          }
        }
        v72 = -1LL;
        goto LABEL_114;
      }
      v57 = v7[1];
      v58 = (__int64 *)(v57 + 8 * (v51 >> 6));
      v59 = (__int64 *)(v57 + 8 * (v56 >> 6));
      v60 = *v58;
      if ( v58 == v59 )
      {
        if ( ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v53) << v51) & v60) != 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v53) << v51 )
          goto LABEL_178;
        goto LABEL_88;
      }
      if ( ((-1LL << v51) & v60) != -1LL << v51 )
        goto LABEL_178;
      v61 = v58 + 1;
      if ( v61 == v59 )
      {
LABEL_87:
        if ( ((0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v56) & *v61) != 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v56 )
          goto LABEL_178;
        goto LABEL_88;
      }
      while ( *v61 == -1 )
      {
        if ( ++v61 == v59 )
          goto LABEL_87;
      }
    }
LABEL_178:
    KeBugCheckEx(0xDAu, 0x302uLL, v11 << 25 >> 16, (unsigned int)BugCheckParameter3, v51);
  }
  if ( (*(_DWORD *)(a3 + 56) & 0x8000000) != 0 )
    v20 = v19 | 1;
  if ( (a5 & 1) != 0 )
    v20 |= 2uLL;
  if ( (_UNKNOWN *)a1 == &unk_14036C0F8 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1LL);
    v111 = AnyMultiplexedVm;
    v22 = 0;
    v113 = 0LL;
    SessionId = -1;
    v23 = 640;
    if ( (a6 & 8) == 0 )
      v23 = 128;
    LOBYTE(v22) = (a6 & 8) != 0;
    v24 = v22 + 3;
  }
  else
  {
    v23 = 256;
    v24 = 2;
    v113 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    v25 = KeGetCurrentThread()->ApcState.Process;
    AnyMultiplexedVm = v113 + 3008;
    v111 = v113 + 3008;
    v104 = (void *)(v113 + 8008);
    SessionId = MmGetSessionIdEx(v25);
  }
  v108 = *(_QWORD *)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(AnyMultiplexedVm + 172));
  v26 = MiReservePtes(v104, (unsigned int)BugCheckParameter3);
  v11 = v26;
  if ( !v26 )
  {
    active = -1073741670;
LABEL_33:
    v7 = (__int64 *)v104;
    goto LABEL_34;
  }
  v27 = v26 << 25 >> 16;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x60uLL, 0x7756694Du);
  P = PoolWithTag;
  if ( !PoolWithTag )
  {
    active = -1073741670;
    goto LABEL_33;
  }
  memset(PoolWithTag, 0, 0x60uLL);
  v29 = MiControlAreaRequiresCharge(v106, v24);
  if ( !v29 )
  {
    active = -1073740277;
    goto LABEL_33;
  }
  if ( v29 == 2 )
    v20 |= 4uLL;
  v31 = v106;
  v32 = *(_DWORD *)(v106 + 56);
  if ( (v32 & 0x20) != 0 )
  {
    if ( (v32 & 0x4000000) != 0 )
    {
      v105 = -1;
      if ( (int)MiCreatePerSessionProtos(v106, 0xFFFFFFFFLL) < 0 )
      {
        v105 = 0x7FFFF;
        active = -1073741801;
        goto LABEL_33;
      }
      v31 = v106;
    }
    v33 = *(_QWORD *)(*(_QWORD *)v31 + 48LL);
    v109 = v33;
    if ( v33 )
    {
      if ( !(unsigned int)MiChargeCommit(v108, v33, 0LL) )
      {
        v109 = 0LL;
        active = -1073741523;
        goto LABEL_33;
      }
      v31 = v106;
    }
    if ( v29 == 2 )
    {
      LOBYTE(v30) = 17;
      active = MiReferenceActiveSubsection(v31 + 128, v23 | 8u, v30);
      if ( active < 0 )
        goto LABEL_33;
    }
  }
  v83 = P;
  v108 = v114 & 0xFFF;
  v84 = v114;
  v85 = -(__int64)(v108 != 0);
  *((_QWORD *)P + 6) = v20;
  v86 = (v84 & 0xFFFFFFFFFFFFF000uLL) + (v85 & 0x1000);
  v87 = v115;
  v83[4] = v86;
  v83[3] = *v87 >> 12;
  v83[5] = v109;
  v83[10] = v27 | 2;
  *((_DWORD *)v83 + 23) = v105;
  if ( (_UNKNOWN *)a1 == &unk_14036C0F8 )
    *((_DWORD *)v83 + 22) = -1;
  else
    *((_DWORD *)v83 + 22) = *(_DWORD *)(v113 + 8);
  v83[7] = MiReferenceFileObjectForMap(CurrentThread);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(*(_QWORD *)(a1 + 8), 0LL);
  SharedVm = MiGetSharedVm(v111);
  v89 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  LOBYTE(v90) = 0;
  ++*(_DWORD *)(a1 + 24);
  v91 = v89;
  v92 = *(_QWORD **)(a1 + 16);
  if ( v92 )
  {
    while ( 1 )
    {
      v90 = v92[10] & 0xFFFFFFFFFFFFF000uLL;
      if ( v27 >= v90 + v92[4] || v27 >= v90 )
      {
        v93 = (_QWORD *)v92[1];
        if ( !v93 )
        {
          LOBYTE(v90) = 1;
          break;
        }
      }
      else
      {
        v93 = (_QWORD *)*v92;
        if ( !*v92 )
        {
          LOBYTE(v90) = 0;
          break;
        }
      }
      v92 = v93;
    }
  }
  RtlAvlInsertNodeEx(a1 + 16, v92, v90, P);
  MiUnlockWorkingSetExclusive(v111, v91);
  if ( (*(_DWORD *)(v106 + 56) & 0x400) == 0 )
  {
    v118[0] = v106;
    MiManageSubsectionView(v118, (char *)P + 64, 3LL);
  }
  v94 = *(volatile signed __int64 **)(a1 + 8);
  if ( (_InterlockedExchangeAdd64(v94, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v94);
  KeAbPostRelease((ULONG_PTR)v94);
  KiLeaveGuardedRegionUnsafe(CurrentThread);
  v95 = v106;
  if ( (v20 & 1) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(v106 + 92));
  LODWORD(v96) = BugCheckParameter3;
  if ( BugCheckParameter3 )
  {
    do
    {
      *(_QWORD *)v11 = 0LL;
      if ( (unsigned int)MiPteInShadowRange(v11) )
        MiWritePteShadow(v97);
      v11 += 8LL;
    }
    while ( (unsigned int)(v98 + 1) < v96 );
  }
  LOBYTE(v8) = v108 != 0;
  v99 = MiAddMappedPtes((int)v11 - 8 * (int)v96, v8 + (unsigned int)(v114 >> 12), v95, (_DWORD)v115, SessionId);
  if ( v99 < 0 )
  {
    ++*(_DWORD *)(a1 + 28);
    MiRemoveFromSystemSpace(a1, v27, 0);
  }
  else
  {
    *v116 = v27;
  }
  return (unsigned int)v99;
}
