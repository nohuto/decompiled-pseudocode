/*
 * XREFs of ?GetConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@1PEAKPEAPEAU_GUID@@@Z @ 0x180041520
 * Callers:
 *     ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z @ 0x18004363C (-DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z.c)
 *     ?GetHostConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@PEAKPEAPEAU_GUID@@@Z @ 0x180046BC0 (-GetHostConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@PEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     ?GetConnectorSignalProcessingModes@@YAJPEBGIPEAKPEAPEAU_GUID@@@Z @ 0x180040CD8 (-GetConnectorSignalProcessingModes@@YAJPEBGIPEAKPEAPEAU_GUID@@@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x1800413AC (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x1800414D0 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetConnectorSignalProcessingModes(
        struct IPropertyStore *a1,
        const struct _tagpropertykey *a2,
        const struct _tagpropertykey *a3,
        unsigned int *a4,
        struct _GUID **a5)
{
  struct _GUID **v6; // rax
  unsigned __int16 *v9; // rdi
  int ConnectorSignalProcessingModes; // ebx
  unsigned int v11; // r12d
  void *v12; // rcx
  unsigned __int16 *v13; // r15
  size_t v14; // rsi
  unsigned __int64 v15; // r14
  int v16; // eax
  size_t v18; // [rsp+20h] [rbp-40h]
  PROPVARIANT pvar; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int16 *v20; // [rsp+48h] [rbp-18h]
  __int64 v21; // [rsp+50h] [rbp-10h]
  STRSAFE_LPWSTR pszDest; // [rsp+90h] [rbp+30h] BYREF

  pvar = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v6 = a5;
  *a4 = 0;
  v9 = 0LL;
  *v6 = 0LL;
  ConnectorSignalProcessingModes = ((__int64 (__fastcall *)(struct IPropertyStore *, const struct _tagpropertykey *, PROPVARIANT *))a1->lpVtbl->GetValue)(
                                     a1,
                                     a3,
                                     &pvar);
  if ( ConnectorSignalProcessingModes < 0 )
    goto LABEL_16;
  if ( !(_WORD)pvar )
    goto LABEL_17;
  if ( (_WORD)pvar != 19 )
  {
LABEL_18:
    ConnectorSignalProcessingModes = -2147418113;
    goto LABEL_16;
  }
  v11 = (unsigned int)v20;
  PropVariantClear(&pvar);
  ConnectorSignalProcessingModes = ((__int64 (__fastcall *)(struct IPropertyStore *, const struct _tagpropertykey *, PROPVARIANT *))a1->lpVtbl->GetValue)(
                                     a1,
                                     a2,
                                     &pvar);
  if ( ConnectorSignalProcessingModes < 0 )
    goto LABEL_16;
  if ( !(_WORD)pvar )
  {
LABEL_17:
    ConnectorSignalProcessingModes = -2147023728;
    goto LABEL_16;
  }
  if ( (_WORD)pvar != 31 )
    goto LABEL_18;
  v13 = v20;
  v14 = -1LL;
  do
    ++v14;
  while ( v20[v14] );
  v15 = v14 + 1;
  if ( v14 + 1 < v14 )
  {
    ConnectorSignalProcessingModes = -2147024362;
  }
  else
  {
    pszDest = 0LL;
    if ( is_mul_ok(v15, 2uLL) )
    {
      v16 = CTCoAllocPolicy::Alloc(v12, (v15 * (unsigned __int128)2uLL) >> 64, 2 * v15, (void **)&pszDest);
      v9 = pszDest;
      ConnectorSignalProcessingModes = v16;
      if ( v16 >= 0 )
        StringCchCopyNExW(pszDest, v14 + 1, v13, v14, v18);
    }
    else
    {
      ConnectorSignalProcessingModes = -2147024362;
    }
    if ( ConnectorSignalProcessingModes >= 0 )
    {
      PropVariantClear(&pvar);
      ConnectorSignalProcessingModes = GetConnectorSignalProcessingModes(v9, v11, a4, a5);
      if ( ConnectorSignalProcessingModes >= 0 )
        ConnectorSignalProcessingModes = 0;
    }
  }
LABEL_16:
  CoTaskMemFree(v9);
  PropVariantClear(&pvar);
  return (unsigned int)ConnectorSignalProcessingModes;
}
