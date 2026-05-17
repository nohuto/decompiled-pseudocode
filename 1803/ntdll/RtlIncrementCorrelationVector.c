/*
 * XREFs of RtlIncrementCorrelationVector @ 0x1800F1740
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     _snprintf_s @ 0x180095830 (_snprintf_s.c)
 *     sscanf_s @ 0x1800963D0 (sscanf_s.c)
 *     strcpy_s @ 0x1800964E0 (strcpy_s.c)
 *     sub_1800F1A7C @ 0x1800F1A7C (sub_1800F1A7C.c)
 */

__int64 __fastcall RtlIncrementCorrelationVector(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v3; // ebp
  int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // r8
  int v10; // r9d
  __int64 v11; // r10
  __int64 v12; // rax
  char v13; // dl
  int v14; // ecx
  __int64 v15; // rsi
  int v16; // eax
  int v18; // [rsp+30h] [rbp-28h] BYREF
  char Buffer[16]; // [rsp+38h] [rbp-20h] BYREF

  v2 = 0;
  v18 = 0;
  v3 = sub_1800F1A7C(a1, a2, a1);
  v4 = -1;
  v8 = sub_1800F1A7C(v6, v5, v7);
  v11 = v8;
  if ( v8 <= 0 )
    return (unsigned int)-2147483643;
  v12 = 0LL;
  do
  {
    v13 = *(_BYTE *)(v9 + v12 + 1);
    v14 = v10;
    if ( !v13 )
      break;
    ++v10;
    ++v12;
    if ( v13 != 46 )
      v14 = v4;
    v4 = v14;
  }
  while ( v12 < v11 );
  if ( v4 >= 0
    && (v15 = v9 + v4 + 1, sscanf_s((const char *const)(v15 + 1), "%d", &v18) == 1)
    && (++v18, v16 = snprintf_s(Buffer, 0xCuLL, 0xCuLL, "%d", v18), v16 < v3 - v4 - 2) )
  {
    strcpy_s((char *)(v15 + 1), v16 + 1, Buffer);
  }
  else
  {
    return (unsigned int)-2147483643;
  }
  return v2;
}
