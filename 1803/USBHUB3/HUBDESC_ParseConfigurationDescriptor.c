/*
 * XREFs of HUBDESC_ParseConfigurationDescriptor @ 0x1C002DC68
 * Callers:
 *     HUBPARENT_SetHubConfiguration @ 0x1C000652C (HUBPARENT_SetHubConfiguration.c)
 *     HUBUCX_UpdateHubInformationUsingUCXIoctl @ 0x1C00220C4 (HUBUCX_UpdateHubInformationUsingUCXIoctl.c)
 *     HUBDTX_ValidateAndCacheConfigDescriptor @ 0x1C0024C54 (HUBDTX_ValidateAndCacheConfigDescriptor.c)
 *     HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration @ 0x1C0027B70 (HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration.c)
 *     HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface @ 0x1C00286B8 (HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001DC8 (WPP_RECORDER_SF_.c)
 */

unsigned __int8 *__fastcall HUBDESC_ParseConfigurationDescriptor(
        __int64 a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        _BYTE *a8,
        __int64 a9)
{
  unsigned __int8 *v12; // rbx
  unsigned __int8 *v13; // r15
  unsigned int v14; // r14d
  unsigned __int8 *v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int8 *v17; // r12
  unsigned __int8 v18; // r8
  int v20; // [rsp+78h] [rbp+20h]

  v20 = a4;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0;
  if ( a8 )
    *a8 = 0;
  if ( *(_BYTE *)a1 >= 9u && *(_BYTE *)(a1 + 1) == 2 && *(_WORD *)(a1 + 2) >= 9u )
  {
    while ( 1 )
    {
      v15 = a2;
      v16 = a1 + *(unsigned __int16 *)(a1 + 2);
      v17 = 0LL;
      if ( (unsigned __int64)a2 < v16 )
      {
        while ( 1 )
        {
          v18 = *v15;
          if ( !*v15 )
          {
            WPP_RECORDER_SF_(a9, 2u, 5u, 0xAu, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids);
            a4 = v20;
            goto LABEL_30;
          }
          if ( v15[1] == 4 )
            break;
          v15 += v18;
          if ( (unsigned __int64)v15 >= v16 )
            goto LABEL_30;
        }
        v17 = v15;
        if ( v15 )
        {
          v12 = v15;
          if ( a3 != -1 )
          {
            if ( v15[2] == a3 )
              ++v14;
            else
              v12 = 0LL;
          }
          if ( a4 != -1 && v15[3] != a4 )
            v12 = 0LL;
          if ( a5 != -1 && v15[5] != a5 )
            v12 = 0LL;
          if ( a6 != -1 && v15[6] != a6 )
            v12 = 0LL;
          if ( a7 != -1 && v15[7] != a7 )
            v12 = 0LL;
          a2 = &v15[v18];
        }
      }
LABEL_30:
      if ( v13 )
        break;
      if ( v12 )
      {
        v13 = v12;
        if ( !a8 )
          return v13;
        if ( v14 > 1 )
          goto LABEL_38;
      }
      if ( !v17 )
        return v13;
    }
    if ( v14 > 1 && a8 )
LABEL_38:
      *a8 = 1;
  }
  return v13;
}
