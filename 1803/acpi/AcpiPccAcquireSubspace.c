/*
 * XREFs of AcpiPccAcquireSubspace @ 0x1C007F080
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0004540 (memset.c)
 *     AcpiPccAcquireSubspaceCore @ 0x1C002FA78 (AcpiPccAcquireSubspaceCore.c)
 */

__int64 __fastcall AcpiPccAcquireSubspace(unsigned int *a1)
{
  __int64 result; // rax
  _OWORD v3[4]; // [rsp+30h] [rbp-48h] BYREF

  memset(v3, 0, 0x38uLL);
  KeInitializeEvent((PRKEVENT)&v3[1], SynchronizationEvent, 0);
  result = AcpiPccAcquireSubspaceCore(a1, (int *)AcpiPccSyncCompletionCallback, (__int64)v3, (int **)v3);
  if ( (_DWORD)result == 259 )
  {
    KeWaitForSingleObject(&v3[1], Executive, 0, 0, 0LL);
    return DWORD2(v3[2]);
  }
  return result;
}
