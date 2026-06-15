/*
 * XREFs of ?GetConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@1PEAKPEAPEAU_GUID@@@Z @ 0x1800DCE44
 * Callers:
 *     ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z @ 0x1800B38F0 (-DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z.c)
 *     ?GetHostConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@PEAKPEAPEAU_GUID@@@Z @ 0x1800DD188 (-GetHostConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@PEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180008324 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?GetConnectorSignalProcessingModes@@YAJPEBGIPEAKPEAPEAU_GUID@@@Z @ 0x1800DCF94 (-GetConnectorSignalProcessingModes@@YAJPEBGIPEAKPEAPEAU_GUID@@@Z.c)
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
  unsigned int v12; // r14d
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // r9
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
      goto LABEL_16;
    }
    if ( (_WORD)pvar != 19 )
      goto LABEL_5;
    v12 = v19[0];
    PropVariantClear(&pvar);
    ConnectorSignalProcessingModes = ((__int64 (__fastcall *)(struct IPropertyStore *, const struct _tagpropertykey *, PROPVARIANT *))a1->lpVtbl->GetValue)(
                                       a1,
                                       a2,
                                       &pvar);
    if ( ConnectorSignalProcessingModes < 0 )
      goto LABEL_16;
    if ( !(_WORD)pvar )
      goto LABEL_3;
    if ( (_WORD)pvar != 31 )
    {
LABEL_5:
      ConnectorSignalProcessingModes = -2147418113;
      goto LABEL_16;
    }
    v15 = -1LL;
    do
      ++v15;
    while ( *(_WORD *)(*(_QWORD *)v19 + 2 * v15) );
    ConnectorSignalProcessingModes = _AllocStringWorker<CTCoAllocPolicy>(
                                       v14,
                                       v13,
                                       *(const unsigned __int16 **)v19,
                                       v15,
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
      ConnectorSignalProcessingModes = GetConnectorSignalProcessingModes(v21, v12, a4, v5);
      if ( ConnectorSignalProcessingModes >= 0 )
        ConnectorSignalProcessingModes = 0;
    }
  }
LABEL_16:
  CoTaskMemFree(v10);
  PropVariantClear(&pvar);
  return (unsigned int)ConnectorSignalProcessingModes;
}
