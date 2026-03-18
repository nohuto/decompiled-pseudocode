/*
 * XREFs of PspGetStorageArray @ 0x1406207C8
 * Callers:
 *     PspStorageInsertObject @ 0x140620724 (PspStorageInsertObject.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140708A30 (VrpHandleIoctlInitializeJobForVreg.c)
 *     PsMakeSiloContextPermanent @ 0x1407789A0 (PsMakeSiloContextPermanent.c)
 *     PspStorageReplaceObject @ 0x140780A68 (PspStorageReplaceObject.c)
 * Callees:
 *     PspGetStorageArrayIfPossible @ 0x140007D88 (PspGetStorageArrayIfPossible.c)
 *     PspLazyInitializeStorageExpansion @ 0x1407807D8 (PspLazyInitializeStorageExpansion.c)
 */

__int64 __fastcall PspGetStorageArray(__int64 a1, unsigned int a2, unsigned int *a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v9; // rcx
  unsigned int *Buffer; // rcx

  result = PspGetStorageArrayIfPossible(a1, a2, a3, a4);
  if ( (_DWORD)result == -1073741275 )
  {
    if ( *(_QWORD *)(v9 + 512) )
      return result;
    result = PspLazyInitializeStorageExpansion();
    if ( (int)result < 0 )
      return result;
    result = PspGetStorageArrayIfPossible(a1, a2, a3, a4);
  }
  if ( (int)result >= 0 )
  {
    Buffer = PspStorageBitmap.Buffer;
    if ( a2 >= 0x20 )
      Buffer = PspStorageExpansionBitmap.Buffer;
    if ( !_bittest64((const signed __int64 *)Buffer, *a3) )
      __fastfail(5u);
    return 0LL;
  }
  return result;
}
