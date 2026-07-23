/*
 * XREFs of sub_1800828E0 @ 0x1800828E0
 * Callers:
 *     sub_180082804 @ 0x180082804 (sub_180082804.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 *     sub_1800D5B04 @ 0x1800D5B04 (sub_1800D5B04.c)
 * Callees:
 *     sub_180082648 @ 0x180082648 (sub_180082648.c)
 *     sub_1800829B4 @ 0x1800829B4 (sub_1800829B4.c)
 *     ZwQueryVirtualMemory @ 0x18009AF20 (ZwQueryVirtualMemory.c)
 *     sub_1800CA554 @ 0x1800CA554 (sub_1800CA554.c)
 *     sub_1800D0B18 @ 0x1800D0B18 (sub_1800D0B18.c)
 */

__int64 __fastcall sub_1800828E0(PVOID BaseOfImage)
{
  bool v2; // di
  __int64 v3; // rdx
  NTSTATUS v4; // ecx
  __int64 v5; // r8
  int v6; // eax
  int v7; // ebx
  char v9; // al
  int v10; // edx
  PVOID v11; // [rsp+40h] [rbp-28h] BYREF
  __int64 v12; // [rsp+48h] [rbp-20h]

  v2 = 0;
  v11 = BaseOfImage;
  v4 = ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, MemoryWorkingSetExInformation, &v11, 0x10uLL, 0LL);
  if ( v4 < 0 )
  {
    v9 = dword_180156A70;
    if ( (dword_180156A70 & 3) != 0 )
    {
      sub_1800CA554(
        (unsigned int)"minkernel\\ntdll\\ldrfind.c",
        1947,
        (unsigned int)"LdrpProtectAndRelocateImage",
        0,
        "Querying large page info failed with status 0x%08lx\n",
        v4);
      v9 = dword_180156A70;
    }
    if ( (v9 & 0x10) != 0 )
      __debugbreak();
  }
  else if ( (v12 & 1) != 0 )
  {
    v2 = (v12 & 0x800000) != 0;
  }
  if ( !v2 )
  {
    v6 = sub_1800829B4(BaseOfImage);
    v7 = v6;
    if ( v6 < 0 )
    {
      if ( (dword_180156A70 & 3) == 0 )
        goto LABEL_21;
      v10 = 1957;
      goto LABEL_20;
    }
  }
  v7 = sub_180082648(BaseOfImage, v3, v5);
  if ( v7 < 0 )
    goto LABEL_9;
  if ( v2 )
    goto LABEL_9;
  v6 = sub_1800829B4(BaseOfImage);
  v7 = v6;
  if ( v6 >= 0 )
    goto LABEL_9;
  if ( (dword_180156A70 & 3) != 0 )
  {
    v10 = 1981;
LABEL_20:
    sub_1800CA554(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      v10,
      (unsigned int)"LdrpProtectAndRelocateImage",
      0,
      "Changing the protection of the executable at %p failed with status 0x%08lx\n",
      BaseOfImage,
      v6);
  }
LABEL_21:
  if ( (dword_180156A70 & 0x10) != 0 )
    __debugbreak();
LABEL_9:
  if ( (dword_180156A70 & 9) != 0 )
    sub_1800CA554(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      1991,
      (unsigned int)"LdrpProtectAndRelocateImage",
      4,
      "Status: 0x%08lx\n",
      v7);
  return (unsigned int)v7;
}
