/*
 * XREFs of ndisIfOpenInterfacePersistedStorage @ 0x1C00B6F6C
 * Callers:
 *     ndisIfCreateOrUpdateInterface @ 0x1C00424F4 (ndisIfCreateOrUpdateInterface.c)
 *     ndisIfReadInterfaceAddDeviceParameters @ 0x1C00B72D0 (ndisIfReadInterfaceAddDeviceParameters.c)
 *     ndisCheckNetworkInterfaceDataMismatch @ 0x1C00C3820 (ndisCheckNetworkInterfaceDataMismatch.c)
 *     ?ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C00DCB40 (-ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z.c)
 *     ndisIfReadInterfaceAddDeviceParametersForLWMiniport @ 0x1C00DDA04 (ndisIfReadInterfaceAddDeviceParametersForLWMiniport.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C001A5E8 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     WPP_SF__guid_d @ 0x1C0041F44 (WPP_SF__guid_d.c)
 *     ?Open@KRegKey@@QEAAJKPEBGPEAX@Z @ 0x1C00BB394 (-Open@KRegKey@@QEAAJKPEBGPEAX@Z.c)
 */

__int64 __fastcall ndisIfOpenInterfacePersistedStorage(unsigned int *a1, KRegKey *a2, unsigned int a3)
{
  __int64 result; // rax
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // [rsp+20h] [rbp-288h]
  int v10; // [rsp+28h] [rbp-280h]
  int v11; // [rsp+30h] [rbp-278h]
  int v12; // [rsp+38h] [rbp-270h]
  int v13; // [rsp+40h] [rbp-268h]
  int v14; // [rsp+48h] [rbp-260h]
  int v15; // [rsp+50h] [rbp-258h]
  int v16; // [rsp+58h] [rbp-250h]
  int v17; // [rsp+60h] [rbp-248h]
  int v18; // [rsp+68h] [rbp-240h]
  wchar_t Dest[256]; // [rsp+70h] [rbp-238h] BYREF

  v18 = *((unsigned __int8 *)a1 + 15);
  v17 = *((unsigned __int8 *)a1 + 14);
  v16 = *((unsigned __int8 *)a1 + 13);
  v15 = *((unsigned __int8 *)a1 + 12);
  v14 = *((unsigned __int8 *)a1 + 11);
  v13 = *((unsigned __int8 *)a1 + 10);
  v12 = *((unsigned __int8 *)a1 + 9);
  v11 = *((unsigned __int8 *)a1 + 8);
  v10 = *((unsigned __int16 *)a1 + 3);
  v9 = *((unsigned __int16 *)a1 + 2);
  result = RtlStringCchPrintfW(
             Dest,
             256LL,
             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Interfaces\\{%08x-%04x-%04x-%02x%02"
              "x-%02x%02x%02x%02x%02x%02x}\\Kernel",
             *a1,
             v9,
             v10,
             v11,
             v12,
             v13,
             v14,
             v15,
             v16,
             v17,
             v18);
  if ( (int)result >= 0 )
  {
    v7 = KRegKey::Open(a2, a3, Dest, 0LL);
    v8 = v7;
    if ( v7 < 0 )
    {
      if ( (unsigned __int8)byte_1C009961D >= 3u )
        WPP_SF__guid_d(0xB1u, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, (__int64)a1, v7);
      return v8;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
