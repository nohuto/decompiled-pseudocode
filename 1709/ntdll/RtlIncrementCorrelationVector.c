/*
 * XREFs of RtlIncrementCorrelationVector @ 0x1800F5210
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     _snprintf_s @ 0x18009B250 (_snprintf_s.c)
 *     sscanf_s @ 0x18009BDF0 (sscanf_s.c)
 *     strcpy_s @ 0x18009BEF0 (strcpy_s.c)
 *     RtlpGetCorrelationVectorBufferLength @ 0x1800F554C (RtlpGetCorrelationVectorBufferLength.c)
 */

__int64 __fastcall RtlIncrementCorrelationVector(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int CorrelationVectorBufferLength; // ebp
  int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // r9d
  __int64 v11; // rax
  __int64 v12; // rsi
  int v13; // eax
  int v15; // [rsp+30h] [rbp-28h] BYREF
  char Buffer[16]; // [rsp+38h] [rbp-20h] BYREF

  v2 = 0;
  v15 = 0;
  CorrelationVectorBufferLength = RtlpGetCorrelationVectorBufferLength(a1, a2, a1);
  v4 = -1;
  v8 = (int)RtlpGetCorrelationVectorBufferLength(v6, v5, v7);
  v11 = 0LL;
  if ( v8 <= 0 )
    return (unsigned int)-2147483643;
  do
  {
    if ( !*(_BYTE *)(v9 + v11 + 1) )
      break;
    if ( *(_BYTE *)(v9 + v11 + 1) == 46 )
      v4 = v10;
    ++v10;
    ++v11;
  }
  while ( v11 < v8 );
  if ( v4 >= 0
    && (v12 = v9 + v4 + 1, sscanf_s((const char *const)(v12 + 1), "%d", &v15) == 1)
    && (++v15, v13 = snprintf_s(Buffer, 0xCuLL, 0xCuLL, "%d", v15), v13 < CorrelationVectorBufferLength - v4 - 2) )
  {
    strcpy_s((char *)(v12 + 1), v13 + 1, Buffer);
  }
  else
  {
    return (unsigned int)-2147483643;
  }
  return v2;
}
