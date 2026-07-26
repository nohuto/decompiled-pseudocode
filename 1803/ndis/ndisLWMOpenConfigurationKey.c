/*
 * XREFs of ndisLWMOpenConfigurationKey @ 0x1C00EC984
 * Callers:
 *     NdisOpenConfiguration @ 0x1C00B9D80 (NdisOpenConfiguration.c)
 *     ndisLWMCreateMiniport @ 0x1C00EC7B8 (ndisLWMCreateMiniport.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C001A5E8 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     WPP_SF_d @ 0x1C00419DC (WPP_SF_d.c)
 *     WPP_SF__guid_ @ 0x1C0041E08 (WPP_SF__guid_.c)
 *     WPP_SF__guid_d @ 0x1C0041F44 (WPP_SF__guid_d.c)
 *     ?Open@KRegKey@@QEAAJKPEBGPEAX@Z @ 0x1C00BB394 (-Open@KRegKey@@QEAAJKPEBGPEAX@Z.c)
 */

__int64 __fastcall ndisLWMOpenConfigurationKey(unsigned int *a1, KRegKey *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  unsigned __int16 v6; // cx
  int v8; // [rsp+20h] [rbp-278h]
  int v9; // [rsp+28h] [rbp-270h]
  int v10; // [rsp+30h] [rbp-268h]
  int v11; // [rsp+38h] [rbp-260h]
  int v12; // [rsp+40h] [rbp-258h]
  int v13; // [rsp+48h] [rbp-250h]
  int v14; // [rsp+50h] [rbp-248h]
  int v15; // [rsp+58h] [rbp-240h]
  int v16; // [rsp+60h] [rbp-238h]
  int v17; // [rsp+68h] [rbp-230h]
  wchar_t Dest[256]; // [rsp+70h] [rbp-228h] BYREF

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF__guid_(0x82u, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, (__int64)a1);
  v17 = *((unsigned __int8 *)a1 + 15);
  v16 = *((unsigned __int8 *)a1 + 14);
  v15 = *((unsigned __int8 *)a1 + 13);
  v14 = *((unsigned __int8 *)a1 + 12);
  v13 = *((unsigned __int8 *)a1 + 11);
  v12 = *((unsigned __int8 *)a1 + 10);
  v11 = *((unsigned __int8 *)a1 + 9);
  v10 = *((unsigned __int8 *)a1 + 8);
  v9 = *((unsigned __int16 *)a1 + 3);
  v8 = *((unsigned __int16 *)a1 + 2);
  v4 = RtlStringCchPrintfW(
         Dest,
         256LL,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Network\\Interfaces\\{%08x-%04x-%04x-%02x%02x-%02x%02x"
          "%02x%02x%02x%02x}\\Configuration",
         *a1,
         v8,
         v9,
         v10,
         v11,
         v12,
         v13,
         v14,
         v15,
         v16,
         v17);
  v5 = v4;
  if ( v4 < 0 )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag < 2u )
      goto LABEL_10;
    v6 = 131;
    goto LABEL_9;
  }
  v4 = KRegKey::Open(a2, 0xF003Fu, Dest, 0LL);
  v5 = v4;
  if ( v4 < 0 && (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
  {
    v6 = 132;
LABEL_9:
    WPP_SF_d(v6, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, v4);
  }
LABEL_10:
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF__guid_d(0x85u, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, (__int64)a1, v5);
  return v5;
}
