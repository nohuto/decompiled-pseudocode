/*
 * XREFs of MmEnoughMemoryForWrite @ 0x140064904
 * Callers:
 *     CcCanIWriteStream @ 0x140064730 (CcCanIWriteStream.c)
 *     CcCanIWrite @ 0x1400F4620 (CcCanIWrite.c)
 * Callees:
 *     MiSufficientAvailablePages @ 0x1400649E0 (MiSufficientAvailablePages.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiLockSectionControlArea @ 0x1400A4BCC (MiLockSectionControlArea.c)
 */

char __fastcall MmEnoughMemoryForWrite(__int64 a1)
{
  bool v1; // bl
  unsigned __int8 v2; // di
  __int64 v3; // rbp
  ULONG_PTR *v4; // rsi
  __int64 v6; // rax
  char v7; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v2 = 17;
  v7 = 17;
  v3 = 0LL;
  if ( a1 )
  {
    v6 = MiLockSectionControlArea(a1, 1LL, &v7);
    v3 = v6;
    if ( !v6 )
      return 1;
    v2 = v7;
    v4 = *(ULONG_PTR **)(qword_140388AF0 + 8LL * (*(_WORD *)(v6 + 60) & 0x3FF));
  }
  else
  {
    v4 = &MiSystemPartition;
  }
  if ( (unsigned int)MiSufficientAvailablePages(v4, (_BYTE)dword_140400130 != 0 ? 0x4000LL : 450LL) )
  {
    v1 = 1;
  }
  else if ( v4[792] < v4[806] + 800 )
  {
    v1 = (unsigned int)MiSufficientAvailablePages(v4, 80LL) != 0;
  }
  if ( v2 != 17 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
    __writecr8(v2);
  }
  return v1;
}
