/*
 * XREFs of MiMoveDirtyBitsToPfns @ 0x140023A70
 * Callers:
 *     NtResetWriteWatch @ 0x1404AF9A0 (NtResetWriteWatch.c)
 *     MiProcessVaRangesInfoClass @ 0x140575908 (MiProcessVaRangesInfoClass.c)
 * Callees:
 *     MiWalkPageTables @ 0x14000D8E0 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x14001CFE0 (MiCheckProcessShadow.c)
 *     MiFastLockLeafPageTable @ 0x140021880 (MiFastLockLeafPageTable.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     KeFlushTb @ 0x1400349E0 (KeFlushTb.c)
 *     KeFlushMultipleRangeTb @ 0x140037AE0 (KeFlushMultipleRangeTb.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     MiWorkingSetIsContended @ 0x14004EA30 (MiWorkingSetIsContended.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiPreUnlockWorkingSetShared @ 0x140083B98 (MiPreUnlockWorkingSetShared.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400A22F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KeShouldYieldProcessor @ 0x1400A9D70 (KeShouldYieldProcessor.c)
 *     KeFlushCurrentTbOnly @ 0x1400ADB50 (KeFlushCurrentTbOnly.c)
 *     MiUnlockVadCore @ 0x1400AE264 (MiUnlockVadCore.c)
 *     MiCompressTbFlushList @ 0x1400B06D0 (MiCompressTbFlushList.c)
 *     MiCapturePageFileInfoInline @ 0x1400B221C (MiCapturePageFileInfoInline.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiGetWsleContents @ 0x140125350 (MiGetWsleContents.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x1401685E4 (KeFlushMultipleRangeCurrentTb.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     qsort @ 0x140189210 (qsort.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402BA760 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402BA870 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiMoveDirtyBitsToPfns(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v5; // r9
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r8
  unsigned __int16 *v9; // r12
  __int64 **i; // rcx
  volatile signed __int32 *v11; // r14
  unsigned __int8 v12; // al
  LONG *v13; // rdi
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v17; // eax
  unsigned __int8 v18; // di
  __int64 v19; // r15
  __int64 v20; // r14
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rcx
  unsigned __int16 *AnyMultiplexedVm; // rsi
  int v24; // eax
  unsigned __int64 v25; // r14
  signed __int32 v26; // eax
  signed __int32 v27; // ett
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // rdi
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // r15
  unsigned __int64 v32; // rdi
  _BYTE *v33; // r15
  char v34; // al
  unsigned __int64 v35; // r15
  __int64 v36; // r12
  unsigned __int64 v37; // r11
  __int64 v38; // rcx
  int v39; // eax
  struct _KPRCB *v40; // rcx
  _DWORD *v41; // rdx
  __int64 result; // rax
  unsigned __int64 v43; // r10
  unsigned __int64 Process; // rcx
  __int64 v45; // r10
  unsigned __int64 v46; // rsi
  unsigned __int64 v47; // rcx
  __int64 v48; // rdi
  char v49; // r11
  __int64 v50; // r14
  char v51; // r11
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // r8
  __int64 v54; // rsi
  unsigned __int8 v55; // cl
  __int64 v56; // rax
  __int64 v57; // rax
  unsigned __int64 v58; // rax
  char v59; // al
  unsigned __int64 v60; // r9
  __int64 v61; // r8
  _KPROCESS *v62; // rax
  unsigned __int64 SecureHandle; // rax
  __int64 v64; // rdx
  __int64 v65; // r8
  int v66; // eax
  __int64 v67; // rax
  __int64 v68; // rax
  unsigned __int64 v69; // r8
  __int64 v70; // rax
  __int64 v71; // r8
  unsigned __int64 v72; // rcx
  int v73; // eax
  int v74; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v75; // [rsp+30h] [rbp-D8h]
  __int64 v76; // [rsp+38h] [rbp-D0h]
  unsigned __int8 v77; // [rsp+40h] [rbp-C8h]
  int v78; // [rsp+48h] [rbp-C0h] BYREF
  int v79; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v80; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v81; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v82; // [rsp+60h] [rbp-A8h]
  __int64 v83; // [rsp+68h] [rbp-A0h]
  unsigned __int16 *v84; // [rsp+70h] [rbp-98h]
  __int64 v85; // [rsp+78h] [rbp-90h]
  __int64 v86; // [rsp+80h] [rbp-88h]
  _QWORD v87[22]; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v88; // [rsp+138h] [rbp+30h] BYREF
  __int16 v89; // [rsp+13Ch] [rbp+34h]
  __int64 v90; // [rsp+140h] [rbp+38h]
  unsigned __int64 v91; // [rsp+148h] [rbp+40h]
  _QWORD Base[21]; // [rsp+150h] [rbp+48h] BYREF
  void *retaddr; // [rsp+240h] [rbp+138h]

  v4 = 0LL;
  v76 = 0LL;
  v74 = 0;
  v5 = 0xFFFFF68000000000uLL;
  v6 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = (a2 >> 9) & 0x7FFFFFFFF8LL;
  v8 = v7 - 0x98000000000LL;
  v75 = v7 - 0x98000000000LL;
  v9 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  v84 = v9;
  if ( a3 )
  {
    for ( i = *(__int64 ***)(a3 + 56); i; i = (__int64 **)*i )
    {
      if ( ((_DWORD)i[8] & 4) != 0 )
        break;
    }
    v83 = (__int64)(i + 2);
  }
  else
  {
    v83 = 8LL;
  }
  v90 = 20LL;
  v11 = &dword_1403CCD40;
  v88 = 1;
  v89 = 0;
  v91 = 0LL;
  Base[0] = 0LL;
  v12 = v9[92] & 7;
  if ( v12 < 6u )
  {
    if ( v12 == 2 )
      v13 = &dword_1403CCD40;
    else
      v13 = (LONG *)(v9 + 96);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v13, CurrentIrql);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v66 = SchedulerAssist[5];
          SchedulerAssist[5] = v66 + 1;
          if ( v66 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
          {
            KiPerformUnboostKick(CurrentPrcb);
            v8 = v75;
          }
        }
      }
      _m_prefetchw(v13);
      v17 = *v13 & 0x7FFFFFFF;
      v7 = (unsigned int)(v17 + 1);
      if ( v17 == _InterlockedCompareExchange(v13, v7, v17) )
        goto LABEL_11;
      KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
      ExpWaitForSpinLockSharedAndAcquire(v13, CurrentIrql);
    }
    v8 = v75;
LABEL_11:
    if ( v13[1] )
      _InterlockedExchange(v13 + 1, 0);
    v18 = CurrentIrql;
    v5 = 0xFFFFF68000000000uLL;
    v4 = 0LL;
    goto LABEL_14;
  }
  v18 = KeGetCurrentIrql();
  __writecr8(2uLL);
LABEL_14:
  v77 = v18;
  if ( v6 > v8 )
    goto LABEL_47;
  v19 = 0LL;
  v85 = 0LL;
  v20 = (__int64)(v8 << 25) >> 16;
  v86 = v20;
  while ( 1 )
  {
    if ( v4 )
    {
      MiFlushTbList(&v88);
      MiUnlockPageTableInternal(v9, v4);
      v76 = 0LL;
      if ( (unsigned int)MiWorkingSetIsContended(v9) || KeShouldYieldProcessor() )
      {
        MiUnlockWorkingSetShared((__int64)v9, v18, v65);
        MiLockWorkingSetShared(v9);
      }
    }
    v81 = 0LL;
    v82 = 0LL;
    memset(v87, 0, sizeof(v87));
    LODWORD(v87[0]) = 2273;
    v21 = (__int64)((v6 << 25) - v19) >> 16;
    v22 = v21;
    if ( v21 >= 0xFFFFF68000000000uLL )
    {
      do
      {
        if ( v22 > 0xFFFFF6FFFFFFFFFFuLL )
          break;
        v22 = (__int64)((v22 << 25) - v19) >> 16;
      }
      while ( v22 >= 0xFFFFF68000000000uLL );
      v9 = v84;
    }
    if ( v22 < 0xFFFF800000000000uLL || v22 >= qword_1403CD100 && v22 <= qword_1403CBB70 )
      AnyMultiplexedVm = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
    else
      AnyMultiplexedVm = (unsigned __int16 *)MiGetAnyMultiplexedVm(1LL);
    v24 = MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, (__int64)((v6 << 25) - v19) >> 16);
    if ( v24 )
    {
      LODWORD(v81) = v24 - 1;
      v25 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v82 = v25;
    }
    else
    {
      LODWORD(v87[0]) |= 4u;
      v87[21] = &v81;
      v87[2] = 0LL;
      v87[20] = MiGetNextPageTableTail;
      BYTE4(v87[0]) = v77;
      BYTE2(v87[1]) = 1;
      v87[3] = AnyMultiplexedVm;
      v87[4] = (__int64)((v6 << 25) - v19) >> 16;
      v87[5] = v20;
      MiWalkPageTables((int *)v87);
      v25 = v82;
    }
    if ( a3 )
    {
      v74 = 1;
      KeGetCurrentIrql();
      __writecr8(2uLL);
      v26 = *(_DWORD *)(a3 + 48);
      do
      {
        while ( v26 < 0 )
        {
          if ( (v26 & 0x40000000) != 0 )
          {
            v78 = 0;
            do
            {
              KeYieldProcessorEx(&v78);
              v26 = *(_DWORD *)(a3 + 48);
            }
            while ( v26 < 0 );
          }
          else
          {
            v26 = _InterlockedCompareExchange((volatile signed __int32 *)(a3 + 48), v26 | 0x40000000, v26);
          }
        }
        v27 = v26;
        v26 = _InterlockedCompareExchange((volatile signed __int32 *)(a3 + 48), v26 & 0x3FFFFFFF | 0x80000000, v26);
      }
      while ( v27 != v26 );
      if ( v82 )
      {
        v28 = ((__int64)(v75 - v82) >> 3) + 1;
        v29 = (unsigned __int64)((__int64)((v82 << 25) - v19) >> 16) >> 12;
        if ( v28 > 0x200 )
          v28 = 512LL;
      }
      else
      {
        v29 = v21 >> 12;
        v28 = ((__int64)(v75 - v6) >> 3) + 1;
      }
      v30 = v29 - (*(unsigned int *)(a3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 32) << 32));
      if ( v28 )
      {
        v31 = v30;
        v32 = v30 & 7;
        v33 = (_BYTE *)(*(_QWORD *)v83 + (v31 >> 3));
        if ( v32 + v28 <= 8 )
        {
          v34 = ~(byte_1402FEA38[v28] << v32);
LABEL_32:
          *v33 &= v34;
          goto LABEL_33;
        }
        if ( (_DWORD)v32 )
        {
          *v33++ &= byte_1402FEA38[v32];
          v28 -= (unsigned int)(8 - v32);
        }
        if ( v28 > 8 )
        {
          memset(v33, 0, v28 >> 3);
          v33 += v28 >> 3;
          v28 &= 7u;
        }
        if ( v28 )
        {
          v34 = byte_1402FEA48[v28];
          goto LABEL_32;
        }
      }
    }
LABEL_33:
    if ( !v25 )
      break;
    v6 = v25;
    v8 = v75;
    v4 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v76 = v4;
    v35 = v75;
    if ( (v25 & 0xFFFFFFFFFFFFF000uLL) + 4088 <= v75 )
      v35 = (v25 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    if ( v25 <= v35 )
    {
      v36 = v85;
      v37 = 0xFFFFF6FB7DBED000uLL;
      while ( 2 )
      {
        v5 = *(_QWORD *)v6;
        if ( v6 >= v37
          && v6 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0x1800000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v5 & 1) != 0
          && ((v5 & 0x20) == 0 || (v5 & 0x42) == 0) )
        {
          v7 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v7 )
          {
            v67 = *(_QWORD *)(v7 + 8 * ((v6 >> 3) & 0x1FF));
            v7 = v5 | 0x20;
            if ( (v67 & 0x20) == 0 )
              v7 = *(_QWORD *)v6;
            v5 = v7;
            if ( (v67 & 0x42) != 0 )
              v5 = v7 | 0x42;
          }
        }
        v80 = v5;
        if ( (v5 & 1) == 0 || (v5 & 0x42) == 0 )
          goto LABEL_41;
        v43 = v5;
        Process = (unsigned __int64)&v80;
        if ( (unsigned __int64)&v80 >= v37 )
        {
          Process = (unsigned __int64)&v80;
          if ( (unsigned __int64)&v80 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0x1800000) != 0 )
          {
            Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
            if ( *(_BYTE *)(Process + 640) != 1 && (v5 & 0x20) == 0 )
            {
              Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
              v7 = *(_QWORD *)(Process + 1544);
              if ( v7 )
              {
                v43 = v5 | 0x20;
                v68 = *(_QWORD *)(v7 + 8 * (((unsigned __int64)&v80 >> 3) & 0x1FF));
                Process = (unsigned __int8)v68;
                LOBYTE(Process) = v68 & 0x20;
                if ( (v68 & 0x20) == 0 )
                  v43 = v5;
                if ( (v68 & 0x42) != 0 )
                  v43 |= 0x42uLL;
              }
            }
          }
        }
        v45 = (v43 >> 12) & 0xFFFFFFFFFLL;
        v46 = (__int64)((v6 << 25) - v36) >> 16;
        if ( !a3 && (v5 < 0 || (MiGetWsleContents(Process, (__int64)((v6 << 25) - v36) >> 16) & 0xF) == 9) )
          goto LABEL_41;
        v47 = *(_QWORD *)v6;
        v48 = 48 * v45 - 0x58000000000LL;
        if ( v6 >= v37
          && v6 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0x1800000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v47 & 1) != 0
          && ((v47 & 0x20) == 0 || (v47 & 0x42) == 0) )
        {
          v69 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v69 )
          {
            v70 = *(_QWORD *)(v69 + 8 * ((v6 >> 3) & 0x1FF));
            v71 = v47 | 0x20;
            if ( (v70 & 0x20) == 0 )
              v71 = *(_QWORD *)v6;
            v47 = v71;
            if ( (v70 & 0x42) != 0 )
              v47 = v71 | 0x42;
          }
        }
        v7 = (v5 & 0xF0FFFFFFFFFFFFBDuLL | ((HIBYTE(v47) & 0xF) << 56)) ^ ((v5 & 0xF0FFFFFFFFFFFFBDuLL | ((HIBYTE(v47) & 0xF) << 56)) ^ (v47 >> 60 << 60)) & 0x7000000000000000LL;
        *(_QWORD *)v6 = v7;
        if ( v6 >= v37 && v6 <= 0xFFFFF6FB7DBED7F8uLL )
          MiWritePteShadow(v6, v7);
        v49 = v89;
        v50 = 1LL;
        if ( v88 != 1 && (v89 & 8) == 0 && v46 >= 0xFFFFF68000000000uLL && v46 <= 0xFFFFF6FFFFFFFFFFuLL )
        {
          v49 = v89 | 8;
          LOBYTE(v89) = v89 | 8;
        }
        v5 = HIDWORD(v90);
        if ( !HIDWORD(v90) )
          goto LABEL_83;
        v51 = v49 & 4;
        if ( !v51 )
        {
          v52 = Base[HIDWORD(v90) - 1];
          if ( (v52 & 0xC00) == 0 )
          {
            v53 = Base[HIDWORD(v90) - 1] & 0x3FFLL;
            v7 = (v52 & 0xFFFFFFFFFFFFF000uLL) + ((v53 + 1) << 12);
            if ( v7 == v46 && v53 + 1 >= v53 && v53 + 1 <= 0x3FF )
            {
              ++v91;
              Base[HIDWORD(v90) - 1] = ((unsigned __int16)v52 ^ (unsigned __int16)(v52 + 1)) & 0x3FF ^ v52;
              goto LABEL_75;
            }
          }
        }
        if ( v51
          || (v57 = Base[HIDWORD(v90) - 1], (v57 & 0xC00) != 0)
          || (v7 = v57 & 0xFFFFFFFFFFFFF000uLL, (v57 & 0xFFFFFFFFFFFFF000uLL) != v46 + 4096)
          || (v72 = Base[HIDWORD(v90) - 1] & 0x3FFLL, v7 = v72 + 1, v72 + 1 < v72)
          || v7 > 0x3FF )
        {
LABEL_83:
          if ( HIDWORD(v90) >= (unsigned int)v90 )
          {
            HIBYTE(v89) = 1;
          }
          else
          {
            while ( 1 )
            {
              v7 = (unsigned __int64)(v50 - 1) > 0x3FF ? 1024LL : v50;
              v58 = v46 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v7 - 1) & 0x3FF;
              v50 -= v7;
              v46 += v7 << 12;
              Base[(unsigned int)v5] = v58;
              v91 += v7;
              v5 = (unsigned int)(HIDWORD(v90) + 1);
              HIDWORD(v90) = v5;
              if ( (_DWORD)v5 == (_DWORD)v90 && (v89 & 4) == 0 )
              {
                qsort(Base, (unsigned int)v5, 8uLL, MiTbFlushSort);
                MiCompressTbFlushList(&v88);
                v5 = HIDWORD(v90);
                if ( HIDWORD(v90) == (_DWORD)v90 )
                  break;
              }
              if ( !v50 )
                goto LABEL_75;
            }
            if ( v50 )
            {
              HIBYTE(v89) = 1;
              v91 = HIDWORD(v90);
            }
          }
        }
        else
        {
          ++v91;
          Base[HIDWORD(v90) - 1] = ((unsigned __int16)(v57 - 4096) ^ (unsigned __int16)(v57 - 4096 + 1)) & 0x3FF ^ (unsigned __int64)(v57 - 4096);
        }
LABEL_75:
        v54 = 0LL;
        v79 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v48 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v79);
          while ( *(__int64 *)(v48 + 24) < 0 );
        }
        v55 = *(_BYTE *)(v48 + 34);
        v56 = 0LL;
        if ( (v55 & 0x10) == 0 )
        {
          if ( (!_bittest64((const signed __int64 *)(v48 + 16), 0xAu) & (unsigned __int8)~(v55 >> 3)) != 0 )
          {
            v56 = MiCapturePageFileInfoInline(v48 + 16, 1LL);
            v55 = *(_BYTE *)(v48 + 34);
          }
          *(_BYTE *)(v48 + 34) = v55 | 0x10;
          if ( v56 )
          {
            v7 = (*(_QWORD *)(v48 + 40) >> 40) & 0x3FFLL;
            v54 = *(_QWORD *)(qword_1403CBD88 + 8 * v7);
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v48 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v56 )
          MiReleasePageFileInfo(v54, v56, 1LL);
        v37 = 0xFFFFF6FB7DBED000uLL;
LABEL_41:
        v6 += 8LL;
        if ( v6 > v35 )
        {
          v9 = v84;
          v4 = v76;
          v8 = v75;
          break;
        }
        continue;
      }
    }
    if ( a3 )
    {
      _InterlockedAnd((volatile signed __int32 *)(a3 + 48), 0x3FFFFFFFu);
      __writecr8(2uLL);
      v74 = 0;
    }
    v19 = v85;
    v20 = v86;
    if ( v6 > v8 )
      break;
    v18 = v77;
  }
  v11 = &dword_1403CCD40;
LABEL_47:
  v38 = HIDWORD(v90);
  if ( HIDWORD(v90) )
  {
    v59 = v89;
    v60 = qword_1403CB708;
    v61 = v88;
    if ( (v89 & 2) != 0 )
    {
      if ( v88 == 1 )
      {
LABEL_96:
        v64 = 0LL;
        goto LABEL_97;
      }
    }
    else if ( v88 == 1 )
    {
      v62 = KeGetCurrentThread()->ApcState.Process;
      if ( v62[2].ActiveProcessors.Bitmap[16] )
        goto LABEL_196;
      SecureHandle = v62->SecureState.SecureHandle;
      if ( SecureHandle )
        LOBYTE(SecureHandle) = 1;
      if ( (_BYTE)SecureHandle )
      {
LABEL_196:
        v38 = HIDWORD(v90);
        v60 = -1LL;
        v59 = v89;
        v61 = v88;
      }
      else
      {
        v38 = HIDWORD(v90);
        v59 = v89;
        v61 = v88;
      }
      goto LABEL_96;
    }
    v64 = (unsigned int)((v89 & 8) != 0) + 1;
LABEL_97:
    if ( v91 > v60 || HIBYTE(v89) )
    {
      if ( (v59 & 1) != 0 )
        KeFlushCurrentTbOnly((unsigned int)v61, v64);
      else
        KeFlushTb((unsigned int)v61, v64);
      HIBYTE(v89) = 0;
    }
    else if ( (v59 & 1) != 0 )
    {
      KeFlushMultipleRangeCurrentTb(v38, Base, v61);
    }
    else
    {
      KeFlushMultipleRangeTb(v38, Base, v61, (unsigned int)v64);
    }
    LOBYTE(v89) = v89 & 0xF7;
    HIDWORD(v90) = 0;
    v91 = 0LL;
  }
  if ( v74 == 1 )
  {
    LOBYTE(v7) = 2;
    MiUnlockVadCore(a3, v7, v8, v5);
  }
  if ( v76 )
    MiUnlockPageTableInternal(v9, v76);
  if ( (v9[92] & 7u) <= 5 )
  {
    v39 = *((_DWORD *)v9 + 46);
    if ( (v39 & 0x8000000) != 0 || (v39 & 0x4000000) != 0 || (v39 & 0x10000000) != 0 )
    {
      MiPreUnlockWorkingSetShared(v9, v77, v8);
      LOBYTE(v39) = *((_BYTE *)v9 + 184);
    }
    if ( (v39 & 7) != 2 )
      v11 = (volatile signed __int32 *)(v9 + 96);
    MiCheckProcessShadow((__int64)v9, 1);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v11, retaddr);
    }
    else
    {
      _InterlockedAnd(v11, 0xBFFFFFFF);
      _InterlockedDecrement(v11);
    }
    v40 = KeGetCurrentPrcb();
    v41 = v40->SchedulerAssist;
    if ( v41 )
    {
      if ( v40->NestingLevel <= 1u )
      {
        v73 = v41[5] - 1;
        v41[5] = v73;
        if ( !v73 && !*((_BYTE *)v41 + 25) && !*((_BYTE *)v41 + 27) )
          KiPerformUnboostKick(v40);
      }
    }
  }
  result = v77;
  __writecr8(v77);
  return result;
}
