/*
 * XREFs of IopRemoveDeviceRelationsFromList @ 0x1405F0738
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x14055CA4C (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PipDeviceObjectListElementAt @ 0x14059C10C (PipDeviceObjectListElementAt.c)
 *     PipDeviceObjectListRemove @ 0x1405F0790 (PipDeviceObjectListRemove.c)
 */

__int64 __fastcall IopRemoveDeviceRelationsFromList(unsigned int **a1)
{
  unsigned int v2; // ebx
  int v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  v2 = **a1;
  while ( (--v2 & 0x80000000) == 0 )
  {
    PipDeviceObjectListElementAt(*a1, v2, &v5, &v4, 0LL);
    if ( !v4 )
      PipDeviceObjectListRemove(*a1, v2);
  }
  return 0LL;
}
