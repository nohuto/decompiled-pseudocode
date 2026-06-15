/*
 * XREFs of ?SetSpatialAudioSettings@CSpatialProperties@@QEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@@Z @ 0x180054F58
 * Callers:
 *     ?SetSpatialAudioSettings@CEndpointCharacteristics@@AEAAX_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180051DF8 (-SetSpatialAudioSettings@CEndpointCharacteristics@@AEAAX_NW4__MIDL___MIDL_itf_audioengineendpoin.c)
 * Callees:
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180043DA4 (_TlgCreateWsz.c)
 *     std::_Func_impl_no_alloc__lambda_f3af0907113bf748eb1a6fb65ef667f3__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Delete_this @ 0x18004FED0 (std--_Func_impl_no_alloc__lambda_f3af0907113bf748eb1a6fb65ef667f3__long_SystemEffec_ea_18004FED0.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@PEAGPEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800540EC (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@P.c)
 *     ??0?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@QEAA@AEBV01@@Z @ 0x18005FC78 (--0-$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CSpatialProperties::SetSpatialAudioSettings(
        __int64 a1,
        unsigned __int8 a2,
        struct IMMDevice *a3,
        __int64 a4,
        struct tWAVEFORMATEX *a5,
        _QWORD *a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  unsigned __int16 v13; // ax
  __int64 v14; // rax
  unsigned int v15; // eax
  _QWORD *v16; // rcx
  void (__fastcall *v17)(_QWORD *, char); // rax
  __int64 v18; // r10
  LPCGUID v19; // r8
  LPCGUID v20; // r9
  LPCGUID v21; // r8
  LPCGUID v22; // r9
  LPCGUID v23; // r8
  LPCGUID v24; // r9
  int v25; // [rsp+48h] [rbp-C0h] BYREF
  int v26; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v27; // [rsp+50h] [rbp-B8h] BYREF
  LPVOID pv; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v29; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v31; // [rsp+70h] [rbp-98h]
  __int64 v32; // [rsp+78h] [rbp-90h]
  __int64 v33; // [rsp+80h] [rbp-88h]
  _OWORD v34[3]; // [rsp+88h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B8h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D8h] [rbp-30h] BYREF
  int *v37; // [rsp+E8h] [rbp-20h]
  __int64 v38; // [rsp+F0h] [rbp-18h]
  __int64 *v39; // [rsp+F8h] [rbp-10h]
  __int64 v40; // [rsp+100h] [rbp-8h]
  __int64 *v41; // [rsp+108h] [rbp+0h]
  __int64 v42; // [rsp+110h] [rbp+8h]
  int *v43; // [rsp+118h] [rbp+10h]
  __int64 v44; // [rsp+120h] [rbp+18h]
  __int64 *v45; // [rsp+128h] [rbp+20h]
  __int64 v46; // [rsp+130h] [rbp+28h]

  v32 = -2LL;
  v33 = (__int64)a6;
  memset_0(v34, 0, 0x28uLL);
  pv = 0LL;
  if ( ((int (__fastcall *)(struct IMMDevice *, LPVOID *))a3->lpVtbl->GetId)(a3, &pv) >= 0 && a4 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)a1);
    v31 = a1;
    if ( (unsigned int)hProvider > 4 )
    {
      TlgCreateWsz(&pDesc, (LPCWSTR)pv);
      LOWORD(v25) = *(_WORD *)(a1 + 6868);
      v37 = &v25;
      v38 = 2LL;
      v30 = *(_QWORD *)(a1 + 40);
      v39 = &v30;
      v40 = 8LL;
      LODWORD(v27) = a2;
      v41 = &v27;
      v42 = v18;
      v26 = *(unsigned __int8 *)(a1 + 72);
      v43 = &v26;
      v44 = v18;
      LODWORD(v29) = *(unsigned __int8 *)(a1 + 6848);
      v45 = &v29;
      v46 = v18;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801492A0, v19, v20, 8u, &pData);
    }
    v11 = *(_QWORD *)(a1 + 40);
    if ( v11 && (*(_BYTE *)(a1 + 6848) || a2) )
    {
      if ( *(_BYTE *)(a1 + 72) )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 32LL))(v11);
        *(_BYTE *)(a1 + 72) = 0;
      }
      else
      {
        v12 = *(_DWORD *)(a1 + 6868);
        if ( v12 )
        {
          if ( v12 == 1 )
            *(_DWORD *)(a1 + 6868) = 3;
        }
        else
        {
          *(_DWORD *)(a1 + 6868) = 1;
          if ( a1 )
            LeaveCriticalSection((LPCRITICAL_SECTION)a1);
          LOWORD(v25) = 0;
          v13 = 0;
          v31 = a1;
          while ( 1 )
          {
            if ( v13 == 3 && (unsigned int)hProvider > 2 )
            {
              TlgCreateWsz(&pDesc, (LPCWSTR)pv);
              LOWORD(v26) = *(_WORD *)(a1 + 6868);
              v37 = &v26;
              v38 = 2LL;
              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18014933A, v21, v22, 4u, &pData);
            }
            v14 = std::function<bool (WAVEFORMATEXTENSIBLE const *)>::function<bool (WAVEFORMATEXTENSIBLE const *)>(
                    &pData,
                    a6);
            CSpatialProperties::SetSpatialAudioSettingsInternal(a1, 0, a3, a4, (const WCHAR *)pv, a5, v14, v34);
            EnterCriticalSection((LPCRITICAL_SECTION)a1);
            v15 = *(_DWORD *)(a1 + 6868);
            if ( v15 <= 1 )
            {
              *(_DWORD *)(a1 + 6868) = 0;
              goto LABEL_16;
            }
            if ( (unsigned int)hProvider > 4 )
            {
              TlgCreateWsz(&pDesc, (LPCWSTR)pv);
              v37 = &v25;
              v38 = 2LL;
              LOWORD(v27) = *(_WORD *)(a1 + 6868);
              v39 = &v27;
              v40 = 2LL;
              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18014923E, v23, v24, 5u, &pData);
              v15 = *(_DWORD *)(a1 + 6868);
            }
            if ( v15 != 3 )
              break;
            *(_DWORD *)(a1 + 6868) = 1;
            if ( a1 )
              LeaveCriticalSection((LPCRITICAL_SECTION)a1);
            v13 = v25 + 1;
            LOWORD(v25) = v13;
            if ( v13 >= 5u )
              goto LABEL_18;
          }
          *(_DWORD *)(a1 + 6868) = 0;
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 32LL))(*(_QWORD *)(a1 + 40));
        }
      }
    }
LABEL_16:
    if ( a1 )
      LeaveCriticalSection((LPCRITICAL_SECTION)a1);
  }
LABEL_18:
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  v16 = (_QWORD *)a6[7];
  if ( v16 )
  {
    LOBYTE(v10) = v16 != a6;
    v17 = *(void (__fastcall **)(_QWORD *, char))(*v16 + 32LL);
    if ( v17 == std::_Func_impl_no_alloc__lambda_f3af0907113bf748eb1a6fb65ef667f3__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Delete_this )
      std::_Func_impl_no_alloc__lambda_f3af0907113bf748eb1a6fb65ef667f3__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Delete_this(
        v16,
        v10);
    else
      v17(v16, v10);
    a6[7] = 0LL;
  }
}
