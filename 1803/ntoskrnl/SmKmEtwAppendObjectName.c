/*
 * XREFs of SmKmEtwAppendObjectName @ 0x1402A7078
 * Callers:
 *     SmKmStoreTerminateWorker @ 0x1402A7610 (SmKmStoreTerminateWorker.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140064E8C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     IoSetThreadHardErrorMode @ 0x14006CE40 (IoSetThreadHardErrorMode.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ObQueryNameString @ 0x1405747E0 (ObQueryNameString.c)
 */

__int64 __fastcall SmKmEtwAppendObjectName(__int64 a1, unsigned __int64 DeviceAttachmentBaseRefWithTag)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // r14d
  void *v7; // r13
  _OBJECT_NAME_INFORMATION *v8; // rdi
  ULONG v9; // r14d
  void *v10; // rsi
  BOOLEAN v11; // r15
  NTSTATUS v12; // ebx
  wchar_t *Buffer; // rdx
  unsigned __int16 v14; // bx
  unsigned __int16 *v15; // rcx
  unsigned __int16 **v16; // rax
  __int64 v17; // rdx
  __int64 result; // rax
  _QWORD *v19; // rdx
  ULONG ReturnLength; // [rsp+20h] [rbp-68h] BYREF
  _OWORD Src[2]; // [rsp+28h] [rbp-60h] BYREF

  v4 = *(unsigned int *)(a1 + 24);
  v5 = v4 + *(_QWORD *)(a1 + 8);
  v6 = *(_DWORD *)(a1 + 28) - v4;
  Src[0] = *(_OWORD *)L"\\Device\\Unknown";
  v7 = (void *)(v5 + 2);
  v8 = (_OBJECT_NAME_INFORMATION *)((v5 + 9) & 0xFFFFFFFFFFFFFFF8uLL);
  v9 = v5 + v6 - (_DWORD)v8;
  Src[1] = *(_OWORD *)L"Unknown";
  RtlInitUnicodeString(&v8->Name, 0LL);
  if ( (DeviceAttachmentBaseRefWithTag & 1) != 0 )
  {
    DeviceAttachmentBaseRefWithTag = (unsigned __int64)IoGetDeviceAttachmentBaseRefWithTag(
                                                         DeviceAttachmentBaseRefWithTag & 0xFFFFFFFFFFFFFFFEuLL,
                                                         0x746C6644u);
    v10 = (void *)DeviceAttachmentBaseRefWithTag;
  }
  else
  {
    v10 = 0LL;
  }
  if ( DeviceAttachmentBaseRefWithTag )
  {
    v11 = IoSetThreadHardErrorMode(0);
    v12 = ObQueryNameString((PVOID)DeviceAttachmentBaseRefWithTag, v8, v9, &ReturnLength);
    if ( v10 )
      ObfDereferenceObjectWithTag(v10, 0x746C6644u);
    IoSetThreadHardErrorMode(v11);
  }
  else
  {
    v12 = -1073741809;
  }
  if ( v12 >= 0 && v8->Name.Length )
  {
    Buffer = v8->Name.Buffer;
    v14 = v8->Name.Length >> 1;
  }
  else
  {
    Buffer = (wchar_t *)Src;
    v14 = 15;
  }
  memmove(v7, Buffer, 2LL * v14);
  v15 = (unsigned __int16 *)(*(_QWORD *)(a1 + 8) + *(unsigned int *)(a1 + 24));
  *v15 = v14;
  v16 = (unsigned __int16 **)(*(_QWORD *)a1 + 16LL * *(unsigned int *)(a1 + 16));
  *v16 = v15;
  v16[1] = (unsigned __int16 *)2;
  v17 = (unsigned int)++*(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 24) += 2;
  result = *(_QWORD *)(a1 + 8) + *(unsigned int *)(a1 + 24);
  v19 = (_QWORD *)(*(_QWORD *)a1 + 16 * v17);
  LODWORD(v15) = 2 * v14;
  *v19 = result;
  v19[1] = (unsigned int)v15;
  ++*(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 24) += (_DWORD)v15;
  return result;
}
