/*
 * XREFs of PopEtGetNextEnergyTracker @ 0x1406D2724
 * Callers:
 *     PopEtEnumEnergyTrackers @ 0x1406D26C4 (PopEtEnumEnergyTrackers.c)
 * Callees:
 *     ObReferenceObjectSafe @ 0x14000CFD0 (ObReferenceObjectSafe.c)
 *     PopReleaseRwLock @ 0x140088D60 (PopReleaseRwLock.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 */

_QWORD *__fastcall PopEtGetNextEnergyTracker(_QWORD **Object)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rsi
  ULONG_PTR v4; // rcx
  __int64 v5; // rcx
  _QWORD **v6; // rax
  _QWORD *i; // rbx
  char v8; // al

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = PopEtGlobals + 16;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx(v4, 0LL);
  v5 = PopEtGlobals;
  v6 = (_QWORD **)PopEtGlobals;
  if ( Object )
    v6 = Object;
  for ( i = *v6; i != (_QWORD *)v5; i = (_QWORD *)*i )
  {
    v8 = ObReferenceObjectSafe((__int64)i);
    v5 = PopEtGlobals;
    if ( v8 )
    {
      v3 = i;
      break;
    }
  }
  PopReleaseRwLock(v5 + 16);
  if ( Object )
    ObfDereferenceObject(Object);
  return v3;
}
