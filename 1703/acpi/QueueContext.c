/*
 * XREFs of QueueContext @ 0x1C005F38C
 * Callers:
 *     AcquireASLMutex @ 0x1C0016400 (AcquireASLMutex.c)
 *     WriteCookAccess @ 0x1C0025BD0 (WriteCookAccess.c)
 *     WaitASLEvent @ 0x1C005F53C (WaitASLEvent.c)
 * Callees:
 *     <none>
 */

void __fastcall QueueContext(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rcx

  byte_1C00775A0 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  v6 = (_QWORD *)(a1 + 32);
  v7 = *(_QWORD **)(a3 + 8);
  if ( *v7 != a3 )
    __fastfail(3u);
  *v6 = a3;
  *(_QWORD *)(a1 + 40) = v7;
  *v7 = v6;
  *(_QWORD *)(a3 + 8) = v6;
  if ( a2 != 0xFFFF )
  {
    *(_DWORD *)(a1 + 64) |= 1u;
    KeSetTimer((PKTIMER)(a1 + 192), (LARGE_INTEGER)(-10000LL * a2), (PKDPC)(a1 + 256));
  }
  KeReleaseSpinLock(&SpinLock, byte_1C00775A0);
}
