/*
 * XREFs of MiValidateControlAreaPartition @ 0x140096C54
 * Callers:
 *     MiReferenceControlAreaForCacheManager @ 0x1400231B4 (MiReferenceControlAreaForCacheManager.c)
 *     MiReferenceControlArea @ 0x1400949E0 (MiReferenceControlArea.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiValidateControlAreaPartition(unsigned int *a1, __int64 a2)
{
  unsigned int v2; // r9d
  BOOL v5; // edx

  v2 = *a1;
  if ( (*a1 & 0x400000) != 0 )
  {
    v5 = *(_QWORD *)(qword_14036C8F8 + 8LL * WORD2(KeGetCurrentThread()->ApcState.Process[1].SecurePid)) != *(_QWORD *)(qword_14036C8F8 + 8LL * (*(_WORD *)(a2 + 60) & 0x3FF));
    goto LABEL_8;
  }
  if ( (v2 & 0x200000) != 0 )
  {
    v5 = 1;
LABEL_8:
    if ( v5 )
      return 3221227019LL;
  }
  if ( (((unsigned __int8)(v2 >> 21) ^ *(_BYTE *)(a2 + 62)) & 1) == 0 )
    return 0LL;
  return 3221227019LL;
}
