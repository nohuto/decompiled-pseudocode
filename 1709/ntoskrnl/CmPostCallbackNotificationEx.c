/*
 * XREFs of CmPostCallbackNotificationEx @ 0x1404E32E0
 * Callers:
 *     CmUnloadKey @ 0x14046DF74 (CmUnloadKey.c)
 *     NtDeleteKey @ 0x14047207C (NtDeleteKey.c)
 *     NtDeleteValueKey @ 0x140474B2C (NtDeleteValueKey.c)
 *     NtSetValueKey @ 0x14047AFF0 (NtSetValueKey.c)
 *     CmpSecurityMethod @ 0x1404832A0 (CmpSecurityMethod.c)
 *     CmpParseKey @ 0x1404A9210 (CmpParseKey.c)
 *     CmLoadDifferencingKey @ 0x1404E2048 (CmLoadDifferencingKey.c)
 *     CmPostCallbackNotification @ 0x1404E32B8 (CmPostCallbackNotification.c)
 *     NtQueryMultipleValueKey @ 0x140580F4C (NtQueryMultipleValueKey.c)
 *     NtFlushKey @ 0x14059294C (NtFlushKey.c)
 *     NtRenameKey @ 0x14068812C (NtRenameKey.c)
 *     NtReplaceKey @ 0x14068866C (NtReplaceKey.c)
 *     NtRestoreKey @ 0x1406889E0 (NtRestoreKey.c)
 *     NtSaveKeyEx @ 0x140688C8C (NtSaveKeyEx.c)
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x140081010 (ExIsResourceAcquiredSharedLite.c)
 *     memset @ 0x140192F40 (memset.c)
 *     CmpCallCallBacksEx @ 0x1404B3FE0 (CmpCallCallBacksEx.c)
 */

__int64 __fastcall CmPostCallbackNotificationEx(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        _SLIST_ENTRY *a6)
{
  _QWORD *v10; // r8
  _QWORD v12[2]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v13[8]; // [rsp+50h] [rbp-48h] BYREF

  if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) || a6->Next == a6 )
    return a3;
  memset(&v13[1], 0, 0x30uLL);
  v12[0] = v13;
  v10 = v12;
  v13[0] = a2;
  LODWORD(v13[1]) = a3;
  if ( !a5 )
    v10 = 0LL;
  LODWORD(v13[3]) = a3;
  v13[2] = a4;
  v12[1] = a5;
  CmpCallCallBacksEx(a1, (__int64)v13, (__int64)v10, 0, a1, a2, a6);
  return LODWORD(v13[3]);
}
