/*
 * XREFs of PopUmpoSendPowerMessage @ 0x1400B0618
 * Callers:
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x1400AFF9C (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x14024A120 (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 *     PopUmpoSendPowerRequestOverrideCleanup @ 0x1404E6F3C (PopUmpoSendPowerRequestOverrideCleanup.c)
 *     PopEvaluateGlobalUserStatus @ 0x1405A000C (PopEvaluateGlobalUserStatus.c)
 *     PopUserPresencePredictionModeCallback @ 0x1405F1380 (PopUserPresencePredictionModeCallback.c)
 *     PopUmpoSendLegacyEvent @ 0x1407082D8 (PopUmpoSendLegacyEvent.c)
 *     PopMonitorProcessBrightnessAction @ 0x140708344 (PopMonitorProcessBrightnessAction.c)
 * Callees:
 *     AlpcGetMessageAttribute @ 0x1400AEC50 (AlpcGetMessageAttribute.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwAlpcSendWaitReceivePort @ 0x14017E9E0 (ZwAlpcSendWaitReceivePort.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PopUmpoProcessMessage @ 0x1404DF2D0 (PopUmpoProcessMessage.c)
 *     PopReleaseUmpoPushLock @ 0x1404E7834 (PopReleaseUmpoPushLock.c)
 *     PopAcquireUmpoPushLock @ 0x1404E7858 (PopAcquireUmpoPushLock.c)
 */

__int64 __fastcall PopUmpoSendPowerMessage(void *Src, size_t Size, char a3)
{
  HANDLE v6; // rdi
  int v7; // eax
  int v8; // ebx
  char *MessageAttribute; // rax
  _QWORD v11[2]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v12[40]; // [rsp+50h] [rbp-B0h] BYREF
  _WORD v13[256]; // [rsp+F0h] [rbp-10h] BYREF

  PopAcquireUmpoPushLock(0LL);
  v6 = PopAlpcClientPort;
  if ( PopAlpcClientPort )
  {
    if ( Size > 0x1D8 )
    {
      v8 = -2147483643;
    }
    else
    {
      memset(v13, 0, sizeof(v13));
      v13[0] = Size;
      v13[1] = Size + 40;
      memmove(&v13[20], Src, Size);
      if ( a3 )
      {
        memset(v12, 0, sizeof(v12));
        v11[0] = 512LL;
        v8 = ((__int64 (__fastcall *)(HANDLE, __int64, _WORD *, _QWORD, _WORD *, _QWORD *, _DWORD *, _QWORD))ZwAlpcSendWaitReceivePort)(
               v6,
               0x20000LL,
               v13,
               0LL,
               v13,
               v11,
               v12,
               0LL);
        if ( v8 < 0 )
          goto LABEL_6;
        MessageAttribute = AlpcGetMessageAttribute(v12, 0x20000000);
        v7 = PopUmpoProcessMessage(v13, MessageAttribute);
      }
      else
      {
        v7 = ZwAlpcSendWaitReceivePort(v6, 0x10000LL, v13, 0LL, 0LL, 0LL, 0LL, 0LL, v11[0], v11[1]);
      }
      v8 = v7;
    }
  }
  else
  {
    v8 = -1073741758;
  }
LABEL_6:
  PopReleaseUmpoPushLock();
  return (unsigned int)v8;
}
