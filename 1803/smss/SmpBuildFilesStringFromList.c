/*
 * XREFs of SmpBuildFilesStringFromList @ 0x140009C24
 * Callers:
 *     SmpCreatePagingFiles @ 0x1400092CC (SmpCreatePagingFiles.c)
 *     SmpRecordCreatedPageFiles @ 0x140009458 (SmpRecordCreatedPageFiles.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpBuildFilesStringFromList(const UNICODE_STRING *a1, struct _UNICODE_STRING *a2)
{
  const UNICODE_STRING *v4; // rdx
  unsigned int v5; // ecx
  int Length; // eax
  WCHAR *Heap; // rax
  PWSTR Buffer; // rcx
  USHORT v9; // ax
  const UNICODE_STRING *v10; // rsi

  v4 = *(const UNICODE_STRING **)&a1->Length;
  v5 = 2;
  if ( v4 != a1 )
  {
    do
    {
      Length = v4[1].Length;
      v4 = *(const UNICODE_STRING **)&v4->Length;
      v5 += Length + 2;
    }
    while ( v4 != a1 );
    if ( v5 > 0xFFFF )
      return 3221225473LL;
  }
  a2->MaximumLength = v5;
  Heap = (WCHAR *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v5);
  a2->Buffer = Heap;
  Buffer = Heap;
  if ( !Heap )
    return 3221225495LL;
  a2->Length = 0;
  v9 = 0;
  v10 = *(const UNICODE_STRING **)&a1->Length;
  if ( *(const UNICODE_STRING **)&a1->Length != a1 )
  {
    do
    {
      RtlAppendUnicodeStringToString(a2, v10 + 1);
      v9 = a2->Length + 2;
      a2->Length = v9;
      v10 = *(const UNICODE_STRING **)&v10->Length;
    }
    while ( v10 != a1 );
    Buffer = a2->Buffer;
  }
  Buffer[(unsigned __int64)v9 >> 1] = 0;
  a2->Length += 2;
  return 0LL;
}
