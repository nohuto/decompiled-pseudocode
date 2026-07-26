/*
 * XREFs of ?ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z @ 0x1C00DA988
 * Callers:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C00213FC (-ndisInitializeNsiHelper@@YAJXZ.c)
 *     ?ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C003D288 (-ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLO.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF__guid_LL @ 0x1C0040CE4 (WPP_SF__guid_LL.c)
 *     WPP_SF__guid_d @ 0x1C0040DB4 (WPP_SF__guid_d.c)
 */

__int64 __fastcall ndisIfCreateNetwork(struct _GUID *a1, __int64 a2)
{
  int v2; // edi
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // esi
  _QWORD v9[10]; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v10[132]; // [rsp+80h] [rbp-80h] BYREF

  v2 = a2;
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF__guid_d(0x82u, a2, (__int64)a1, a2);
  memset(v9, 0, 0x48uLL);
  memset(v10, 0, sizeof(v10));
  v9[0] = 0LL;
  LODWORD(v9[1]) = 0;
  v9[2] = &NPI_MS_NDIS_MODULEID;
  v9[7] = v10;
  LODWORD(v9[3]) = 6;
  v9[4] = 0x100000002LL;
  v9[5] = a1;
  LODWORD(v9[6]) = 16;
  v10[0] = 34603436;
  v10[1] = v2;
  LODWORD(v9[8]) = 528;
  v4 = NsiSetAllParametersEx(v9);
  v7 = v4;
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF__guid_LL(v6, v5, (__int64)a1, v2, v4);
  return v7;
}
