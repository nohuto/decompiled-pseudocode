/*
 * XREFs of sub_18008AA3C @ 0x18008AA3C
 * Callers:
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 * Callees:
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwQueryVirtualMemory @ 0x1800A5760 (ZwQueryVirtualMemory.c)
 */

__int64 sub_18008AA3C()
{
  __int64 *v0; // rdi
  __int64 v1; // r8
  __int64 (__fastcall **v2)(); // rdx
  _QWORD *v3; // rcx
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 result; // rax
  char *v7; // rcx
  _OWORD *v8; // rdx
  _BYTE v9[8]; // [rsp+30h] [rbp-68h] BYREF
  char v10; // [rsp+38h] [rbp-60h] BYREF

  v0 = (__int64 *)off_180111070;
  v1 = 5LL;
  v2 = off_180111070;
  v3 = v9;
  do
  {
    v4 = (__int64)*v2++;
    *v3 = v4;
    v3 += 2;
    --v1;
  }
  while ( v1 );
  v5 = 0;
  result = ZwQueryVirtualMemory(-1LL, 0LL, 4LL, v9, 80LL, 0LL);
  if ( (int)result >= 0 )
  {
    v8 = &unk_18015C060;
    v7 = &v10;
    while ( 1 )
    {
      result = *(unsigned int *)v7;
      if ( (result & 0x40000000) == 0 )
        break;
      result = *v0;
      ++v5;
      v7 += 16;
      ++v0;
      *v8++ = *(_OWORD *)result;
      if ( v5 >= 5 )
        return result;
    }
  }
  byte_18015B260 = 1;
  return result;
}
