/*
 * XREFs of sub_18002FEC4 @ 0x18002FEC4
 * Callers:
 *     sub_18002FC7C @ 0x18002FC7C (sub_18002FC7C.c)
 *     LdrAccessResource_0 @ 0x1800380F8 (LdrAccessResource_0.c)
 * Callees:
 *     sub_18002F924 @ 0x18002F924 (sub_18002F924.c)
 *     RtlImageNtHeaderEx @ 0x180033760 (RtlImageNtHeaderEx.c)
 *     ZwQueryVirtualMemory @ 0x1800A5760 (ZwQueryVirtualMemory.c)
 */

__int64 __fastcall sub_18002FEC4(__int64 a1, __int64 *a2)
{
  NTSTATUS VirtualMemory; // ebx
  void *v5; // rbp
  __int64 SizeOfImage; // rdi
  _BYTE MemoryInformation[16]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v9; // [rsp+40h] [rbp-28h]
  PIMAGE_NT_HEADERS v10; // [rsp+70h] [rbp+8h] BYREF

  VirtualMemory = 0;
  v10 = 0LL;
  v5 = (void *)(a1 & 0xFFFFFFFFFFFFFFFCuLL);
  SizeOfImage = 0LL;
  RtlImageNtHeaderEx(1u, (PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL), 0LL, &v10);
  if ( !v10 )
    goto LABEL_11;
  if ( (a1 & 1) == 0 )
  {
    if ( v10->OptionalHeader.Magic == 267 || v10->OptionalHeader.Magic == 523 )
    {
      SizeOfImage = v10->OptionalHeader.SizeOfImage;
      goto LABEL_6;
    }
LABEL_11:
    VirtualMemory = -1073741701;
    goto LABEL_6;
  }
  SizeOfImage = sub_18002F924(a1);
  if ( !SizeOfImage )
  {
    VirtualMemory = ZwQueryVirtualMemory(
                      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                      v5,
                      MemoryRegionInformation,
                      MemoryInformation,
                      0x20uLL,
                      0LL);
    if ( VirtualMemory < 0 )
      VirtualMemory = -1073741793;
    else
      SizeOfImage = v9;
  }
LABEL_6:
  *a2 = SizeOfImage;
  return (unsigned int)VirtualMemory;
}
