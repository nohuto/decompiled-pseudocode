/*
 * XREFs of ndisAddWoLMagicPacket @ 0x1C0022788
 * Callers:
 *     ndisQueuedUpdatePMCapabilities @ 0x1C00D6890 (ndisQueuedUpdatePMCapabilities.c)
 *     ndisMInitializeAdapter @ 0x1C00F904C (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisQuerySetMiniportEx @ 0x1C0009F70 (ndisQuerySetMiniportEx.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     WPP_SF_d @ 0x1C0043BDC (WPP_SF_d.c)
 */

__int64 __fastcall ndisAddWoLMagicPacket(KSPIN_LOCK *MiniportAdapterHandle)
{
  unsigned int v2; // edi
  KSPIN_LOCK v3; // rsi
  KIRQL v4; // dl
  KSPIN_LOCK v5; // rax
  unsigned int v6; // eax
  struct _NDIS_OID_REQUEST Request; // [rsp+38h] [rbp-D0h] BYREF
  _DWORD v9[52]; // [rsp+138h] [rbp+30h] BYREF

  v2 = 0;
  v3 = 0LL;
  memset(&Request, 0, 0xF8uLL);
  memset(v9, 0, 0xC4uLL);
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_q(85LL, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids, MiniportAdapterHandle);
  v4 = KeAcquireSpinLockRaiseToDpc(MiniportAdapterHandle + 12);
  MiniportAdapterHandle[65] = (KSPIN_LOCK)KeGetCurrentThread();
  v5 = MiniportAdapterHandle[121];
  *((_DWORD *)MiniportAdapterHandle + 464) = 2758222;
  while ( v5 )
  {
    v3 = v5;
    if ( *(_DWORD *)(v5 + 60) == 2 )
      break;
    v5 = *(_QWORD *)v5;
    v3 = 0LL;
  }
  MiniportAdapterHandle[65] = 0LL;
  *((_DWORD *)MiniportAdapterHandle + 464) = 0;
  KeReleaseSpinLock(MiniportAdapterHandle + 12, v4);
  if ( !v3 )
  {
    v9[0] = 12845440;
    v9[3] = 2;
    LOWORD(v9[4]) = MagicPacketStr.Length;
    memcpy_s((char *)&v9[4] + 2, 0x80uLL, Src, MagicPacketStr.Length);
    memset(&Request, 0, 0xF8uLL);
    Request.PortNumber = 0;
    *(_QWORD *)&Request.NdisReserved[32] = &ndisIntReqGeneric;
    Request.DATA.QUERY_INFORMATION.InformationBuffer = v9;
    Request.Header = (NDIS_OBJECT_HEADER)15466902;
    *(_DWORD *)&Request.NdisReserved[16] |= 0x100008u;
    Request.DATA.QUERY_INFORMATION.Oid = -50265846;
    Request.RequestType = NdisRequestSetInformation;
    Request.DATA.QUERY_INFORMATION.InformationBufferLength = 196;
    v6 = ndisQuerySetMiniportEx(MiniportAdapterHandle, 0LL, &Request, 0, 0LL, 0LL);
    v2 = v6;
    if ( v6 )
    {
      if ( (unsigned __int8)byte_1C0092615 >= 2u )
        WPP_SF_d(86LL, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids, v6);
    }
  }
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qD(87LL, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids, MiniportAdapterHandle, v2);
  return v2;
}
