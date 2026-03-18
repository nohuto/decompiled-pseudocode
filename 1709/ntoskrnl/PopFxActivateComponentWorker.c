/*
 * XREFs of PopFxActivateComponentWorker @ 0x1400FD7C0
 * Callers:
 *     PopFxActivateComponent @ 0x1400FD6FC (PopFxActivateComponent.c)
 *     PopFxIdleWorkerTail @ 0x1400FE1D8 (PopFxIdleWorkerTail.c)
 * Callees:
 *     PopPluginComponentActive @ 0x14001AF0C (PopPluginComponentActive.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxActivateComponent @ 0x1400FD6FC (PopFxActivateComponent.c)
 *     PopFxAddRefDevice @ 0x1400FD858 (PopFxAddRefDevice.c)
 *     PopFxProcessWork @ 0x1400FD9F8 (PopFxProcessWork.c)
 *     PopFxCompleteComponentActivation @ 0x1400FE048 (PopFxCompleteComponentActivation.c)
 */

char __fastcall PopFxActivateComponentWorker(ULONG_PTR BugCheckParameter2, __int64 a2, char a3, void *a4)
{
  __int64 v8; // r8
  char result; // al
  KIRQL v10; // al
  int v11; // edx
  __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rbx
  int v15; // ebx
  KIRQL v16; // [rsp+60h] [rbp+18h]

  PopFxAddRefDevice(BugCheckParameter2);
  if ( *(_DWORD *)(a2 + 172) )
  {
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 128));
    v11 = *(_DWORD *)(a2 + 172);
    v12 = 0LL;
    v16 = v10;
    *(_DWORD *)(a2 + 184) = v11;
    if ( v11 )
    {
      do
      {
        v13 = *(_QWORD *)(a2 + 176);
        v14 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 632) + 8LL * *(unsigned int *)(v13 + 8 * v12));
        *(_BYTE *)(v13 + 8 * v12 + 4) = 1;
        PopFxActivateComponent(BugCheckParameter2, v14, 2);
        if ( *(int *)(v14 + 88) < 0 )
        {
          *(_BYTE *)(*(_QWORD *)(a2 + 176) + 8 * v12 + 4) = 0;
          --*(_DWORD *)(a2 + 184);
        }
        v12 = (unsigned int)(v12 + 1);
      }
      while ( (unsigned int)v12 < *(_DWORD *)(a2 + 172) );
    }
    v15 = *(_DWORD *)(a2 + 184);
    KxReleaseSpinLock((PKSPIN_LOCK)(a2 + 128));
    __writecr8(v16);
    result = v15 == 0;
  }
  else
  {
    result = 1;
  }
  if ( a3 )
    return PopFxCompleteComponentActivation(BugCheckParameter2);
  if ( result )
  {
    LOBYTE(v8) = 1;
    result = PopPluginComponentActive(BugCheckParameter2, *(_DWORD *)(a2 + 16), v8, a4);
    if ( result == 1 )
      return PopFxProcessWork(0LL);
  }
  return result;
}
