/*
 * XREFs of ?ndisNsiNotifyClientNetworkChange@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@@Z @ 0x1C00D0D58
 * Callers:
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C0042C00 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0043260 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 * Callees:
 *     ?ndisIsCompartmentEnumerable@@YAEPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C001B9E0 (-ndisIsCompartmentEnumerable@@YAEPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 */

void __fastcall ndisNsiNotifyClientNetworkChange(__int64 a1, int a2, __int64 a3)
{
  int v6; // edx
  __int64 v7; // xmm1_8
  _OWORD v8[4]; // [rsp+20h] [rbp-40h] BYREF

  if ( ndisIsCompartmentEnumerable(*(struct _NDIS_IF_COMPARTMENT_BLOCK **)(a1 + 48)) )
  {
    if ( (unsigned __int8)byte_1C009261D >= 4u )
      WPP_SF_qD(0x94u, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, a1, v6);
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
    (*(void (__fastcall **)(_OWORD *))(qword_1C0091DC8 + 8))(v8);
    if ( (unsigned __int8)byte_1C009261D >= 4u )
      WPP_SF_qD(0x95u, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, a1, a2);
  }
}
