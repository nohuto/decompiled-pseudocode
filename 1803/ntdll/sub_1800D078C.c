/*
 * XREFs of sub_1800D078C @ 0x1800D078C
 * Callers:
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x18009AF20 (ZwQueryVirtualMemory.c)
 */

int sub_1800D078C()
{
  __int64 (__fastcall **v0)(int, int, int, int, ULONG, ULONG); // rdi
  __int64 v1; // r8
  __int64 (__fastcall **v2)(int, int, int, int, ULONG, ULONG); // rdx
  _QWORD *v3; // rcx
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 (__fastcall *v6)(int, int, int, int, ULONG, ULONG); // rax
  _OWORD *v7; // rdx
  char *v8; // rcx
  _BYTE MemoryInformation[8]; // [rsp+30h] [rbp-68h] BYREF
  char v11; // [rsp+38h] [rbp-60h] BYREF

  v0 = &off_180110ED0;
  v1 = 5LL;
  v2 = &off_180110ED0;
  v3 = MemoryInformation;
  do
  {
    v4 = (__int64)*v2++;
    *v3 = v4;
    v3 += 2;
    --v1;
  }
  while ( v1 );
  v5 = 0;
  LODWORD(v6) = ZwQueryVirtualMemory(
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  0LL,
                  MemoryWorkingSetExInformation,
                  MemoryInformation,
                  0x50uLL,
                  0LL);
  if ( (int)v6 >= 0 )
  {
    v7 = &unk_18015D090;
    v8 = &v11;
    while ( 1 )
    {
      LODWORD(v6) = *(_DWORD *)v8;
      if ( (*(_DWORD *)v8 & 0x40000000) == 0 )
        break;
      v6 = *v0;
      ++v5;
      v8 += 16;
      ++v0;
      *v7++ = *(_OWORD *)v6;
      if ( v5 >= 5 )
        return (int)v6;
    }
  }
  byte_18015C280 = 1;
  return (int)v6;
}
