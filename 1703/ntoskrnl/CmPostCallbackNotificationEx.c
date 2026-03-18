/*
 * XREFs of CmPostCallbackNotificationEx @ 0x1404346B0
 * Callers:
 *     NtQueryMultipleValueKey @ 0x140448D38 (NtQueryMultipleValueKey.c)
 *     NtFlushKey @ 0x140455BC8 (NtFlushKey.c)
 *     NtSetValueKey @ 0x14048EDA0 (NtSetValueKey.c)
 *     CmUnloadKey @ 0x1404CB114 (CmUnloadKey.c)
 *     NtDeleteValueKey @ 0x1404CE698 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x1404CF43C (NtDeleteKey.c)
 *     CmLoadDifferencingKey @ 0x1404D48BC (CmLoadDifferencingKey.c)
 *     CmpQueryKeyName @ 0x1404FC190 (CmpQueryKeyName.c)
 *     CmpSecurityMethod @ 0x1404FCC50 (CmpSecurityMethod.c)
 *     CmpParseKey @ 0x1405080E0 (CmpParseKey.c)
 *     NtRenameKey @ 0x14065F2B4 (NtRenameKey.c)
 *     NtReplaceKey @ 0x14065F7EC (NtReplaceKey.c)
 *     NtRestoreKey @ 0x14065FA60 (NtRestoreKey.c)
 *     NtSaveKeyEx @ 0x14065FD04 (NtSaveKeyEx.c)
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x14008D480 (ExIsResourceAcquiredSharedLite.c)
 *     memset @ 0x140192D80 (memset.c)
 *     CmpCallCallBacksEx @ 0x140533C00 (CmpCallCallBacksEx.c)
 */

__int64 __fastcall CmPostCallbackNotificationEx(
        int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  _QWORD *v10; // r8
  _QWORD v12[2]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v13[8]; // [rsp+50h] [rbp-48h] BYREF

  if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) || (_QWORD *)*a6 == a6 )
    return a3;
  memset(&v13[1], 0, 0x30uLL);
  v12[0] = v13;
  v10 = v12;
  v13[0] = a2;
  LODWORD(v13[1]) = a3;
  if ( !a5 )
    LODWORD(v10) = 0;
  LODWORD(v13[3]) = a3;
  v13[2] = a4;
  v12[1] = a5;
  CmpCallCallBacksEx(a1, (unsigned int)v13, (_DWORD)v10, 0, a1, a2, (__int64)a6);
  return LODWORD(v13[3]);
}
