/*
 * XREFs of CmpCreateRegistryRoot @ 0x14083C9A8
 * Callers:
 *     CmInitSystem1 @ 0x14083BF10 (CmInitSystem1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ObCreateObject @ 0x14045D000 (ObCreateObject.c)
 *     CmpHashUnicodeComponent @ 0x140474458 (CmpHashUnicodeComponent.c)
 *     CmpCreateKeyControlBlock @ 0x140480870 (CmpCreateKeyControlBlock.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1404D4BB0 (ObCloseHandle.c)
 *     ObInsertObject @ 0x1404FA190 (ObInsertObject.c)
 *     EnlistKeyBodyWithKCB @ 0x1405C098C (EnlistKeyBodyWithKCB.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1405C1760 (CmpHiveRootSecurityDescriptor.c)
 *     CmpCreateRootNode @ 0x14083CC6C (CmpCreateRootNode.c)
 */

char __fastcall CmpCreateRegistryRoot(__int64 a1, __int64 a2)
{
  ACL *v2; // rdi
  int v3; // ebx
  _QWORD *v4; // rcx
  __int64 v5; // rax
  _DWORD *v6; // rbx
  NTSTATUS v7; // eax
  int v9; // [rsp+30h] [rbp-39h]
  int v10; // [rsp+38h] [rbp-31h]
  PVOID v11; // [rsp+50h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-11h] BYREF
  int v13; // [rsp+68h] [rbp-1h] BYREF
  __int64 v14; // [rsp+70h] [rbp+7h]
  UNICODE_STRING *v15; // [rsp+78h] [rbp+Fh]
  int v16; // [rsp+80h] [rbp+17h]
  ACL *v17; // [rsp+88h] [rbp+1Fh]
  __int64 v18; // [rsp+90h] [rbp+27h]
  int v19; // [rsp+D0h] [rbp+67h] BYREF
  PVOID Object; // [rsp+D8h] [rbp+6Fh]
  HANDLE Handle; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v22; // [rsp+E8h] [rbp+7Fh] BYREF

  if ( (unsigned __int8)CmpCreateRootNode(a1, a2, &v19) )
  {
    v2 = CmpHiveRootSecurityDescriptor();
    v13 = 48;
    v14 = 0LL;
    v15 = &CmRegistryRootName;
    v16 = 64;
    v17 = v2;
    v18 = 0LL;
    v3 = ObCreateObject(0, (int)CmKeyObjectType, (int)&v13, 1);
    ExFreePoolWithTag(v2, 0);
    if ( v3 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"REGISTRY");
      v10 = 0;
      v9 = CmpHashUnicodeComponent((__m128i *)&DestinationString);
      if ( (int)CmpCreateKeyControlBlock(
                  (__int64)CmpMasterHive,
                  v19,
                  0LL,
                  0LL,
                  0,
                  &DestinationString.Length,
                  v9,
                  v10,
                  &v22) >= 0 )
      {
        v4 = Object;
        v5 = v22;
        *(_DWORD *)Object = 1803104306;
        v4[1] = v5;
        v4[2] = 0LL;
        v6 = Object;
        *((_QWORD *)Object + 3) = KeGetCurrentThread()[1].CycleTime;
        v6[12] = 0;
        *((_QWORD *)v6 + 10) = v6 + 18;
        *((_QWORD *)v6 + 9) = v6 + 18;
        EnlistKeyBodyWithKCB((ULONG_PTR *)v6, 0);
        *((_QWORD *)v6 + 7) = 0LL;
        *((_QWORD *)v6 + 8) = 0LL;
        if ( ObInsertObject(v6, 0LL, 0, 0, 0LL, &Handle) >= 0 )
        {
          v7 = ObReferenceObjectByHandle(Handle, 0x20019u, 0LL, 0, &v11, 0LL);
          CmpRegistryRootObject = v11;
          if ( v7 >= 0 )
            return 1;
          ObCloseHandle(Handle, 0);
        }
      }
    }
  }
  return 0;
}
