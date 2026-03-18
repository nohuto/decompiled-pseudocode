/*
 * XREFs of DbgkpWerInitializeDeferredLiveDump @ 0x1406831C0
 * Callers:
 *     DbgkpWerCaptureLiveFullDump @ 0x140682BE0 (DbgkpWerCaptureLiveFullDump.c)
 * Callees:
 *     DbgPrintEx @ 0x1400680A0 (DbgPrintEx.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwCreateTimer @ 0x14017F680 (ZwCreateTimer.c)
 *     DbgkpWerAllocateNonpagedPool @ 0x1401E2720 (DbgkpWerAllocateNonpagedPool.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall DbgkpWerInitializeDeferredLiveDump(__int64 a1)
{
  __int64 v1; // r14
  NTSTATUS v3; // eax
  int v4; // ebx
  int v5; // eax
  PVOID v6; // rdi
  _QWORD *NonpagedPool; // rax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE TimerHandle; // [rsp+90h] [rbp+20h] BYREF
  PVOID Object; // [rsp+98h] [rbp+28h] BYREF

  v1 = *(_QWORD *)(a1 + 128);
  TimerHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwCreateTimer(&TimerHandle, 0x1F0003u, &ObjectAttributes, NotificationTimer);
  v4 = v3;
  if ( v3 >= 0 )
  {
    Object = 0LL;
    v5 = ObpReferenceObjectByHandleWithTag(
           (ULONG_PTR)TimerHandle,
           2031619,
           (__int64)ExTimerObjectType,
           0,
           1466393156,
           &Object,
           0LL,
           0LL);
    v6 = Object;
    v4 = v5;
    if ( v5 >= 0 )
    {
      ZwClose(TimerHandle);
      TimerHandle = 0LL;
      *(_QWORD *)(v1 + 16) = v6;
      NonpagedPool = DbgkpWerAllocateNonpagedPool();
      if ( !NonpagedPool )
      {
        DbgPrintEx(5u, 0, "DBGK: Could not allocate timer.\n");
        return 3221225495LL;
      }
      *(_QWORD *)(a1 + 120) = NonpagedPool;
      *NonpagedPool = 0LL;
      NonpagedPool[2] = DbgkpWerDeferredWriteRoutine;
      NonpagedPool[3] = a1;
    }
    else
    {
      DbgPrintEx(5u, 0, "DBGK: Failed to reference timer, status 0x%X\n", v5);
    }
    if ( v4 < 0 )
    {
      if ( v6 )
      {
        ObfDereferenceObject(v6);
        *(_QWORD *)(v1 + 16) = 0LL;
      }
      if ( TimerHandle )
        ZwClose(TimerHandle);
    }
  }
  else
  {
    DbgPrintEx(5u, 0, "DBGK: Failed to create timer, status 0x%X\n", v3);
  }
  return (unsigned int)v4;
}
