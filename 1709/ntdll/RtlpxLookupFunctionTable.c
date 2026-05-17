/*
 * XREFs of RtlpxLookupFunctionTable @ 0x180028A70
 * Callers:
 *     RtlQueueWorkItem @ 0x1800113D0 (RtlQueueWorkItem.c)
 *     RtlGuardCheckLongJumpTarget @ 0x180020260 (RtlGuardCheckLongJumpTarget.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x180025B60 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlLookupFunctionEntry @ 0x180027C80 (RtlLookupFunctionEntry.c)
 *     LdrpSnapModule @ 0x180027FC0 (LdrpSnapModule.c)
 *     LdrpResolveProcedureAddress @ 0x180029014 (LdrpResolveProcedureAddress.c)
 *     RtlQueryInformationActivationContext @ 0x180037100 (RtlQueryInformationActivationContext.c)
 *     EtwpProviderArrivalCallback @ 0x180067534 (EtwpProviderArrivalCallback.c)
 *     RtlGuardCheckImageBase @ 0x18007981C (RtlGuardCheckImageBase.c)
 *     RtlPcToFileHeader @ 0x18007C500 (RtlPcToFileHeader.c)
 *     RtlCreateInvertedFunctionTableCacheEntry @ 0x1800E0090 (RtlCreateInvertedFunctionTableCacheEntry.c)
 *     RtlLookupFunctionTable @ 0x1800E0280 (RtlLookupFunctionTable.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180002AF0 (RtlRaiseStatus.c)
 *     RtlAddressInSectionTable @ 0x180020840 (RtlAddressInSectionTable.c)
 *     RtlImageNtHeaderEx @ 0x180028970 (RtlImageNtHeaderEx.c)
 *     RtlpImageDirectoryEntryToData32 @ 0x18002993C (RtlpImageDirectoryEntryToData32.c)
 *     RtlpWaitCouldDeadlock @ 0x18004A984 (RtlpWaitCouldDeadlock.c)
 *     RtlBackoff @ 0x1800697A0 (RtlBackoff.c)
 *     RtlpOptimizeSRWLockList @ 0x180075EC0 (RtlpOptimizeSRWLockList.c)
 *     RtlpWakeSRWLock @ 0x180075F18 (RtlpWakeSRWLock.c)
 *     ZwQueryVirtualMemory @ 0x1800A0520 (ZwQueryVirtualMemory.c)
 *     ZwTerminateProcess @ 0x1800A0640 (ZwTerminateProcess.c)
 *     NtWaitForAlertByThreadId @ 0x1800A3970 (NtWaitForAlertByThreadId.c)
 */

unsigned __int64 __fastcall RtlpxLookupFunctionTable(unsigned __int64 a1, __int64 a2)
{
  bool v3; // zf
  unsigned __int64 v5; // rsi
  signed __int64 v6; // rbx
  int v7; // r10d
  int v8; // r9d
  int v9; // eax
  char *v10; // r8
  unsigned __int64 v11; // rdx
  signed __int64 v12; // rax
  unsigned __int64 v14; // rcx
  bool v15; // bl
  unsigned __int64 v16; // r14
  int v17; // eax
  __int64 v18; // rcx
  __int16 v19; // ax
  __int64 v20; // rdx
  signed __int64 v21; // rcx
  signed __int64 v22; // r8
  signed __int64 v23; // rtt
  __int64 v24; // r8
  signed __int64 v25; // rcx
  __int64 v26; // rdx
  signed __int64 v27; // rdx
  signed __int64 v28; // rtt
  bool v29; // cl
  char *v30; // rdx
  signed __int64 v31; // rax
  int j; // ecx
  _QWORD *v34; // rcx
  __int64 i; // rdx
  unsigned __int64 v36; // [rsp+38h] [rbp-48h] BYREF
  int v37; // [rsp+40h] [rbp-40h]
  int v38; // [rsp+48h] [rbp-38h]
  unsigned __int64 v39; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int64 *v40; // [rsp+58h] [rbp-28h]
  __int64 v41; // [rsp+60h] [rbp-20h]
  void *UniqueThread; // [rsp+68h] [rbp-18h]
  int v43; // [rsp+70h] [rbp-10h]
  signed __int32 v44[3]; // [rsp+74h] [rbp-Ch] BYREF
  int v45; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v46; // [rsp+D0h] [rbp+50h] BYREF
  unsigned __int64 v47; // [rsp+D8h] [rbp+58h] BYREF

  v3 = LdrInitState == 3;
  v5 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  if ( v3 )
  {
    v45 = 0;
    v6 = _InterlockedCompareExchange64(&LdrpInvertedFunctionTableSRWLock, 17LL, 0LL);
    if ( !v6 )
    {
LABEL_3:
      if ( LdrpInvertedFunctionTable[0] != 1 )
      {
        v7 = 1;
        v8 = LdrpInvertedFunctionTable[0] - 1;
        while ( v8 >= v7 )
        {
          v9 = (v8 + v7) >> 1;
          v10 = (char *)&xmmword_18016F4D0 + 24 * v9;
          v11 = *((_QWORD *)v10 + 1);
          if ( a1 < v11 )
          {
            if ( !v9 )
              break;
            v8 = v9 - 1;
          }
          else
          {
            if ( a1 < v11 + *((unsigned int *)v10 + 4) )
            {
              *(_OWORD *)a2 = *(_OWORD *)v10;
              *(_QWORD *)(a2 + 16) = *((_QWORD *)v10 + 2);
              v5 = *(_QWORD *)a2;
              break;
            }
            v7 = v9 + 1;
          }
        }
      }
      v12 = _InterlockedCompareExchange64(&LdrpInvertedFunctionTableSRWLock, 0LL, 17LL);
      if ( v12 != 17 )
      {
        if ( (v12 & 1) == 0 )
          RtlRaiseStatus(-1073741212);
        if ( (v12 & 2) != 0 )
        {
LABEL_46:
          if ( (v12 & 8) != 0 )
          {
            v34 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0uLL);
            for ( i = *(_QWORD *)((v12 & 0xFFFFFFFFFFFFFFF0uLL) + 8); !i; i = v34[1] )
              v34 = (_QWORD *)*v34;
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(i + 32), 0xFFFFFFFF) > 1 )
              goto LABEL_14;
            v24 = -9LL;
          }
          else
          {
            v24 = -1LL;
          }
          do
          {
            v25 = v12 & 6;
            if ( v25 == 2 )
              v26 = v24 + 4;
            else
              v26 = v24;
            v27 = v12 + v26;
            v28 = v12;
            v12 = _InterlockedCompareExchange64(&LdrpInvertedFunctionTableSRWLock, v27, v12);
          }
          while ( v28 != v12 );
          if ( v25 == 2 )
            RtlpWakeSRWLock(&LdrpInvertedFunctionTableSRWLock, v27, 0LL);
          goto LABEL_14;
        }
        while ( 1 )
        {
          v22 = 0LL;
          if ( (v12 & 0xFFFFFFFFFFFFFFF0uLL) != 0x10 )
            v22 = v12 - 16;
          v23 = v12;
          v12 = _InterlockedCompareExchange64(&LdrpInvertedFunctionTableSRWLock, v22, v12);
          if ( v23 == v12 )
            break;
          if ( (v12 & 2) != 0 )
            goto LABEL_46;
        }
      }
LABEL_14:
      if ( v5 || !byte_18016F4CC )
        return v5;
      goto LABEL_16;
    }
    while ( 1 )
    {
      if ( (v6 & 1) != 0 && ((v6 & 2) != 0 || (v6 & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
      {
        if ( (unsigned __int8)RtlpWaitCouldDeadlock() )
          ZwTerminateProcess(-1LL, 3221225547LL);
        UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
        v29 = 0;
        v44[0] = 2;
        v41 = 0LL;
        if ( (v6 & 2) != 0 )
        {
          v40 = 0LL;
          v43 = -1;
          v39 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
          v30 = (char *)((unsigned __int64)&v39 | v6 & 8 | 7);
          v29 = (v6 & 4) == 0;
        }
        else
        {
          v43 = -2;
          v40 = &v39;
          v30 = (char *)&v39 + 3;
        }
        v31 = _InterlockedCompareExchange64(&LdrpInvertedFunctionTableSRWLock, (signed __int64)v30, v6);
        v3 = v6 == v31;
        v6 = v31;
        if ( !v3 )
          goto LABEL_60;
        if ( v29 )
          RtlpOptimizeSRWLockList(&LdrpInvertedFunctionTableSRWLock);
        if ( MEMORY[0x7FFE036A] > 1u )
        {
          for ( j = SRWLockSpinCount; j; --j )
          {
            if ( (v44[0] & 2) == 0 )
              break;
            _mm_pause();
          }
        }
        if ( _interlockedbittestandreset(v44, 1u) )
        {
          do
            NtWaitForAlertByThreadId(&LdrpInvertedFunctionTableSRWLock, 0LL);
          while ( (v44[0] & 4) == 0 );
        }
      }
      else
      {
        v21 = (v6 | 1) + 16;
        if ( (v6 & 2) != 0 )
          v21 = v6 | 1;
        if ( v6 == _InterlockedCompareExchange64(&LdrpInvertedFunctionTableSRWLock, v21, v6) )
          goto LABEL_3;
LABEL_60:
        RtlBackoff(&v45);
        _m_prefetchw(&LdrpInvertedFunctionTableSRWLock);
        v6 = LdrpInvertedFunctionTableSRWLock;
      }
    }
  }
LABEL_16:
  if ( (int)ZwQueryVirtualMemory(-1LL, a1, 6LL, &v36, 24LL, 0LL) < 0
    || (v14 = v36) == 0
    || (v38 & 2) != 0
    || (v38 & 1) != 0
    || a1 < v36 )
  {
    v14 = 0LL;
  }
  else
  {
    *(_DWORD *)(a2 + 16) = v37;
  }
  *(_QWORD *)(a2 + 8) = v14;
  if ( v14 )
  {
    v46 = 0LL;
    v15 = 1;
    v47 = 0LL;
    v16 = v14;
    v5 = 0LL;
    if ( (v14 & 3) != 0 )
    {
      v16 = v14 & 0xFFFFFFFFFFFFFFFCuLL;
      v15 = (v14 & 1) == 0;
    }
    v17 = RtlImageNtHeaderEx(1, v16, 0LL, &v46);
    v18 = v46;
    if ( v46 )
    {
      v19 = *(_WORD *)(v46 + 24);
      if ( v19 != 267 )
      {
        if ( v19 == 523 && *(_DWORD *)(v46 + 132) > 3u )
        {
          v20 = *(unsigned int *)(v46 + 160);
          if ( (_DWORD)v20 )
          {
            *(_DWORD *)(a2 + 20) = *(_DWORD *)(v46 + 164);
            if ( v15 || (unsigned int)v20 < *(_DWORD *)(v18 + 84) )
            {
              v5 = v16 + v20;
LABEL_32:
              *(_QWORD *)a2 = v5;
              return v5;
            }
            v5 = RtlAddressInSectionTable();
            if ( v5 )
              goto LABEL_32;
          }
        }
LABEL_71:
        v5 = 0LL;
        goto LABEL_32;
      }
      v17 = RtlpImageDirectoryEntryToData32(v16, v15, 3, (int)a2 + 20, v46, (__int64)&v47);
      v5 = v47;
    }
    if ( v17 >= 0 )
      goto LABEL_32;
    goto LABEL_71;
  }
  return v5;
}
