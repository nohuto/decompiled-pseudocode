/*
 * XREFs of RtlpHpStackTraceSerializeRemote @ 0x180100BC8
 * Callers:
 *     RtlpHpStackTraceSerialize @ 0x180100AE0 (RtlpHpStackTraceSerialize.c)
 * Callees:
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A05C0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A0600 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A0A00 (NtCreateSection.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F06C8 (RtlpHeapPerformCrossProcessQuery.c)
 */

__int64 __fastcall RtlpHpStackTraceSerializeRemote(__int64 a1)
{
  SIZE_T v2; // rdi
  NTSTATUS i; // eax
  void *v4; // rcx
  int v5; // eax
  NTSTATUS v6; // ebx
  HANDLE v7; // rax
  char *v8; // rdx
  LARGE_INTEGER SectionOffset; // [rsp+50h] [rbp-39h] BYREF
  ULONG_PTR ViewSize; // [rsp+58h] [rbp-31h] BYREF
  HANDLE Buffer[16]; // [rsp+60h] [rbp-29h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+F8h] [rbp+6Fh] BYREF
  HANDLE SectionHandle; // [rsp+100h] [rbp+77h] BYREF
  PVOID BaseAddress; // [rsp+108h] [rbp+7Fh] BYREF

  SectionHandle = 0LL;
  BaseAddress = 0LL;
  v2 = 0x10000LL;
  MaximumSize.QuadPart = 0x10000LL;
  for ( i = NtCreateSection(&SectionHandle, 0xF001Fu, 0LL, &MaximumSize, 4u, 0x8000000u, 0LL);
        ;
        i = NtCreateSection(&SectionHandle, 0xF001Fu, 0LL, &MaximumSize, 4u, 0x8000000u, 0LL) )
  {
    v6 = i;
    if ( i < 0 )
      break;
    memset(Buffer, 0, 0x58uLL);
    v4 = *(void **)(a1 + 8);
    Buffer[0] = SectionHandle;
    Buffer[1] = (HANDLE)MaximumSize.QuadPart;
    LODWORD(Buffer[3]) = 0x20000000;
    v5 = RtlpHeapPerformCrossProcessQuery(v4, Buffer);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v7 = 0LL;
      ViewSize = 0x10000LL;
      SectionOffset.QuadPart = 0LL;
      if ( MaximumSize.QuadPart > 0 )
      {
        while ( v7 < Buffer[4] )
        {
          v6 = ZwMapViewOfSection(
                 SectionHandle,
                 (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                 &BaseAddress,
                 0LL,
                 v2,
                 &SectionOffset,
                 &ViewSize,
                 ViewUnmap,
                 0,
                 4u);
          if ( v6 < 0 )
            goto LABEL_16;
          v8 = (HANDLE)(SectionOffset.QuadPart + ViewSize) <= Buffer[4]
             ? (char *)ViewSize
             : (char *)Buffer[4] - SectionOffset.QuadPart;
          v6 = (*(__int64 (__fastcall **)(PVOID, char *, _QWORD))(a1 + 16))(BaseAddress, v8, *(_QWORD *)(a1 + 24));
          if ( v6 < 0 )
            goto LABEL_16;
          NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
          v2 = ViewSize;
          BaseAddress = 0LL;
          v7 = (HANDLE)(ViewSize + SectionOffset.QuadPart);
          SectionOffset.QuadPart = (__int64)v7;
          if ( (__int64)v7 >= MaximumSize.QuadPart )
            break;
        }
      }
      v6 = 0;
      break;
    }
    if ( v5 != -1073741789 )
      break;
    NtClose(SectionHandle);
    MaximumSize.QuadPart = ((unsigned __int64)Buffer[4] + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  }
LABEL_16:
  if ( BaseAddress )
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  if ( SectionHandle )
    NtClose(SectionHandle);
  return (unsigned int)v6;
}
