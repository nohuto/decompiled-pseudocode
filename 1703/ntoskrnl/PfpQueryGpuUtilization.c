/*
 * XREFs of PfpQueryGpuUtilization @ 0x140446E28
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x14052B3F0 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PsInvokeWin32Callout @ 0x1404F9F70 (PsInvokeWin32Callout.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 */

__int64 __fastcall PfpQueryGpuUtilization(__int64 a1, char a2, _DWORD *a3)
{
  __int64 result; // rax
  __int128 v6; // [rsp+28h] [rbp-20h] BYREF

  if ( *(_DWORD *)(a1 + 24) < 0x10u )
    return 3221225990LL;
  if ( a2 )
    ProbeForWrite(*(volatile void **)(a1 + 16), 0x10uLL, 8u);
  v6 = *(_OWORD *)*(_QWORD *)(a1 + 16);
  if ( (_DWORD)v6 != 1 )
    return 3221225561LL;
  if ( DWORD1(v6) == -1 )
    MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
  result = PsInvokeWin32Callout(25LL, (char *)&v6 + 8, 1LL);
  if ( (int)result >= 0 )
  {
    *(_OWORD *)*(_QWORD *)(a1 + 16) = v6;
    *a3 = 16;
    return 0LL;
  }
  return result;
}
