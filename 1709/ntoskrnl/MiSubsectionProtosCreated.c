/*
 * XREFs of MiSubsectionProtosCreated @ 0x140223D6C
 * Callers:
 *     MmPurgeSection @ 0x140031240 (MmPurgeSection.c)
 *     MiPurgeFileOnlyPfn @ 0x1402238B4 (MiPurgeFileOnlyPfn.c)
 *     MiAllocateFileExtents @ 0x1406E3904 (MiAllocateFileExtents.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KeSignalGate @ 0x1401246E0 (KeSignalGate.c)
 */

__int64 __fastcall MiSubsectionProtosCreated(ULONG_PTR a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // rdi
  KIRQL v9; // r12
  __int64 *v10; // rcx
  __int64 *v11; // rbx
  int v12; // eax
  int v13; // eax
  __int64 result; // rax

  v4 = *(_QWORD *)a1;
  KeAbPostRelease(a1);
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72));
  if ( (*(_DWORD *)(v4 + 56) & 0x20) != 0 )
  {
    v10 = *(__int64 **)(v4 + 80);
    *(_QWORD *)(v4 + 80) = 0LL;
  }
  else
  {
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
  }
  if ( v10 )
  {
    do
    {
      v11 = (__int64 *)*v10;
      if ( v10 != (__int64 *)a2 )
      {
        v12 = *((_DWORD *)v10 + 2);
        *((_DWORD *)v10 + 3) = 1;
        if ( (v12 & 0x40) == 0 )
        {
          v13 = 1;
          if ( (*(_DWORD *)(a2 + 8) & 0x100) != 0 )
            v13 = 2;
          *((_DWORD *)v10 + 3) = v13;
          KeSignalGate((__int64)(v10 + 2), 1u);
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
