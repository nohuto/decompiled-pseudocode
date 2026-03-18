/*
 * XREFs of MiImageUnused @ 0x140121F88
 * Callers:
 *     MiCheckControlArea @ 0x14005B160 (MiCheckControlArea.c)
 *     MiRelocateImageAgain @ 0x140504210 (MiRelocateImageAgain.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

char __fastcall MiImageUnused(__int64 a1, int a2, __int64 a3)
{
  _QWORD *v5; // rax
  KIRQL v6; // si
  int v7; // ecx

  *(_QWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 8) = 0LL;
  v5 = *(_QWORD **)(a1 + 96);
  *(_DWORD *)a3 = -1;
  if ( *v5 )
  {
    if ( a2 == 1 )
      v6 = 17;
    else
      v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    LODWORD(v5) = *(_DWORD *)(a1 + 88);
    if ( (_DWORD)v5 != -1 )
    {
      *(_DWORD *)a3 = (_DWORD)v5;
      LODWORD(v5) = *(_DWORD *)(a1 + 92);
      *(_DWORD *)(a3 + 4) = (unsigned __int16)v5;
      *(_DWORD *)(a3 + 8) = ((unsigned int)v5 >> 21) & 3;
      v7 = *(_DWORD *)(a1 + 56);
      if ( (v7 & 0x10000000) != 0 )
      {
        LOBYTE(v5) = ((unsigned int)v5 & 0x20000) != 0;
        *(_DWORD *)(a1 + 56) = v7 & 0xEFFFFFFF;
        *(_BYTE *)(a3 + 13) = (_BYTE)v5;
        *(_BYTE *)(a3 + 12) = 1;
      }
      *(_DWORD *)(a1 + 88) = -1;
    }
    *(_DWORD *)(a1 + 92) &= ~0x800000u;
    if ( v6 != 17 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      LOBYTE(v5) = v6;
      __writecr8(v6);
    }
  }
  return (char)v5;
}
