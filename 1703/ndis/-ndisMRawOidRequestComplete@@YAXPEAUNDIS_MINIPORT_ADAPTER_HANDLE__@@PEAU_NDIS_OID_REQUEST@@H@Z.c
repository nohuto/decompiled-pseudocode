/*
 * XREFs of ?ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C00454B8
 * Callers:
 *     ?ndisMpHookDefaultOidRequestComplete@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C00780D0 (-ndisMpHookDefaultOidRequestComplete@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_M.c)
 *     ?ndisMpHookRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C00783E0 (-ndisMpHookRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@.c)
 * Callees:
 *     ndisOidFreeInternalCloneRequest @ 0x1C000C1E4 (ndisOidFreeInternalCloneRequest.c)
 *     ?CancelTimer@NdisWatchdogState@@QEAA_NXZ @ 0x1C0016AF4 (-CancelTimer@NdisWatchdogState@@QEAA_NXZ.c)
 *     ndisMOidRequestCompleteInternal @ 0x1C0027768 (ndisMOidRequestCompleteInternal.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C003CAE8 (WPP_SF_qqd.c)
 *     ndisClearBusy @ 0x1C006E7B8 (ndisClearBusy.c)
 */

void __fastcall ndisMRawOidRequestComplete(
        struct NDIS_MINIPORT_ADAPTER_HANDLE__ *a1,
        struct _NDIS_OID_REQUEST *a2,
        int a3)
{
  UCHAR *NdisReserved; // rdi
  struct _NDIS_OID_REQUEST *v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rcx
  NdisWatchdogState *v10; // rcx
  struct _NDIS_OID_REQUEST *v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = a2;
  NdisReserved = a2->NdisReserved;
  v7 = a2;
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qqd(0x25u, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, a1, a2, a3);
  v8 = *((_QWORD *)a1 + 473);
  v9 = *(_QWORD *)(v8 + 352);
  if ( !v9 || *(_QWORD *)(v9 + 64) == *(_QWORD *)(v8 + 176) )
    v10 = (NdisWatchdogState *)*((_QWORD *)a1 + 699);
  else
    v10 = (NdisWatchdogState *)*((_QWORD *)a1 + 700);
  if ( v10 != (NdisWatchdogState *)-1LL )
    NdisWatchdogState::CancelTimer(v10);
  if ( (*((_DWORD *)NdisReserved + 4) & 0x8000000) != 0 )
  {
    ndisOidFreeInternalCloneRequest((KSPIN_LOCK *)a1, (__int64)a2, 1, (KSPIN_LOCK *)&v12);
    v7 = v12;
    NdisReserved = v12->NdisReserved;
  }
  if ( (*((_DWORD *)NdisReserved + 4) & 0x400) != 0 )
  {
    *((_DWORD *)NdisReserved + 2) = a3;
    KeSetEvent((PRKEVENT)(NdisReserved + 40), 0, 0);
  }
  else
  {
    if ( *((_QWORD *)a1 + 560) )
      ndisClearBusy(a1, 1LL, 33LL);
    ndisMOidRequestCompleteInternal((__int64)a1, (__int64)v7, a3, 0LL);
  }
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qq(0x26u, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, a1, a2);
}
