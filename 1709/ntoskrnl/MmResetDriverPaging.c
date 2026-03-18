/*
 * XREFs of MmResetDriverPaging @ 0x140516F70
 * Callers:
 *     <none>
 * Callees:
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     RtlImageNtHeader @ 0x1400AE3B0 (RtlImageNtHeader.c)
 *     MiLockCode @ 0x1400BCA50 (MiLockCode.c)
 *     MiCancelPhase0Locking @ 0x140516B34 (MiCancelPhase0Locking.c)
 *     MiImagePagable @ 0x140516BA8 (MiImagePagable.c)
 *     MmImageSectionPagable @ 0x14051703C (MmImageSectionPagable.c)
 */

void __stdcall MmResetDriverPaging(PVOID AddressWithinSection)
{
  PVOID *v1; // rax
  __int64 v2; // rsi
  PVOID v3; // rbp
  PIMAGE_NT_HEADERS v4; // rbx
  __int64 SizeOfOptionalHeader; // rcx
  _IMAGE_OPTIONAL_HEADER64 *p_OptionalHeader; // rdi
  int NumberOfSections; // ebx
  _DWORD *i; // rdi
  __int64 v9; // r8
  unsigned int v10; // edx
  unsigned __int64 PteAddress; // rax
  unsigned __int64 v12; // r10

  v1 = MiImagePagable(0LL, (unsigned __int64)AddressWithinSection);
  v2 = (__int64)v1;
  if ( v1 )
  {
    v3 = v1[6];
    v4 = RtlImageNtHeader(v3);
    MiCancelPhase0Locking(v2);
    SizeOfOptionalHeader = v4->FileHeader.SizeOfOptionalHeader;
    p_OptionalHeader = &v4->OptionalHeader;
    NumberOfSections = v4->FileHeader.NumberOfSections;
    for ( i = (_DWORD *)((char *)&p_OptionalHeader->Magic + SizeOfOptionalHeader); NumberOfSections; --NumberOfSections )
    {
      if ( (i[9] & 0x2000000) == 0 && !(unsigned int)MmImageSectionPagable(i) )
      {
        MiGetPteAddress((unsigned __int64)v3 + (unsigned int)i[3]);
        v10 = i[2];
        if ( i[4] >= v10 )
          v10 = i[4];
        PteAddress = MiGetPteAddress((unsigned __int64)v3 + v9 + v10 - 1);
        MiLockCode(v2, v12, PteAddress, 2);
      }
      i += 10;
    }
  }
}
