/*
 * XREFs of CmpInitializeKeyNameString @ 0x1405A6294
 * Callers:
 *     CmpSyncSubKeysAfterDelete @ 0x1405A5D50 (CmpSyncSubKeysAfterDelete.c)
 *     CmpCopySyncTree2 @ 0x1405A5E80 (CmpCopySyncTree2.c)
 * Callees:
 *     CmpCopyCompressedName @ 0x14047442C (CmpCopyCompressedName.c)
 */

__int64 __fastcall CmpInitializeKeyNameString(__int64 a1, __int64 a2, _WORD *a3)
{
  __int16 v3; // ax
  __int64 result; // rax
  __int64 v5; // r10
  __int64 v6; // r11

  v3 = *(_WORD *)(a1 + 72);
  if ( (*(_BYTE *)(a1 + 2) & 0x20) != 0 )
  {
    *(_WORD *)a2 = 2 * v3;
    result = CmpCopyCompressedName(a3, 0x200u, (unsigned __int8 *)(a1 + 76), *(unsigned __int16 *)(a1 + 72));
    *(_QWORD *)(v5 + 8) = v6;
    *(_WORD *)(v5 + 2) = 512;
  }
  else
  {
    *(_WORD *)a2 = v3;
    *(_QWORD *)(a2 + 8) = a1 + 76;
    result = *(unsigned __int16 *)(a1 + 52);
    *(_WORD *)(a2 + 2) = result;
  }
  return result;
}
