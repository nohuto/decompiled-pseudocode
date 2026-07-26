/*
 * XREFs of ndisCancelOidRequestInternal @ 0x1C00441CC
 * Callers:
 *     NdisCancelOidRequest @ 0x1C00436B0 (NdisCancelOidRequest.c)
 *     ndisFCancelOidRequestInternal @ 0x1C0059750 (ndisFCancelOidRequestInternal.c)
 *     ndisMReenumerateFailedAdapterInternal @ 0x1C00659FC (ndisMReenumerateFailedAdapterInternal.c)
 * Callees:
 *     ndisDereferenceRef @ 0x1C0019DB0 (ndisDereferenceRef.c)
 *     WPP_SF_qqqL @ 0x1C0043FB4 (WPP_SF_qqqL.c)
 *     ndisCancelOidRequestOnFilter @ 0x1C004431C (ndisCancelOidRequestOnFilter.c)
 *     ndisCancelOidRequestOnMiniport @ 0x1C00444B0 (ndisCancelOidRequestOnMiniport.c)
 *     ndisRefNextFilterForOidCancellation @ 0x1C00487AC (ndisRefNextFilterForOidCancellation.c)
 *     ndisFInvokeCancelOidRequest @ 0x1C0059B90 (ndisFInvokeCancelOidRequest.c)
 *     ndisMInvokeCancelOidRequest @ 0x1C0060628 (ndisMInvokeCancelOidRequest.c)
 */

void __fastcall ndisCancelOidRequestInternal(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r14
  char v11; // r14
  __int64 v12; // [rsp+28h] [rbp-20h]
  char v13; // [rsp+58h] [rbp+10h] BYREF

  v8 = a2;
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qqqL(0xC7u, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, a1, a2, a3, a4);
  while ( 1 )
  {
    v10 = ndisRefNextFilterForOidCancellation(a1, v8, &v13);
    if ( !v10 )
      break;
    if ( v8 != a2 )
      ndisDereferenceRef((PKSPIN_LOCK)(v8 + 320), 1u);
    LOBYTE(v9) = a4;
    v8 = v10;
    ndisCancelOidRequestOnFilter(v10, a3, v9);
    if ( !a4 && *(_QWORD *)(*(_QWORD *)(v10 + 16) + 264LL) )
    {
      ndisFInvokeCancelOidRequest(v10, a3);
      v11 = 0;
      goto LABEL_10;
    }
  }
  v11 = v13;
LABEL_10:
  if ( v8 != a2 )
    ndisDereferenceRef((PKSPIN_LOCK)(v8 + 320), 1u);
  if ( v11 )
  {
    LOBYTE(v9) = a4;
    ndisCancelOidRequestOnMiniport(a1, a3, v9);
    if ( *(_BYTE *)(a1 + 32) >= 6u && !a4 && *(_QWORD *)(*(_QWORD *)(a1 + 3784) + 240LL) )
      ndisMInvokeCancelOidRequest(a1, a3);
  }
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
  {
    LODWORD(v12) = a4;
    WPP_SF_qqqL(0xC8u, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, a1, a2, a3, v12);
  }
}
