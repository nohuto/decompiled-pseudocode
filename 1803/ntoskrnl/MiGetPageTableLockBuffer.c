/*
 * XREFs of MiGetPageTableLockBuffer @ 0x1400B2278
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x14000F720 (MiWalkPageTablesRecursively.c)
 *     MiAgePte @ 0x140012B60 (MiAgePte.c)
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 *     MiUserFault @ 0x14001B870 (MiUserFault.c)
 *     MiQueryAddressState @ 0x14001F780 (MiQueryAddressState.c)
 *     MiProbeAndLockPages @ 0x140020610 (MiProbeAndLockPages.c)
 *     MiPageTableLockIsContended @ 0x14004EA5C (MiPageTableLockIsContended.c)
 *     MiWalkVaCheckCommon @ 0x1400AD024 (MiWalkVaCheckCommon.c)
 *     MiSetProtectionOnSection @ 0x1401147F0 (MiSetProtectionOnSection.c)
 *     MiCommitExistingVad @ 0x140117630 (MiCommitExistingVad.c)
 *     MiLockPageTableInternal @ 0x140120C90 (MiLockPageTableInternal.c)
 *     MiMakeSystemAddressValid @ 0x140122000 (MiMakeSystemAddressValid.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiTrimPte @ 0x14012A7D0 (MiTrimPte.c)
 *     MiResetAccessBitPte @ 0x140164490 (MiResetAccessBitPte.c)
 * Callees:
 *     <none>
 */

char *__fastcall MiGetPageTableLockBuffer(__int64 a1, __int64 a2, int *a3)
{
  unsigned __int64 v3; // r9
  int v4; // edx
  unsigned __int64 v5; // r9
  char *v6; // rax
  char *result; // rax

  v3 = 2 * (unsigned int)((a2 + 0x90482413000LL) >> 3);
  v4 = (2 * (unsigned __int8)((a2 + 0x90482413000LL) >> 3)) & 0x1F;
  v5 = v3 >> 5;
  v6 = (char *)&unk_1403CBAA4;
  if ( (*(_BYTE *)(a1 + 184) & 7u) < 2 )
    v6 = (char *)(a1 + 4872);
  result = &v6[4 * v5];
  *a3 = v4;
  return result;
}
