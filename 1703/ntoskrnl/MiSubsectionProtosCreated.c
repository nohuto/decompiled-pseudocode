/*
 * XREFs of MiSubsectionProtosCreated @ 0x140219418
 * Callers:
 *     MmPurgeSection @ 0x14010B4A0 (MmPurgeSection.c)
 *     MiAllocateFileExtents @ 0x1406B6DDC (MiAllocateFileExtents.c)
 * Callees:
 *     KeSignalGate @ 0x14002E0B0 (KeSignalGate.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 */

__int64 __fastcall MiSubsectionProtosCreated(ULONG_PTR a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // r15
  KIRQL v9; // r12
  __int64 *v10; // rcx
  __int64 *v11; // rbx
  int v12; // eax
  int v13; // eax
  __int64 result; // rax

  v4 = *(_QWORD *)a1;
  KeAbPostRelease(a1);
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72));
  if ( a4 )
  {
    *(_DWORD *)(a1 + 52) |= 0x40000000u;
  }
  else if ( a3 == *(_DWORD *)(a1 + 44) )
  {
    *(_DWORD *)(a1 + 52) &= ~0x40000000u;
  }
  v10 = *(__int64 **)(a1 + 24);
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( v10 )
  {
    do
    {
      v11 = (__int64 *)*v10;
      if ( v10 != (__int64 *)a2 )
      {
        v12 = *((_DWORD *)v10 + 2);
        *((_DWORD *)v10 + 3) = 1;
        if ( (v12 & 8) == 0 )
        {
          v13 = 1;
          if ( (*(_BYTE *)(a2 + 8) & 0x20) != 0 )
            v13 = 2;
          *((_DWORD *)v10 + 3) = v13;
          KeSignalGate((__int64)(v10 + 2), 1);
        }
      }
      v10 = v11;
    }
    while ( v11 );
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
  result = v9;
  __writecr8(v9);
  return result;
}
