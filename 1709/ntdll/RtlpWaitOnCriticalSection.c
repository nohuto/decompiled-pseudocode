/*
 * XREFs of RtlpWaitOnCriticalSection @ 0x18004A67C
 * Callers:
 *     RtlpEnterCriticalSectionContended @ 0x180047CA0 (RtlpEnterCriticalSectionContended.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180002AF0 (RtlRaiseStatus.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x180009BDC (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlpWaitCouldDeadlock @ 0x18004A984 (RtlpWaitCouldDeadlock.c)
 *     RtlpWaitOnAddressWithTimeout @ 0x18004AA1C (RtlpWaitOnAddressWithTimeout.c)
 *     RtlpWaitOnAddressRemoveWaitBlock @ 0x18004CFD0 (RtlpWaitOnAddressRemoveWaitBlock.c)
 *     DbgPrintEx @ 0x18006C580 (DbgPrintEx.c)
 *     RtlpWaitOnAddressWakeEntireList @ 0x18006F8EC (RtlpWaitOnAddressWakeEntireList.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x18006F920 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     NtWaitForSingleObject @ 0x1800A0140 (NtWaitForSingleObject.c)
 *     ZwTerminateProcess @ 0x1800A0640 (ZwTerminateProcess.c)
 *     LdrpLogEtwEvent @ 0x1800D1E90 (LdrpLogEtwEvent.c)
 *     RtlpDbgPrintCriticalSectionTimeout @ 0x1800E69A8 (RtlpDbgPrintCriticalSectionTimeout.c)
 *     RtlpLogWaitForCriticalSection @ 0x1800E6A44 (RtlpLogWaitForCriticalSection.c)
 *     RtlpPossibleDeadlock @ 0x1800E6BDC (RtlpPossibleDeadlock.c)
 */

int __fastcall RtlpWaitOnCriticalSection(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _TEB *v4; // rax
  unsigned int v6; // r12d
  LARGE_INTEGER *v7; // r14
  void *v8; // rdi
  int v9; // r13d
  __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  struct _TEB *v12; // rcx
  __int64 WaitOnAddressHashTable; // rdi
  __int64 v14; // r8
  signed __int64 j; // rdx
  unsigned __int64 v16; // rcx
  signed __int64 v17; // rax
  struct _PEB *v18; // rax
  signed __int64 v19; // rax
  unsigned __int64 v20; // rcx
  _QWORD *v21; // r9
  _QWORD *v22; // rdx
  char v23; // dl
  signed __int64 v24; // rtt
  __int64 v25; // rcx
  int v26; // edi
  int v27; // r8d
  int v28; // r9d
  __int64 v29; // rcx
  void *i; // [rsp+30h] [rbp-40h]
  struct _TEB *v32; // [rsp+38h] [rbp-38h]
  _QWORD v33[2]; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v34; // [rsp+50h] [rbp-20h]
  __int64 v35; // [rsp+58h] [rbp-18h]
  _QWORD *v36; // [rsp+60h] [rbp-10h]
  int v37; // [rsp+68h] [rbp-8h]
  char v38; // [rsp+B0h] [rbp+40h]
  int v39; // [rsp+C0h] [rbp+50h]

  v4 = NtCurrentTeb();
  v39 = a2;
  v38 = 0;
  v32 = v4;
  v6 = 0;
  if ( (_RTL_CRITICAL_SECTION *)a1 == &LdrpLoaderLock )
  {
    v38 = 1;
    v4->WaitingOnLoaderLock = 1;
  }
  if ( (unsigned __int8)RtlpWaitCouldDeadlock(&LdrpLoaderLock, a2, a3, a4) )
    ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741749);
  v7 = &RtlpTimeout;
  if ( RtlpTimeoutDisable )
    v7 = 0LL;
  if ( !*(_QWORD *)(a1 + 24) )
    RtlpCreateDeferredCriticalSectionEvent(a1);
  if ( *(_QWORD *)a1 == -1LL && (*(_DWORD *)(a1 + 32) & 0x1000000) == 0 )
    RtlpAddDebugInfoToCriticalSection(a1);
  if ( *(_QWORD *)a1 != -1LL )
    ++*(_DWORD *)(*(_QWORD *)a1 + 36LL);
  v8 = *(void **)(a1 + 24);
  v9 = 0;
  for ( i = v8; ; v8 = i )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v10 = (__int64)NtCurrentPeb()->SharedData + 552;
    else
      v10 = 2147353474LL;
    if ( *(_BYTE *)v10 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
      RtlpLogWaitForCriticalSection(a1);
    if ( v8 == (void *)-1LL )
    {
      v11 = a1 + 8;
      while ( 1 )
      {
        v33[0] = a1 + 8;
        v37 = 1;
        v35 = 0LL;
        v34 = 0LL;
        v36 = 0LL;
        v12 = NtCurrentTeb();
        v33[1] = v12->ClientId.UniqueThread;
        WaitOnAddressHashTable = (__int64)v12->ProcessEnvironmentBlock->WaitOnAddressHashTable;
        v14 = (v11 >> 5) & 0x7F;
        for ( j = *(_QWORD *)(WaitOnAddressHashTable + 8 * v14); ; j = v17 )
        {
          v16 = (unsigned __int64)v33 | j & 3;
          v34 = j & 0xFFFFFFFFFFFFFFFCuLL;
          if ( (j & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
          {
            v36 = 0LL;
            v16 |= 2uLL;
          }
          else
          {
            v36 = v33;
          }
          v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(WaitOnAddressHashTable + 8 * v14), v16, j);
          if ( j == v17 )
            break;
        }
        if ( (((unsigned __int8)j ^ (unsigned __int8)v16) & 2) != 0 )
        {
          v19 = *(_QWORD *)(WaitOnAddressHashTable + 8 * v14);
          do
          {
            v20 = v19 & 0xFFFFFFFFFFFFFFFCuLL;
            v21 = (_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !*(_QWORD *)((v19 & 0xFFFFFFFFFFFFFFFCuLL) + 32) )
            {
              do
              {
                v22 = v21;
                v21 = (_QWORD *)v21[2];
                v21[3] = v22;
              }
              while ( !v21[4] );
            }
            *(_QWORD *)(v20 + 32) = v21[4];
            v23 = v19 & 1;
            if ( (v19 & 1) != 0 )
              v20 = 0LL;
            v24 = v19;
            v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(WaitOnAddressHashTable + 8 * v14), v20, v19);
          }
          while ( v24 != v19 );
          if ( v23 )
            RtlpWaitOnAddressWakeEntireList(v19);
        }
        if ( *(_DWORD *)v11 == v39 )
        {
          LODWORD(v18) = RtlpWaitOnAddressWithTimeout(WaitOnAddressHashTable, v33, v7, 0LL);
        }
        else
        {
          RtlpWaitOnAddressRemoveWaitBlock(WaitOnAddressHashTable, v33);
          LODWORD(v18) = 0;
        }
        if ( (_DWORD)v18 == 258 )
          goto LABEL_52;
        v39 = *(_DWORD *)v11;
        if ( (*(_DWORD *)v11 & 2) == 0 )
          goto LABEL_27;
      }
    }
    LODWORD(v18) = NtWaitForSingleObject(v8, 0, v7);
LABEL_27:
    if ( (_DWORD)v18 != 258 )
      break;
LABEL_52:
    RtlpDbgPrintCriticalSectionTimeout(a1, v7, v6++);
    if ( *(_QWORD *)a1 == -1LL )
      v26 = 0;
    else
      v26 = *(_DWORD *)(*(_QWORD *)a1 + 36LL);
    if ( v6 > 2 && (_RTL_CRITICAL_SECTION *)a1 != &LdrpLoaderLock && v26 == v9 )
      RtlpPossibleDeadlock(a1);
    v9 = v26;
    DbgPrintEx(0x65u, 0, "RTL: Re-Waiting\n");
  }
  if ( (int)v18 < 0 )
    RtlRaiseStatus((NTSTATUS)v18);
  if ( v38 )
  {
    v32->WaitingOnLoaderLock = 0;
    LODWORD(v18) = RtlGetCurrentServiceSessionId();
    if ( (_DWORD)v18 )
    {
      v18 = NtCurrentPeb();
      v25 = (__int64)v18->SharedData + 554;
    }
    else
    {
      v25 = 2147353476LL;
    }
    if ( *(_BYTE *)v25 )
    {
      v18 = NtCurrentPeb();
      if ( (v18->TracingFlags & 4) != 0 )
      {
        LODWORD(v18) = RtlGetCurrentServiceSessionId();
        if ( (_DWORD)v18 )
        {
          v18 = NtCurrentPeb();
          v29 = (__int64)v18->SharedData + 555;
        }
        else
        {
          v29 = 2147353477LL;
        }
        if ( (*(_BYTE *)v29 & 0x20) != 0 )
        {
          LOBYTE(v28) = -1;
          LOBYTE(v27) = -1;
          LODWORD(v18) = LdrpLogEtwEvent(5251, -1, v27, v28, 0LL, 0LL);
        }
      }
    }
  }
  return (int)v18;
}
