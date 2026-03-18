/*
 * XREFs of PfSnRemoveProcessTrace @ 0x14012D234
 * Callers:
 *     PfSnDeactivateTrace @ 0x14012D0E8 (PfSnDeactivateTrace.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 */

unsigned __int64 __fastcall PfSnRemoveProcessTrace(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // rdi
  unsigned int v3; // edx
  signed __int64 v4; // r8
  bool v5; // zf
  signed __int64 v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v9; // r8

  v1 = _InterlockedExchange64((volatile __int64 *)(a1 + 1192), 0LL);
  v2 = v1 & 0xFFFFFFFFFFFFFFF0uLL;
  v3 = v1 & 0xF;
  if ( v3 )
  {
    _m_prefetchw((const void *)(v2 + 360));
    v4 = *(_QWORD *)(v2 + 360);
    if ( (v4 & 1) != 0 )
    {
LABEL_6:
      v9 = v4 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v9, -(__int64)v3) == v3
        && !_interlockedbittestandreset((volatile signed __int32 *)(v9 + 32), 0) )
      {
        KeSetEvent((PRKEVENT)(v9 + 8), 0, 0);
      }
    }
    else
    {
      while ( 1 )
      {
        v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 360), v4 - 2 * v3, v4);
        v5 = v4 == v6;
        v4 = v6;
        if ( v5 )
          break;
        if ( (v6 & 1) != 0 )
          goto LABEL_6;
      }
    }
  }
  v7 = KeAcquireSpinLockRaiseToDpc(&qword_14036DFD0);
  KxReleaseSpinLock(&qword_14036DFD0);
  __writecr8(v7);
  return v2;
}
