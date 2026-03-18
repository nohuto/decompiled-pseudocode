/*
 * XREFs of HvlpGetVtlCallVa @ 0x1402947CC
 * Callers:
 *     HvlEnableVsmCalls @ 0x140858168 (HvlEnableVsmCalls.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercallWithOutput @ 0x14018AAD0 (HvcallpExtendedFastHypercallWithOutput.c)
 */

__int64 (__fastcall *HvlpGetVtlCallVa())(_QWORD, _QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v1; // [rsp+20h] [rbp-60h]
  __int64 v2; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v3[2]; // [rsp+50h] [rbp-30h] BYREF
  int v4; // [rsp+60h] [rbp-20h]

  LODWORD(v1) = 1;
  v3[0] = -1LL;
  v3[1] = 4294967294LL;
  v4 = 851970;
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvcallpExtendedFastHypercallWithOutput(
                                                             0x100010050LL,
                                                             (__int64)v3,
                                                             2LL,
                                                             (__int64)&v2,
                                                             v1);
  if ( (_WORD)result )
  {
    HvlpVsmVtlCallVa = 0LL;
  }
  else
  {
    result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))(HvlpHypercallCodeVa + (v2 & 0xFFF));
    HvlpVsmVtlCallVa = result;
  }
  return result;
}
