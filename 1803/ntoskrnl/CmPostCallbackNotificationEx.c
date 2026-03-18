/*
 * XREFs of CmPostCallbackNotificationEx @ 0x14049EC90
 * Callers:
 *     NtDeleteValueKey @ 0x14049ACA0 (NtDeleteValueKey.c)
 *     CmLoadDifferencingKey @ 0x14049ED68 (CmLoadDifferencingKey.c)
 *     NtSetValueKey @ 0x1404A3E60 (NtSetValueKey.c)
 *     CmpSecurityMethod @ 0x1404A6510 (CmpSecurityMethod.c)
 *     CmUnloadKey @ 0x14054CB34 (CmUnloadKey.c)
 *     NtQueryMultipleValueKey @ 0x1405615AC (NtQueryMultipleValueKey.c)
 *     NtDeleteKey @ 0x14056D9C4 (NtDeleteKey.c)
 *     NtFlushKey @ 0x14057A130 (NtFlushKey.c)
 *     CmpParseKey @ 0x14059EF70 (CmpParseKey.c)
 *     NtRenameKey @ 0x1406EC3E0 (NtRenameKey.c)
 *     NtReplaceKey @ 0x1406EC954 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x1406ECCC8 (NtRestoreKey.c)
 *     NtSaveKeyEx @ 0x1406ECF78 (NtSaveKeyEx.c)
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x1400FDA10 (ExIsResourceAcquiredSharedLite.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     CmpCallCallBacksEx @ 0x1405A7050 (CmpCallCallBacksEx.c)
 */

__int64 __fastcall CmPostCallbackNotificationEx(
        int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  _QWORD v11[2]; // [rsp+48h] [rbp-19h] BYREF
  _QWORD v12[8]; // [rsp+58h] [rbp-9h] BYREF

  if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) || (_QWORD *)*a6 == a6 )
    return a3;
  memset(v12, 0, 0x38uLL);
  v11[0] = v12;
  v11[1] = a5;
  v12[0] = a2;
  LODWORD(v12[1]) = a3;
  LODWORD(v12[3]) = a3;
  v12[2] = a4;
  CmpCallCallBacksEx(a1, (unsigned int)v12, (unsigned __int64)v11 & -(__int64)(a5 != 0), 0, a1, a2, (__int64)a6);
  return LODWORD(v12[3]);
}
