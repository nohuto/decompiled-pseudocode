/*
 * XREFs of IopRevokeFileObjectForProcess @ 0x1401FAF80
 * Callers:
 *     IopCheckHandleForRevocation @ 0x1401FACF0 (IopCheckHandleForRevocation.c)
 * Callees:
 *     IopCancelIrpsInFileObjectList @ 0x1401082AC (IopCancelIrpsInFileObjectList.c)
 *     IopSetFileObjectExtensionFlag @ 0x1401FA25C (IopSetFileObjectExtensionFlag.c)
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x1404D6FA4 (IopCancelIrpsInThreadListForCurrentProcess.c)
 */

__int64 __fastcall IopRevokeFileObjectForProcess(__int64 a1, int a2)
{
  if ( (unsigned int)IopSetFileObjectExtensionFlag(a1, 4, 1) == -1073741670 )
    *(_QWORD *)(a1 + 208) = IopRevocationExtension;
  IopCancelIrpsInFileObjectList(a1, a2, 0, 0, 0, 0);
  return IopCancelIrpsInThreadListForCurrentProcess(a1, 0LL);
}
