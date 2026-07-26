/*
 * XREFs of ?ndisNsiNotifyClientNetworkChange@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@@Z @ 0x1C00DB5D0
 * Callers:
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C003F740 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C003FDA0 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 * Callees:
 *     ?ndisIsCompartmentEnumerable@@YAEPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C0004688 (-ndisIsCompartmentEnumerable@@YAEPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 */

void __fastcall ndisNsiNotifyClientNetworkChange(__int64 a1, int a2, __int64 a3)
{
  int v6; // edx
  __int64 v7; // xmm1_8
  _OWORD v8[4]; // [rsp+20h] [rbp-40h] BYREF

  if ( ndisIsCompartmentEnumerable(*(struct _NDIS_IF_COMPARTMENT_BLOCK **)(a1 + 48)) )
  {
    if ( (unsigned __int8)byte_1C009875D >= 4u )
      WPP_SF_qD(0x94u, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, a1, v6);
    memset(v8, 0, sizeof(v8));
    *(_QWORD *)&v8[0] = ndisNsiSavedClientNpi;
    WORD4(v8[0]) = 6;
    *(_QWORD *)&v8[1] = a1 + 32;
    HIDWORD(v8[0]) = a2;
    DWORD2(v8[1]) = 16;
    if ( a2 )
    {
      *((_QWORD *)&v8[2] + 1) = 0LL;
    }
    else
    {
      v7 = *(_QWORD *)(a3 + 16);
      v8[2] = *(_OWORD *)a3;
      *(_QWORD *)&v8[3] = v7;
    }
    DWORD2(v8[3]) = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 16LL);
    (*(void (__fastcall **)(_OWORD *))(qword_1C00980E8 + 8))(v8);
    if ( (unsigned __int8)byte_1C009875D >= 4u )
      WPP_SF_qD(0x95u, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, a1, a2);
  }
}
