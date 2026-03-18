/*
 * XREFs of SmpFpReleaseResource @ 0x1402A8048
 * Callers:
 *     SmFpFree @ 0x140091540 (SmFpFree.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall SmpFpReleaseResource(PEX_SPIN_LOCK SpinLock, int a2, __int64 a3)
{
  __int64 v4; // rbx
  KIRQL v6; // al
  _QWORD *v7; // rdx
  __int64 v8; // r9
  unsigned int v9; // ebx
  KIRQL v10; // si
  __int64 v11; // r8

  v4 = a2;
  v6 = ExAcquireSpinLockExclusive(SpinLock);
  v7 = *(_QWORD **)&SpinLock[2 * v4 + 8];
  v8 = v4;
  v9 = 0;
  v10 = v6;
  while ( v7 )
  {
    v11 = v7[1];
    if ( (v11 & 0xFFFFFFFFFFFFFFF8uLL) == a3 )
    {
      v9 = 1;
      *((_DWORD *)v7 + 2) = v11 & 0xFFFFFFFE;
      --*((_BYTE *)SpinLock + v8 + 80);
      --*((_BYTE *)SpinLock + 86);
      break;
    }
    v7 = (_QWORD *)*v7;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  __writecr8(v10);
  return v9;
}
