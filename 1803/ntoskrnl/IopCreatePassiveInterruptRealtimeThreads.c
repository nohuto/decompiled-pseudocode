/*
 * XREFs of IopCreatePassiveInterruptRealtimeThreads @ 0x14064CB78
 * Callers:
 *     IopInitializePassiveInterruptServices @ 0x1408C314C (IopInitializePassiveInterruptServices.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x1400402B0 (KeSetActualBasePriorityThread.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     PsCreateSystemThreadEx @ 0x14052AC40 (PsCreateSystemThreadEx.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall IopCreatePassiveInterruptRealtimeThreads(void *a1, void *a2)
{
  int v2; // edi
  __int64 result; // rax
  NTSTATUS v4; // ebx
  __int128 v5; // [rsp+50h] [rbp-38h] BYREF
  __int64 v6; // [rsp+60h] [rbp-28h]
  int v7; // [rsp+68h] [rbp-20h]
  __int128 v8; // [rsp+70h] [rbp-18h]
  PVOID Object; // [rsp+90h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp+10h] BYREF

  Handle = a2;
  Object = a1;
  *((_QWORD *)&v5 + 1) = 0LL;
  v2 = 0;
  v6 = 0LL;
  LODWORD(v5) = 48;
  v7 = 512;
  v8 = 0LL;
  if ( !PassiveInterruptRealtimeWorkerCount )
    return 0LL;
  while ( 1 )
  {
    result = PsCreateSystemThreadEx(
               (__int64)&Handle,
               0x1FFFFF,
               &v5,
               0LL,
               0LL,
               (__int64)IopPassiveInterruptRealtimeWorker,
               (__int64)&PassiveInterruptRealtimeWorkQueue,
               0LL,
               0LL);
    if ( (int)result < 0 )
      break;
    v4 = ObReferenceObjectByHandle(Handle, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
    ZwClose(Handle);
    if ( v4 >= 0 )
    {
      KeSetActualBasePriorityThread((__int64)Object, (unsigned __int8)PassiveInterruptRealtimeWorkerPriority);
      ObfDereferenceObject(Object);
    }
    if ( ++v2 >= (unsigned int)(unsigned __int8)PassiveInterruptRealtimeWorkerCount )
      return 0LL;
  }
  return result;
}
