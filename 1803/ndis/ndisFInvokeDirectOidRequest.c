/*
 * XREFs of ndisFInvokeDirectOidRequest @ 0x1C0059C10
 * Callers:
 *     ndisFDoDirectOidRequestInternal @ 0x1C0044CE0 (ndisFDoDirectOidRequestInternal.c)
 * Callees:
 *     ndisOidCloneForCompatibility @ 0x1C000DAC0 (ndisOidCloneForCompatibility.c)
 *     ndisOidFreeInternalCloneRequest @ 0x1C000E4F8 (ndisOidFreeInternalCloneRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qDqL @ 0x1C0042180 (WPP_SF_qDqL.c)
 *     WPP_SF_qLq @ 0x1C0043C94 (WPP_SF_qLq.c)
 *     WPP_SF_qqd @ 0x1C0043E2C (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisFInvokeDirectOidRequest(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  int v4; // r14d
  NDIS_STATUS v6; // eax
  PNDIS_OID_REQUEST v7; // rbx
  unsigned int v8; // esi
  __int64 v9; // rdx
  __int64 v11; // [rsp+20h] [rbp-28h]
  PNDIS_OID_REQUEST v12; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v4 = *(_DWORD *)(a2 + 32);
  v12 = 0LL;
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
  {
    HIDWORD(v11) = HIDWORD(a2);
    WPP_SF_qLq(0x83u, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, a1, v4);
  }
  v6 = ndisOidCloneForCompatibility((_BYTE *)a1, a2, 0, &v12);
  v7 = v12;
  v8 = v6;
  if ( !v6 )
  {
    if ( v12 )
    {
      if ( (unsigned __int8)byte_1C0099612 >= 4u )
      {
        LODWORD(v11) = v12->DATA.QUERY_INFORMATION.Oid;
        WPP_SF_qqd(0x84u, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, a2, v12, v11);
      }
      v9 = (__int64)v7;
    }
    else
    {
      v9 = a2;
    }
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(v2 + 296))(*(_QWORD *)(a1 + 24), v9);
  }
  if ( v8 != 259 && v7 )
    ndisOidFreeInternalCloneRequest((KSPIN_LOCK *)a1, (__int64)v7, 0, 0LL);
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qDqL(0x85u, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, a1, v4);
  return v8;
}
