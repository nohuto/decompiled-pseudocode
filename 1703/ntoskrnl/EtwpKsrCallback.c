/*
 * XREFs of EtwpKsrCallback @ 0x140713990
 * Callers:
 *     <none>
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x14006BD30 (ExBlockOnAddressPushLock.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     EtwpReleaseLoggerContext @ 0x1404F2B5C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404F2C44 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpCancelMemoryPreservation @ 0x140713838 (EtwpCancelMemoryPreservation.c)
 *     EtwpPreserveLogger @ 0x140713AB0 (EtwpPreserveLogger.c)
 */

void __fastcall EtwpKsrCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  int v3; // ebp
  unsigned int i; // esi
  unsigned int *v5; // rax
  unsigned int *v6; // rdi
  __int64 v7; // r14
  char v8; // r15
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  v3 = (int)Argument1;
  if ( (unsigned int)Argument1 <= 1 )
  {
    EtwpKsrPrepared = (_DWORD)Argument1 == 0;
    for ( i = 0; i < 0x40; ++i )
    {
      v5 = EtwpAcquireLoggerContextByLoggerId(EtwpHostSiloState, i, 0);
      v6 = v5;
      if ( v5 )
      {
        v7 = *((_QWORD *)v5 + 117);
        v8 = 0;
        if ( v7 )
        {
          v8 = 1;
          KeWaitForSingleObject(v5 + 158, Executive, 0, 0, 0LL);
          if ( v3 )
          {
            EtwpCancelMemoryPreservation((__int64)v6);
          }
          else if ( *(_BYTE *)(v7 + 32) )
          {
            EtwpPreserveLogger(v6);
          }
        }
        EtwpReleaseLoggerContext(v6, v8);
      }
    }
  }
  else if ( (_DWORD)Argument1 == 2 )
  {
    while ( 1 )
    {
      LOBYTE(v9) = EtwpLoggerSaveInProgress;
      if ( !EtwpLoggerSaveInProgress )
        break;
      ExBlockOnAddressPushLock((__int64)&EtwpLoggerSaveEvent, &EtwpLoggerSaveInProgress, &v9, 1uLL, 0LL);
    }
  }
}
