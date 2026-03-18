/*
 * XREFs of RIMGetKbdExId @ 0x1C0092E00
 * Callers:
 *     RIMQueryDev @ 0x1C00953F4 (RIMQueryDev.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C0054B50 (Win32AllocPoolNonPaged.c)
 *     WPP_RECORDER_SF_S @ 0x1C0094FDC (WPP_RECORDER_SF_S.c)
 */

__int64 __fastcall RIMGetKbdExId(HANDLE FileHandle, _QWORD *a2)
{
  NTSTATUS v4; // ebx
  int v5; // edx
  void *v6; // rax
  __int64 v7; // rdi
  struct _UNICODE_STRING InstanceName; // [rsp+30h] [rbp-10h] BYREF
  ULONG InOutBufferSize; // [rsp+70h] [rbp+30h] BYREF
  PVOID DataBlockObject; // [rsp+78h] [rbp+38h] BYREF

  DataBlockObject = 0LL;
  v4 = IoWMIOpenBlock(&MSKeyboard_ExtendedID_GUID, 1u, &DataBlockObject);
  if ( v4 >= 0 )
  {
    v4 = IoWMIHandleToInstanceName(DataBlockObject, FileHandle, &InstanceName);
    if ( v4 >= 0 )
    {
      LOBYTE(v5) = 3;
      WPP_RECORDER_SF_S(
        WPP_GLOBAL_Control->DeviceExtension,
        v5,
        19,
        18,
        (__int64)&WPP_4abad023f51c380e85db81e5a59c95c2_Traceguids,
        (__int64)InstanceName.Buffer);
      InOutBufferSize = 0;
      IoWMIQuerySingleInstance(DataBlockObject, &InstanceName, &InOutBufferSize, 0LL);
      InOutBufferSize += 8;
      v6 = (void *)Win32AllocPoolNonPaged(InOutBufferSize, 0x656B7352u);
      v7 = (__int64)v6;
      if ( v6 )
      {
        v4 = IoWMIQuerySingleInstance(DataBlockObject, &InstanceName, &InOutBufferSize, v6);
        if ( v4 >= 0 )
          *a2 = *(_QWORD *)(*(unsigned int *)(v7 + 56) + v7);
        Win32FreePool(v7);
      }
      RtlFreeUnicodeString(&InstanceName);
    }
    ObfDereferenceObject(DataBlockObject);
  }
  return (unsigned int)v4;
}
