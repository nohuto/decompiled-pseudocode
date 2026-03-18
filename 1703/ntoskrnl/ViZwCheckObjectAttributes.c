/*
 * XREFs of ViZwCheckObjectAttributes @ 0x140787D18
 * Callers:
 *     VfZwAlpcAcceptConnectPort @ 0x140783990 (VfZwAlpcAcceptConnectPort.c)
 *     VfZwAlpcConnectPort @ 0x140783A80 (VfZwAlpcConnectPort.c)
 *     VfZwAlpcCreatePort @ 0x140783BD0 (VfZwAlpcCreatePort.c)
 *     VfZwCreateDirectoryObject @ 0x140784280 (VfZwCreateDirectoryObject.c)
 *     VfZwCreateEnlistment @ 0x1407842F0 (VfZwCreateEnlistment.c)
 *     VfZwCreateEvent @ 0x1407843A0 (VfZwCreateEvent.c)
 *     VfZwCreateFile @ 0x140784430 (VfZwCreateFile.c)
 *     VfZwCreateJobObject @ 0x140784530 (VfZwCreateJobObject.c)
 *     VfZwCreateKey @ 0x1407845A0 (VfZwCreateKey.c)
 *     VfZwCreateSection @ 0x140784670 (VfZwCreateSection.c)
 *     VfZwCreateSymbolicLinkObject @ 0x140784730 (VfZwCreateSymbolicLinkObject.c)
 *     VfZwCreateTimer @ 0x1407847C0 (VfZwCreateTimer.c)
 *     VfZwCreateTransaction @ 0x140784850 (VfZwCreateTransaction.c)
 *     VfZwCreateTransactionManager @ 0x140784950 (VfZwCreateTransactionManager.c)
 *     VfZwDeleteFile @ 0x140784A30 (VfZwDeleteFile.c)
 *     VfZwDuplicateToken @ 0x140784C90 (VfZwDuplicateToken.c)
 *     VfZwLoadKey @ 0x1407851F0 (VfZwLoadKey.c)
 *     VfZwOpenDirectoryObject @ 0x1407854D0 (VfZwOpenDirectoryObject.c)
 *     VfZwOpenEnlistment @ 0x140785540 (VfZwOpenEnlistment.c)
 *     VfZwOpenEvent @ 0x1407855D0 (VfZwOpenEvent.c)
 *     VfZwOpenFile @ 0x140785640 (VfZwOpenFile.c)
 *     VfZwOpenJobObject @ 0x1407856E0 (VfZwOpenJobObject.c)
 *     VfZwOpenKey @ 0x140785750 (VfZwOpenKey.c)
 *     VfZwOpenProcess @ 0x1407857C0 (VfZwOpenProcess.c)
 *     VfZwOpenSection @ 0x140785920 (VfZwOpenSection.c)
 *     VfZwOpenSymbolicLinkObject @ 0x140785990 (VfZwOpenSymbolicLinkObject.c)
 *     VfZwOpenThread @ 0x140785A00 (VfZwOpenThread.c)
 *     VfZwOpenTimer @ 0x140785B80 (VfZwOpenTimer.c)
 *     VfZwOpenTransaction @ 0x140785BF0 (VfZwOpenTransaction.c)
 *     VfZwOpenTransactionManager @ 0x140785C90 (VfZwOpenTransactionManager.c)
 *     VfZwQueryFullAttributesFile @ 0x140786400 (VfZwQueryFullAttributesFile.c)
 *     VfZwReplaceKey @ 0x140787000 (VfZwReplaceKey.c)
 *     VfZwUnloadKey @ 0x140787A80 (VfZwUnloadKey.c)
 * Callees:
 *     ViZwCheckUnicodeString @ 0x140787D68 (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x140787DFC (ViZwCheckVirtualAddress.c)
 */

__int64 __fastcall ViZwCheckObjectAttributes(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 )
  {
    ViZwCheckVirtualAddress(a1, a2);
    ViZwCheckUnicodeString(a1[2], a2);
    ViZwCheckVirtualAddress(a1[4], a2);
    return ViZwCheckVirtualAddress(a1[5], a2);
  }
  return result;
}
