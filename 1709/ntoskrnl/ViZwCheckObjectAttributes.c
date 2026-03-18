/*
 * XREFs of ViZwCheckObjectAttributes @ 0x1407CA17C
 * Callers:
 *     VfZwAlpcAcceptConnectPort @ 0x1407C5D60 (VfZwAlpcAcceptConnectPort.c)
 *     VfZwAlpcConnectPort @ 0x1407C5E50 (VfZwAlpcConnectPort.c)
 *     VfZwAlpcCreatePort @ 0x1407C5FA0 (VfZwAlpcCreatePort.c)
 *     VfZwCreateDirectoryObject @ 0x1407C6650 (VfZwCreateDirectoryObject.c)
 *     VfZwCreateEnlistment @ 0x1407C66C0 (VfZwCreateEnlistment.c)
 *     VfZwCreateEvent @ 0x1407C6770 (VfZwCreateEvent.c)
 *     VfZwCreateFile @ 0x1407C6800 (VfZwCreateFile.c)
 *     VfZwCreateJobObject @ 0x1407C6900 (VfZwCreateJobObject.c)
 *     VfZwCreateKey @ 0x1407C6970 (VfZwCreateKey.c)
 *     VfZwCreateSection @ 0x1407C6A40 (VfZwCreateSection.c)
 *     VfZwCreateSymbolicLinkObject @ 0x1407C6B00 (VfZwCreateSymbolicLinkObject.c)
 *     VfZwCreateTimer @ 0x1407C6B90 (VfZwCreateTimer.c)
 *     VfZwCreateTransaction @ 0x1407C6C20 (VfZwCreateTransaction.c)
 *     VfZwCreateTransactionManager @ 0x1407C6D20 (VfZwCreateTransactionManager.c)
 *     VfZwDeleteFile @ 0x1407C6DE0 (VfZwDeleteFile.c)
 *     VfZwDuplicateToken @ 0x1407C7040 (VfZwDuplicateToken.c)
 *     VfZwLoadKey @ 0x1407C75C0 (VfZwLoadKey.c)
 *     VfZwOpenDirectoryObject @ 0x1407C78B0 (VfZwOpenDirectoryObject.c)
 *     VfZwOpenEnlistment @ 0x1407C7920 (VfZwOpenEnlistment.c)
 *     VfZwOpenEvent @ 0x1407C79B0 (VfZwOpenEvent.c)
 *     VfZwOpenFile @ 0x1407C7A20 (VfZwOpenFile.c)
 *     VfZwOpenJobObject @ 0x1407C7AC0 (VfZwOpenJobObject.c)
 *     VfZwOpenKey @ 0x1407C7B30 (VfZwOpenKey.c)
 *     VfZwOpenProcess @ 0x1407C7BA0 (VfZwOpenProcess.c)
 *     VfZwOpenSection @ 0x1407C7D00 (VfZwOpenSection.c)
 *     VfZwOpenSymbolicLinkObject @ 0x1407C7D70 (VfZwOpenSymbolicLinkObject.c)
 *     VfZwOpenThread @ 0x1407C7DE0 (VfZwOpenThread.c)
 *     VfZwOpenTimer @ 0x1407C7F60 (VfZwOpenTimer.c)
 *     VfZwOpenTransaction @ 0x1407C7FD0 (VfZwOpenTransaction.c)
 *     VfZwOpenTransactionManager @ 0x1407C8070 (VfZwOpenTransactionManager.c)
 *     VfZwQueryFullAttributesFile @ 0x1407C8810 (VfZwQueryFullAttributesFile.c)
 *     VfZwReplaceKey @ 0x1407C9430 (VfZwReplaceKey.c)
 *     VfZwUnloadKey @ 0x1407C9EE0 (VfZwUnloadKey.c)
 * Callees:
 *     ViZwCheckUnicodeString @ 0x1407CA1CC (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x1407CA264 (ViZwCheckVirtualAddress.c)
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
