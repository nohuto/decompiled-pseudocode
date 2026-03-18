/*
 * XREFs of Simulator_GetChildNode @ 0x1C005BE60
 * Callers:
 *     Simulator_CallbackWorker @ 0x1C005BB60 (Simulator_CallbackWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Simulator_GetChildNode(__int64 a1)
{
  KIRQL v2; // al
  _QWORD *v3; // r9
  __int64 v4; // rdx
  _QWORD *v5; // rdx

  v2 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v3 = 0LL;
  if ( a1 )
  {
    v4 = *(_QWORD *)(a1 + 16);
    if ( v4 )
    {
      v5 = (_QWORD *)(v4 + 24);
      if ( (_QWORD *)*v5 != v5 )
        v3 = (_QWORD *)*v5;
      *(_QWORD *)(a1 + 24) = v3;
    }
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v2);
  return 0LL;
}
