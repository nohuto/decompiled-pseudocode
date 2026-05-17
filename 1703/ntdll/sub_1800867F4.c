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

__int64 __fastcall sub_1800867F4(const void *a1)
{
  bool v2; // si
  int v3; // ecx
  int v4; // eax
  int v5; // ebx
  __int64 v6; // rdx
  char v8; // al
  int v9; // edx
  const void *v10; // [rsp+40h] [rbp-28h] BYREF
  __int64 v11; // [rsp+48h] [rbp-20h]

  v2 = 0;
  v10 = a1;
  v3 = ZwQueryVirtualMemory(-1LL, 0LL, 4LL, &v10, 16LL, 0LL);
  if ( v3 < 0 )
  {
    v8 = dword_180155A10;
    if ( (dword_180155A10 & 3) != 0 )
    {
      sub_1800D5274(
        (unsigned int)"minkernel\\ntdll\\ldrfind.c",
        1935,
        (unsigned int)"LdrpProtectAndRelocateImage",
        0,
        "Querying large page info failed with status 0x%08lx\n",
        v3);
      v8 = dword_180155A10;
    }
    if ( (v8 & 0x10) != 0 )
      __debugbreak();
  }
  else if ( (v11 & 1) != 0 )
  {
    v2 = (v11 & 0x800000) != 0;
  }
  if ( !v2 )
  {
    v4 = sub_1800868D4(a1, 0LL);
    v5 = v4;
    if ( v4 < 0 )
    {
      if ( (dword_180155A10 & 3) == 0 )
        goto LABEL_21;
      v9 = 1945;
      goto LABEL_20;
    }
  }
  v5 = sub_180086ED8(a1);
  if ( v5 < 0 )
    goto LABEL_9;
  if ( v2 )
    goto LABEL_9;
  LOBYTE(v6) = 1;
  v4 = sub_1800868D4(a1, v6);
  v5 = v4;
  if ( v4 >= 0 )
    goto LABEL_9;
  if ( (dword_180155A10 & 3) != 0 )
  {
    v9 = 1969;
LABEL_20:
    sub_1800D5274(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      v9,
      (unsigned int)"LdrpProtectAndRelocateImage",
      0,
      "Changing the protection of the executable at %p failed with status 0x%08lx\n",
      a1,
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
