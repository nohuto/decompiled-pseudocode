/*
 * XREFs of IopRevokeFileObjectForProcess @ 0x1401F520C
 * Callers:
 *     IopCheckHandleForRevocation @ 0x1401F4EF0 (IopCheckHandleForRevocation.c)
 * Callees:
 *     IopCancelIrpsInFileObjectList @ 0x140018980 (IopCancelIrpsInFileObjectList.c)
 *     IopSetFileObjectExtensionFlag @ 0x1401F46EC (IopSetFileObjectExtensionFlag.c)
 */

__int64 __fastcall IopRevokeFileObjectForProcess(__int64 a1, int a2)
{
  if ( (unsigned int)IopSetFileObjectExtensionFlag(a1, 4, 1) == -1073741670 )
    *(_QWORD *)(a1 + 208) = IopRevocationExtension;
  IopCancelIrpsInFileObjectList(a1, a2, 0, 0, 0, 0);
  return IopCancelIrpsInThreadListForCurrentProcess(a1, 0LL);
}
