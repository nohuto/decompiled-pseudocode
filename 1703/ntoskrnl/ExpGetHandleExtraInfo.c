/*
 * XREFs of ExpGetHandleExtraInfo @ 0x1407172E0
 * Callers:
 *     ExDupHandleTable @ 0x14042B980 (ExDupHandleTable.c)
 *     ExpFreeHandleTableEntry @ 0x1404F825C (ExpFreeHandleTableEntry.c)
 *     ObpReferenceProcessObjectByHandle @ 0x140517B10 (ObpReferenceProcessObjectByHandle.c)
 *     ObCloseHandleTableEntry @ 0x140530A90 (ObCloseHandleTableEntry.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 *     ObpAuditObjectAccess @ 0x1406C0E1C (ObpAuditObjectAccess.c)
 * Callees:
 *     ExpLookupHandleTableEntry @ 0x140531E20 (ExpLookupHandleTableEntry.c)
 */

__int64 __fastcall ExpGetHandleExtraInfo(unsigned int *a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r9

  v2 = (_QWORD *)ExpLookupHandleTableEntry(a1, a2 & 0xFFFFFFFFFFFFFC03uLL);
  if ( v2 && *v2 )
    return *v2 + 8 * v3;
  else
    return 0LL;
}
