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

__int64 __fastcall RtlIncrementCorrelationVector(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  int CorrelationVectorBufferLength; // esi
  __int64 v5; // rdx
  __int64 v6; // r11
  int CorrelationVectorLastDotPosition; // eax
  __int64 v8; // r11
  int v9; // edi
  __int64 v10; // rbp
  int v11; // eax
  int v13; // [rsp+30h] [rbp-28h] BYREF
  char DstBuf[16]; // [rsp+38h] [rbp-20h] BYREF

  v3 = 0;
  v13 = 0;
  CorrelationVectorBufferLength = RtlpGetCorrelationVectorBufferLength(a1, a2, a3);
  CorrelationVectorLastDotPosition = RtlpGetCorrelationVectorLastDotPosition(v6, v5);
  v9 = CorrelationVectorLastDotPosition;
  if ( CorrelationVectorLastDotPosition >= 0
    && (v10 = v8 + CorrelationVectorLastDotPosition + 1, sscanf_s((const char *)(v10 + 1), "%d", &v13) == 1)
    && (++v13, v11 = snprintf_s(DstBuf, 0xCuLL, 0xCuLL, "%d", v13), v11 < CorrelationVectorBufferLength - v9 - 2) )
  {
    strcpy_s((char *)(v10 + 1), v11 + 1, DstBuf);
  }
  else
  {
    return (unsigned int)-2147483643;
  }
  return v3;
}
