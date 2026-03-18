/*
 * XREFs of DispatchCtxtQueue @ 0x1C0021E30
 * Callers:
 *     <none>
 * Callees:
 *     RunContext @ 0x1C0008F50 (RunContext.c)
 */

void DispatchCtxtQueue()
{
  KIRQL v0; // al
  char v1; // cl
  _QWORD *v2; // rcx
  __int64 v3; // rax
  _QWORD *v4; // rcx

  v0 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  v1 = gReadyQueue & 0xFD;
  byte_1C0079660 = v0;
  gReadyQueue &= ~2u;
  if ( (__int64 *)qword_1C0079648 != &qword_1C0079648
    && ((__int64 *)RunningContextListHead == &RunningContextListHead || (gdwfAMLI & 4) != 0)
    && (v1 & 8) == 0 )
  {
    while ( 1 )
    {
      v2 = (_QWORD *)qword_1C0079648;
      if ( (__int64 *)qword_1C0079648 == &qword_1C0079648 )
        break;
      if ( *(__int64 **)(qword_1C0079648 + 8) != &qword_1C0079648
        || (v3 = *(_QWORD *)qword_1C0079648, *(_QWORD *)(*(_QWORD *)qword_1C0079648 + 8LL) != qword_1C0079648) )
      {
        __fastfail(3u);
      }
      qword_1C0079648 = *(_QWORD *)qword_1C0079648;
      *(_QWORD *)(v3 + 8) = &qword_1C0079648;
      v2[1] = v2;
      *v2 = v2;
      v4 = v2 - 4;
      *((_DWORD *)v4 + 16) &= ~0x40u;
      RunContext((PSLIST_ENTRY)v4);
    }
  }
  KeReleaseSpinLock(&SpinLock, byte_1C0079660);
}
