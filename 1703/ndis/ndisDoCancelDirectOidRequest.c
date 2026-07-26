/*
 * XREFs of ndisDoCancelDirectOidRequest @ 0x1C0046520
 * Callers:
 *     NdisCancelDirectOidRequest @ 0x1C0045610 (NdisCancelDirectOidRequest.c)
 *     ndisFCancelDirectOidRequestInternal @ 0x1C0059BF0 (ndisFCancelDirectOidRequestInternal.c)
 * Callees:
 *     ndisSetBusyAsync @ 0x1C0011810 (ndisSetBusyAsync.c)
 *     ndisDereferenceRef @ 0x1C001807C (ndisDereferenceRef.c)
 *     ndisReferenceRefEx @ 0x1C001EE0C (ndisReferenceRefEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     ndisClearBusy @ 0x1C006E7B8 (ndisClearBusy.c)
 */

void __fastcall ndisDoCancelDirectOidRequest(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2, void *a3)
{
  __int64 v4; // rdi
  bool v6; // bp
  KSPIN_LOCK *v7; // r12
  KIRQL v8; // al
  _QWORD *v9; // r13
  __int64 v10; // r14
  char v11; // bl
  _DWORD *v12; // rax
  __int64 v13; // rbx
  unsigned __int8 MajorNdisVersion; // al
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rbx
  _DWORD v16[18]; // [rsp+30h] [rbp-48h] BYREF
  KIRQL NewIrql; // [rsp+88h] [rbp+10h]
  _DWORD *v18; // [rsp+98h] [rbp+20h] BYREF

  v4 = a2;
  v6 = 0;
  if ( a2 )
  {
    v6 = ndisReferenceRefEx((PKSPIN_LOCK)(a2 + 320), 4u, &v18);
    if ( !v6 )
      goto LABEL_27;
    while ( !*(_QWORD *)(*(_QWORD *)(v4 + 16) + 312LL) )
    {
      v7 = (KSPIN_LOCK *)(v4 + 144);
      v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 144));
      v9 = (_QWORD *)(v4 + 152);
      v10 = *(_QWORD *)(v4 + 848);
      *(_QWORD *)(v4 + 152) = KeGetCurrentThread();
      NewIrql = v8;
      *(_DWORD *)(v4 + 160) = 2307157;
      v11 = *(_BYTE *)v10;
      v18 = (_DWORD *)(v4 + 160);
      ndisDereferenceRef((PKSPIN_LOCK)(v4 + 320), 4u);
      v6 = 0;
      if ( v11 == 5 )
      {
        v4 = v10;
        v6 = ndisReferenceRefEx((PKSPIN_LOCK)(v10 + 320), 4u, v16);
        if ( !v6 )
          v4 = 0LL;
      }
      else
      {
        v4 = 0LL;
        a1 = (struct _NDIS_MINIPORT_BLOCK *)v10;
      }
      v12 = v18;
      *v9 = 0LL;
      *v12 = 0;
      KeReleaseSpinLock(v7, NewIrql);
      if ( !v4 )
        goto LABEL_14;
    }
    v13 = *(_QWORD *)(v4 + 16);
    if ( (unsigned __int8)byte_1C0092612 >= 4u )
      WPP_SF_q(0x8Au, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, v4);
    (*(void (__fastcall **)(_QWORD, void *))(v13 + 312))(*(_QWORD *)(v4 + 24), a3);
    if ( (unsigned __int8)byte_1C0092612 >= 4u )
      WPP_SF_q(0x8Bu, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, v4);
  }
LABEL_14:
  if ( a1 )
  {
    MajorNdisVersion = a1->MajorNdisVersion;
    if ( (MajorNdisVersion > 6u || MajorNdisVersion == 6 && a1->MinorNdisVersion)
      && a1->DriverHandle->MiniportDriverCharacteristics.CancelDirectOidRequestHandler
      && (!a1->SelectiveSuspend || ndisSetBusyAsync(a1, 1u, NdisBusyCancelDirectOid, a3, 0)) )
    {
      DriverHandle = a1->DriverHandle;
      if ( (unsigned __int8)byte_1C0092612 >= 4u )
        WPP_SF_q(0xE9u, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, (__int64)a1);
      DriverHandle->MiniportDriverCharacteristics.CancelDirectOidRequestHandler(a1->MiniportAdapterContext, a3);
      if ( (unsigned __int8)byte_1C0092612 >= 4u )
        WPP_SF_q(0xEAu, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, (__int64)a1);
      if ( a1->SelectiveSuspend )
        ndisClearBusy(a1, 1LL, 51LL);
    }
  }
LABEL_27:
  if ( v6 )
    ndisDereferenceRef((PKSPIN_LOCK)(v4 + 320), 4u);
}
