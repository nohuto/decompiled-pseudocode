/*
 * XREFs of CmpCreateRegistryRoot @ 0x140808574
 * Callers:
 *     CmInitSystem1 @ 0x140807ADC (CmInitSystem1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ObCreateObject @ 0x14046F580 (ObCreateObject.c)
 *     ObInsertObject @ 0x140493DC0 (ObInsertObject.c)
 *     CmpHashUnicodeComponent @ 0x1404D2F10 (CmpHashUnicodeComponent.c)
 *     ObCloseHandle @ 0x1404F9C90 (ObCloseHandle.c)
 *     CmpCreateKeyControlBlock @ 0x140502580 (CmpCreateKeyControlBlock.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     EnlistKeyBodyWithKCB @ 0x1405A3D84 (EnlistKeyBodyWithKCB.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1405A4DF0 (CmpHiveRootSecurityDescriptor.c)
 *     CmpCreateRootNode @ 0x140808720 (CmpCreateRootNode.c)
 */

char __fastcall CmpCreateRegistryRoot(__int64 a1, __int64 a2)
{
  ACL *v2; // rdi
  int v3; // r9d
  int v4; // ebx
  _QWORD *v5; // rcx
  __int64 v6; // rax
  _DWORD *v7; // rbx
  NTSTATUS v8; // eax
  int v10; // [rsp+30h] [rbp-39h]
  int v11; // [rsp+38h] [rbp-31h]
  PVOID v12; // [rsp+50h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-11h] BYREF
  int v14; // [rsp+68h] [rbp-1h] BYREF
  __int64 v15; // [rsp+70h] [rbp+7h]
  UNICODE_STRING *v16; // [rsp+78h] [rbp+Fh]
  int v17; // [rsp+80h] [rbp+17h]
  ACL *v18; // [rsp+88h] [rbp+1Fh]
  __int64 v19; // [rsp+90h] [rbp+27h]
  int v20; // [rsp+D0h] [rbp+67h] BYREF
  PVOID Object; // [rsp+D8h] [rbp+6Fh]
  HANDLE Handle; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v23; // [rsp+E8h] [rbp+7Fh] BYREF

  if ( (unsigned __int8)CmpCreateRootNode(a1, a2, &v20) )
  {
    v2 = CmpHiveRootSecurityDescriptor();
    v14 = 48;
    v15 = 0LL;
    v16 = &CmRegistryRootName;
    LOBYTE(v3) = 1;
    v17 = 64;
    v18 = v2;
    v19 = 0LL;
    v4 = ObCreateObject(0, (int)CmKeyObjectType, (int)&v14, v3);
    ExFreePoolWithTag(v2, 0);
    if ( v4 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"REGISTRY");
      v11 = 0;
      v10 = CmpHashUnicodeComponent((__m128i *)&DestinationString);
      if ( (int)CmpCreateKeyControlBlock(CmpMasterHive, v20, 0LL, 0LL, 0, &DestinationString.Length, v10, v11, &v23) >= 0 )
      {
        v5 = Object;
        v6 = v23;
        *(_DWORD *)Object = 1803104306;
        v5[1] = v6;
        v5[2] = 0LL;
        v7 = Object;
        *((_QWORD *)Object + 3) = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
        v7[12] = 0;
        *((_QWORD *)v7 + 10) = v7 + 18;
        *((_QWORD *)v7 + 9) = v7 + 18;
        EnlistKeyBodyWithKCB((__int64 *)v7, 0);
        *((_QWORD *)v7 + 7) = 0LL;
        *((_QWORD *)v7 + 8) = 0LL;
        if ( ObInsertObject(v7, 0LL, 0, 0, 0LL, &Handle) >= 0 )
        {
          v8 = ObReferenceObjectByHandle(Handle, 0x20019u, 0LL, 0, &v12, 0LL);
          CmpRegistryRootObject = v12;
          if ( v8 >= 0 )
            return 1;
          ObCloseHandle(Handle, 0);
        }
      }
    }
  }
  return 0;
}
