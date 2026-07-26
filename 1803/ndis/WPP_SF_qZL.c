/*
 * XREFs of WPP_SF_qZL @ 0x1C0050D00
 * Callers:
 *     NdisQueryAdapterInstanceName @ 0x1C005C250 (NdisQueryAdapterInstanceName.c)
 *     NdisRegisterProtocolDriver @ 0x1C00C18B0 (NdisRegisterProtocolDriver.c)
 *     NdisIMCancelInitializeDeviceInstance @ 0x1C00E5540 (NdisIMCancelInitializeDeviceInstance.c)
 *     NdisRegisterProtocol @ 0x1C00E79E0 (NdisRegisterProtocol.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F104 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qZL(unsigned __int16 a1, const struct _GUID *a2, __int64 a3, const wchar_t *a4, ...)
{
  __int64 v6; // rax
  const wchar_t *v7; // rcx
  __int64 v8; // [rsp+80h] [rbp+18h] BYREF
  va_list va; // [rsp+90h] [rbp+28h] BYREF

  va_start(va, a4);
  v8 = a3;
  if ( a4 )
    v6 = *a4;
  else
    v6 = 8LL;
  if ( a4 && *a4 )
    v7 = (const wchar_t *)*((_QWORD *)a4 + 1);
  else
    v7 = L"NULL";
  if ( !a4 )
    a4 = L"\b";
  ndisWppFastTraceMessage(a2, a1, &v8, 8LL, a4, 2LL, v7, v6, va, 4LL, 0LL);
}
