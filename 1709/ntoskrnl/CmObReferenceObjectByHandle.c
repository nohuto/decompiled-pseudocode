/*
 * XREFs of CmObReferenceObjectByHandle @ 0x14047AF90
 * Callers:
 *     NtDeleteKey @ 0x14047207C (NtDeleteKey.c)
 *     NtDeleteValueKey @ 0x140474B2C (NtDeleteValueKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x14047A598 (NtNotifyChangeMultipleKeys.c)
 *     NtSetValueKey @ 0x14047AFF0 (NtSetValueKey.c)
 *     CmLoadDifferencingKey @ 0x1404E2048 (CmLoadDifferencingKey.c)
 *     NtQueryMultipleValueKey @ 0x140580F4C (NtQueryMultipleValueKey.c)
 *     NtFlushKey @ 0x14059294C (NtFlushKey.c)
 *     CmpSaveBootControlSet @ 0x1405A4B40 (CmpSaveBootControlSet.c)
 *     NtLockRegistryKey @ 0x1405D9034 (NtLockRegistryKey.c)
 *     NtCompactKeys @ 0x1406876C0 (NtCompactKeys.c)
 *     NtCompressKey @ 0x140687910 (NtCompressKey.c)
 *     NtRenameKey @ 0x14068812C (NtRenameKey.c)
 *     NtReplaceKey @ 0x14068866C (NtReplaceKey.c)
 *     NtRestoreKey @ 0x1406889E0 (NtRestoreKey.c)
 *     NtSaveKeyEx @ 0x140688C8C (NtSaveKeyEx.c)
 *     NtSaveMergedKeys @ 0x140688F10 (NtSaveMergedKeys.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
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
