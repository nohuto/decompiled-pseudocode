/*
 * XREFs of IopRevokeFileObjectForProcess @ 0x140237D18
 * Callers:
 *     IopCheckHandleForRevocation @ 0x140237A90 (IopCheckHandleForRevocation.c)
 * Callees:
 *     IopAllocateFileObjectExtension @ 0x140069670 (IopAllocateFileObjectExtension.c)
 *     IopCancelIrpsInFileObjectList @ 0x1400B677C (IopCancelIrpsInFileObjectList.c)
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x1404E447C (IopCancelIrpsInThreadListForCurrentProcess.c)
 */

__int64 __fastcall IopRevokeFileObjectForProcess(__int64 a1, int a2)
{
  int FileObjectExtension; // eax
  _DWORD *v6; // [rsp+50h] [rbp+18h] BYREF

  FileObjectExtension = IopAllocateFileObjectExtension(a1, (__int64 *)&v6);
  if ( FileObjectExtension >= 0 )
  {
    *v6 |= 4u;
    FileObjectExtension = 0;
  }
  if ( FileObjectExtension == -1073741670 )
    *(_QWORD *)(a1 + 208) = IopRevocationExtension;
  IopCancelIrpsInFileObjectList(a1, a2, 0, 0, 0, 0);
  return IopCancelIrpsInThreadListForCurrentProcess(a1, 0LL);
}
