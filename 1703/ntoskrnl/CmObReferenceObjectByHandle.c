/*
 * XREFs of CmObReferenceObjectByHandle @ 0x14048F490
 * Callers:
 *     NtQueryMultipleValueKey @ 0x140448D38 (NtQueryMultipleValueKey.c)
 *     NtFlushKey @ 0x140455BC8 (NtFlushKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x14048E630 (NtNotifyChangeMultipleKeys.c)
 *     NtSetValueKey @ 0x14048EDA0 (NtSetValueKey.c)
 *     NtDeleteValueKey @ 0x1404CE698 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x1404CF43C (NtDeleteKey.c)
 *     CmLoadDifferencingKey @ 0x1404D48BC (CmLoadDifferencingKey.c)
 *     NtLockRegistryKey @ 0x1405C63D8 (NtLockRegistryKey.c)
 *     NtCompactKeys @ 0x14065E844 (NtCompactKeys.c)
 *     NtCompressKey @ 0x14065EA94 (NtCompressKey.c)
 *     NtRenameKey @ 0x14065F2B4 (NtRenameKey.c)
 *     NtReplaceKey @ 0x14065F7EC (NtReplaceKey.c)
 *     NtRestoreKey @ 0x14065FA60 (NtRestoreKey.c)
 *     NtSaveKeyEx @ 0x14065FD04 (NtSaveKeyEx.c)
 *     NtSaveMergedKeys @ 0x14065FF88 (NtSaveMergedKeys.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
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
