/*
 * XREFs of WPP_SF_qLLd @ 0x1C0077B34
 * Callers:
 *     ?NdisPDPIProviderControl@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@W4NDIS_PD_CONTROL_TYPE@@W4NDIS_PD_PROVIDER_CONTROL_CODE@@PEAXK3KPEAK@Z @ 0x1C00F8F20 (-NdisPDPIProviderControl@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@W4NDIS_PD_CONTROL_TYPE@@W4NDIS_PD_PR.c)
 *     ?NdisPDPIQueueControl@@YAJPEAU_NDIS_PD_QUEUE@@W4NDIS_PD_CONTROL_TYPE@@W4NDIS_PD_QUEUE_CONTROL_CODE@@PEAXK3KPEAK@Z @ 0x1C00F90B0 (-NdisPDPIQueueControl@@YAJPEAU_NDIS_PD_QUEUE@@W4NDIS_PD_CONTROL_TYPE@@W4NDIS_PD_QUEUE_CONTROL_CO.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F104 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qLLd(unsigned __int16 a1, __int64 a2, __int64 a3, int a4, ...)
{
  __int64 v4; // [rsp+80h] [rbp+18h] BYREF
  int v5; // [rsp+88h] [rbp+20h] BYREF
  __int64 v6; // [rsp+90h] [rbp+28h] BYREF
  va_list va; // [rsp+90h] [rbp+28h]
  va_list va1; // [rsp+98h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v6 = va_arg(va1, _QWORD);
  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(
    &WPP_a3b9db0bffd8342d0da72f7b6cff8d15_Traceguids,
    a1,
    &v4,
    8LL,
    &v5,
    4LL,
    va,
    4LL,
    va1,
    4LL,
    0LL);
}
