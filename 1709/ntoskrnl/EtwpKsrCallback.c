/*
 * XREFs of EtwpKsrCallback @ 0x140752AF0
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     ExBlockOnAddressPushLock @ 0x1400BD710 (ExBlockOnAddressPushLock.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404921A4 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x14049227C (EtwpReleaseLoggerContext.c)
 *     EtwpCancelMemoryPreservation @ 0x140752988 (EtwpCancelMemoryPreservation.c)
 *     EtwpPreserveLogger @ 0x140752C2C (EtwpPreserveLogger.c)
 */

void __fastcall EtwpKsrCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  int v3; // ebp
  __int64 v4; // rax
  unsigned int i; // esi
  __int64 v6; // rax
  unsigned int *v7; // rdi
  __int64 v8; // r14
  char v9; // r15
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF

  v3 = (int)Argument1;
  if ( (unsigned int)Argument1 <= 1 )
  {
    v4 = EtwpHostSiloState;
    EtwpKsrPrepared = (_DWORD)Argument1 == 0;
    for ( i = 0; i < *(_DWORD *)(EtwpHostSiloState + 8); ++i )
    {
      v6 = EtwpAcquireLoggerContextByLoggerId(v4, i, 0);
      v7 = (unsigned int *)v6;
      if ( v6 )
      {
        v8 = *(_QWORD *)(v6 + 2248);
        v9 = 0;
        if ( v8 )
        {
          v9 = 1;
          KeWaitForSingleObject((PVOID)(v6 + 648), Executive, 0, 0, 0LL);
          if ( v3 )
          {
            EtwpCancelMemoryPreservation((__int64)v7);
          }
          else if ( *(_BYTE *)(v8 + 32) )
          {
            EtwpPreserveLogger(v7);
          }
        }
        EtwpReleaseLoggerContext(v7, v9);
      }
      v4 = EtwpHostSiloState;
    }
  }
  else if ( (_DWORD)Argument1 == 2 )
  {
    while ( 1 )
    {
      LOBYTE(v10) = EtwpLoggerSaveInProgress;
      if ( !EtwpLoggerSaveInProgress )
        break;
      ExBlockOnAddressPushLock(&EtwpLoggerSaveEvent, &EtwpLoggerSaveInProgress, &v10, 1uLL, 0LL);
    }
  }
}
