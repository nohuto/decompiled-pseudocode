/*
 * XREFs of TR_Disable_Internal @ 0x1C0022ADC
 * Callers:
 *     Endpoint_Disable_Internal @ 0x1C001849C (Endpoint_Disable_Internal.c)
 *     Endpoint_EndpointStaticStreamsDisableCompletion @ 0x1C00189B0 (Endpoint_EndpointStaticStreamsDisableCompletion.c)
 *     Endpoint_EndpointStaticStreamsEnableCompletion @ 0x1C0018BC0 (Endpoint_EndpointStaticStreamsEnableCompletion.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C001CB80 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     TR_FreeSecureTransferSegments @ 0x1C0023120 (TR_FreeSecureTransferSegments.c)
 *     XilCoreCommonBuffer_ReleaseBuffers @ 0x1C0040CC8 (XilCoreCommonBuffer_ReleaseBuffers.c)
 */

void __fastcall TR_Disable_Internal(__int64 a1, char a2)
{
  __int64 v4; // rsi
  _QWORD *v5; // rdx
  _QWORD *v6; // rdx
  struct _MDL *v7; // rcx

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 120LL);
  (*(void (**)(void))(*(_QWORD *)(a1 + 32) + 40LL))();
  _InterlockedExchange((volatile __int32 *)(a1 + 108), 0);
  if ( a2 )
  {
    if ( *(_BYTE *)(a1 + 280) )
      TR_FreeSecureTransferSegments(a1);
    v5 = (_QWORD *)(a1 + 208);
    if ( (_QWORD *)*v5 != v5 )
      XilCoreCommonBuffer_ReleaseBuffers(v4 + 80, v5);
    v6 = (_QWORD *)(a1 + 224);
    if ( (_QWORD *)*v6 != v6 )
      XilCoreCommonBuffer_ReleaseBuffers(v4 + 80, v6);
    v7 = *(struct _MDL **)(a1 + 120);
    if ( v7 )
    {
      IoFreeMdl(v7);
      *(_QWORD *)(a1 + 120) = 0LL;
    }
  }
}
