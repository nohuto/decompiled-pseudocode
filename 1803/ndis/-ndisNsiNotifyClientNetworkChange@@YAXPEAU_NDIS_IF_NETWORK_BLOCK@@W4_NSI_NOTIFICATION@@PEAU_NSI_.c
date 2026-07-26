/*
 * XREFs of ?ndisNsiNotifyClientNetworkChange@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@@Z @ 0x1C00DD184
 * Callers:
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C0040820 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0040E80 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 * Callees:
 *     ?ndisIsCompartmentEnumerable@@YAEPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C001BF90 (-ndisIsCompartmentEnumerable@@YAEPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 */

void __fastcall ndisNsiNotifyClientNetworkChange(__int64 a1, int a2, __int64 a3)
{
  struct _NDIS_IF_COMPARTMENT_BLOCK *v3; // rsi
  int v7; // edx
  __int64 v8; // xmm1_8
  _OWORD v9[4]; // [rsp+20h] [rbp-40h] BYREF

  v3 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)(a1 + 48);
  if ( ndisIsCompartmentEnumerable(v3) )
  {
    if ( (unsigned __int8)byte_1C009961D >= 4u )
    {
      WPP_SF_qD(0x94u, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, a1, v7);
      v3 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)(a1 + 48);
    }
    memset(v9, 0, sizeof(v9));
    *(_QWORD *)&v9[0] = ndisNsiSavedClientNpi;
    WORD4(v9[0]) = 6;
    *(_QWORD *)&v9[1] = a1 + 32;
    HIDWORD(v9[0]) = a2;
    DWORD2(v9[1]) = 16;
    if ( a2 )
    {
      *((_QWORD *)&v9[2] + 1) = 0LL;
    }
    else
    {
      v8 = *(_QWORD *)(a3 + 16);
      v9[2] = *(_OWORD *)a3;
      *(_QWORD *)&v9[3] = v8;
    }
    DWORD2(v9[3]) = v3->CompartmentId;
    (*(void (__fastcall **)(_OWORD *))(qword_1C0098F68 + 8))(v9);
    if ( (unsigned __int8)byte_1C009961D >= 4u )
      WPP_SF_qD(0x95u, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, a1, a2);
  }
}
