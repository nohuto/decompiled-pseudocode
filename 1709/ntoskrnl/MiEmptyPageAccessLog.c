/*
 * XREFs of MiEmptyPageAccessLog @ 0x140011730
 * Callers:
 *     MiAllocateAccessLog @ 0x140011560 (MiAllocateAccessLog.c)
 *     MiDeleteVad @ 0x1400579B0 (MiDeleteVad.c)
 *     MiTrimOrAgeWorkingSet @ 0x14009C460 (MiTrimOrAgeWorkingSet.c)
 *     MmOutSwapProcess @ 0x140111FF0 (MmOutSwapProcess.c)
 *     MiDeletePartialVad @ 0x1401123D4 (MiDeletePartialVad.c)
 *     MiCleanWorkingSet @ 0x140127068 (MiCleanWorkingSet.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x14021CEDC (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiDeleteSessionAddressSpace @ 0x140221670 (MiDeleteSessionAddressSpace.c)
 *     MiEmptyAccessLogs @ 0x140230750 (MiEmptyAccessLogs.c)
 *     MmDeleteProcessAddressSpace @ 0x1404FB9A4 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     MmFreeAccessPfnBuffer @ 0x140011CE0 (MmFreeAccessPfnBuffer.c)
 *     MiStartingOffset @ 0x14002C570 (MiStartingOffset.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140066590 (ExAcquireSpinLockShared.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x140067BA8 (ObpTraceObjectDereferenceIfActive.c)
 *     ObDereferenceObjectDeferDelete @ 0x140071350 (ObDereferenceObjectDeferDelete.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ObFastReferenceObjectLocked @ 0x14008AA44 (ObFastReferenceObjectLocked.c)
 *     ObReferenceObjectExWithTag @ 0x14008AAD0 (ObReferenceObjectExWithTag.c)
 *     ObpDeferObjectDeletion @ 0x1401226B0 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x140188FB0 (RtlpInterlockedPushEntrySList.c)
 *     ObpPushStackInfo @ 0x140239558 (ObpPushStackInfo.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall MiEmptyPageAccessLog(_QWORD *P)
{
  unsigned __int16 v1; // r8
  _QWORD *v2; // r13
  unsigned __int64 v3; // rcx
  unsigned int v4; // edi
  __int64 v5; // rax
  unsigned int v6; // r9d
  unsigned __int64 v7; // rbx
  __int64 *v8; // rsi
  __int64 i; // rdx
  __int64 v10; // r14
  unsigned __int64 v11; // rbp
  unsigned __int16 v12; // r15
  __int64 v13; // r14
  __int16 v14; // bp
  unsigned __int64 v15; // r12
  __int64 **v16; // r14
  volatile signed __int64 *v17; // r10
  signed __int64 v18; // rax
  signed __int64 v19; // rtt
  unsigned int Alignment_low; // esi
  int v21; // esi
  __int64 v22; // r14
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rbp
  volatile signed __int64 *v27; // r15
  signed __int64 v28; // rdx
  signed __int64 v29; // rax
  signed __int64 v30; // r13
  unsigned int v31; // edx
  ULONG_PTR v32; // r13
  __int64 *v33; // rsi
  signed __int64 v34; // rax
  signed __int64 v35; // rtt
  signed __int64 v36; // rax
  signed __int64 v37; // rtt
  _QWORD *v38; // rbx
  void *j; // rcx
  signed __int64 BugCheckParameter4; // rax
  unsigned __int64 v41; // rsi
  unsigned __int64 v42; // [rsp+30h] [rbp-58h]
  _QWORD *Pa; // [rsp+38h] [rbp-50h]
  _QWORD *v44; // [rsp+90h] [rbp+8h]
  unsigned int v45; // [rsp+98h] [rbp+10h]
  int v46; // [rsp+A0h] [rbp+18h]
  int v47; // [rsp+A4h] [rbp+1Ch]
  unsigned __int64 v48; // [rsp+A8h] [rbp+20h]

  v44 = P;
  v1 = 0;
  v47 = 3;
  v2 = P;
  v46 = 0;
  v3 = P[7];
  v4 = 0;
  v42 = v3;
  if ( v3 <= 1 || (*(_DWORD *)(v3 + 1740) & 0x1000) != 0 || (v5 = *(_QWORD *)(v3 + 1024)) == 0 )
    v6 = -1;
  else
    v6 = *(_DWORD *)(v5 + 8);
  v45 = v6;
  v7 = 0LL;
  while ( 2 )
  {
    v8 = (__int64 *)(v2[4] - 8LL);
    Pa = (_QWORD *)*v2;
    for ( i = 0LL; v8 >= v2 + 9; --v8 )
    {
      v10 = *v8;
      v11 = (unsigned __int64)*v8 >> 9;
      v12 = *v8 & 0x1FF;
      if ( v12 )
      {
        if ( v3 <= 1 )
          goto LABEL_10;
        v22 = v10 >> 16;
        if ( v12 == v1 )
        {
          v7 += (v22 - i) >> 3 << 12 << *(&v46 + ((v7 >> 10) & 1));
        }
        else
        {
          v23 = *(_QWORD *)(v2[6] - 8 * (*v8 & 0x1FF));
          v4 ^= ((unsigned __int16)v4 ^ (unsigned __int16)(32 * *(_DWORD *)(*(_QWORD *)v23 + 56LL))) & 0x400;
          v24 = MiStartingOffset(v23, v22, v6);
          v1 = v12;
          v25 = v24 << *((_BYTE *)&v46 + 4 * ((v4 >> 10) & 1));
          HIDWORD(v48) = HIDWORD(v25);
          LODWORD(v48) = v12 | v4 & 0x400 | v25 & 0xFFFFFA00;
          v7 = v48;
        }
        v3 = v42;
        i = v22;
        v14 = v7 ^ ((_WORD)v11 << 9);
        *v8 = v7;
      }
      else
      {
        v13 = v10 >> 16 << 25 >> 16;
        *v8 = v13;
        v14 = v13 ^ ((_WORD)v11 << 9);
      }
      *(_DWORD *)v8 ^= v14 & 0x200;
LABEL_10:
      v6 = v45;
    }
    if ( v3 <= 1 )
      goto LABEL_17;
    v15 = v2[6] - 8LL;
    v16 = (__int64 **)(v2[5] + 8LL);
    if ( (unsigned __int64)v16 > v15 )
      goto LABEL_13;
    do
    {
      v26 = **v16;
      v27 = (volatile signed __int64 *)(v26 + 64);
      _m_prefetchw((const void *)(v26 + 64));
      v28 = *(_QWORD *)(v26 + 64);
      if ( (v28 & 0xF) != 0 )
      {
        do
        {
          v29 = _InterlockedCompareExchange64(v27, v28 - 1, v28);
          if ( v28 == v29 )
            break;
          v28 = v29;
        }
        while ( (v29 & 0xF) != 0 );
      }
      v30 = v28;
      v31 = v28 & 0xF;
      v32 = v30 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v31 > 1 )
        goto LABEL_32;
      if ( v31 )
      {
        ObReferenceObjectExWithTag(v32, 15LL);
        _m_prefetchw((const void *)v27);
        v36 = *v27;
        while ( (v36 & 0xF) == 0 )
        {
          if ( v32 != (v36 & 0xFFFFFFFFFFFFFFF0uLL) )
            break;
          v37 = v36;
          v36 = _InterlockedCompareExchange64(v27, v36 + 15, v36);
          if ( v37 == v36 )
            goto LABEL_32;
        }
        ObpTraceObjectDereferenceIfActive(v32 - 48, 15LL, 1953261124LL);
        BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v32 - 48), 0xFFFFFFFFFFFFFFF1uLL)
                           - 15;
        if ( BugCheckParameter4 <= 0 )
        {
          if ( BugCheckParameter4 )
            KeBugCheckEx(0x18u, 0LL, v32, 5uLL, BugCheckParameter4);
          ObpDeferObjectDeletion(v32 - 48);
        }
LABEL_32:
        if ( v32 )
          goto LABEL_33;
      }
      v41 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v26 + 72));
      v32 = ObFastReferenceObjectLocked(v26 + 64);
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v26 + 72));
      __writecr8(v41);
LABEL_33:
      v33 = *(__int64 **)(v32 + 24);
      _m_prefetchw((const void *)v27);
      v34 = *v27;
      if ( (v32 ^ *v27) >= 0xF )
      {
LABEL_45:
        ObDereferenceObjectDeferDelete((PVOID)v32);
      }
      else
      {
        while ( 1 )
        {
          v35 = v34;
          v34 = _InterlockedCompareExchange64(v27, v34 + 1, v34);
          if ( v35 == v34 )
            break;
          if ( (v32 ^ v34) >= 0xF )
            goto LABEL_45;
        }
      }
      *v16++ = v33;
    }
    while ( (unsigned __int64)v16 <= v15 );
    v3 = v42;
    v2 = v44;
LABEL_13:
    v17 = (volatile signed __int64 *)(v3 - 48);
    _m_prefetchw((const void *)(v3 - 48));
    v18 = *(_QWORD *)(v3 - 48);
    if ( v18 )
    {
      while ( 1 )
      {
        v19 = v18;
        v18 = _InterlockedCompareExchange64(v17, v18 + 1, v18);
        if ( v19 == v18 )
          break;
        if ( !v18 )
          goto LABEL_49;
      }
      if ( ObpTraceFlags )
        ObpPushStackInfo((_DWORD)v17);
LABEL_17:
      v2[3] = MEMORY[0xFFFFF78000000320];
      *((_DWORD *)v2 + 3) = dword_14039E910;
      if ( !ExAcquireRundownProtection_0(&RunRef) )
        goto LABEL_47;
      Alignment_low = LOWORD(ListHead.Alignment);
      if ( LOWORD(ListHead.Alignment) >= (unsigned int)dword_14039E8E8 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)&xmmword_140387B90, 0x64u);
        v21 = 0;
      }
      else
      {
        RtlpInterlockedPushEntrySList(&ListHead, (PSLIST_ENTRY)v2);
        if ( Alignment_low >= 8 && !Event.Header.SignalState )
          KeSetEvent(&Event, 0, 0);
        v21 = 1;
      }
      ExReleaseRundownProtection_0(&RunRef);
      if ( !v21 )
LABEL_47:
        MmFreeAccessPfnBuffer(v2);
      v44 = Pa;
      v2 = Pa;
      if ( Pa )
      {
        v3 = v42;
        v1 = 0;
        v6 = v45;
        continue;
      }
    }
    else
    {
LABEL_49:
      ExFreePoolWithTag(v2, 0);
      v38 = Pa;
      for ( j = Pa; v38; j = v38 )
      {
        v38 = (_QWORD *)*v38;
        ExFreePoolWithTag(j, 0);
      }
    }
    break;
  }
}
