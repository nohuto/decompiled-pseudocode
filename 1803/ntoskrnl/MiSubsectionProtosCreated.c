/*
 * XREFs of MiSubsectionProtosCreated @ 0x14025EA5C
 * Callers:
 *     MmPurgeSection @ 0x1400542A0 (MmPurgeSection.c)
 *     MiPurgeFileOnlyPfn @ 0x14025E548 (MiPurgeFileOnlyPfn.c)
 *     MiAllocateFileExtents @ 0x14074DC04 (MiAllocateFileExtents.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     KeSignalGate @ 0x1400C1720 (KeSignalGate.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MiSubsectionProtosCreated(ULONG_PTR a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // rdi
  KIRQL v9; // r12
  __int64 *v10; // rcx
  int v11; // edx
  unsigned int v12; // edx
  __int64 *v13; // rbx
  int v14; // eax
  int v15; // eax
  __int64 result; // rax

  v4 = *(_QWORD *)a1;
  KeAbPostRelease(a1);
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72));
  if ( (*(_DWORD *)(v4 + 56) & 0x20) != 0 )
  {
    v10 = *(__int64 **)(v4 + 80);
    *(_QWORD *)(v4 + 80) = 0LL;
    goto LABEL_9;
  }
  v11 = *(_DWORD *)(a1 + 52);
  if ( a4 )
  {
    v12 = v11 | 0x40000000;
LABEL_7:
    *(_DWORD *)(a1 + 52) = v12;
    goto LABEL_8;
  }
  if ( a3 == *(_DWORD *)(a1 + 44) - (v11 & 0x3FFFFFFF) )
  {
    v12 = v11 & 0xBFFFFFFF;
    goto LABEL_7;
  }
LABEL_8:
  v10 = *(__int64 **)(a1 + 24);
  *(_QWORD *)(a1 + 24) = 0LL;
LABEL_9:
  if ( v10 )
  {
    do
    {
      v13 = (__int64 *)*v10;
      if ( v10 != (__int64 *)a2 )
      {
        v14 = *((_DWORD *)v10 + 2);
        *((_DWORD *)v10 + 3) = 1;
        if ( (v14 & 0x40) == 0 )
        {
          v15 = 1;
          if ( (*(_DWORD *)(a2 + 8) & 0x100) != 0 )
            v15 = 2;
          *((_DWORD *)v10 + 3) = v15;
          KeSignalGate((__int64)(v10 + 2), 1);
        }
      }
      v10 = v13;
    }
    while ( v13 );
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
  result = v9;
  __writecr8(v9);
  return result;
}
