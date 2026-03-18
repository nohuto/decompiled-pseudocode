/*
 * XREFs of CmpInitializeKeyNameString @ 0x1406FDE14
 * Callers:
 *     CmpCopySyncTree2 @ 0x1406FD2D8 (CmpCopySyncTree2.c)
 *     CmpSyncSubKeysAfterDelete @ 0x1406FEFF4 (CmpSyncSubKeysAfterDelete.c)
 * Callees:
 *     CmpCopyCompressedName @ 0x1404A33EC (CmpCopyCompressedName.c)
 */

__int64 __fastcall CmpInitializeKeyNameString(__int64 a1, __int64 a2, _WORD *a3)
{
  __int64 v4; // r10
  unsigned __int8 *v5; // r8
  __int16 v6; // dx
  __int64 result; // rax
  __int16 v8; // r11

  v4 = a2;
  v5 = (unsigned __int8 *)(a1 + 76);
  v6 = *(_WORD *)(a1 + 72);
  if ( (*(_BYTE *)(a1 + 2) & 0x20) != 0 )
  {
    *(_WORD *)v4 = 2 * v6;
    result = CmpCopyCompressedName(a3, 0x200u, v5, *(unsigned __int16 *)(a1 + 72));
    *(_QWORD *)(v4 + 8) = a3;
  }
  else
  {
    *(_WORD *)v4 = v6;
    *(_QWORD *)(v4 + 8) = v5;
    v8 = *(_WORD *)(a1 + 52);
  }
  *(_WORD *)(v4 + 2) = v8;
  return result;
}
