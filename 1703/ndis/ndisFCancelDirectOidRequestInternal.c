/*
 * XREFs of ndisFCancelDirectOidRequestInternal @ 0x1C0059BF0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceRef @ 0x1C001807C (ndisDereferenceRef.c)
 *     ndisReferenceRefEx @ 0x1C001EE0C (ndisReferenceRefEx.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     ndisDoCancelDirectOidRequest @ 0x1C0046520 (ndisDoCancelDirectOidRequest.c)
 */

void __fastcall ndisFCancelDirectOidRequestInternal(_QWORD *Parameter)
{
  void *v1; // rsi
  __int64 v2; // rdi
  __int64 v3; // rbx
  struct _NDIS_MINIPORT_BLOCK *v4; // rbp
  bool v5; // r14
  KIRQL v6; // r12
  __int64 v7; // rax
  int v8; // [rsp+50h] [rbp+8h] BYREF

  v1 = (void *)Parameter[3];
  v2 = 0LL;
  v3 = Parameter[1];
  v4 = 0LL;
  v5 = 0;
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qq(0x3Bu, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, v3, v1);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 144));
  *(_QWORD *)(v3 + 152) = KeGetCurrentThread();
  v7 = *(_QWORD *)(v3 + 848);
  *(_DWORD *)(v3 + 160) = 2101478;
  if ( *(_BYTE *)v7 == 5 )
  {
    v2 = v7;
    v5 = ndisReferenceRefEx((PKSPIN_LOCK)(v7 + 320), 2u, &v8);
    if ( !v5 )
      v2 = 0LL;
  }
  else
  {
    v4 = (struct _NDIS_MINIPORT_BLOCK *)v7;
  }
  *(_QWORD *)(v3 + 152) = 0LL;
  *(_DWORD *)(v3 + 160) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 144), v6);
  if ( v4 || v2 )
    ndisDoCancelDirectOidRequest(v4, v2, v1);
  if ( v5 )
    ndisDereferenceRef((PKSPIN_LOCK)(v2 + 320), 2u);
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qq(0x3Cu, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, v3, v1);
}
