/*
 * XREFs of ?ClearMixFormatCache@@YAJPEAUIPropertyStore@@@Z @ 0x1800CDCB8
 * Callers:
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJXZ @ 0x1800BC5EC (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?GetProcessingModeSpecificDevicePipeFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x1800CDF44 (-GetProcessingModeSpecificDevicePipeFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z.c)
 *     ?GetProcessingModeSpecificMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x1800CDFA0 (-GetProcessingModeSpecificMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z.c)
 *     ?GetProcessingModeSpecificStreamGroupFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x1800CDFFC (-GetProcessingModeSpecificStreamGroupFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z.c)
 */

__int64 __fastcall ClearMixFormatCache(struct IPropertyStore *a1)
{
  int ProcessingModeSpecificMixFormatKey; // ebx
  struct _GUID *v3; // rsi
  unsigned int v4; // r15d
  struct _GUID *v5; // r14
  unsigned int v6; // r15d
  struct _GUID *v7; // r14
  unsigned int i; // r14d
  struct _GUID v10; // [rsp+20h] [rbp-50h] BYREF
  PROPVARIANT pvar[3]; // [rsp+30h] [rbp-40h] BYREF
  struct _tagpropertykey v12; // [rsp+48h] [rbp-28h] BYREF

  memset(pvar, 0, sizeof(pvar));
  ProcessingModeSpecificMixFormatKey = ((__int64 (__fastcall *)(struct IPropertyStore *, const struct _tagpropertykey *, PROPVARIANT *))a1->lpVtbl->SetValue)(
                                         a1,
                                         &PKEY_AudioEngine_HWMixFormat,
                                         pvar);
  if ( ProcessingModeSpecificMixFormatKey >= 0 )
  {
    ProcessingModeSpecificMixFormatKey = ((__int64 (__fastcall *)(struct IPropertyStore *, const struct _tagpropertykey *, PROPVARIANT *))a1->lpVtbl->SetValue)(
                                           a1,
                                           &PKEY_AudioEngine_MixFormat,
                                           pvar);
    if ( ProcessingModeSpecificMixFormatKey >= 0 )
    {
      v3 = (struct _GUID *)qword_18012AB90;
      v4 = 0;
      v5 = (struct _GUID *)qword_18012AB90;
      while ( 1 )
      {
        v10 = *v5;
        ProcessingModeSpecificMixFormatKey = GetProcessingModeSpecificMixFormatKey(&v10, 0, &v12);
        if ( ProcessingModeSpecificMixFormatKey < 0 )
          break;
        ProcessingModeSpecificMixFormatKey = ((__int64 (__fastcall *)(struct IPropertyStore *, struct _tagpropertykey *, PROPVARIANT *))a1->lpVtbl->SetValue)(
                                               a1,
                                               &v12,
                                               pvar);
        if ( ProcessingModeSpecificMixFormatKey < 0 )
          break;
        v10 = *v5;
        ProcessingModeSpecificMixFormatKey = GetProcessingModeSpecificMixFormatKey(&v10, 1, &v12);
        if ( ProcessingModeSpecificMixFormatKey < 0 )
          break;
        ProcessingModeSpecificMixFormatKey = ((__int64 (__fastcall *)(struct IPropertyStore *, struct _tagpropertykey *, PROPVARIANT *))a1->lpVtbl->SetValue)(
                                               a1,
                                               &v12,
                                               pvar);
        if ( ProcessingModeSpecificMixFormatKey < 0 )
          break;
        ++v4;
        ++v5;
        if ( v4 >= 8 )
        {
          v6 = 0;
          v7 = (struct _GUID *)qword_18012AB90;
          while ( 1 )
          {
            v10 = *v7;
            ProcessingModeSpecificMixFormatKey = GetProcessingModeSpecificDevicePipeFormatKey(&v10, 0, &v12);
            if ( ProcessingModeSpecificMixFormatKey < 0 )
              goto LABEL_21;
            ProcessingModeSpecificMixFormatKey = ((__int64 (__fastcall *)(struct IPropertyStore *, struct _tagpropertykey *, PROPVARIANT *))a1->lpVtbl->SetValue)(
                                                   a1,
                                                   &v12,
                                                   pvar);
            if ( ProcessingModeSpecificMixFormatKey < 0 )
              goto LABEL_21;
            v10 = *v7;
            ProcessingModeSpecificMixFormatKey = GetProcessingModeSpecificDevicePipeFormatKey(&v10, 1, &v12);
            if ( ProcessingModeSpecificMixFormatKey < 0 )
              goto LABEL_21;
            ProcessingModeSpecificMixFormatKey = ((__int64 (__fastcall *)(struct IPropertyStore *, struct _tagpropertykey *, PROPVARIANT *))a1->lpVtbl->SetValue)(
                                                   a1,
                                                   &v12,
                                                   pvar);
            if ( ProcessingModeSpecificMixFormatKey < 0 )
              goto LABEL_21;
            ++v6;
            ++v7;
            if ( v6 >= 8 )
            {
              for ( i = 0; i < 8; ++i )
              {
                v10 = *v3;
                ProcessingModeSpecificMixFormatKey = GetProcessingModeSpecificStreamGroupFormatKey(&v10, 0, &v12);
                if ( ProcessingModeSpecificMixFormatKey < 0 )
                  break;
                ProcessingModeSpecificMixFormatKey = ((__int64 (__fastcall *)(struct IPropertyStore *, struct _tagpropertykey *, PROPVARIANT *))a1->lpVtbl->SetValue)(
                                                       a1,
                                                       &v12,
                                                       pvar);
                if ( ProcessingModeSpecificMixFormatKey < 0 )
                  break;
                v10 = *v3;
                ProcessingModeSpecificMixFormatKey = GetProcessingModeSpecificStreamGroupFormatKey(&v10, 1, &v12);
                if ( ProcessingModeSpecificMixFormatKey < 0 )
                  break;
                ProcessingModeSpecificMixFormatKey = ((__int64 (__fastcall *)(struct IPropertyStore *, struct _tagpropertykey *, PROPVARIANT *))a1->lpVtbl->SetValue)(
                                                       a1,
                                                       &v12,
                                                       pvar);
                if ( ProcessingModeSpecificMixFormatKey < 0 )
                  break;
                ++v3;
              }
              goto LABEL_21;
            }
          }
        }
      }
    }
  }
LABEL_21:
  PropVariantClear(pvar);
  return (unsigned int)ProcessingModeSpecificMixFormatKey;
}
