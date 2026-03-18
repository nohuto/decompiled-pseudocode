/*
 * XREFs of IopSetFileObjectExtensionFlag @ 0x1401FA25C
 * Callers:
 *     IopCheckInitiatorHint @ 0x140062424 (IopCheckInitiatorHint.c)
 *     IopRevokeFileObjectForProcess @ 0x1401FAF80 (IopRevokeFileObjectForProcess.c)
 *     IoRegisterContainerNotification @ 0x1405ED930 (IoRegisterContainerNotification.c)
 *     IoSetFileObjectIgnoreSharing @ 0x1406B7AC0 (IoSetFileObjectIgnoreSharing.c)
 * Callees:
 *     IopAllocateFileObjectExtension @ 0x140060ED0 (IopAllocateFileObjectExtension.c)
 */

__int64 __fastcall IopSetFileObjectExtensionFlag(__int64 a1, int a2, char a3)
{
  __int64 result; // rax
  _DWORD *v5; // rcx
  _DWORD *v6; // [rsp+48h] [rbp+20h] BYREF

  if ( a3 )
  {
    result = IopAllocateFileObjectExtension(a1, (__int64 *)&v6);
    v5 = v6;
    goto LABEL_5;
  }
  v5 = *(_DWORD **)(a1 + 208);
  if ( !v5 )
  {
    result = 3221226021LL;
LABEL_5:
    if ( (int)result < 0 )
      return result;
  }
  *v5 |= a2;
  return 0LL;
}
