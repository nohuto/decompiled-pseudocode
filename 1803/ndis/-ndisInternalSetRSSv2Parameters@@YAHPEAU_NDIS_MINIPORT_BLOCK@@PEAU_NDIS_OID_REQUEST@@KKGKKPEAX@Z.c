/*
 * XREFs of ?ndisInternalSetRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@KKGKKPEAX@Z @ 0x1C007B744
 * Callers:
 *     ?ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C007C234 (-ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     ndisMInvokeBlockingOidRequest @ 0x1C00EA230 (ndisMInvokeBlockingOidRequest.c)
 */

__int64 __fastcall ndisInternalSetRSSv2Parameters(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        int a3,
        int a4,
        unsigned __int16 a5,
        unsigned int a6,
        size_t Size,
        void *Src)
{
  _QWORD v13[32]; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD v14[20]; // [rsp+120h] [rbp+20h] BYREF

  memset((char *)v14 + 1, 0, 0x43uLL);
  v14[6] = a5;
  v14[2] = a6;
  v14[3] = Size;
  v14[0] = 1835392;
  v14[1] = a3;
  v14[5] = a4;
  v14[4] = 28;
  if ( Src )
    memmove(&v14[7], Src, (unsigned int)Size);
  memset(v13, 0, 0xF8uLL);
  LODWORD(v13[11]) |= 8u;
  v13[13] = &ndisIntReqGeneric;
  LODWORD(v13[1]) = a2->PortNumber;
  v13[5] = v14;
  HIDWORD(v13[30]) = a2[1].RequestType;
  HIDWORD(v13[29]) = *(_DWORD *)(&a2->Reserved2 + 1);
  LODWORD(v13[30]) = a2[1].Header;
  v13[0] = 0x100F80296LL;
  LODWORD(v13[4]) = 66068;
  LODWORD(v13[6]) = 68;
  return ndisMInvokeBlockingOidRequest(a1, v13);
}
