/*
 * XREFs of ?ClearMixFormatCache@@YAJPEAUIPropertyStore@@H@Z @ 0x1800365DC
 * Callers:
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJH@Z @ 0x180036398 (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJH@Z.c)
 * Callees:
 *     ?GetProcessingModeSpecificStreamGroupFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x18000A428 (-GetProcessingModeSpecificStreamGroupFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z.c)
 *     ?GetProcessingModeSpecificDevicePipeFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x180030718 (-GetProcessingModeSpecificDevicePipeFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?GetProcessingModeSpecificMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x1800DA000 (-GetProcessingModeSpecificMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ClearMixFormatCache(struct IPropertyStore *a1, int a2)
{
  __int64 v4; // rcx
  int v5; // eax
  int ProcessingModeSpecificMixFormatKey; // ebx
  int v7; // eax
  unsigned int v8; // r14d
  struct _GUID *v9; // r15
  struct _GUID *v10; // rsi
  int v11; // eax
  int v12; // eax
  unsigned int v13; // r14d
  struct _GUID *v14; // rsi
  int v15; // eax
  int v16; // eax
  unsigned int i; // esi
  int v18; // eax
  int v19; // eax
  __int64 v21; // [rsp+20h] [rbp-60h] BYREF
  PROPVARIANT pvar[3]; // [rsp+28h] [rbp-58h] BYREF
  struct _GUID v23; // [rsp+40h] [rbp-40h] BYREF
  __int64 v24; // [rsp+50h] [rbp-30h]
  struct _tagpropertykey v25; // [rsp+58h] [rbp-28h] BYREF

  v24 = -2LL;
  memset(pvar, 0, sizeof(pvar));
  v4 = 0LL;
  v21 = 0LL;
  if ( a1 )
  {
    ((void (__fastcall *)(struct IPropertyStore *, GUID *, __int64 *))a1->lpVtbl->QueryInterface)(
      a1,
      &GUID_95b0d208_7331_44a7_82d7_98408a20c299,
      &v21);
    v4 = v21;
  }
  if ( a2
    || (!v4
      ? (v5 = ((__int64 (__fastcall *)(struct IPropertyStore *, const struct _tagpropertykey *, PROPVARIANT *))a1->lpVtbl->SetValue)(
                a1,
                &PKEY_AudioEngine_HWMixFormat,
                pvar))
      : (v5 = (*(__int64 (__fastcall **)(__int64, const struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)v4 + 64LL))(
                v4,
                &PKEY_AudioEngine_HWMixFormat,
                pvar)),
        (ProcessingModeSpecificMixFormatKey = v5, v5 >= 0)
     && (!v21
       ? (v7 = ((__int64 (__fastcall *)(struct IPropertyStore *, const struct _tagpropertykey *, PROPVARIANT *))a1->lpVtbl->SetValue)(
                 a1,
                 &PKEY_AudioEngine_MixFormat,
                 pvar))
       : (v7 = (*(__int64 (__fastcall **)(__int64, const struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)v21 + 64LL))(
                 v21,
                 &PKEY_AudioEngine_MixFormat,
                 pvar)),
         ProcessingModeSpecificMixFormatKey = v7,
         v7 >= 0)) )
  {
    v8 = 0;
    v9 = (struct _GUID *)qword_18014AF90;
    v10 = (struct _GUID *)qword_18014AF90;
    while ( 1 )
    {
      if ( !a2 )
      {
        v23 = *v10;
        ProcessingModeSpecificMixFormatKey = GetProcessingModeSpecificMixFormatKey(&v23, 0, &v25);
        if ( ProcessingModeSpecificMixFormatKey < 0 )
          break;
        v11 = v21
            ? (*(__int64 (__fastcall **)(__int64, struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)v21 + 64LL))(
                v21,
                &v25,
                pvar)
            : ((__int64 (__fastcall *)(struct IPropertyStore *, struct _tagpropertykey *, PROPVARIANT *))a1->lpVtbl->SetValue)(
                a1,
                &v25,
                pvar);
        ProcessingModeSpecificMixFormatKey = v11;
        if ( v11 < 0 )
          break;
      }
      v23 = *v10;
      ProcessingModeSpecificMixFormatKey = GetProcessingModeSpecificMixFormatKey(&v23, 1, &v25);
      if ( ProcessingModeSpecificMixFormatKey < 0 )
        break;
      v12 = v21
          ? (*(__int64 (__fastcall **)(__int64, struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)v21 + 64LL))(
              v21,
              &v25,
              pvar)
          : ((__int64 (__fastcall *)(struct IPropertyStore *, struct _tagpropertykey *, PROPVARIANT *))a1->lpVtbl->SetValue)(
              a1,
              &v25,
              pvar);
      ProcessingModeSpecificMixFormatKey = v12;
      if ( v12 < 0 )
        break;
      ++v8;
      ++v10;
      if ( v8 >= 8 )
      {
        v13 = 0;
        v14 = (struct _GUID *)qword_18014AF90;
        while ( 1 )
        {
          if ( !a2 )
          {
            v23 = *v14;
            ProcessingModeSpecificMixFormatKey = GetProcessingModeSpecificDevicePipeFormatKey(&v23, 0, &v25);
            if ( ProcessingModeSpecificMixFormatKey < 0 )
              goto LABEL_51;
            v15 = v21
                ? (*(__int64 (__fastcall **)(__int64, struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)v21 + 64LL))(
                    v21,
                    &v25,
                    pvar)
                : ((__int64 (__fastcall *)(struct IPropertyStore *, struct _tagpropertykey *, PROPVARIANT *))a1->lpVtbl->SetValue)(
                    a1,
                    &v25,
                    pvar);
            ProcessingModeSpecificMixFormatKey = v15;
            if ( v15 < 0 )
              goto LABEL_51;
          }
          v23 = *v14;
          ProcessingModeSpecificMixFormatKey = GetProcessingModeSpecificDevicePipeFormatKey(&v23, 1, &v25);
          if ( ProcessingModeSpecificMixFormatKey < 0 )
            goto LABEL_51;
          v16 = v21
              ? (*(__int64 (__fastcall **)(__int64, struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)v21 + 64LL))(
                  v21,
                  &v25,
                  pvar)
              : ((__int64 (__fastcall *)(struct IPropertyStore *, struct _tagpropertykey *, PROPVARIANT *))a1->lpVtbl->SetValue)(
                  a1,
                  &v25,
                  pvar);
          ProcessingModeSpecificMixFormatKey = v16;
          if ( v16 < 0 )
            goto LABEL_51;
          ++v13;
          ++v14;
          if ( v13 >= 8 )
          {
            for ( i = 0; i < 8; ++i )
            {
              if ( !a2 )
              {
                v23 = *v9;
                ProcessingModeSpecificMixFormatKey = GetProcessingModeSpecificStreamGroupFormatKey(&v23, 0, &v25);
                if ( ProcessingModeSpecificMixFormatKey < 0 )
                  break;
                v18 = v21
                    ? (*(__int64 (__fastcall **)(__int64, struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)v21 + 64LL))(
                        v21,
                        &v25,
                        pvar)
                    : ((__int64 (__fastcall *)(struct IPropertyStore *, struct _tagpropertykey *, PROPVARIANT *))a1->lpVtbl->SetValue)(
                        a1,
                        &v25,
                        pvar);
                ProcessingModeSpecificMixFormatKey = v18;
                if ( v18 < 0 )
                  break;
              }
              v23 = *v9;
              ProcessingModeSpecificMixFormatKey = GetProcessingModeSpecificStreamGroupFormatKey(&v23, 1, &v25);
              if ( ProcessingModeSpecificMixFormatKey < 0 )
                break;
              v19 = v21
                  ? (*(__int64 (__fastcall **)(__int64, struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)v21 + 64LL))(
                      v21,
                      &v25,
                      pvar)
                  : ((__int64 (__fastcall *)(struct IPropertyStore *, struct _tagpropertykey *, PROPVARIANT *))a1->lpVtbl->SetValue)(
                      a1,
                      &v25,
                      pvar);
              ProcessingModeSpecificMixFormatKey = v19;
              if ( v19 < 0 )
                break;
              ++v9;
            }
            goto LABEL_51;
          }
        }
      }
    }
  }
LABEL_51:
  PropVariantClear(pvar);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  return (unsigned int)ProcessingModeSpecificMixFormatKey;
}
