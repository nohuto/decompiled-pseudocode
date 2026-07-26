/*
 * XREFs of ndisMInvokeDirectOidRequest @ 0x1C005FC6C
 * Callers:
 *     ndisMDoDirectOidRequest @ 0x1C0044710 (ndisMDoDirectOidRequest.c)
 * Callees:
 *     ndisOidCloneForCompatibility @ 0x1C000CCD8 (ndisOidCloneForCompatibility.c)
 *     ndisOidFreeInternalCloneRequest @ 0x1C000E2C4 (ndisOidFreeInternalCloneRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     WPP_SF_qdD @ 0x1C00394CC (WPP_SF_qdD.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisMInvokeDirectOidRequest(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // rbp
  int v4; // r14d
  unsigned int v6; // eax
  PNDIS_OID_REQUEST v7; // rbx
  unsigned int v8; // edi
  __int64 v10; // [rsp+20h] [rbp-28h]
  PNDIS_OID_REQUEST v11; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 3784);
  v3 = a2;
  v4 = *(_DWORD *)(a2 + 32);
  v11 = 0LL;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qD(0xF3u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1, v4);
  v6 = ndisOidCloneForCompatibility((_BYTE *)a1, v3, 0, &v11);
  v7 = v11;
  v8 = v6;
  if ( !v6 )
  {
    if ( v11 )
    {
      if ( (unsigned __int8)byte_1C0098752 >= 4u )
        WPP_SF_qqd(0xF4u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, v3, v11, v11->DATA.QUERY_INFORMATION.Oid);
      v3 = (__int64)v7;
    }
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(v2 + 248))(*(_QWORD *)(a1 + 24), v3);
  }
  if ( v8 != 259 && v7 )
    ndisOidFreeInternalCloneRequest((KSPIN_LOCK *)a1, (__int64)v7, 0, 0LL);
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
  {
    LODWORD(v10) = v8;
    WPP_SF_qdD(0xF5u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1, v4, v10);
  }
  return v8;
}
