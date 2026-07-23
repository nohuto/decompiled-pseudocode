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
  NTSTATUS v7; // eax
  NTSTATUS v8; // ebx
  _ALPC_CONTEXT_ATTR *MessageAttribute; // rax
  ULONG_PTR BufferLength[2]; // [rsp+40h] [rbp-C0h] BYREF
  _ALPC_MESSAGE_ATTRIBUTES Buffer[20]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE SendMessageA[512]; // [rsp+F0h] [rbp-10h] BYREF

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
      memset(SendMessageA, 0, sizeof(SendMessageA));
      *(_WORD *)SendMessageA = Size;
      *(_WORD *)&SendMessageA[2] = Size + 40;
      memmove(&SendMessageA[40], Src, Size);
      if ( a3 )
      {
        memset(Buffer, 0, sizeof(Buffer));
        BufferLength[0] = 512LL;
        v8 = ZwAlpcSendWaitReceivePort(
               v6,
               0x20000u,
               (PPORT_MESSAGE)SendMessageA,
               0LL,
               (PPORT_MESSAGE)SendMessageA,
               BufferLength,
               Buffer,
               0LL);
        if ( v8 < 0 )
          goto LABEL_6;
        MessageAttribute = (_ALPC_CONTEXT_ATTR *)AlpcGetMessageAttribute(Buffer, 0x20000000u);
        v7 = PopUmpoProcessMessage((PPORT_MESSAGE)SendMessageA, MessageAttribute);
      }
      else
      {
        v7 = ZwAlpcSendWaitReceivePort(v6, 0x10000u, (PPORT_MESSAGE)SendMessageA, 0LL, 0LL, 0LL, 0LL, 0LL);
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
