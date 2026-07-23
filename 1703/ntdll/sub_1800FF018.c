/*
 * XREFs of sub_1800FF018 @ 0x1800FF018
 * Callers:
 *     sub_1800FEF2C @ 0x1800FEF2C (sub_1800FEF2C.c)
 * Callees:
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x1800A5800 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x1800A5840 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x1800A5C40 (ZwCreateSection.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_1800F096C @ 0x1800F096C (sub_1800F096C.c)
 */

__int64 __fastcall sub_1800FF018(__int64 a1)
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
  for ( i = ZwCreateSection(&SectionHandle, 0xF001Fu, 0LL, &MaximumSize, 4u, 0x8000000u, 0LL);
        ;
        i = ZwCreateSection(&SectionHandle, 0xF001Fu, 0LL, &MaximumSize, 4u, 0x8000000u, 0LL) )
  {
    v6 = i;
    if ( i < 0 )
      break;
    memset(Buffer, 0, 0x58uLL);
    v4 = *(void **)(a1 + 8);
    Buffer[0] = SectionHandle;
    Buffer[1] = (HANDLE)MaximumSize.QuadPart;
    LODWORD(Buffer[3]) = 0x20000000;
    v5 = sub_1800F096C(v4, Buffer);
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
          ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
          v2 = ViewSize;
          BaseAddress = 0LL;
          v7 = (HANDLE)(ViewSize + SectionOffset.QuadPart);
          SectionOffset.QuadPart = (LONGLONG)v7;
          if ( (__int64)v7 >= MaximumSize.QuadPart )
            break;
        }
      }
      v6 = 0;
      break;
    }
    if ( v5 != -1073741789 )
      break;
    ZwClose(SectionHandle);
    MaximumSize.QuadPart = ((unsigned __int64)Buffer[4] + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  }
LABEL_16:
  if ( BaseAddress )
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  if ( SectionHandle )
    ZwClose(SectionHandle);
  return (unsigned int)v6;
}
