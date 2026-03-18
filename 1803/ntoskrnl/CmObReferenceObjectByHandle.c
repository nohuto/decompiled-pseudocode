/*
 * XREFs of CmObReferenceObjectByHandle @ 0x1404A48AC
 * Callers:
 *     NtDeleteValueKey @ 0x14049ACA0 (NtDeleteValueKey.c)
 *     CmLoadDifferencingKey @ 0x14049ED68 (CmLoadDifferencingKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x1404A26F0 (NtNotifyChangeMultipleKeys.c)
 *     NtSetValueKey @ 0x1404A3E60 (NtSetValueKey.c)
 *     NtQueryMultipleValueKey @ 0x1405615AC (NtQueryMultipleValueKey.c)
 *     NtDeleteKey @ 0x14056D9C4 (NtDeleteKey.c)
 *     NtFlushKey @ 0x14057A130 (NtFlushKey.c)
 *     NtLockRegistryKey @ 0x140645CA0 (NtLockRegistryKey.c)
 *     CmpSaveBootControlSet @ 0x1406EB510 (CmpSaveBootControlSet.c)
 *     NtCompactKeys @ 0x1406EBADC (NtCompactKeys.c)
 *     NtCompressKey @ 0x1406EBDBC (NtCompressKey.c)
 *     NtRenameKey @ 0x1406EC3E0 (NtRenameKey.c)
 *     NtReplaceKey @ 0x1406EC954 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x1406ECCC8 (NtRestoreKey.c)
 *     NtSaveKeyEx @ 0x1406ECF78 (NtSaveKeyEx.c)
 *     NtSaveMergedKeys @ 0x1406ED214 (NtSaveMergedKeys.c)
 *     CmpOpenSystemDriverHiveContext @ 0x1408B7BC8 (CmpOpenSystemDriverHiveContext.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall CmObReferenceObjectByHandle(
        void *a1,
        ACCESS_MASK a2,
        void *a3,
        KPROCESSOR_MODE a4,
        PVOID *a5,
        struct _OBJECT_HANDLE_INFORMATION *a6)
{
  NTSTATUS v6; // eax
  PVOID *v7; // rdi
  unsigned int v8; // ebx
  _DWORD *v9; // rcx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  Object = a3;
  v6 = ObReferenceObjectByHandle(a1, a2, (POBJECT_TYPE)CmKeyObjectType, a4, &Object, a6);
  v7 = a5;
  v8 = v6;
  v9 = Object;
  *a5 = Object;
  if ( v6 >= 0 && *v9 != 1803104306 )
  {
    v8 = -1073741816;
    ObfDereferenceObject(v9);
    *v7 = 0LL;
  }
  return v8;
}
