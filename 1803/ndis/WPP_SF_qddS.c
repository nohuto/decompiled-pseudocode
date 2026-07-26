/*
 * XREFs of WPP_SF_qddS @ 0x1C0077DEC
 * Callers:
 *     ?NdisPDPIAcquireReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ACQUIRE_QUEUES_PARAMETERS@@PEAPEAU_NDIS_PD_QUEUE@@PEAKPEAU_NDIS_PD_QUEUE_PARAMETERS@@33@Z @ 0x1C00F83F0 (-NdisPDPIAcquireReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ACQUIRE_QUEUES_PAR.c)
 *     ?NdisPDPIAllocateQueue@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_QUEUE_PARAMETERS@@PEAPEAU_NDIS_PD_QUEUE@@@Z @ 0x1C00F8AA0 (-NdisPDPIAllocateQueue@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_QUEUE_PARAMETERS@@PEAPEAU.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F104 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qddS(unsigned __int16 a1, __int64 a2, __int64 a3, int a4, char a5, const wchar_t *a6)
{
  const wchar_t *v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // [rsp+80h] [rbp+18h] BYREF
  int v10; // [rsp+88h] [rbp+20h] BYREF

  v10 = a4;
  v9 = a3;
  v6 = a6;
  if ( a6 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a6[v7] );
    v8 = v7 + 1;
  }
  else
  {
    v8 = 5LL;
  }
  if ( !a6 )
    v6 = L"NULL";
  ndisWppFastTraceMessage(
    &WPP_a3b9db0bffd8342d0da72f7b6cff8d15_Traceguids,
    a1,
    &v9,
    8LL,
    &v10,
    4LL,
    &a5,
    4LL,
    v6,
    2 * v8,
    0LL);
}
