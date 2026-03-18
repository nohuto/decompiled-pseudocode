/*
 * XREFs of ?AllocateElements@?$PagedPoolZeroedArray@I$0BA@@@QEAAPEAII@Z @ 0x1C014760C
 * Callers:
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C0098E10 (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 *     ?DxgkSubmitSignalSyncObjectsToHwQueueInternal@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@_N@Z @ 0x1C01A2C00 (-DxgkSubmitSignalSyncObjectsToHwQueueInternal@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@.c)
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
 */

PVOID __fastcall PagedPoolZeroedArray<unsigned int,16>::AllocateElements(_DWORD *a1, unsigned int a2)
{
  __int64 v4; // rdi
  PVOID result; // rax

  v4 = a2;
  if ( a2 <= 0x10 )
  {
    result = a1 + 2;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < 4 )
      return 0LL;
    result = ExAllocatePoolWithTag(PagedPool, 4LL * a2, 0x4B677844u);
  }
  *(_QWORD *)a1 = result;
  a1[18] = a2;
  if ( result )
  {
    memset(result, 0, 4 * v4);
    return *(PVOID *)a1;
  }
  return result;
}
