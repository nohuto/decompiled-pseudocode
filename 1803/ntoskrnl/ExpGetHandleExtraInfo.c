/*
 * XREFs of ExpGetHandleExtraInfo @ 0x1407BD4E4
 * Callers:
 *     ObpReferenceProcessObjectByHandle @ 0x1404B7360 (ObpReferenceProcessObjectByHandle.c)
 *     ExpFreeHandleTableEntry @ 0x1405120A0 (ExpFreeHandleTableEntry.c)
 *     ExDupHandleTable @ 0x1405533A0 (ExDupHandleTable.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCloseHandleTableEntry @ 0x1405A4E20 (ObCloseHandleTableEntry.c)
 *     ObpAuditObjectAccess @ 0x140758D94 (ObpAuditObjectAccess.c)
 * Callees:
 *     ExpLookupHandleTableEntry @ 0x1405A4D70 (ExpLookupHandleTableEntry.c)
 */

__int64 __fastcall ExpGetHandleExtraInfo(unsigned int *a1, __int64 a2)
{
  _QWORD *v2; // rax
  unsigned __int64 v3; // r9

  v2 = (_QWORD *)ExpLookupHandleTableEntry(a1, a2 & 0xFFFFFFFFFFFFFC03uLL);
  if ( v2 && *v2 )
    return *v2 + 8LL * (unsigned __int8)(v3 >> 2);
  else
    return 0LL;
}
