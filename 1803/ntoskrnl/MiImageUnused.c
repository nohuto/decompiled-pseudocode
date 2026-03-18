/*
 * XREFs of MiImageUnused @ 0x1400C0580
 * Callers:
 *     MiCheckControlArea @ 0x1400E5110 (MiCheckControlArea.c)
 *     MiRelocateImageAgain @ 0x1404F16CC (MiRelocateImageAgain.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

int __fastcall MiImageUnused(__int64 a1, int a2, __int64 a3)
{
  __int64 v5; // rax
  KIRQL v6; // bp
  unsigned int v7; // edx

  *(_QWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 8) = 0LL;
  v5 = *(_QWORD *)(a1 + 96);
  *(_DWORD *)a3 = -1;
  if ( *(_QWORD *)(v5 + 32) )
  {
    if ( a2 == 1 )
      v6 = 17;
    else
      v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    LODWORD(v5) = *(_DWORD *)(a1 + 88);
    if ( (_DWORD)v5 != -1 )
    {
      v7 = *(_DWORD *)(a1 + 92);
      *(_DWORD *)a3 = v5;
      *(_DWORD *)(a3 + 8) = (v7 >> 21) & 3;
      LODWORD(v5) = *(_DWORD *)(a1 + 56);
      *(_DWORD *)(a3 + 4) = (unsigned __int16)v7;
      if ( (v5 & 0x10000000) != 0 )
      {
        LODWORD(v5) = v5 & 0xEFFFFFFF;
        *(_DWORD *)(a1 + 56) = v5;
        *(_BYTE *)(a3 + 13) = (v7 & 0x20000) != 0;
        *(_BYTE *)(a3 + 12) = 1;
      }
      *(_DWORD *)(a1 + 88) = -1;
    }
    *(_DWORD *)(a1 + 92) &= ~0x800000u;
    if ( v6 != 17 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      LODWORD(v5) = v6;
      __writecr8(v6);
    }
  }
  return v5;
}
