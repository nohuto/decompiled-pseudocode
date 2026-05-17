/*
 * XREFs of RtlCheckHeldCriticalSections @ 0x1800815EC
 * Callers:
 *     RtlCheckForOrphanedCriticalSections @ 0x1800815D0 (RtlCheckForOrphanedCriticalSections.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x1800467D0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180046FA0 (RtlAcquireSRWLockShared.c)
 *     RtlpGetStackTraceAddressEx @ 0x180061570 (RtlpGetStackTraceAddressEx.c)
 *     ZwQueryInformationThread @ 0x1800A0560 (ZwQueryInformationThread.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     RtlApplicationVerifierStop @ 0x1800DC1B0 (RtlApplicationVerifierStop.c)
 */

struct _PEB *__fastcall RtlCheckHeldCriticalSections(__int64 a1, _QWORD *a2)
{
  struct _PEB *result; // rax
  char *v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  void *UniqueThread; // r12
  _UNKNOWN **i; // r14
  _UNKNOWN **v10; // rsi
  __int64 v11; // r15
  _QWORD *j; // rax
  __int64 v13; // rbx
  __int64 v14; // [rsp+30h] [rbp-108h]
  __int64 StackTraceAddress; // [rsp+40h] [rbp-F8h]
  int *v16; // [rsp+78h] [rbp-C0h] BYREF
  int v17; // [rsp+80h] [rbp-B8h]
  int v18; // [rsp+84h] [rbp-B4h]
  _BYTE v19[40]; // [rsp+88h] [rbp-B0h] BYREF
  _BYTE v20[48]; // [rsp+B0h] [rbp-88h] BYREF
  _BYTE v21[24]; // [rsp+E0h] [rbp-58h] BYREF
  void *v22; // [rsp+F8h] [rbp-40h]
  int v23; // [rsp+150h] [rbp+18h] BYREF
  void *v24; // [rsp+158h] [rbp+20h]

  memset(&v20[2], 0, 0x2EuLL);
  *(_QWORD *)v19 = 0LL;
  result = (struct _PEB *)memset(&v19[8], 0, 0x20uLL);
  v23 = 0;
  if ( RtlpCriticalSectionVerifier )
  {
    if ( !RtlpCsVerifyDoNotBreak )
    {
      result = NtCurrentPeb();
      if ( !result->Ldr->ShutdownInProgress )
      {
        if ( a1 == -2 )
        {
          result = (struct _PEB *)NtCurrentTeb();
          if ( !HIDWORD(result->ApiSetMap) )
            return result;
          UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
        }
        else
        {
          v16 = &v23;
          v18 = 4;
          v17 = 108;
          result = (struct _PEB *)ZwQueryInformationThread(a1, 26LL, &v16);
          if ( (int)result < 0 )
            return result;
          if ( !v23 )
            return result;
          result = (struct _PEB *)ZwQueryInformationThread(a1, 0LL, v21);
          if ( (int)result < 0 )
            return result;
          UniqueThread = v22;
        }
        v24 = UniqueThread;
        RtlAcquireSRWLockShared(&RtlCriticalSectionLock, v5, v6, v7);
        for ( i = (_UNKNOWN **)RtlCriticalSectionList; i != &RtlCriticalSectionList; i = (_UNKNOWN **)*i )
        {
          v10 = i - 2;
          v11 = (__int64)*(i - 1);
          if ( a2 )
          {
            for ( j = a2; *j; ++j )
            {
              if ( v11 == *j )
              {
                if ( *j )
                  goto LABEL_24;
                break;
              }
            }
          }
          *(_OWORD *)v19 = *(_OWORD *)v11;
          *(_OWORD *)&v19[16] = *(_OWORD *)(v11 + 16);
          *(_QWORD *)&v19[32] = *(_QWORD *)(v11 + 32);
          if ( *(_UNKNOWN ***)v19 == v10 )
          {
            if ( *(void **)&v19[16] == UniqueThread )
            {
              StackTraceAddress = RtlpGetStackTraceAddressEx(*((_WORD *)v10 + 1), *((_WORD *)v10 + 22));
              RtlApplicationVerifierStop(
                512,
                (unsigned int)"Thread is in a state in which it cannot own a critical section",
                (_DWORD)UniqueThread,
                (unsigned int)"Thread identifier",
                v11,
                (__int64)"Critical section address",
                (__int64)(i - 2),
                (__int64)"Critical section debug info address",
                StackTraceAddress,
                (__int64)"Initialization stack trace. Use dps to dump it if non-NULL.");
            }
          }
          else
          {
            *(_OWORD *)v20 = **(_OWORD **)v19;
            *(_OWORD *)&v20[16] = *(_OWORD *)(*(_QWORD *)v19 + 16LL);
            *(_OWORD *)&v20[32] = *(_OWORD *)(*(_QWORD *)v19 + 32LL);
            v13 = RtlpGetStackTraceAddressEx(*(unsigned __int16 *)&v20[2], *(unsigned __int16 *)&v20[44]);
            v14 = RtlpGetStackTraceAddressEx(*((_WORD *)v10 + 1), *((_WORD *)v10 + 22));
            RtlApplicationVerifierStop(
              515,
              (unsigned int)"double initialized or corrupted critical section",
              v11,
              (unsigned int)"Critical section address.",
              (__int64)(i - 2),
              (__int64)"Address of the debug info found in the active list.",
              v14,
              (__int64)"First initialization stack trace. Use dps to dump it if non-NULL.",
              v13,
              (__int64)"Second initialization stack trace. Use dps to dump it if non-NULL.");
          }
LABEL_24:
          ;
        }
        return (struct _PEB *)RtlReleaseSRWLockShared(&RtlCriticalSectionLock);
      }
    }
  }
  return result;
}
