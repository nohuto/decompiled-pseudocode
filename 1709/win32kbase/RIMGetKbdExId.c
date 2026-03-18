/*
 * XREFs of RIMGetKbdExId @ 0x1C009A600
 * Callers:
 *     RIMQueryDev @ 0x1C0008CD8 (RIMQueryDev.c)
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x1C000B81C (WPP_RECORDER_SF_S.c)
 *     Win32AllocPoolNonPaged @ 0x1C0024C70 (Win32AllocPoolNonPaged.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

__int64 __fastcall RIMGetKbdExId(HANDLE FileHandle, _QWORD *a2)
{
  NTSTATUS v4; // ebx
  void *v5; // rax
  __int64 v6; // rdi
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
      WPP_RECORDER_SF_S(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x13u,
        0x12u,
        (__int64)&WPP_9161076fa35a349775df2bff3996d00f_Traceguids,
        InstanceName.Buffer);
      InOutBufferSize = 0;
      IoWMIQuerySingleInstance(DataBlockObject, &InstanceName, &InOutBufferSize, 0LL);
      InOutBufferSize += 8;
      v5 = (void *)Win32AllocPoolNonPaged(InOutBufferSize, 0x656B7352u);
      v6 = (__int64)v5;
      if ( v5 )
      {
        v4 = IoWMIQuerySingleInstance(DataBlockObject, &InstanceName, &InOutBufferSize, v5);
        if ( v4 >= 0 )
          *a2 = *(_QWORD *)(*(unsigned int *)(v6 + 56) + v6);
        Win32FreePool(v6);
      }
      RtlFreeUnicodeString(&InstanceName);
    }
    ObfDereferenceObject(DataBlockObject);
  }
  return (unsigned int)v4;
}
