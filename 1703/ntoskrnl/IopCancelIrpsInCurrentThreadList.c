/*
 * XREFs of IopCancelIrpsInCurrentThreadList @ 0x140018C00
 * Callers:
 *     IopCancelIrpsInCurrentThreadListApcRoutine @ 0x1404332D0 (IopCancelIrpsInCurrentThreadListApcRoutine.c)
 *     IopCancelIrpsInThreadList @ 0x140433318 (IopCancelIrpsInThreadList.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     IoCancelIrp @ 0x140018D10 (IoCancelIrp.c)
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall IopCancelIrpsInCurrentThreadList(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  KSPIN_LOCK *v4; // r14
  _QWORD *v6; // r12
  unsigned int v8; // r15d
  KIRQL v9; // al
  _QWORD *v10; // rdi
  KIRQL v11; // r13
  int v13; // eax
  KIRQL v14; // [rsp+68h] [rbp+10h]

  v4 = (KSPIN_LOCK *)(a2 + 1848);
  v6 = (_QWORD *)(a2 + 1648);
  v8 = 0;
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 1848));
  v10 = (_QWORD *)*v6;
  v11 = v9;
  v14 = v9;
  if ( v6 != (_QWORD *)*v6 )
  {
    while ( 1 )
    {
      if ( *((char *)v10 + 35) < *((char *)v10 + 34) + 2 )
      {
        if ( a4 )
        {
          if ( a1 && v10[20] != a1 )
            goto LABEL_7;
          if ( a3 && v10[5] != a3 )
            goto LABEL_7;
          v13 = *((_DWORD *)v10 - 4);
          if ( (v13 & 0x402) != 0 || (v13 & 0x84) == 0 && (*((_BYTE *)v10 + 39) & 2) == 0 )
            goto LABEL_7;
        }
        else if ( (*(_DWORD *)(v10 - 2) & 2) != 0 || a1 && v10[20] != a1 || a3 && v10[5] != a3 )
        {
          goto LABEL_7;
        }
        v8 = 1;
        KxReleaseSpinLock(v4);
        __writecr8(1uLL);
        IoCancelIrp((PIRP)(v10 - 4));
        KeGetCurrentIrql();
        __writecr8(2uLL);
        KxAcquireSpinLock(v4);
      }
LABEL_7:
      v10 = (_QWORD *)*v10;
      if ( v6 == v10 )
      {
        v11 = v14;
        break;
      }
    }
  }
  KxReleaseSpinLock(v4);
  __writecr8(v11);
  return v8;
}
