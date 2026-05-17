/*
 * XREFs of sub_1800D078C @ 0x1800D078C
 * Callers:
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x18009AF20 (ZwQueryVirtualMemory.c)
 */

__int64 sub_1800D078C()
{
  __int64 *v0; // rdi
  __int64 v1; // r8
  __int64 (__fastcall **v2)(); // rdx
  char *v3; // rcx
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 result; // rax
  _OWORD *v7; // rdx
  char *v8; // rcx
  char v9; // [rsp+30h] [rbp-68h] BYREF
  char v10; // [rsp+38h] [rbp-60h] BYREF

  v0 = (__int64 *)off_180110ED0;
  v1 = 5LL;
  v2 = off_180110ED0;
  v3 = &v9;
  do
  {
    v4 = (__int64)*v2++;
    *(_QWORD *)v3 = v4;
    v3 += 16;
    --v1;
  }
  while ( v1 );
  v5 = 0;
  result = ZwQueryVirtualMemory();
  if ( (int)result >= 0 )
  {
    v7 = &unk_18015D090;
    v8 = &v10;
    while ( 1 )
    {
      result = *(unsigned int *)v8;
      if ( (result & 0x40000000) == 0 )
        break;
      result = *v0;
      ++v5;
      v8 += 16;
      ++v0;
      *v7++ = *(_OWORD *)result;
      if ( v5 >= 5 )
        return result;
    }
  }
  byte_18015C280 = 1;
  return result;
}
