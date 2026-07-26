/*
 * XREFs of ndisSriovInterfaceGetVendorAndDeviceIds @ 0x1C00F48D0
 * Callers:
 *     <none>
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C000AE40 (ndisQuerySetMiniport.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 */

void __fastcall ndisSriovInterfaceGetVendorAndDeviceIds(void *a1, unsigned __int16 a2, _WORD *a3, _WORD *a4)
{
  int SetMiniport; // eax
  _BYTE v9[248]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v10; // [rsp+130h] [rbp+30h] BYREF
  __int16 v11; // [rsp+138h] [rbp+38h]

  memset(v9, 0, sizeof(v9));
  v10 = 0LL;
  v11 = 0;
  if ( (unsigned __int8)byte_1C0099621 >= 4u )
    WPP_SF_q(0x63u, &WPP_63e421b5d75535977b2a1141380f2a99_Traceguids, (__int64)a1);
  v11 = 0;
  LODWORD(v10) = 655744;
  HIDWORD(v10) = a2;
  memset(v9, 0, sizeof(v9));
  *(_DWORD *)&v9[88] |= 8u;
  *(_QWORD *)&v9[104] = &ndisIntReqGeneric;
  *(_DWORD *)v9 = 15466902;
  *(_QWORD *)&v9[40] = &v10;
  *(_QWORD *)&v9[4] = 12LL;
  *(_DWORD *)&v9[32] = 66135;
  *(_QWORD *)&v9[52] = 10LL;
  *(_DWORD *)&v9[48] = 10;
  SetMiniport = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v9, 0LL, 0LL);
  if ( !SetMiniport )
  {
    *a3 = HIWORD(v10);
    *a4 = v11;
  }
  if ( (unsigned __int8)byte_1C0099621 >= 4u )
    WPP_SF_qD(0x64u, &WPP_63e421b5d75535977b2a1141380f2a99_Traceguids, (__int64)a1, SetMiniport);
}
