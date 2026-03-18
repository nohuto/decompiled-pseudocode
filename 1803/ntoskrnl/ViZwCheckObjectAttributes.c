/*
 * XREFs of ViZwCheckObjectAttributes @ 0x1408376DC
 * Callers:
 *     VfZwAlpcAcceptConnectPort @ 0x1408332C0 (VfZwAlpcAcceptConnectPort.c)
 *     VfZwAlpcConnectPort @ 0x1408333B0 (VfZwAlpcConnectPort.c)
 *     VfZwAlpcCreatePort @ 0x140833500 (VfZwAlpcCreatePort.c)
 *     VfZwCreateDirectoryObject @ 0x140833BB0 (VfZwCreateDirectoryObject.c)
 *     VfZwCreateEnlistment @ 0x140833C20 (VfZwCreateEnlistment.c)
 *     VfZwCreateEvent @ 0x140833CD0 (VfZwCreateEvent.c)
 *     VfZwCreateFile @ 0x140833D60 (VfZwCreateFile.c)
 *     VfZwCreateJobObject @ 0x140833E60 (VfZwCreateJobObject.c)
 *     VfZwCreateKey @ 0x140833ED0 (VfZwCreateKey.c)
 *     VfZwCreateSection @ 0x140833FA0 (VfZwCreateSection.c)
 *     VfZwCreateSymbolicLinkObject @ 0x140834060 (VfZwCreateSymbolicLinkObject.c)
 *     VfZwCreateTimer @ 0x1408340F0 (VfZwCreateTimer.c)
 *     VfZwCreateTransaction @ 0x140834180 (VfZwCreateTransaction.c)
 *     VfZwCreateTransactionManager @ 0x140834280 (VfZwCreateTransactionManager.c)
 *     VfZwDeleteFile @ 0x140834340 (VfZwDeleteFile.c)
 *     VfZwDuplicateToken @ 0x1408345A0 (VfZwDuplicateToken.c)
 *     VfZwLoadKey @ 0x140834B20 (VfZwLoadKey.c)
 *     VfZwOpenDirectoryObject @ 0x140834E10 (VfZwOpenDirectoryObject.c)
 *     VfZwOpenEnlistment @ 0x140834E80 (VfZwOpenEnlistment.c)
 *     VfZwOpenEvent @ 0x140834F10 (VfZwOpenEvent.c)
 *     VfZwOpenFile @ 0x140834F80 (VfZwOpenFile.c)
 *     VfZwOpenJobObject @ 0x140835020 (VfZwOpenJobObject.c)
 *     VfZwOpenKey @ 0x140835090 (VfZwOpenKey.c)
 *     VfZwOpenProcess @ 0x140835100 (VfZwOpenProcess.c)
 *     VfZwOpenSection @ 0x140835260 (VfZwOpenSection.c)
 *     VfZwOpenSymbolicLinkObject @ 0x1408352D0 (VfZwOpenSymbolicLinkObject.c)
 *     VfZwOpenThread @ 0x140835340 (VfZwOpenThread.c)
 *     VfZwOpenTimer @ 0x1408354C0 (VfZwOpenTimer.c)
 *     VfZwOpenTransaction @ 0x140835530 (VfZwOpenTransaction.c)
 *     VfZwOpenTransactionManager @ 0x1408355D0 (VfZwOpenTransactionManager.c)
 *     VfZwQueryFullAttributesFile @ 0x140835D70 (VfZwQueryFullAttributesFile.c)
 *     VfZwReplaceKey @ 0x140836990 (VfZwReplaceKey.c)
 *     VfZwUnloadKey @ 0x140837440 (VfZwUnloadKey.c)
 * Callees:
 *     ViZwCheckUnicodeString @ 0x14083772C (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x1408377C4 (ViZwCheckVirtualAddress.c)
 */

__int64 __fastcall ViZwCheckObjectAttributes(ULONG_PTR *a1, ULONG_PTR a2)
{
  __int64 result; // rax

  if ( a1 )
  {
    ViZwCheckVirtualAddress((ULONG_PTR)a1, a2);
    ViZwCheckUnicodeString(a1[2], a2);
    ViZwCheckVirtualAddress(a1[4], a2);
    return ViZwCheckVirtualAddress(a1[5], a2);
  }
  return result;
}
