/*
 * XREFs of RtlIncrementCorrelationVector @ 0x140723D30
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _snprintf_s @ 0x140163B50 (_snprintf_s.c)
 *     sscanf_s @ 0x1401646F0 (sscanf_s.c)
 *     strcpy_s @ 0x1401647F0 (strcpy_s.c)
 *     RtlpGetCorrelationVectorLastDotPosition @ 0x140255778 (RtlpGetCorrelationVectorLastDotPosition.c)
 *     RtlpGetCorrelationVectorBufferLength @ 0x140724050 (RtlpGetCorrelationVectorBufferLength.c)
 */

DWORD __cdecl RtlIncrementCorrelationVector(PCORRELATION_VECTOR CorrelationVector)
{
  DWORD v1; // ebx
  int CorrelationVectorBufferLength; // esi
  __int64 v3; // rdx
  __int64 v4; // r11
  int CorrelationVectorLastDotPosition; // eax
  __int64 v6; // r11
  int v7; // edi
  __int64 v8; // rbp
  int v9; // eax
  int v11; // [rsp+30h] [rbp-28h] BYREF
  char DstBuf[16]; // [rsp+38h] [rbp-20h] BYREF

  v1 = 0;
  v11 = 0;
  CorrelationVectorBufferLength = RtlpGetCorrelationVectorBufferLength(CorrelationVector);
  CorrelationVectorLastDotPosition = RtlpGetCorrelationVectorLastDotPosition(v4, v3);
  v7 = CorrelationVectorLastDotPosition;
  if ( CorrelationVectorLastDotPosition < 0 )
    return -2147483643;
  v8 = v6 + CorrelationVectorLastDotPosition + 1;
  if ( sscanf_s((const char *)(v8 + 1), "%d", &v11) != 1 )
    return -2147483643;
  v9 = snprintf_s(DstBuf, 0xCuLL, 0xCuLL, "%d", ++v11);
  if ( v9 >= CorrelationVectorBufferLength - v7 - 2 )
    return -2147483643;
  strcpy_s((char *)(v8 + 1), v9 + 1, DstBuf);
  return v1;
}
