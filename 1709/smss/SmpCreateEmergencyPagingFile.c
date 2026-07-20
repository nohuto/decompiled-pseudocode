/*
 * XREFs of SmpCreateEmergencyPagingFile @ 0x14000FD20
 * Callers:
 *     SmpCreatePagingFiles @ 0x140009518 (SmpCreatePagingFiles.c)
 * Callees:
 *     SmpClearPagingFileDescriptorList @ 0x14000F868 (SmpClearPagingFileDescriptorList.c)
 */

__int64 SmpCreateEmergencyPagingFile()
{
  struct _UNICODE_STRING *Heap; // rax
  struct _UNICODE_STRING *v1; // rbx
  WCHAR *v3; // rax
  _QWORD *v4; // rax

  Heap = (struct _UNICODE_STRING *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 8u, 0x60uLL);
  v1 = Heap;
  if ( !Heap )
    return 3221225495LL;
  Heap[1].MaximumLength = 40;
  v3 = (WCHAR *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, 0x28uLL);
  v1[1].Buffer = v3;
  if ( !v3 )
  {
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v1);
    return 3221225495LL;
  }
  RtlInitUnicodeString(v1 + 2, 0LL);
  RtlAppendUnicodeToString(v1 + 1, L"\\??\\?:\\pagefile.sys");
  v1[1].Buffer[4] = 63;
  HIDWORD(v1[5].Buffer) |= 6u;
  SmpClearPagingFileDescriptorList();
  v4 = SmpPagingFileDescriptorList;
  ++SmpNumberOfPagefileDescriptors;
  if ( *((PVOID **)SmpPagingFileDescriptorList + 1) != &SmpPagingFileDescriptorList )
    __fastfail(3u);
  v1->Buffer = (PWSTR)&SmpPagingFileDescriptorList;
  *(_QWORD *)&v1->Length = v4;
  v4[1] = v1;
  SmpPagingFileDescriptorList = v1;
  return SmpProcessPagefileDescriptor((__int64)v1);
}
