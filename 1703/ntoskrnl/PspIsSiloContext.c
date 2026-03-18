/*
 * XREFs of PspIsSiloContext @ 0x1405A3BE0
 * Callers:
 *     PsInsertPermanentSiloContextEx @ 0x1405A3A00 (PsInsertPermanentSiloContextEx.c)
 *     PsInsertSiloContext @ 0x1406DE270 (PsInsertSiloContext.c)
 *     PsReplaceSiloContext @ 0x1406DE3C0 (PsReplaceSiloContext.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PspIsSiloContext(__int64 a1)
{
  PVOID v1; // rax

  v1 = (PVOID)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
  return v1 == (PVOID)PsSiloContextNonPagedType || v1 == PsSiloContextPagedType;
}
