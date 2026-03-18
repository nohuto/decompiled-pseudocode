/*
 * XREFs of PpmIdleUpdateConcurrency @ 0x140152E68
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140096C70 (PpmIdleExecuteTransition.c)
 *     PpmIdleRemoveConcurrency @ 0x140152D90 (PpmIdleRemoveConcurrency.c)
 *     PpmIdleInstallConcurrency @ 0x140152E00 (PpmIdleInstallConcurrency.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 */

void __fastcall PpmIdleUpdateConcurrency(PKSPIN_LOCK SpinLock, KSPIN_LOCK a2, char a3, char a4)
{
  KSPIN_LOCK v8; // rax
  __int64 v9; // r10
  KSPIN_LOCK v10; // rcx
  int v11; // eax
  __int16 v12; // [rsp+30h] [rbp-8h]

  _disable();
  KxAcquireSpinLock(SpinLock);
  v8 = SpinLock[2];
  v9 = *((unsigned int *)SpinLock + 3);
  if ( a2 > v8 )
  {
    SpinLock[2] = a2;
    v10 = a2 - v8;
    if ( a4 )
    {
      SpinLock[3] += v10;
      SpinLock[v9 + 4] += v10;
    }
  }
  v11 = v9 + 1;
  if ( a3 )
    v11 = v9 - 1;
  *((_DWORD *)SpinLock + 3) = v11;
  KxReleaseSpinLock(SpinLock);
  if ( (v12 & 0x200) != 0 )
    _enable();
}
