/*
 * XREFs of ViFreeToContiguousMemory @ 0x14081AFA4
 * Callers:
 *     ViAllocateMapRegisterFile @ 0x14081A0D8 (ViAllocateMapRegisterFile.c)
 *     ViFreeMapRegisterFile @ 0x14081AD7C (ViFreeMapRegisterFile.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlClearBits @ 0x140072BD0 (RtlClearBits.c)
 */

__int64 __fastcall ViFreeToContiguousMemory(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  _QWORD *v5; // r8
  KSPIN_LOCK *v7; // rdi
  unsigned __int64 v8; // rbx

  v3 = a3;
  v5 = *(_QWORD **)(a1 + 264);
  if ( !v5 )
    return 0LL;
  if ( (unsigned int)v3 >= 0x20 || v5[v3] != a2 )
  {
    LODWORD(v3) = 0;
    while ( *v5 != a2 )
    {
      LODWORD(v3) = v3 + 1;
      ++v5;
      if ( (unsigned int)v3 >= 0x20 )
        return 0LL;
    }
  }
  v7 = (KSPIN_LOCK *)(a1 + 280);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 280));
  RtlClearBits((PRTL_BITMAP)(a1 + 296), v3, 1u);
  KxReleaseSpinLock(v7);
  __writecr8(v8);
  return 1LL;
}
