/*
 * XREFs of ?GetConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@1PEAKPEAPEAU_GUID@@@Z @ 0x180053F00
 * Callers:
 *     ?GetHostConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@PEAKPEAPEAU_GUID@@@Z @ 0x1800507C8 (-GetHostConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@PEAKPEAPEAU_GUID@@@Z.c)
 *     ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z @ 0x1800521D4 (-DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z.c)
 * Callees:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180015514 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?GetConnectorSignalProcessingModes@@YAJPEBGIPEAKPEAPEAU_GUID@@@Z @ 0x180056864 (-GetConnectorSignalProcessingModes@@YAJPEBGIPEAKPEAPEAU_GUID@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetConnectorSignalProcessingModes(
        struct IPropertyStore *a1,
        const struct _tagpropertykey *a2,
        const struct _tagpropertykey *a3,
        unsigned int *a4,
        struct _GUID **a5)
{
  struct _GUID **v5; // r13
  struct IPropertyStoreVtbl *lpVtbl; // rax
  unsigned __int16 *v10; // rdi
  int ConnectorSignalProcessingModes; // ebx
  unsigned int v13; // r14d
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // r9
  __int64 v17; // [rsp+20h] [rbp-30h]
  PROPVARIANT pvar; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v19[2]; // [rsp+38h] [rbp-18h]
  __int64 v20; // [rsp+40h] [rbp-10h]
  unsigned __int16 *v21; // [rsp+80h] [rbp+30h] BYREF

  v5 = a5;
  pvar = 0LL;
  *a4 = 0;
  *(_QWORD *)v19 = 0LL;
  v20 = 0LL;
  *v5 = 0LL;
  lpVtbl = a1->lpVtbl;
  v21 = 0LL;
  v10 = 0LL;
  ConnectorSignalProcessingModes = ((__int64 (__fastcall *)(struct IPropertyStore *, const struct _tagpropertykey *, PROPVARIANT *))lpVtbl->GetValue)(
                                     a1,
                                     a3,
                                     &pvar);
  if ( ConnectorSignalProcessingModes >= 0 )
  {
    if ( !(_WORD)pvar )
    {
LABEL_3:
      ConnectorSignalProcessingModes = -2147023728;
      goto LABEL_4;
    }
    if ( (_WORD)pvar != 19 )
      goto LABEL_16;
    v13 = v19[0];
    PropVariantClear(&pvar);
    ConnectorSignalProcessingModes = ((__int64 (__fastcall *)(struct IPropertyStore *, const struct _tagpropertykey *, PROPVARIANT *))a1->lpVtbl->GetValue)(
                                       a1,
                                       a2,
                                       &pvar);
    if ( ConnectorSignalProcessingModes < 0 )
      goto LABEL_4;
    if ( !(_WORD)pvar )
      goto LABEL_3;
    if ( (_WORD)pvar != 31 )
    {
LABEL_16:
      ConnectorSignalProcessingModes = -2147418113;
      goto LABEL_4;
    }
    v16 = -1LL;
    do
      ++v16;
    while ( *(_WORD *)(*(_QWORD *)v19 + 2 * v16) );
    ConnectorSignalProcessingModes = _AllocStringWorker<CTCoAllocPolicy>(
                                       v15,
                                       v14,
                                       *(const unsigned __int16 **)v19,
                                       v16,
                                       v17,
                                       &v21);
    if ( ConnectorSignalProcessingModes < 0 )
    {
      v10 = v21;
    }
    else
    {
      PropVariantClear(&pvar);
      v10 = v21;
      ConnectorSignalProcessingModes = GetConnectorSignalProcessingModes(v21, v13, a4, v5);
      if ( ConnectorSignalProcessingModes >= 0 )
        ConnectorSignalProcessingModes = 0;
    }
  }
LABEL_4:
  CoTaskMemFree(v10);
  PropVariantClear(&pvar);
  return (unsigned int)ConnectorSignalProcessingModes;
}
