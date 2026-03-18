/*
 * XREFs of PspSendReliableJobNotification @ 0x14052DF4C
 * Callers:
 *     PspJobNotificationWorker @ 0x14052DE40 (PspJobNotificationWorker.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x1405325F8 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspEnforceLimitsJobPostCallback @ 0x140536C40 (PspEnforceLimitsJobPostCallback.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     IoSetIoCompletionEx @ 0x140086380 (IoSetIoCompletionEx.c)
 *     EtwTraceJobSendNotification @ 0x1407A7A50 (EtwTraceJobSendNotification.c)
 */

__int64 __fastcall PspSendReliableJobNotification(PVOID Object, unsigned int a2)
{
  __int64 v2; // rdi
  int v4; // r8d
  int v5; // r9d
  __int64 result; // rax
  signed __int32 v7; // ecx
  int v8; // r10d
  int v9; // ett

  v2 = a2;
  v4 = 12;
  if ( a2 == 11 )
  {
    v5 = 0x4000;
  }
  else
  {
    v5 = 0x10000;
    v4 = 8;
    if ( a2 != 12 )
      v5 = 0x8000;
  }
  LODWORD(result) = *((_DWORD *)Object + 326);
  do
  {
    v7 = v5 | v4 | result;
    v8 = result & 8;
    if ( (result & 8) == 0 )
      v7 = v4 | result;
    v9 = result;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)Object + 326, v7, result);
  }
  while ( v9 != (_DWORD)result );
  if ( !v8 )
  {
    ObfReferenceObjectWithTag(Object, 0x624A7350u);
    if ( (PerfGlobalGroupMask & 0x80000) != 0 )
      EtwTraceJobSendNotification(Object, (unsigned int)v2);
    result = IoSetIoCompletionEx(
               *((_QWORD *)Object + 57),
               *((_QWORD *)Object + 58),
               0,
               0,
               v2,
               0,
               *((_QWORD *)Object + 125));
    _InterlockedIncrement64((volatile signed __int64 *)Object + 59);
  }
  return result;
}
