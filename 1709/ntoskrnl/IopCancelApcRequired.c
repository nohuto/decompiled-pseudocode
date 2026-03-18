/*
 * XREFs of IopCancelApcRequired @ 0x1400ABAC8
 * Callers:
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x1404D6FA4 (IopCancelIrpsInThreadListForCurrentProcess.c)
 *     IopCancelSynchronousIrpsForThread @ 0x1406B494C (IopCancelSynchronousIrpsForThread.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 */

_BOOL8 __fastcall IopCancelApcRequired(__int64 a1, __int64 a2, __int64 a3)
{
  KSPIN_LOCK *v3; // rbp
  KIRQL v7; // al
  _QWORD *v8; // r9
  KIRQL v9; // r14
  _QWORD *v10; // rcx
  bool v11; // bl

  v3 = (KSPIN_LOCK *)(a1 + 1856);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1856));
  v8 = (_QWORD *)(a1 + 1648);
  v9 = v7;
  v10 = *(_QWORD **)(a1 + 1648);
  v11 = v10 != (_QWORD *)(a1 + 1648);
  if ( v10 != v8 && (a3 || a2) )
  {
    v11 = 0;
    while ( v8 != v10 )
    {
      if ( (*(_DWORD *)(v10 - 2) & 2) == 0 && (v10[5] == a3 && (!a2 || v10[20] == a2) || !a3 && v10[20] == a2) )
      {
        v11 = 1;
        break;
      }
      v10 = (_QWORD *)*v10;
    }
  }
  KxReleaseSpinLock(v3);
  __writecr8(v9);
  return v11;
}
