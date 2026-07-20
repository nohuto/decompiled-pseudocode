/*
 * XREFs of SmpCreatePagingFileDescriptor @ 0x140009824
 * Callers:
 *     SmpCreatePagingFiles @ 0x140009518 (SmpCreatePagingFiles.c)
 * Callees:
 *     SmpParseCommandLine @ 0x1400026F0 (SmpParseCommandLine.c)
 *     SmpParseSwapOrPageFileArguments @ 0x140009988 (SmpParseSwapOrPageFileArguments.c)
 */

__int64 __fastcall SmpCreatePagingFileDescriptor(__int128 *a1)
{
  int v2; // ecx
  unsigned __int8 v3; // si
  int v4; // ebx
  _QWORD *Heap; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rax
  WCHAR v8; // ax
  _QWORD *v9; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rcx
  struct _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-20h] BYREF
  struct _UNICODE_STRING v15; // [rsp+40h] [rbp-10h] BYREF
  ULONG Value; // [rsp+78h] [rbp+28h] BYREF
  ULONG v17; // [rsp+80h] [rbp+30h] BYREF

  if ( (unsigned int)SmpNumberOfPagefileDescriptors >= 0x10 )
    return 3221225623LL;
  v2 = SmpParseCommandLine(a1, 0LL, &v15, 0LL, &UnicodeString);
  if ( v2 < 0 )
  {
    v11 = 2LL * (_InterlockedIncrement(&SmpPagefileLogIndex) % 32);
    *((_DWORD *)&SmpPagefileLog + 2 * v11) = 984;
    *((_DWORD *)&SmpPagefileLog + 2 * v11 + 1) = v2;
    *((_QWORD *)&SmpPagefileLog + v11 + 1) = a1;
    return (unsigned int)v2;
  }
  Value = 0;
  v3 = 0;
  v17 = 0;
  SmpRegistrySpecifierPresent = 1;
  if ( !UnicodeString.Buffer )
    goto LABEL_16;
  v4 = SmpParseSwapOrPageFileArguments(&UnicodeString, &Value, &v17);
  if ( v4 < 0 )
  {
    v12 = 2LL * (_InterlockedIncrement(&SmpPagefileLogIndex) % 32);
    *((_QWORD *)&SmpPagefileLog + v12 + 1) = 0LL;
    *((_DWORD *)&SmpPagefileLog + 2 * v12) = 1022;
    *((_DWORD *)&SmpPagefileLog + 2 * v12 + 1) = v4;
    RtlFreeUnicodeString(&v15);
    RtlFreeUnicodeString(&UnicodeString);
    return (unsigned int)v4;
  }
  if ( !Value || !v17 )
LABEL_16:
    v3 = 1;
  RtlFreeUnicodeString(&UnicodeString);
  Heap = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 8u, 0x60uLL);
  v6 = Heap;
  if ( !Heap )
  {
    RtlFreeUnicodeString(&v15);
    return 3221225495LL;
  }
  *((_OWORD *)Heap + 2) = *a1;
  *((struct _UNICODE_STRING *)Heap + 1) = v15;
  Heap[7] = (unsigned __int64)Value << 20;
  Heap[6] = (unsigned __int64)Value << 20;
  v7 = v17;
  *((_DWORD *)v6 + 23) &= ~2u;
  v6[8] = v7 << 20;
  *((_DWORD *)v6 + 23) |= 2 * v3;
  v8 = RtlUpcaseUnicodeChar(*(_WORD *)(v6[3] + 8LL));
  *(_WORD *)(v6[3] + 8LL) = v8;
  if ( v8 == 63 )
  {
    if ( SmpAnyDriveDescriptorCreated == 1 )
    {
      RtlFreeUnicodeString(&v15);
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v6);
      return 3221225485LL;
    }
    *((_DWORD *)v6 + 23) |= 4u;
    SmpAnyDriveDescriptorCreated = 1;
  }
  if ( (*((_BYTE *)v6 + 92) & 2) != 0 && (v8 == 63 || v8 == SmpOsVolumeLetter) )
  {
    v13 = SmpPagingFileDescriptorList;
    if ( *((PVOID **)SmpPagingFileDescriptorList + 1) != &SmpPagingFileDescriptorList )
      __fastfail(3u);
    *v6 = SmpPagingFileDescriptorList;
    v6[1] = &SmpPagingFileDescriptorList;
    v13[1] = v6;
    SmpPagingFileDescriptorList = v6;
  }
  else
  {
    v9 = (_QWORD *)qword_140021518;
    if ( *(PVOID **)qword_140021518 != &SmpPagingFileDescriptorList )
      __fastfail(3u);
    *v6 = &SmpPagingFileDescriptorList;
    v6[1] = v9;
    *v9 = v6;
    qword_140021518 = (__int64)v6;
  }
  ++SmpNumberOfPagefileDescriptors;
  return 0LL;
}
