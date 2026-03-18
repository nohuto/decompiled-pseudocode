/*
 * XREFs of MmEnoughMemoryForWrite @ 0x140133C18
 * Callers:
 *     CcCanIWrite @ 0x140089AA0 (CcCanIWrite.c)
 *     CcCanIWriteStream @ 0x140133A34 (CcCanIWriteStream.c)
 * Callees:
 *     MiLockSectionControlArea @ 0x1400E1590 (MiLockSectionControlArea.c)
 *     MiSufficientAvailablePages @ 0x1400FF320 (MiSufficientAvailablePages.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

char __fastcall MmEnoughMemoryForWrite(__int64 *a1)
{
  bool v1; // bl
  unsigned __int8 v2; // di
  __int64 v3; // rbp
  __int64 v4; // rax
  ULONG_PTR *v5; // rsi
  unsigned __int8 v7; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v2 = 17;
  v7 = 17;
  v3 = 0LL;
  if ( a1 )
  {
    v4 = MiLockSectionControlArea(a1, 1, &v7);
    v3 = v4;
    if ( !v4 )
      return 1;
    v2 = v7;
    v5 = *(ULONG_PTR **)(qword_1403CBD88 + 8LL * (*(_WORD *)(v4 + 60) & 0x3FF));
  }
  else
  {
    v5 = &MiSystemPartition;
  }
  if ( (unsigned int)MiSufficientAvailablePages((__int64)v5, (_BYTE)dword_14044B190 != 0 ? 0x4000LL : 450LL) )
  {
    v1 = 1;
  }
  else if ( v5[928] < v5[942] + 800 )
  {
    v1 = (unsigned int)MiSufficientAvailablePages((__int64)v5, 0x50uLL) != 0;
  }
  if ( v2 != 17 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
    __writecr8(v2);
  }
  return v1;
}
