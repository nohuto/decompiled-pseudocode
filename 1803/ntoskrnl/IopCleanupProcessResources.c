/*
 * XREFs of IopCleanupProcessResources @ 0x14055C5BC
 * Callers:
 *     IopCloseFile @ 0x1405B12E0 (IopCloseFile.c)
 * Callees:
 *     IopCancelIrpsInFileObjectList @ 0x1400B677C (IopCancelIrpsInFileObjectList.c)
 *     IopCleanupFileObjectIosbRange @ 0x1407197B8 (IopCleanupFileObjectIosbRange.c)
 */

__int64 __fastcall IopCleanupProcessResources(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = IopCancelIrpsInFileObjectList(a1, a2, 0, 0, 1, 1);
  while ( a3 )
  {
    if ( *(_QWORD *)(a3 + 32) == a2 )
      result = IopCleanupFileObjectIosbRange(a3);
    a3 = *(_QWORD *)(a3 + 40);
  }
  return result;
}
