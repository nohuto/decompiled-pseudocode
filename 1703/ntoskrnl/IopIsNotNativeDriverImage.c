/*
 * XREFs of IopIsNotNativeDriverImage @ 0x140689768
 * Callers:
 *     IopCheckIfNotNativeDriver @ 0x140688A80 (IopCheckIfNotNativeDriver.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14008BA00 (RtlImageNtHeader.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x14017E440 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x14017E480 (ZwUnmapViewOfSection.c)
 *     ZwOpenFile @ 0x14017E5A0 (ZwOpenFile.c)
 *     ZwCreateSection @ 0x14017E880 (ZwCreateSection.c)
 */

bool __fastcall IopIsNotNativeDriverImage(UNICODE_STRING *a1)
{
  bool v1; // bl
  PIMAGE_NT_HEADERS v3; // rax
  HANDLE FileHandle; // [rsp+58h] [rbp-A0h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp-98h] BYREF
  HANDLE SectionHandle; // [rsp+68h] [rbp-90h] BYREF
  ULONG_PTR ViewSize; // [rsp+70h] [rbp-88h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-80h] BYREF
  struct _IO_STATUS_BLOCK v9; // [rsp+A8h] [rbp-50h] BYREF
  $5BC46E0569261879018906DEC3127961 v10; // [rsp+B8h] [rbp-40h] BYREF

  v1 = 0;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = a1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenFile(&FileHandle, 0x20u, &ObjectAttributes, &v9, 5u, 0) < 0 )
    return 0;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwCreateSection(&SectionHandle, 8u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle) < 0 )
  {
LABEL_4:
    ZwClose(FileHandle);
    return 0;
  }
  BaseAddress = 0LL;
  ViewSize = 0LL;
  KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)&v10);
  if ( ZwMapViewOfSection(
         SectionHandle,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &BaseAddress,
         0LL,
         0LL,
         0LL,
         &ViewSize,
         ViewShare,
         0,
         2u) < 0 )
  {
    KiUnstackDetachProcess(&v10, 0LL);
    ZwClose(SectionHandle);
    goto LABEL_4;
  }
  v3 = RtlImageNtHeader(BaseAddress);
  if ( v3 )
    v1 = v3->FileHeader.Machine != 0x8664;
  ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  KiUnstackDetachProcess(&v10, 0LL);
  ZwClose(SectionHandle);
  ZwClose(FileHandle);
  return v1;
}
