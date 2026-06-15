/*
 * XREFs of ?ClearMixFormatCache@@YAJPEAUIPropertyStore@@_N1@Z @ 0x180064D88
 * Callers:
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z @ 0x180064B58 (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??1?$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ @ 0x180097F5C (--1-$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ.c)
 *     ?GetProcessingModeSpecificDevicePipeFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x180107DC8 (-GetProcessingModeSpecificDevicePipeFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z.c)
 *     ?GetProcessingModeSpecificMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x180107E24 (-GetProcessingModeSpecificMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z.c)
 *     ?GetProcessingModeSpecificStreamGroupFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x180107E80 (-GetProcessingModeSpecificStreamGroupFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ClearMixFormatCache(struct IPropertyStore *a1, char a2, char a3)
{
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // eax
  unsigned int v12; // r14d
  struct _GUID *v13; // r15
  struct _GUID *v14; // rsi
  int ProcessingModeSpecificMixFormatKey; // eax
  int v16; // eax
  int v17; // eax
  unsigned int v18; // r14d
  struct _GUID *v19; // rsi
  int v20; // eax
  int v21; // eax
  unsigned int v22; // esi
  int v23; // eax
  int v24; // eax
  __int64 v26; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v27[3]; // [rsp+28h] [rbp-58h] BYREF
  struct _GUID v28; // [rsp+40h] [rbp-40h] BYREF
  __int64 v29; // [rsp+50h] [rbp-30h]
  struct _tagpropertykey v30; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v29 = -2LL;
  memset(v27, 0, sizeof(v27));
  v6 = 0LL;
  v26 = 0LL;
  if ( a1 )
  {
    ((void (__fastcall *)(struct IPropertyStore *, GUID *, __int64 *))a1->lpVtbl->QueryInterface)(
      a1,
      &GUID_95b0d208_7331_44a7_82d7_98408a20c299,
      &v26);
    v6 = v26;
  }
  if ( a2 )
  {
    if ( v6 )
      v7 = (*(__int64 (__fastcall **)(__int64, const struct _tagpropertykey *, _QWORD *))(*(_QWORD *)v6 + 64LL))(
             v6,
             &PKEY_AudioEngine_HWMixFormat,
             v27);
    else
      v7 = ((__int64 (__fastcall *)(struct IPropertyStore *, const struct _tagpropertykey *, _QWORD *))a1->lpVtbl->SetValue)(
             a1,
             &PKEY_AudioEngine_HWMixFormat,
             v27);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = (unsigned int)v7;
      v10 = 446LL;
      goto LABEL_71;
    }
    if ( v26 )
      v11 = (*(__int64 (__fastcall **)(__int64, const struct _tagpropertykey *, _QWORD *))(*(_QWORD *)v26 + 64LL))(
              v26,
              &PKEY_AudioEngine_MixFormat,
              v27);
    else
      v11 = ((__int64 (__fastcall *)(struct IPropertyStore *, const struct _tagpropertykey *, _QWORD *))a1->lpVtbl->SetValue)(
              a1,
              &PKEY_AudioEngine_MixFormat,
              v27);
    v8 = v11;
    if ( v11 < 0 )
    {
      v9 = (unsigned int)v11;
      v10 = 450LL;
      goto LABEL_71;
    }
  }
  v12 = 0;
  v13 = (struct _GUID *)qword_180189130;
  v14 = (struct _GUID *)qword_180189130;
  do
  {
    if ( a2 )
    {
      v28 = *v14;
      ProcessingModeSpecificMixFormatKey = GetProcessingModeSpecificMixFormatKey(&v28, 0, &v30);
      v8 = ProcessingModeSpecificMixFormatKey;
      if ( ProcessingModeSpecificMixFormatKey < 0 )
      {
        v10 = 459LL;
        goto LABEL_70;
      }
      v16 = v26
          ? (*(__int64 (__fastcall **)(__int64, struct _tagpropertykey *, _QWORD *))(*(_QWORD *)v26 + 64LL))(
              v26,
              &v30,
              v27)
          : ((__int64 (__fastcall *)(struct IPropertyStore *, struct _tagpropertykey *, _QWORD *))a1->lpVtbl->SetValue)(
              a1,
              &v30,
              v27);
      v8 = v16;
      if ( v16 < 0 )
      {
        v9 = (unsigned int)v16;
        v10 = 462LL;
        goto LABEL_71;
      }
    }
    if ( a3 )
    {
      v28 = *v14;
      ProcessingModeSpecificMixFormatKey = GetProcessingModeSpecificMixFormatKey(&v28, 1, &v30);
      v8 = ProcessingModeSpecificMixFormatKey;
      if ( ProcessingModeSpecificMixFormatKey < 0 )
      {
        v10 = 468LL;
        goto LABEL_70;
      }
      v17 = v26
          ? (*(__int64 (__fastcall **)(__int64, struct _tagpropertykey *, _QWORD *))(*(_QWORD *)v26 + 64LL))(
              v26,
              &v30,
              v27)
          : ((__int64 (__fastcall *)(struct IPropertyStore *, struct _tagpropertykey *, _QWORD *))a1->lpVtbl->SetValue)(
              a1,
              &v30,
              v27);
      v8 = v17;
      if ( v17 < 0 )
      {
        v9 = (unsigned int)v17;
        v10 = 471LL;
        goto LABEL_71;
      }
    }
    ++v12;
    ++v14;
  }
  while ( v12 < 8 );
  v18 = 0;
  v19 = (struct _GUID *)qword_180189130;
  do
  {
    if ( a2 )
    {
      v28 = *v19;
      ProcessingModeSpecificMixFormatKey = GetProcessingModeSpecificDevicePipeFormatKey(&v28, 0, &v30);
      v8 = ProcessingModeSpecificMixFormatKey;
      if ( ProcessingModeSpecificMixFormatKey < 0 )
      {
        v10 = 481LL;
        goto LABEL_70;
      }
      v20 = v26
          ? (*(__int64 (__fastcall **)(__int64, struct _tagpropertykey *, _QWORD *))(*(_QWORD *)v26 + 64LL))(
              v26,
              &v30,
              v27)
          : ((__int64 (__fastcall *)(struct IPropertyStore *, struct _tagpropertykey *, _QWORD *))a1->lpVtbl->SetValue)(
              a1,
              &v30,
              v27);
      v8 = v20;
      if ( v20 < 0 )
      {
        v9 = (unsigned int)v20;
        v10 = 484LL;
        goto LABEL_71;
      }
    }
    if ( a3 )
    {
      v28 = *v19;
      ProcessingModeSpecificMixFormatKey = GetProcessingModeSpecificDevicePipeFormatKey(&v28, 1, &v30);
      v8 = ProcessingModeSpecificMixFormatKey;
      if ( ProcessingModeSpecificMixFormatKey < 0 )
      {
        v10 = 490LL;
        goto LABEL_70;
      }
      v21 = v26
          ? (*(__int64 (__fastcall **)(__int64, struct _tagpropertykey *, _QWORD *))(*(_QWORD *)v26 + 64LL))(
              v26,
              &v30,
              v27)
          : ((__int64 (__fastcall *)(struct IPropertyStore *, struct _tagpropertykey *, _QWORD *))a1->lpVtbl->SetValue)(
              a1,
              &v30,
              v27);
      v8 = v21;
      if ( v21 < 0 )
      {
        v9 = (unsigned int)v21;
        v10 = 493LL;
        goto LABEL_71;
      }
    }
    ++v18;
    ++v19;
  }
  while ( v18 < 8 );
  v22 = 0;
  while ( 1 )
  {
    if ( a2 )
    {
      v28 = *v13;
      ProcessingModeSpecificMixFormatKey = GetProcessingModeSpecificStreamGroupFormatKey(&v28, 0, &v30);
      v8 = ProcessingModeSpecificMixFormatKey;
      if ( ProcessingModeSpecificMixFormatKey < 0 )
      {
        v10 = 503LL;
        goto LABEL_70;
      }
      if ( v26 )
        v23 = (*(__int64 (__fastcall **)(__int64, struct _tagpropertykey *, _QWORD *))(*(_QWORD *)v26 + 64LL))(
                v26,
                &v30,
                v27);
      else
        v23 = ((__int64 (__fastcall *)(struct IPropertyStore *, struct _tagpropertykey *, _QWORD *))a1->lpVtbl->SetValue)(
                a1,
                &v30,
                v27);
      v8 = v23;
      if ( v23 < 0 )
      {
        v9 = (unsigned int)v23;
        v10 = 506LL;
        goto LABEL_71;
      }
    }
    if ( !a3 )
      goto LABEL_63;
    v28 = *v13;
    ProcessingModeSpecificMixFormatKey = GetProcessingModeSpecificStreamGroupFormatKey(&v28, 1, &v30);
    v8 = ProcessingModeSpecificMixFormatKey;
    if ( ProcessingModeSpecificMixFormatKey < 0 )
      break;
    if ( v26 )
      v24 = (*(__int64 (__fastcall **)(__int64, struct _tagpropertykey *, _QWORD *))(*(_QWORD *)v26 + 64LL))(
              v26,
              &v30,
              v27);
    else
      v24 = ((__int64 (__fastcall *)(struct IPropertyStore *, struct _tagpropertykey *, _QWORD *))a1->lpVtbl->SetValue)(
              a1,
              &v30,
              v27);
    v8 = v24;
    if ( v24 < 0 )
    {
      v9 = (unsigned int)v24;
      v10 = 515LL;
      goto LABEL_71;
    }
LABEL_63:
    ++v22;
    ++v13;
    if ( v22 >= 8 )
    {
      v8 = 0;
      goto LABEL_65;
    }
  }
  v10 = 512LL;
LABEL_70:
  v9 = (unsigned int)ProcessingModeSpecificMixFormatKey;
LABEL_71:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
    (const char *)v9);
LABEL_65:
  ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(&v26);
  return v8;
}
