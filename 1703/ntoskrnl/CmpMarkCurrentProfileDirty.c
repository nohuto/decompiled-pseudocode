/*
 * XREFs of CmpMarkCurrentProfileDirty @ 0x1405D2B18
 * Callers:
 *     CmInitSystem1 @ 0x140807ADC (CmInitSystem1.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenKey @ 0x14017E180 (ZwOpenKey.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     CmpFindNameInList @ 0x140490580 (CmpFindNameInList.c)
 *     CmpLockRegistryExclusive @ 0x1404D85A8 (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     HvpMarkCellDirty @ 0x14051559C (HvpMarkCellDirty.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS CmpMarkCurrentProfileDirty()
{
  NTSTATUS result; // eax
  NTSTATUS v1; // ebx
  _QWORD *v2; // rbx
  __int64 v3; // rax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  PVOID Object; // [rsp+70h] [rbp+10h] BYREF
  int v6; // [rsp+78h] [rbp+18h] BYREF
  int v7; // [rsp+7Ch] [rbp+1Ch]
  HANDLE KeyHandle; // [rsp+80h] [rbp+20h] BYREF

  v6 = -1;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  v7 = 0;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"z|";
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    v1 = ObReferenceObjectByHandle(KeyHandle, 0x20019u, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
    result = ZwClose(KeyHandle);
    if ( v1 >= 0 )
    {
      CmpLockRegistryExclusive();
      v2 = Object;
      v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(*((_QWORD *)Object + 1) + 24LL) + 8LL))(
             *(_QWORD *)(*((_QWORD *)Object + 1) + 24LL),
             *(unsigned int *)(*((_QWORD *)Object + 1) + 32LL),
             &v6);
      if ( v3 )
      {
        CmpFindNameInList(*(_QWORD *)(v2[1] + 24LL), v3 + 36, (int)&CmpCurrentConfigString, 0, 0LL, (__int64)&Object);
        (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(v2[1] + 24LL) + 16LL))(*(_QWORD *)(v2[1] + 24LL), &v6);
        if ( (_DWORD)Object != -1 )
          HvpMarkCellDirty(*(_QWORD *)(v2[1] + 24LL), (unsigned int)Object, 1);
      }
      CmpUnlockRegistry();
      return ObfDereferenceObject(v2);
    }
  }
  return result;
}
