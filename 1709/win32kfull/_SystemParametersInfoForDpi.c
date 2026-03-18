/*
 * XREFs of _SystemParametersInfoForDpi @ 0x1C01020D0
 * Callers:
 *     NtUserSystemParametersInfoForDpi @ 0x1C0101F70 (NtUserSystemParametersInfoForDpi.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     GetWindowNCMetricsForDpi @ 0x1C00763A4 (GetWindowNCMetricsForDpi.c)
 *     GetDpiDependentMetric @ 0x1C00774BC (GetDpiDependentMetric.c)
 *     GetScaledLogFontForDpi @ 0x1C007810C (GetScaledLogFontForDpi.c)
 */

__int64 __fastcall SystemParametersInfoForDpi(int a1, __int64 a2, _DWORD *a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // ebx
  _DWORD *v6; // rdi
  unsigned int v9; // edx

  v5 = 0;
  v6 = a3;
  if ( a1 != 41 )
  {
    if ( a1 == 31 )
    {
      v9 = a5;
    }
    else
    {
      if ( a1 != 45 )
        return v5;
      if ( *a3 != 108 )
      {
LABEL_12:
        UserSetLastError(87LL, a2);
        return v5;
      }
      a3[1] = GetDpiDependentMetric(18LL, a5);
      v6[2] = GetDpiDependentMetric(19LL, a5);
      a3 = v6 + 4;
      v9 = a5;
      v6[3] = (gdwPUDFlags >> 21) & 1;
    }
    return GetScaledLogFontForDpi(0, v9, (__int64)a3);
  }
  if ( *a3 != 504 )
    goto LABEL_12;
  return (unsigned int)GetWindowNCMetricsForDpi(a3, a5);
}
