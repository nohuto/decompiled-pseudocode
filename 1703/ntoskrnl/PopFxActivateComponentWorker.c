/*
 * XREFs of PopFxActivateComponentWorker @ 0x140068FE0
 * Callers:
 *     PopFxActivateComponent @ 0x140068F1C (PopFxActivateComponent.c)
 *     PopFxIdleWorkerTail @ 0x140069A78 (PopFxIdleWorkerTail.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxActivateComponent @ 0x140068F1C (PopFxActivateComponent.c)
 *     PopFxAddRefDevice @ 0x140069078 (PopFxAddRefDevice.c)
 *     PopFxProcessWork @ 0x140069444 (PopFxProcessWork.c)
 *     PopFxCompleteComponentActivation @ 0x140069C9C (PopFxCompleteComponentActivation.c)
 *     PopPluginComponentActive @ 0x14006A38C (PopPluginComponentActive.c)
 */

char __fastcall PopFxActivateComponentWorker(ULONG_PTR a1, __int64 a2, char a3, __int64 a4)
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

  PopFxAddRefDevice(a1);
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
        v14 = *(_QWORD *)(*(_QWORD *)(a1 + 632) + 8LL * *(unsigned int *)(v13 + 8 * v12));
        *(_BYTE *)(v13 + 8 * v12 + 4) = 1;
        PopFxActivateComponent(a1, v14, 2LL, a3);
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
    return PopFxCompleteComponentActivation(a1);
  if ( result )
  {
    LOBYTE(v8) = 1;
    result = PopPluginComponentActive(a1, *(unsigned int *)(a2 + 16), v8, a4);
    if ( result == 1 )
      return PopFxProcessWork(0LL);
  }
  return result;
}
