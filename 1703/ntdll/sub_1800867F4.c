/*
 * XREFs of sub_1800867F4 @ 0x1800867F4
 * Callers:
 *     sub_180086714 @ 0x180086714 (sub_180086714.c)
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 *     sub_1800DC344 @ 0x1800DC344 (sub_1800DC344.c)
 * Callees:
 *     sub_180004D78 @ 0x180004D78 (sub_180004D78.c)
 *     sub_1800868D4 @ 0x1800868D4 (sub_1800868D4.c)
 *     sub_180086ED8 @ 0x180086ED8 (sub_180086ED8.c)
 *     ZwQueryVirtualMemory @ 0x1800A5760 (ZwQueryVirtualMemory.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 */

__int64 __fastcall sub_1800867F4(PVOID BaseOfImage)
{
  bool v2; // si
  NTSTATUS v3; // ecx
  int v4; // eax
  int v5; // ebx
  char v7; // al
  int v8; // edx
  PVOID v9; // [rsp+40h] [rbp-28h] BYREF
  __int64 v10; // [rsp+48h] [rbp-20h]

  v2 = 0;
  v9 = BaseOfImage;
  v3 = ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, MemoryWorkingSetExInformation, &v9, 0x10uLL, 0LL);
  if ( v3 < 0 )
  {
    v7 = dword_180155A10;
    if ( (dword_180155A10 & 3) != 0 )
    {
      sub_1800D5274(
        (unsigned int)"minkernel\\ntdll\\ldrfind.c",
        1935,
        (unsigned int)"LdrpProtectAndRelocateImage",
        0,
        "Querying large page info failed with status 0x%08lx\n",
        v3);
      v7 = dword_180155A10;
    }
    if ( (v7 & 0x10) != 0 )
      __debugbreak();
  }
  else if ( (v10 & 1) != 0 )
  {
    v2 = (v10 & 0x800000) != 0;
  }
  if ( !v2 )
  {
    v4 = sub_1800868D4(BaseOfImage);
    v5 = v4;
    if ( v4 < 0 )
    {
      if ( (dword_180155A10 & 3) == 0 )
        goto LABEL_21;
      v8 = 1945;
      goto LABEL_20;
    }
  }
  v5 = sub_180086ED8(BaseOfImage);
  if ( v5 < 0 )
    goto LABEL_9;
  if ( v2 )
    goto LABEL_9;
  v4 = sub_1800868D4(BaseOfImage);
  v5 = v4;
  if ( v4 >= 0 )
    goto LABEL_9;
  if ( (dword_180155A10 & 3) != 0 )
  {
    v8 = 1969;
LABEL_20:
    sub_1800D5274(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      v8,
      (unsigned int)"LdrpProtectAndRelocateImage",
      0,
      "Changing the protection of the executable at %p failed with status 0x%08lx\n",
      BaseOfImage,
      v4);
  }
LABEL_21:
  if ( (dword_180155A10 & 0x10) != 0 )
    __debugbreak();
LABEL_9:
  if ( (dword_180155A10 & 9) != 0 )
    sub_1800D5274(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      1979,
      (unsigned int)"LdrpProtectAndRelocateImage",
      4,
      "Status: 0x%08lx\n",
      v5);
  return (unsigned int)v5;
}
