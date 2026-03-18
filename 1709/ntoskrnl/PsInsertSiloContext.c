/*
 * XREFs of PsInsertSiloContext @ 0x140714720
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1406A43C0 (VrpHandleIoctlInitializeJobForVreg.c)
 *     PspAssignSiloSystemRootPath @ 0x140714B10 (PspAssignSiloSystemRootPath.c)
 *     ObCreateSiloRootDirectory @ 0x140789F30 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     PspStorageInsertObject @ 0x1405BFF84 (PspStorageInsertObject.c)
 *     PspIsSiloContext @ 0x1405C0098 (PspIsSiloContext.c)
 */

__int64 __fastcall PsInsertSiloContext(__int64 a1, unsigned int a2, __int64 a3)
{
  signed __int64 v4; // r8
  _QWORD *v5; // r9
  __int64 v6; // r10
  __int64 v7; // r11

  if ( !PspIsSiloContext(a3) )
    return PspStorageInsertObject(v7, a2, 0, v4);
  if ( (*(_BYTE *)(v4 - 48 + 26) & 0x40) != 0 )
    v5 = (_QWORD *)(*(_QWORD *)(v4 - 48 - ObpInfoMaskToOffset[*(_BYTE *)(v4 - 48 + 26) & 0x7F]) + 32LL);
  if ( *v5 == v6 )
    return PspStorageInsertObject(v7, a2, 0, v4);
  else
    return 3221225485LL;
}
