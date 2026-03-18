/*
 * XREFs of EtwpKsrCallback @ 0x1407B9880
 * Callers:
 *     <none>
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x1400A1CF0 (ExBlockOnAddressPushLock.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     EtwpReleaseLoggerContext @ 0x140590D4C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140590D94 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpCancelMemoryPreservation @ 0x1407B9724 (EtwpCancelMemoryPreservation.c)
 *     EtwpPreserveLogger @ 0x1407B99CC (EtwpPreserveLogger.c)
 */

void __fastcall EtwpKsrCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  int v3; // edi
  bool v4; // al
  unsigned int v5; // ebp
  __int64 i; // rax
  unsigned int *v7; // rax
  unsigned int *v8; // rsi
  __int64 v9; // r14
  char v10; // r15
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  v3 = (int)Argument1;
  if ( (unsigned int)Argument1 > 1 )
  {
    if ( (_DWORD)Argument1 == 2 )
    {
      while ( 1 )
      {
        LOBYTE(v11) = EtwpLoggerSaveInProgress;
        if ( !EtwpLoggerSaveInProgress )
          break;
        ExBlockOnAddressPushLock((__int64)&EtwpLoggerSaveEvent, &EtwpLoggerSaveInProgress, &v11, 1uLL, 0LL);
      }
      return;
    }
    if ( (unsigned int)Argument1 > 4 )
      return;
  }
  v4 = !(_DWORD)Argument1 || (_DWORD)Argument1 == 3;
  EtwpKsrPrepared = v4;
  v5 = 0;
  for ( i = EtwpHostSiloState; v5 < *(_DWORD *)(EtwpHostSiloState + 16); ++v5 )
  {
    v7 = EtwpAcquireLoggerContextByLoggerId(i, v5, 0);
    v8 = v7;
    if ( v7 )
    {
      v9 = *((_QWORD *)v7 + 138);
      v10 = 0;
      if ( v9 )
      {
        v10 = 1;
        KeWaitForSingleObject(v7 + 162, Executive, 0, 0, 0LL);
        if ( !v3 || v3 == 3 )
        {
          if ( *(_BYTE *)(v9 + 32) )
            EtwpPreserveLogger(v8);
        }
        else
        {
          EtwpCancelMemoryPreservation((__int64)v8);
        }
      }
      EtwpReleaseLoggerContext(v8, v10);
    }
    i = EtwpHostSiloState;
  }
}
