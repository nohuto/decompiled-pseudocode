/*
 * XREFs of PopFxActivateComponentWorker @ 0x1400781D4
 * Callers:
 *     PopFxActivateComponent @ 0x1400780EC (PopFxActivateComponent.c)
 *     PopFxIdleWorkerTail @ 0x140078414 (PopFxIdleWorkerTail.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxProcessWork @ 0x140077B28 (PopFxProcessWork.c)
 *     PopFxActivateComponent @ 0x1400780EC (PopFxActivateComponent.c)
 *     PopFxAddRefDevice @ 0x14007826C (PopFxAddRefDevice.c)
 *     PopFxCompleteComponentActivation @ 0x140078628 (PopFxCompleteComponentActivation.c)
 *     PopPluginComponentActive @ 0x140078D5C (PopPluginComponentActive.c)
 */

char __fastcall PopFxActivateComponentWorker(ULONG_PTR a1, __int64 a2, char a3, int *a4)
{
  __int64 v8; // r8
  char result; // al
  __int64 v10; // r8
  KIRQL v11; // al
  int v12; // ebx
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rbx
  KIRQL v16; // [rsp+60h] [rbp+18h]

  PopFxAddRefDevice(a1);
  if ( *(_DWORD *)(a2 + 172) )
  {
    v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 128));
    v12 = *(_DWORD *)(a2 + 172);
    v13 = 0LL;
    v16 = v11;
    *(_DWORD *)(a2 + 184) = v12;
    if ( v12 )
    {
      do
      {
        v14 = *(_QWORD *)(a2 + 176);
        v15 = *(_QWORD *)(*(_QWORD *)(a1 + 712) + 8LL * *(unsigned int *)(v14 + 8 * v13));
        *(_BYTE *)(v14 + 8 * v13 + 4) = 1;
        PopFxActivateComponent(a1, v15, 2LL, a3);
        if ( *(int *)(v15 + 88) < 0 )
        {
          *(_BYTE *)(*(_QWORD *)(a2 + 176) + 8 * v13 + 4) = 0;
          --*(_DWORD *)(a2 + 184);
        }
        v12 = *(_DWORD *)(a2 + 184);
        v13 = (unsigned int)(v13 + 1);
      }
      while ( (unsigned int)v13 < *(_DWORD *)(a2 + 172) );
    }
    KxReleaseSpinLock((PKSPIN_LOCK)(a2 + 128));
    __writecr8(v16);
    result = v12 == 0;
  }
  else
  {
    result = 1;
  }
  if ( a3 )
    return PopFxCompleteComponentActivation(a1);
  if ( result )
  {
    LOBYTE(v8) = 1;
    result = PopPluginComponentActive(a1, *(unsigned int *)(a2 + 16), v8, a4);
    if ( result == 1 )
      return PopFxProcessWork(0LL, a4, v10);
  }
  return result;
}
