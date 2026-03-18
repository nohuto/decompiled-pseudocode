/*
 * XREFs of PsReplaceSiloContext @ 0x1406DE3C0
 * Callers:
 *     <none>
 * Callees:
 *     PspIsSiloContext @ 0x1405A3BE0 (PspIsSiloContext.c)
 *     PspStorageReplaceObject @ 0x1406E4E48 (PspStorageReplaceObject.c)
 */

__int64 __fastcall PsReplaceSiloContext(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // r8
  _QWORD *v6; // r10
  __int64 v7; // r11

  v3 = qword_1403FA958;
  if ( a1 )
    v3 = *(_QWORD *)(a1 + 1288);
  if ( !PspIsSiloContext(a3) )
    return PspStorageReplaceObject(v3, a2);
  if ( (*(_BYTE *)(v5 - 48 + 26) & 0x40) != 0 )
    v6 = (_QWORD *)(*(_QWORD *)(v5 - 48 - ObpInfoMaskToOffset[*(_BYTE *)(v5 - 48 + 26) & 0x7F]) + 32LL);
  if ( *v6 == v7 )
    return PspStorageReplaceObject(v3, a2);
  else
    return 3221225485LL;
}
