/*
 * XREFs of CmpCreateRegistryRoot @ 0x1408B0FCC
 * Callers:
 *     CmInitSystem1 @ 0x1408B04E0 (CmInitSystem1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     CmpCreateKeyControlBlock @ 0x1404AB0E0 (CmpCreateKeyControlBlock.c)
 *     ObCloseHandle @ 0x1404B5DD0 (ObCloseHandle.c)
 *     ObInsertObject @ 0x1404BF190 (ObInsertObject.c)
 *     CmpHashUnicodeComponent @ 0x1405132A0 (CmpHashUnicodeComponent.c)
 *     ObCreateObject @ 0x140544A50 (ObCreateObject.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     EnlistKeyBodyWithKCB @ 0x14062E454 (EnlistKeyBodyWithKCB.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14062F244 (CmpHiveRootSecurityDescriptor.c)
 *     CmpCreateRootNode @ 0x1408B1290 (CmpCreateRootNode.c)
 */

char __fastcall CmpCreateRegistryRoot(__int64 a1, __int64 a2)
{
  ACL *v2; // rdi
  int v3; // ebx
  __int64 v4; // r8
  __int64 v5; // r9
  _QWORD *v6; // rcx
  __int64 v7; // rax
  _DWORD *v8; // rbx
  NTSTATUS v9; // eax
  __int64 v11; // [rsp+30h] [rbp-39h]
  __int64 v12; // [rsp+38h] [rbp-31h]
  PVOID v13; // [rsp+50h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-11h] BYREF
  int v15; // [rsp+68h] [rbp-1h] BYREF
  __int64 v16; // [rsp+70h] [rbp+7h]
  UNICODE_STRING *v17; // [rsp+78h] [rbp+Fh]
  int v18; // [rsp+80h] [rbp+17h]
  ACL *v19; // [rsp+88h] [rbp+1Fh]
  __int64 v20; // [rsp+90h] [rbp+27h]
  int v21; // [rsp+D0h] [rbp+67h] BYREF
  PVOID Object; // [rsp+D8h] [rbp+6Fh] BYREF
  HANDLE Handle; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v24; // [rsp+E8h] [rbp+7Fh] BYREF

  if ( (unsigned __int8)CmpCreateRootNode(a1, a2, &v21) )
  {
    v2 = CmpHiveRootSecurityDescriptor();
    v15 = 48;
    v16 = 0LL;
    v17 = &CmRegistryRootName;
    v18 = 576;
    v19 = v2;
    v20 = 0LL;
    v3 = ObCreateObject(0, CmKeyObjectType, (int)&v15, 0, 0, 96, 0, 0, &Object);
    ExFreePoolWithTag(v2, 0);
    if ( v3 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"REGISTRY");
      LODWORD(v12) = 0;
      LODWORD(v11) = CmpHashUnicodeComponent((__m128i *)&DestinationString);
      if ( (int)CmpCreateKeyControlBlock(
                  (__int64)CmpMasterHive,
                  v21,
                  0LL,
                  0LL,
                  0,
                  &DestinationString.Length,
                  v11,
                  v12,
                  &v24) >= 0 )
      {
        v6 = Object;
        v7 = v24;
        *(_DWORD *)Object = 1803104306;
        v6[1] = v7;
        v6[2] = 0LL;
        v8 = Object;
        *((_QWORD *)Object + 3) = KeGetCurrentThread()[1].CycleTime;
        v8[12] = 0;
        *((_QWORD *)v8 + 10) = v8 + 18;
        *((_QWORD *)v8 + 9) = v8 + 18;
        EnlistKeyBodyWithKCB((ULONG_PTR *)v8, 0LL, v4, v5);
        *((_QWORD *)v8 + 7) = 0LL;
        *((_QWORD *)v8 + 8) = 0LL;
        if ( ObInsertObject(v8, 0LL, 0, 0, 0LL, &Handle) >= 0 )
        {
          v9 = ObReferenceObjectByHandle(Handle, 0x20019u, 0LL, 0, &v13, 0LL);
          CmpRegistryRootObject = v13;
          if ( v9 >= 0 )
            return 1;
          ObCloseHandle(Handle, 0);
        }
      }
    }
  }
  return 0;
}
