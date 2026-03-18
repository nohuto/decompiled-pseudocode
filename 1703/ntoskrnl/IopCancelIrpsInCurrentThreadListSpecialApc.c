/*
 * XREFs of IopCancelIrpsInCurrentThreadListSpecialApc @ 0x140033350
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeAlertThread @ 0x1401201B0 (KeAlertThread.c)
 */

LONG __fastcall IopCancelIrpsInCurrentThreadListSpecialApc(__int64 a1, __int64 a2, __int64 a3, _BYTE **a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  _BYTE *v6; // r14
  char v7; // r15
  KIRQL v8; // si
  void **FirstArgument; // rdx
  void *v10; // rax
  void *v11; // rax
  int v12; // eax
  void *v13; // rax
  void *v14; // rax

  CurrentThread = KeGetCurrentThread();
  v6 = *a4;
  v7 = 0;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&CurrentThread[1].WaitBlockFill11[16]);
  FirstArgument = (void **)CurrentThread[1].FirstArgument;
  *v6 = 0;
  *(_DWORD *)(a1 + 132) = 0;
  if ( &CurrentThread[1].FirstArgument == FirstArgument )
  {
    KxReleaseSpinLock((PKSPIN_LOCK)&CurrentThread[1].WaitBlockFill11[16]);
    __writecr8(v8);
  }
  else
  {
    do
    {
      if ( *((char *)FirstArgument + 35) < *((char *)FirstArgument + 34) + 2 )
      {
        v10 = *(void **)(a1 + 96);
        if ( !v10 || FirstArgument[5] == v10 )
        {
          v11 = *(void **)(a1 + 88);
          if ( !v11 || FirstArgument[20] == v11 )
          {
            v12 = *((_DWORD *)FirstArgument - 4);
            if ( (v12 & 0x402) == 0 && ((v12 & 0x84) != 0 || (*((_BYTE *)FirstArgument + 39) & 2) != 0) )
            {
              *((_BYTE *)FirstArgument + 36) = 1;
              v7 = 1;
              *v6 = 1;
              *(_DWORD *)(a1 + 132) = 1;
            }
          }
        }
        if ( !*(_BYTE *)(a1 + 128) )
        {
          v13 = *(void **)(a1 + 96);
          if ( !v13 || FirstArgument[5] == v13 )
          {
            v14 = *(void **)(a1 + 88);
            if ( (!v14 || FirstArgument[20] == v14) && (*(_DWORD *)(FirstArgument - 2) & 2) == 0 )
            {
              *v6 = 1;
              *(_DWORD *)(a1 + 132) = 1;
            }
          }
        }
      }
      FirstArgument = (void **)*FirstArgument;
    }
    while ( &CurrentThread[1].FirstArgument != FirstArgument );
    KxReleaseSpinLock((PKSPIN_LOCK)&CurrentThread[1].WaitBlockFill11[16]);
    __writecr8(v8);
    if ( v7 )
      KeAlertThread(CurrentThread, 0LL);
  }
  return KeSetEvent((PRKEVENT)(a1 + 104), 0, 0);
}
