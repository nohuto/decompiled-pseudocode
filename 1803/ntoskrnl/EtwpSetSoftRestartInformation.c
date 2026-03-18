/*
 * XREFs of EtwpSetSoftRestartInformation @ 0x1407BA2B0
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x1407A9CB0 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x14006E2C0 (PsIsCurrentThreadInServerSilo.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     EtwpCaptureString @ 0x14058BA4C (EtwpCaptureString.c)
 *     EtwpCheckLoggerControlAccess @ 0x14058F1B4 (EtwpCheckLoggerControlAccess.c)
 *     EtwpReleaseLoggerContext @ 0x140590D4C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140590D94 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpCancelMemoryPreservation @ 0x1407B9724 (EtwpCancelMemoryPreservation.c)
 *     EtwpPreserveLogger @ 0x1407B99CC (EtwpPreserveLogger.c)
 */

__int64 __fastcall EtwpSetSoftRestartInformation(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned int v5; // edx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v7; // rax
  __int64 v8; // rsi
  int v9; // ebx
  UNICODE_STRING *v10; // rdi
  UNICODE_STRING *PoolWithTag; // rax
  char v12; // [rsp+20h] [rbp-48h]
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int16 v14[4]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v15; // [rsp+40h] [rbp-28h]

  if ( !EtwpKsrCallbackObject || PsIsCurrentThreadInServerSilo() )
    return 3221225659LL;
  if ( a2 < 0x18 )
    return 3221225485LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v15 = a1 + 18;
  v14[0] = a2 - 18;
  v14[1] = a2 - 18;
  if ( (_WORD)a2 == 18 || (result = EtwpCaptureString(v14, &DestinationString), (int)result >= 0) )
  {
    v12 = *(_BYTE *)(a1 + 16);
    v5 = (unsigned __int16)*(_QWORD *)(a1 + 8);
    if ( v5 == 0xFFFF )
      v5 = *(unsigned __int8 *)(EtwpHostSiloState + 4172);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v7 = EtwpAcquireLoggerContextByLoggerId(EtwpHostSiloState, v5, 1);
    v8 = (__int64)v7;
    if ( !v7 )
    {
      v9 = -1073741162;
      goto LABEL_33;
    }
    v9 = EtwpCheckLoggerControlAccess(0x80u, (__int64)v7);
    if ( v9 >= 0 )
    {
      v10 = *(UNICODE_STRING **)(v8 + 1104);
      if ( !v12 )
      {
        if ( v10 && LOBYTE(v10[2].Length) )
        {
          EtwpCancelMemoryPreservation(v8);
          RtlFreeAnsiString(v10 + 1);
          LOBYTE(v10[2].Length) = 0;
          v9 = 0;
        }
        else
        {
          v9 = -1073741054;
        }
        goto LABEL_33;
      }
      if ( !v10 )
      {
        PoolWithTag = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x4B777445u);
        v10 = PoolWithTag;
        if ( !PoolWithTag )
        {
          v9 = -1073741801;
          goto LABEL_33;
        }
        memset(PoolWithTag, 0, 0x28uLL);
        *(_QWORD *)(v8 + 1104) = v10;
      }
      if ( LOBYTE(v10[2].Length) )
      {
        v9 = -1073741053;
      }
      else if ( DestinationString.Length )
      {
        if ( (*(_DWORD *)(v8 + 12) & 0x400) == 0 || *(_DWORD *)(v8 + 316) == 1 || (*(_DWORD *)(v8 + 4) & 0xFFF) != 0 )
        {
          v9 = -1073741637;
        }
        else
        {
          v10[1] = DestinationString;
          DestinationString.Buffer = 0LL;
          LOBYTE(v10[2].Length) = 1;
          v9 = 0;
          if ( EtwpKsrPrepared )
          {
            v9 = EtwpPreserveLogger(v8);
            if ( v9 < 0 )
            {
              LOBYTE(v10[2].Length) = 0;
              RtlFreeAnsiString(v10 + 1);
            }
          }
        }
      }
      else
      {
        v9 = -1073741672;
      }
    }
LABEL_33:
    if ( v8 )
      EtwpReleaseLoggerContext((unsigned int *)v8, 1);
    RtlFreeAnsiString(&DestinationString);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return (unsigned int)v9;
  }
  return result;
}
