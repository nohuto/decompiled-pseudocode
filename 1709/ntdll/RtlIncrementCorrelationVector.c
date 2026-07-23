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

DWORD __cdecl RtlIncrementCorrelationVector(PCORRELATION_VECTOR CorrelationVector)
{
  __int64 v1; // rdx
  DWORD v2; // ebx
  int CorrelationVectorBufferLength; // ebp
  int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // r9d
  __int64 v10; // rax
  __int64 v11; // rsi
  int v12; // eax
  int v14; // [rsp+30h] [rbp-28h] BYREF
  char Buffer[16]; // [rsp+38h] [rbp-20h] BYREF

  v2 = 0;
  v14 = 0;
  CorrelationVectorBufferLength = RtlpGetCorrelationVectorBufferLength(CorrelationVector, v1);
  v4 = -1;
  v7 = (int)RtlpGetCorrelationVectorBufferLength(v6, v5);
  v10 = 0LL;
  if ( v7 <= 0 )
    return -2147483643;
  do
  {
    if ( !*(_BYTE *)(v8 + v10 + 1) )
      break;
    if ( *(_BYTE *)(v8 + v10 + 1) == 46 )
      v4 = v9;
    ++v9;
    ++v10;
  }
  while ( v10 < v7 );
  if ( v4 < 0 )
    return -2147483643;
  v11 = v8 + v4 + 1;
  if ( sscanf_s((const char *const)(v11 + 1), "%d", &v14) != 1 )
    return -2147483643;
  v12 = snprintf_s(Buffer, 0xCuLL, 0xCuLL, "%d", ++v14);
  if ( v12 >= CorrelationVectorBufferLength - v4 - 2 )
    return -2147483643;
  strcpy_s((char *)(v11 + 1), v12 + 1, Buffer);
  return v2;
}
