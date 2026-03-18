/*
 * XREFs of MiEmptyPageAccessLog @ 0x14007A620
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x14000B2A0 (MiTrimOrAgeWorkingSet.c)
 *     MiDrainSystemAccessLog @ 0x14007A2A4 (MiDrainSystemAccessLog.c)
 *     MmOutSwapProcess @ 0x1400EB550 (MmOutSwapProcess.c)
 *     MiDeleteVad @ 0x1400F1A40 (MiDeleteVad.c)
 *     MiAllocateAccessLog @ 0x14012A090 (MiAllocateAccessLog.c)
 *     MmDeleteProcessAddressSpace @ 0x1405128C0 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     MiGetSubsectionDriverProtos @ 0x140048594 (MiGetSubsectionDriverProtos.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x14005BAA0 (ObpTraceObjectDereferenceIfActive.c)
 *     MmFreeAccessPfnBuffer @ 0x14007AB38 (MmFreeAccessPfnBuffer.c)
 *     ExAcquireSpinLockShared @ 0x14008E460 (ExAcquireSpinLockShared.c)
 *     ObpDeferObjectDeletion @ 0x1400BD920 (ObpDeferObjectDeletion.c)
 *     ObReferenceObjectExWithTag @ 0x1400EB030 (ObReferenceObjectExWithTag.c)
 *     ObFastReferenceObjectLocked @ 0x1400EB804 (ObFastReferenceObjectLocked.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400FA020 (ObDereferenceObjectDeferDelete.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 *     MiGetSharedProtos @ 0x140268088 (MiGetSharedProtos.c)
 *     ObpPushStackInfo @ 0x140271018 (ObpPushStackInfo.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall MiEmptyPageAccessLog(_QWORD *P)
{
  unsigned __int64 v1; // r13
  unsigned int v2; // r10d
  unsigned __int16 v3; // r8
  _QWORD *v4; // rsi
  __int64 v5; // rax
  unsigned int v6; // r11d
  unsigned __int64 v7; // rbx
  __int64 *v8; // r15
  __int64 *v9; // rdi
  unsigned __int64 v10; // rdx
  __int64 v11; // rbp
  unsigned __int64 v12; // rsi
  unsigned __int16 v13; // r14
  __int64 v14; // rbp
  unsigned __int64 v15; // r12
  __int64 **v16; // r14
  signed __int64 v17; // rax
  signed __int64 v18; // rtt
  unsigned int Alignment_low; // edi
  int v20; // edi
  unsigned __int64 v21; // rbp
  _QWORD *v22; // r12
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // rsi
  signed __int64 v28; // rdx
  signed __int64 v29; // rax
  signed __int64 v30; // rbp
  unsigned int v31; // edx
  ULONG_PTR v32; // rbp
  __int64 *v33; // rdi
  signed __int64 v34; // rax
  signed __int64 v35; // rtt
  __int64 v36; // r8
  signed __int64 v37; // rax
  signed __int64 v38; // rtt
  signed __int64 BugCheckParameter4; // rax
  __int64 SharedProtos; // rax
  unsigned __int64 v41; // rdi
  _QWORD *v42; // rbx
  void *i; // rcx
  unsigned __int64 v44; // [rsp+30h] [rbp-58h]
  _QWORD *Pa; // [rsp+38h] [rbp-50h]
  _QWORD *v46; // [rsp+90h] [rbp+8h]
  unsigned int v47; // [rsp+98h] [rbp+10h]
  unsigned int v48; // [rsp+A0h] [rbp+18h]
  int v49; // [rsp+A8h] [rbp+20h]
  int v50; // [rsp+ACh] [rbp+24h]

  v46 = P;
  v1 = P[7];
  v2 = 0;
  v3 = 0;
  v48 = 0;
  v49 = 0;
  v4 = P;
  v50 = 3;
  if ( v1 <= 1 || (*(_DWORD *)(v1 + 1740) & 0x1000) != 0 || (v5 = *(_QWORD *)(v1 + 1024)) == 0 )
    v6 = -1;
  else
    v6 = *(_DWORD *)(v5 + 8);
  v47 = v6;
  v7 = 0LL;
  while ( 2 )
  {
    v8 = v4 + 9;
    v9 = (__int64 *)(v4[4] - 8LL);
    Pa = (_QWORD *)*v4;
    v10 = 0LL;
    if ( v9 >= v4 + 9 )
    {
      do
      {
        v11 = *v9;
        v12 = (unsigned __int64)*v9 >> 9;
        v13 = *v9 & 0x1FF;
        if ( v13 )
        {
          if ( v1 > 1 )
          {
            v21 = v11 >> 16;
            if ( v13 == v3 )
            {
              v7 += (__int64)(v21 - v10) >> 3 << 12 << *(&v49 + ((v7 >> 10) & 1));
            }
            else
            {
              v22 = *(_QWORD **)(v46[6] - 8 * (*v9 & 0x1FF));
              v23 = v22[1];
              v48 = v2 & 0xFFFFFBFF | (32 * (*(_DWORD *)(*v22 + 56LL) & 0x20));
              v2 = v48;
              if ( (*(_DWORD *)(*v22 + 56LL) & 0x20) != 0 )
              {
                if ( v21 < v23 || v21 >= v23 + 8LL * *((unsigned int *)v22 + 11) )
                {
                  if ( (*((_BYTE *)v22 + 34) & 2) != 0 )
                  {
                    SharedProtos = MiGetSharedProtos(*v22, v6, v22);
                    v2 = v48;
                    v6 = v47;
                  }
                  else
                  {
                    SharedProtos = MiGetSubsectionDriverProtos(v22);
                  }
                  v24 = (v21 << 9) - (*(_QWORD *)(SharedProtos + 72) << 9);
                }
                else
                {
                  v24 = (v21 << 9) - (v23 << 9);
                }
                v25 = ((unsigned __int64)*((unsigned int *)v22 + 9) << 9) + (v24 & 0xFFFFFFFFFFFFF000uLL);
              }
              else
              {
                if ( v23 )
                  v36 = (__int64)(v21 - v23) >> 3 << 12;
                else
                  v36 = 0LL;
                v25 = v36 + ((*((unsigned int *)v22 + 9) | ((unsigned __int64)((_WORD)v22[4] & 0xFFC0) << 26)) << 12);
              }
              v3 = v13;
              v26 = v25 << *((_BYTE *)&v49 + 4 * (((unsigned __int64)v48 >> 10) & 1));
              HIDWORD(v44) = HIDWORD(v26);
              LODWORD(v44) = v13 | v26 & 0xFFFFFA00 | v48 & 0x400;
              v7 = v44;
            }
            v10 = v21;
            *v9 = v7;
            *(_DWORD *)v9 ^= ((unsigned __int16)v7 ^ (unsigned __int16)((_WORD)v12 << 9)) & 0x200;
          }
        }
        else
        {
          v14 = v11 >> 16 << 25 >> 16;
          *v9 = v14;
          *(_DWORD *)v9 = v14 ^ ((unsigned __int16)v14 ^ (unsigned __int16)((_WORD)v12 << 9)) & 0x200;
        }
        --v9;
      }
      while ( v9 >= v8 );
      v4 = v46;
    }
    if ( v1 <= 1 )
      goto LABEL_17;
    v15 = v4[6] - 8LL;
    v16 = (__int64 **)(v4[5] + 8LL);
    if ( (unsigned __int64)v16 > v15 )
      goto LABEL_13;
    do
    {
      v27 = **v16;
      _m_prefetchw((const void *)(v27 + 64));
      v28 = *(_QWORD *)(v27 + 64);
      if ( (v28 & 0xF) != 0 )
      {
        do
        {
          v29 = _InterlockedCompareExchange64((volatile signed __int64 *)(v27 + 64), v28 - 1, v28);
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
        goto LABEL_37;
      if ( v31 )
      {
        ObReferenceObjectExWithTag(v32);
        _m_prefetchw((const void *)(v27 + 64));
        v37 = *(_QWORD *)(v27 + 64);
        while ( (v37 & 0xF) == 0 )
        {
          if ( v32 != (v37 & 0xFFFFFFFFFFFFFFF0uLL) )
            break;
          v38 = v37;
          v37 = _InterlockedCompareExchange64((volatile signed __int64 *)(v27 + 64), v37 + 15, v37);
          if ( v38 == v37 )
            goto LABEL_37;
        }
        ObpTraceObjectDereferenceIfActive(v32 - 48);
        BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v32 - 48), 0xFFFFFFFFFFFFFFF1uLL)
                           - 15;
        if ( BugCheckParameter4 <= 0 )
        {
          if ( *(_QWORD *)(v32 - 40) )
            KeBugCheckEx(
              0x18u,
              ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v32 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v32 - 48) >> 8)],
              v32,
              6uLL,
              *(_QWORD *)(v32 - 40));
          if ( BugCheckParameter4 < 0 )
            KeBugCheckEx(0x18u, 0LL, v32, 5uLL, BugCheckParameter4);
          ObpDeferObjectDeletion(v32 - 48);
        }
LABEL_37:
        if ( v32 )
          goto LABEL_38;
      }
      v41 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v27 + 72));
      v32 = ObFastReferenceObjectLocked(v27 + 64);
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v27 + 72));
      __writecr8(v41);
LABEL_38:
      v33 = *(__int64 **)(v32 + 24);
      _m_prefetchw((const void *)(v27 + 64));
      v34 = *(_QWORD *)(v27 + 64);
      if ( (v32 ^ v34) >= 0xF )
      {
LABEL_59:
        ObDereferenceObjectDeferDelete((PVOID)v32);
      }
      else
      {
        while ( 1 )
        {
          v35 = v34;
          v34 = _InterlockedCompareExchange64((volatile signed __int64 *)(v27 + 64), v34 + 1, v34);
          if ( v35 == v34 )
            break;
          if ( (v32 ^ v34) >= 0xF )
            goto LABEL_59;
        }
      }
      *v16++ = v33;
    }
    while ( (unsigned __int64)v16 <= v15 );
    v4 = v46;
LABEL_13:
    _m_prefetchw((const void *)(v1 - 48));
    v17 = *(_QWORD *)(v1 - 48);
    if ( v17 )
    {
      while ( 1 )
      {
        v18 = v17;
        v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(v1 - 48), v17 + 1, v17);
        if ( v18 == v17 )
          break;
        if ( !v17 )
          goto LABEL_76;
      }
      if ( ObpTraceFlags )
        ObpPushStackInfo(v1 - 48);
LABEL_17:
      v4[3] = MEMORY[0xFFFFF78000000320];
      *((_DWORD *)v4 + 3) = dword_1403E27D0;
      if ( !ExAcquireRundownProtection(&stru_1403E2788) )
        goto LABEL_49;
      Alignment_low = LOWORD(stru_1403E27C0.Alignment);
      if ( LOWORD(stru_1403E27C0.Alignment) >= (unsigned int)dword_1403E27A8 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)&xmmword_1403CD490, 0x64u);
        v20 = 0;
      }
      else
      {
        RtlpInterlockedPushEntrySList(&stru_1403E27C0, (PSLIST_ENTRY)v4);
        if ( Alignment_low >= 8 && !Event.Header.SignalState )
          KeSetEvent(&Event, 0, 0);
        v20 = 1;
      }
      ExReleaseRundownProtection(&stru_1403E2788);
      if ( !v20 )
LABEL_49:
        MmFreeAccessPfnBuffer(v4);
      v46 = Pa;
      v4 = Pa;
      if ( Pa )
      {
        v2 = v48;
        v3 = 0;
        v6 = v47;
        continue;
      }
    }
    else
    {
LABEL_76:
      ExFreePoolWithTag(v4, 0);
      v42 = Pa;
      for ( i = Pa; v42; i = v42 )
      {
        v42 = (_QWORD *)*v42;
        ExFreePoolWithTag(i, 0);
      }
    }
    break;
  }
}
