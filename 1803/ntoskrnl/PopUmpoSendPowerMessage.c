/*
 * XREFs of PopUmpoSendPowerMessage @ 0x1400760DC
 * Callers:
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x140075AE4 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x140155F44 (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 *     PopUmpoSendPowerRequestOverrideCleanup @ 0x1405248D4 (PopUmpoSendPowerRequestOverrideCleanup.c)
 *     PopEvaluateGlobalUserStatus @ 0x140526838 (PopEvaluateGlobalUserStatus.c)
 *     PopUmpoSendLegacyEvent @ 0x1405EB558 (PopUmpoSendLegacyEvent.c)
 *     PopUserPresencePredictionModeCallback @ 0x140654470 (PopUserPresencePredictionModeCallback.c)
 *     PopMonitorProcessBrightnessAction @ 0x14076C414 (PopMonitorProcessBrightnessAction.c)
 * Callees:
 *     AlpcGetMessageAttribute @ 0x140072FA0 (AlpcGetMessageAttribute.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1401A8600 (ZwAlpcSendWaitReceivePort.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PopUmpoProcessMessage @ 0x140518A1C (PopUmpoProcessMessage.c)
 *     PopReleaseUmpoPushLock @ 0x14052491C (PopReleaseUmpoPushLock.c)
 *     PopAcquireUmpoPushLock @ 0x140524940 (PopAcquireUmpoPushLock.c)
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
      goto LABEL_6;
    }
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
  else
  {
    v8 = -1073741758;
  }
LABEL_6:
  PopReleaseUmpoPushLock();
  return (unsigned int)v8;
}
