/*
 * XREFs of IopCreatePassiveInterruptRealtimeThreads @ 0x1405E6884
 * Callers:
 *     IopInitializePassiveInterruptServices @ 0x140852230 (IopInitializePassiveInterruptServices.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     KeSetActualBasePriorityThread @ 0x1400A7A70 (KeSetActualBasePriorityThread.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     PsCreateSystemThreadEx @ 0x1405549A0 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall IopCreatePassiveInterruptRealtimeThreads(void *a1, void *a2)
{
  int v2; // edi
  __int64 result; // rax
  NTSTATUS v4; // ebx
  _SINGLE_LIST_ENTRY *v5; // r8
  __int64 v6; // r9
  __int128 v7; // [rsp+50h] [rbp-38h] BYREF
  __int64 v8; // [rsp+60h] [rbp-28h]
  int v9; // [rsp+68h] [rbp-20h]
  __int128 v10; // [rsp+70h] [rbp-18h]
  PVOID Object; // [rsp+90h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp+10h] BYREF

  Handle = a2;
  Object = a1;
  *((_QWORD *)&v7 + 1) = 0LL;
  v2 = 0;
  v8 = 0LL;
  LODWORD(v7) = 48;
  v9 = 512;
  v10 = 0LL;
  if ( !PassiveInterruptRealtimeWorkerCount )
    return 0LL;
  while ( 1 )
  {
    result = PsCreateSystemThreadEx(
               (__int64)&Handle,
               0x1FFFFF,
               &v7,
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
      KeSetActualBasePriorityThread((__int64)Object, (unsigned __int8)PassiveInterruptRealtimeWorkerPriority, v5, v6);
      ObfDereferenceObject(Object);
    }
    if ( ++v2 >= (unsigned int)(unsigned __int8)PassiveInterruptRealtimeWorkerCount )
      return 0LL;
  }
  return result;
}
