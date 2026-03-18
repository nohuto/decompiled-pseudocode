/*
 * XREFs of MiEmptyPageAccessLog @ 0x140006990
 * Callers:
 *     MiCleanWorkingSet @ 0x1400066F8 (MiCleanWorkingSet.c)
 *     MiAllocateAccessLog @ 0x1400067F0 (MiAllocateAccessLog.c)
 *     MiDeletePartialVad @ 0x140016CB0 (MiDeletePartialVad.c)
 *     MmOutSwapProcess @ 0x140040CE4 (MmOutSwapProcess.c)
 *     MiTrimOrAgeWorkingSet @ 0x1400D8800 (MiTrimOrAgeWorkingSet.c)
 *     MiDeleteVad @ 0x1400D94D0 (MiDeleteVad.c)
 *     MiDeleteSessionAddressSpace @ 0x14013E414 (MiDeleteSessionAddressSpace.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x14013F704 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiEmptyAccessLogs @ 0x14013F820 (MiEmptyAccessLogs.c)
 *     MmDeleteProcessAddressSpace @ 0x1404998CC (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x140024BAC (ObpDeferObjectDeletion.c)
 *     ObFastReferenceObjectLocked @ 0x1400445AC (ObFastReferenceObjectLocked.c)
 *     ObReferenceObjectExWithTag @ 0x1400445F0 (ObReferenceObjectExWithTag.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x140049B60 (ObpTraceObjectDereferenceIfActive.c)
 *     MmFreeAccessPfnBuffer @ 0x14005F1B8 (MmFreeAccessPfnBuffer.c)
 *     MiGetSubsectionDriverProtos @ 0x140097F34 (MiGetSubsectionDriverProtos.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1400A6AB0 (ExAcquireSpinLockShared.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400E19E0 (ObDereferenceObjectDeferDelete.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     MiGetSharedProtos @ 0x140221220 (MiGetSharedProtos.c)
 *     ObpPushStackInfo @ 0x140226DAC (ObpPushStackInfo.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall MiEmptyPageAccessLog(_QWORD *P)
{
  __int64 v1; // r8
  _QWORD *v2; // r13
  struct _KPROCESS *v3; // rax
  unsigned int v4; // edi
  unsigned __int64 v5; // rax
  unsigned int v6; // r10d
  unsigned __int64 v7; // rbx
  __int64 *v8; // rsi
  unsigned __int64 v9; // r11
  __int64 v10; // r9
  unsigned __int64 i; // rdx
  __int64 v12; // r14
  __int64 v13; // rbp
  unsigned __int16 v14; // r15
  __int64 v15; // r14
  unsigned __int64 v16; // r12
  __int64 **v17; // r14
  volatile signed __int64 *v18; // r10
  signed __int64 v19; // rax
  signed __int64 v20; // rtt
  __int64 v21; // rdx
  unsigned int Alignment_low; // esi
  int v23; // esi
  unsigned __int64 v24; // r14
  _QWORD *v25; // rbx
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // rbp
  volatile signed __int64 *v30; // r15
  signed __int64 v31; // rdx
  signed __int64 v32; // rax
  signed __int64 v33; // r13
  unsigned int v34; // edx
  ULONG_PTR v35; // r13
  __int64 *v36; // rsi
  signed __int64 v37; // rax
  signed __int64 v38; // rtt
  __int64 v39; // rax
  __int64 v40; // rdx
  signed __int64 v41; // rax
  signed __int64 v42; // rtt
  _QWORD *v43; // rbx
  void *j; // rcx
  signed __int64 BugCheckParameter4; // rax
  __int64 SharedProtos; // rax
  unsigned __int64 v47; // rsi
  unsigned __int64 v48; // [rsp+30h] [rbp-58h]
  _QWORD *Pa; // [rsp+38h] [rbp-50h]
  _QWORD *v50; // [rsp+90h] [rbp+8h]
  unsigned int v51; // [rsp+98h] [rbp+10h]
  struct _KPROCESS *v52; // [rsp+A0h] [rbp+18h]
  int v53; // [rsp+A8h] [rbp+20h]
  int v54; // [rsp+ACh] [rbp+24h]

  v50 = P;
  v1 = 0LL;
  v54 = 3;
  v53 = 0;
  v2 = P;
  v3 = (struct _KPROCESS *)P[7];
  v4 = 0;
  v52 = v3;
  if ( (unsigned __int64)v3 > 1 && v3 != PsInitialSystemProcess )
  {
    v5 = v3[1].ActiveProcessors.Bitmap[2];
    if ( v5 )
    {
      v6 = *(_DWORD *)(v5 + 8);
      v3 = v52;
      goto LABEL_5;
    }
    v3 = v52;
  }
  v6 = -1;
LABEL_5:
  v51 = v6;
  v7 = 0LL;
  while ( 2 )
  {
    v8 = (__int64 *)(v2[4] - 8LL);
    v9 = 0xFFFFF68000000000uLL;
    v10 = 511LL;
    Pa = (_QWORD *)*v2;
    for ( i = 0LL; v8 >= v2 + 9; --v8 )
    {
      v12 = *v8;
      v13 = ((unsigned __int64)*v8 >> 9) & 1;
      v14 = *v8 & 0x1FF;
      if ( v14 )
      {
        if ( (unsigned __int64)v3 <= 1 )
          continue;
        v24 = v12 >> 16;
        if ( v14 == (_WORD)v1 )
        {
          v7 += (__int64)(v24 - i) >> 3 << 12 << *(&v53 + ((v7 >> 10) & 1));
        }
        else
        {
          v25 = *(_QWORD **)(v2[6] - 8 * (*v8 & 0x1FF));
          v4 ^= ((unsigned __int16)v4 ^ (unsigned __int16)(32 * *(_DWORD *)(*v25 + 56LL))) & 0x400;
          if ( (*(_DWORD *)(*v25 + 56LL) & 0x20) != 0 )
          {
            v26 = v25[1];
            if ( v24 < v26 || v24 >= v26 + 8LL * *((unsigned int *)v25 + 11) )
            {
              if ( (*((_BYTE *)v25 + 34) & 2) != 0 )
              {
                SharedProtos = MiGetSharedProtos(*v25, v6, v25);
                v6 = v51;
                v9 = 0xFFFFF68000000000uLL;
              }
              else
              {
                SharedProtos = MiGetSubsectionDriverProtos(v25);
              }
              v27 = (v24 << 9) - (*(_QWORD *)(SharedProtos + 32) << 9);
            }
            else
            {
              v27 = (v24 << 9) - (v26 << 9);
            }
            v28 = ((unsigned __int64)*((unsigned int *)v25 + 9) << 9) + (v27 & 0xFFFFFFFFFFFFF000uLL);
          }
          else
          {
            v39 = v25[1];
            if ( v39 )
              v40 = (__int64)(v24 - v39) >> 3 << 12;
            else
              v40 = 0LL;
            v28 = v40 + ((*((unsigned int *)v25 + 9) | ((unsigned __int64)((_WORD)v25[4] & 0xFFC0) << 26)) << 12);
          }
          v1 = v14;
          v10 = 511LL;
          v48 = v28 << *((_BYTE *)&v53 + 4 * ((v4 >> 10) & 1));
          LODWORD(v48) = v14 | v4 & 0x400 | v48 & 0xFFFFFA00;
          v7 = v48;
        }
        i = v24;
        *v8 = v7;
        *(_DWORD *)v8 ^= ((unsigned __int16)v7 ^ (unsigned __int16)((_WORD)v13 << 9)) & 0x200;
      }
      else
      {
        v15 = (__int64)((v12 >> 16 << 25) - (v9 << 25)) >> 16;
        *v8 = v15;
        *(_DWORD *)v8 = ((_DWORD)v13 << 9) | v15 & 0xFFFFFDFF;
      }
      v3 = v52;
    }
    if ( (unsigned __int64)v3 <= 1 )
      goto LABEL_17;
    v16 = v2[6] - 8LL;
    v17 = (__int64 **)(v2[5] + 8LL);
    if ( (unsigned __int64)v17 > v16 )
      goto LABEL_13;
    do
    {
      v29 = **v17;
      v30 = (volatile signed __int64 *)(v29 + 64);
      _m_prefetchw((const void *)(v29 + 64));
      v31 = *(_QWORD *)(v29 + 64);
      if ( (v31 & 0xF) != 0 )
      {
        do
        {
          v32 = _InterlockedCompareExchange64(v30, v31 - 1, v31);
          if ( v31 == v32 )
            break;
          v31 = v32;
        }
        while ( (v32 & 0xF) != 0 );
      }
      v33 = v31;
      v34 = v31 & 0xF;
      v35 = v33 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v34 > 1 )
        goto LABEL_37;
      if ( v34 )
      {
        ObReferenceObjectExWithTag(v35, 15LL, v1, v10);
        _m_prefetchw((const void *)v30);
        v41 = *v30;
        while ( (v41 & 0xF) == 0 )
        {
          if ( v35 != (v41 & 0xFFFFFFFFFFFFFFF0uLL) )
            break;
          v42 = v41;
          v41 = _InterlockedCompareExchange64(v30, v41 + 15, v41);
          if ( v42 == v41 )
            goto LABEL_37;
        }
        ObpTraceObjectDereferenceIfActive(v35 - 48, 15LL, 1953261124LL);
        BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v35 - 48), 0xFFFFFFFFFFFFFFF1uLL)
                           - 15;
        if ( BugCheckParameter4 <= 0 )
        {
          if ( BugCheckParameter4 )
            KeBugCheckEx(0x18u, 0LL, v35, 5uLL, BugCheckParameter4);
          ObpDeferObjectDeletion(v35 - 48);
        }
LABEL_37:
        if ( v35 )
          goto LABEL_38;
      }
      v47 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v29 + 72));
      v35 = ObFastReferenceObjectLocked(v29 + 64);
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v29 + 72));
      __writecr8(v47);
LABEL_38:
      v36 = *(__int64 **)(v35 + 24);
      _m_prefetchw((const void *)v30);
      v37 = *v30;
      if ( (v35 ^ *v30) >= 0xF )
      {
LABEL_53:
        ObDereferenceObjectDeferDelete((PVOID)v35);
      }
      else
      {
        while ( 1 )
        {
          v38 = v37;
          v37 = _InterlockedCompareExchange64(v30, v37 + 1, v37);
          if ( v38 == v37 )
            break;
          if ( (v35 ^ v37) >= 0xF )
            goto LABEL_53;
        }
      }
      *v17++ = v36;
    }
    while ( (unsigned __int64)v17 <= v16 );
    v3 = v52;
    v2 = v50;
LABEL_13:
    v18 = (volatile signed __int64 *)&v3[-1].Spare2[39];
    _m_prefetchw(&v3[-1].Spare2[39]);
    v19 = *(_QWORD *)&v3[-1].Spare2[39];
    if ( v19 )
    {
      while ( 1 )
      {
        v20 = v19;
        v19 = _InterlockedCompareExchange64(v18, v19 + 1, v19);
        if ( v20 == v19 )
          break;
        if ( !v19 )
          goto LABEL_59;
      }
      if ( ObpTraceFlags )
        ObpPushStackInfo((_DWORD)v18);
LABEL_17:
      v2[3] = MEMORY[0xFFFFF78000000320];
      *((_DWORD *)v2 + 3) = dword_140382C10;
      if ( !ExAcquireRundownProtection(&RunRef) )
        goto LABEL_57;
      Alignment_low = LOWORD(ListHead.Alignment);
      if ( LOWORD(ListHead.Alignment) >= (unsigned int)dword_140382BE8 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)&xmmword_14036DC10, 0x64u);
        v23 = 0;
      }
      else
      {
        RtlpInterlockedPushEntrySList(&ListHead, (PSLIST_ENTRY)v2);
        if ( Alignment_low >= 8 && !stru_140382BD0.Header.SignalState )
          KeSetEvent(&stru_140382BD0, 0, 0);
        v23 = 1;
      }
      ExReleaseRundownProtection(&RunRef);
      if ( !v23 )
      {
LABEL_57:
        LOBYTE(v21) = 1;
        MmFreeAccessPfnBuffer(v2, v21);
      }
      v50 = Pa;
      v2 = Pa;
      if ( Pa )
      {
        v3 = v52;
        v1 = 0LL;
        v6 = v51;
        continue;
      }
    }
    else
    {
LABEL_59:
      ExFreePoolWithTag(v2, 0);
      v43 = Pa;
      for ( j = Pa; v43; j = v43 )
      {
        v43 = (_QWORD *)*v43;
        ExFreePoolWithTag(j, 0);
      }
    }
    break;
  }
}
