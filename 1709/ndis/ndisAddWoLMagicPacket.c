/*
 * XREFs of ndisAddWoLMagicPacket @ 0x1C0002DD0
 * Callers:
 *     ndisQueuedUpdatePMCapabilities @ 0x1C00E0CF0 (ndisQueuedUpdatePMCapabilities.c)
 *     ndisMInitializeAdapter @ 0x1C00FF8D8 (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisQuerySetMiniportEx @ 0x1C0009A50 (ndisQuerySetMiniportEx.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     WPP_SF_d @ 0x1C0040950 (WPP_SF_d.c)
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
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_q(85LL, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, MiniportAdapterHandle);
  v4 = KeAcquireSpinLockRaiseToDpc(MiniportAdapterHandle + 12);
  MiniportAdapterHandle[65] = (KSPIN_LOCK)KeGetCurrentThread();
  v5 = MiniportAdapterHandle[121];
  *((_DWORD *)MiniportAdapterHandle + 464) = 2758224;
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
    v6 = ndisQuerySetMiniportEx(MiniportAdapterHandle, 0LL, &Request, 0LL, 0LL);
    v2 = v6;
    if ( v6 )
    {
      if ( (unsigned __int8)byte_1C0098755 >= 2u )
        WPP_SF_d(86LL, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, v6);
    }
  }
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qD(87LL, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, MiniportAdapterHandle, v2);
  return v2;
}
