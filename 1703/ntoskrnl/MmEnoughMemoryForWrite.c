/*
 * XREFs of MmEnoughMemoryForWrite @ 0x1400AE5C4
 * Callers:
 *     CcCanIWrite @ 0x14000D980 (CcCanIWrite.c)
 *     CcCanIWriteStream @ 0x1400AE444 (CcCanIWriteStream.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiLockSectionControlArea @ 0x140099610 (MiLockSectionControlArea.c)
 */

char __fastcall MmEnoughMemoryForWrite(__int64 *a1)
{
  bool v1; // bl
  __int64 v2; // r8
  __int64 v3; // rax
  ULONG_PTR *v4; // rdx
  unsigned __int8 v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v6 = 17;
  v2 = 0LL;
  if ( a1 )
  {
    v3 = MiLockSectionControlArea(a1, 1, &v6);
    v2 = v3;
    if ( !v3 )
      return 1;
    v4 = *(ULONG_PTR **)(qword_14036C8F8 + 8LL * (*(_WORD *)(v3 + 60) & 0x3FF));
  }
  else
  {
    v4 = &MiSystemPartition;
  }
  if ( v4[720] <= (unsigned __int64)((_BYTE)dword_1403E3134 != 0 ? 0x3E3E : 0) + 450 )
  {
    if ( v4[768] < v4[782] + 800 )
      v1 = v4[720] > 0x50;
  }
  else
  {
    v1 = 1;
  }
  if ( v6 != 17 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 72));
    __writecr8(v6);
  }
  return v1;
}
