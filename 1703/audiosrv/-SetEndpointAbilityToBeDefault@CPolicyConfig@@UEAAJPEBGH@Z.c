/*
 * XREFs of ?SetEndpointAbilityToBeDefault@CPolicyConfig@@UEAAJPEBGH@Z @ 0x18009E530
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?SetNeverSetAsDefaultProperty@@YAJPEAUIMMDevice@@H@Z @ 0x18009EBCC (-SetNeverSetAsDefaultProperty@@YAJPEAUIMMDevice@@H@Z.c)
 */

__int64 __fastcall CPolicyConfig::SetEndpointAbilityToBeDefault(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        int a3)
{
  HRESULT v5; // ebx
  __int64 v6; // rdx
  HRESULT v7; // eax
  LPVOID ppv; // [rsp+30h] [rbp-30h] BYREF
  struct IMMDevice *v10; // [rsp+38h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp-20h] BYREF
  __int64 v12; // [rsp+48h] [rbp-18h] BYREF
  __int64 v13; // [rsp+50h] [rbp-10h] BYREF
  LPVOID v14; // [rsp+88h] [rbp+28h] BYREF
  __int64 v15; // [rsp+98h] [rbp+38h] BYREF

  ppv = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  v11 = 0LL;
  v15 = 0LL;
  v10 = 0LL;
  if ( !a2 )
  {
    v5 = -2147467261;
LABEL_16:
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::SetEndpointAbilityToBeDefault", 4267, v5);
    v6 = v15;
    goto LABEL_17;
  }
  v5 = CoCreateInstance(
         &GUID_06cca63e_9941_441b_b004_39f999ada412,
         0LL,
         0x17u,
         &GUID_cc08e979_3b54_451c_8ac3_ba2809744615,
         &ppv);
  if ( v5 < 0 )
    goto LABEL_16;
  v5 = CoCreateInstance(
         &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
         0LL,
         0x17u,
         &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
         &v14);
  if ( v5 < 0 )
    goto LABEL_16;
  v5 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)v14 + 32LL))(v14, 0LL, 2LL, &v13);
  if ( v5 < 0 )
    goto LABEL_16;
  v5 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v14 + 32LL))(v14, 0LL, 0LL, &v12);
  if ( v5 < 0 )
    goto LABEL_16;
  v5 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, struct IMMDevice **))(**(_QWORD **)&g_DeviceEnumerator
                                                                                        + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         a2,
         &v10);
  if ( v5 < 0 )
    goto LABEL_16;
  v5 = SetNeverSetAsDefaultProperty(v10, a3);
  if ( v5 < 0 )
    goto LABEL_16;
  v5 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)v14 + 32LL))(v14, 0LL, 2LL, &v11);
  if ( v5 < 0 )
    goto LABEL_16;
  v5 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v14 + 32LL))(v14, 0LL, 0LL, &v15);
  if ( v5 < 0 )
    goto LABEL_16;
  if ( v13 != v11 )
  {
    v5 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64))(*(_QWORD *)ppv + 96LL))(ppv, v11, 2LL);
    if ( v5 < 0 )
      goto LABEL_16;
  }
  v6 = v15;
  if ( v12 != v15 )
  {
    v7 = (*(__int64 (__fastcall **)(LPVOID, __int64, _QWORD, _QWORD))(*(_QWORD *)ppv + 96LL))(ppv, v15, 0LL, 0LL);
    v6 = v15;
    v5 = v7;
  }
  if ( v5 < 0 )
    goto LABEL_16;
LABEL_17:
  if ( v10 )
  {
    ((void (__fastcall *)(struct IMMDevice *))v10->lpVtbl->Release)(v10);
    v6 = v15;
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v14 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v14 + 16LL))(v14);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)v5;
}
