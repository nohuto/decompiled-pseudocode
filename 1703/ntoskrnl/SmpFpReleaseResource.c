/*
 * XREFs of SmpFpReleaseResource @ 0x14024EAE4
 * Callers:
 *     SmFpFree @ 0x140054CF0 (SmFpFree.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall SmpFpReleaseResource(PEX_SPIN_LOCK SpinLock, int a2, __int64 a3)
{
  __int64 v4; // rbx
  KIRQL v6; // al
  __int64 *v7; // r9
  __int64 v8; // rcx
  unsigned int v9; // ebx
  KIRQL v10; // bp

  v4 = a2;
  v6 = ExAcquireSpinLockExclusive(SpinLock);
  v7 = *(__int64 **)&SpinLock[2 * v4 + 8];
  v8 = v4;
  v9 = 0;
  v10 = v6;
  while ( v7 )
  {
    if ( (v7[1] & 0xFFFFFFFFFFFFFFF8uLL) == a3 )
    {
      *((_DWORD *)v7 + 2) &= ~1u;
      v9 = 1;
      --*((_BYTE *)SpinLock + v8 + 80);
      --*((_BYTE *)SpinLock + 86);
      break;
    }
    v7 = (__int64 *)*v7;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  __writecr8(v10);
  return v9;
}
