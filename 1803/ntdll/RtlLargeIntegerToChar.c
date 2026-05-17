/*
 * XREFs of RtlLargeIntegerToChar @ 0x1800020E0
 * Callers:
 *     RtlInt64ToUnicodeString @ 0x1800E6730 (RtlInt64ToUnicodeString.c)
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall RtlLargeIntegerToChar(unsigned __int64 *a1, unsigned int a2, int a3, char *a4)
{
  int v6; // r8d
  int v7; // r9d
  char *v8; // r10
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r8
  char *v11; // r15
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rtt
  int v14; // esp
  __int64 v15; // rsi
  bool v16; // cc
  size_t v18; // rbx
  char v19; // [rsp+61h] [rbp-37h] BYREF

  switch ( a2 )
  {
    case 0u:
      a2 = 10;
      goto LABEL_3;
    case 0xAu:
LABEL_3:
      v6 = 0;
      v7 = 0;
      goto LABEL_4;
    case 2u:
      v6 = 1;
      break;
    case 8u:
      v6 = 3;
      break;
    case 0x10u:
      v6 = 4;
      break;
    default:
      return 3221225485LL;
  }
  v7 = (1 << v6) - 1;
LABEL_4:
  v8 = &v19;
  v9 = *a1;
  if ( v6 )
  {
    do
    {
      v11 = v8;
      v12 = v7 & (unsigned int)v9;
      v9 >>= v6;
      *--v8 = byte_180119730[v12];
    }
    while ( v9 );
  }
  else
  {
    v10 = a2;
    do
    {
      v11 = v8;
      v13 = v9;
      v9 /= v10;
      v12 = v13 % v10;
      *--v8 = byte_180119730[(unsigned int)(v13 % v10)];
    }
    while ( v9 );
  }
  v15 = (unsigned int)(v14 + 97 - (_DWORD)v8);
  if ( a3 >= 0 )
    goto LABEL_8;
  a3 = -a3;
  v16 = (int)v15 <= a3;
  if ( (int)v15 < a3 )
  {
    v18 = (unsigned int)(a3 - v15);
    LOBYTE(v12) = 48;
    memset(a4, v12, v18);
    a3 = v15;
    a4 += v18;
LABEL_8:
    v16 = (int)v15 <= a3;
  }
  if ( !v16 )
    return 2147483653LL;
  memmove(a4, v11 - 1, (unsigned int)v15);
  if ( (int)v15 < a3 )
    a4[v15] = 0;
  return 0LL;
}
