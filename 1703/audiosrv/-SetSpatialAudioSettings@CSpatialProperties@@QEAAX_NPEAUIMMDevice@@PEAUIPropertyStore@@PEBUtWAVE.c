/*
 * XREFs of ?SetSpatialAudioSettings@CSpatialProperties@@QEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@@Z @ 0x18003DD18
 * Callers:
 *     ?SetSpatialAudioSettings@CEndpointCharacteristics@@AEAAX_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180042F88 (-SetSpatialAudioSettings@CEndpointCharacteristics@@AEAAX_NW4__MIDL___MIDL_itf_audioengineendpoin.c)
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18002854C (_TlgCreateWsz.c)
 *     ??0?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@QEAA@AEBV01@@Z @ 0x18003D098 (--0-$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@PEAGPEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18003F190 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@P.c)
 *     std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Delete_this @ 0x1800405E0 (std--_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std--allocator_int__bool__ea_1800405E0.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     memset @ 0x180049B8A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_SqDDD @ 0x1800C7DCC (WPP_SF_SqDDD.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSpatialProperties::SetSpatialAudioSettings(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int v10; // eax
  void *v11; // rdx
  __int64 v12; // r10
  LPCGUID v13; // r8
  LPCGUID v14; // r9
  char v15; // si
  __int64 v16; // rax
  int v17; // edx
  __int64 v18; // rdx
  __int64 v19; // rcx
  void (__fastcall *v20)(__int64, __int64); // rax
  LPVOID pv; // [rsp+48h] [rbp-C0h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-B8h] BYREF
  int v23; // [rsp+58h] [rbp-B0h] BYREF
  int v24; // [rsp+5Ch] [rbp-ACh] BYREF
  _QWORD v25[3]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v26[6]; // [rsp+78h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A8h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD *v29; // [rsp+D8h] [rbp-30h]
  __int64 v30; // [rsp+E0h] [rbp-28h]
  int *v31; // [rsp+E8h] [rbp-20h]
  __int64 v32; // [rsp+F0h] [rbp-18h]
  int *v33; // [rsp+F8h] [rbp-10h]
  __int64 v34; // [rsp+100h] [rbp-8h]
  LPCRITICAL_SECTION *p_lpCriticalSection; // [rsp+108h] [rbp+0h]
  __int64 v36; // [rsp+110h] [rbp+8h]

  v25[1] = -2LL;
  v25[2] = a6;
  memset(v26, 0, 0x28uLL);
  pv = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)a3 + 40LL))(a3, &pv);
  v11 = pv;
  if ( v10 < 0 )
    v11 = 0LL;
  pv = v11;
  if ( a4 )
  {
    if ( (unsigned int)hProvider > 4 )
    {
      TlgCreateWsz(&pDesc, (LPCWSTR)v11);
      v25[0] = *(_QWORD *)(a1 + 40);
      v29 = v25;
      v30 = 8LL;
      v23 = a2;
      v31 = &v23;
      v32 = v12;
      v24 = *(unsigned __int8 *)(a1 + 48);
      v33 = &v24;
      v34 = v12;
      LODWORD(lpCriticalSection) = *(unsigned __int8 *)(a1 + 72);
      p_lpCriticalSection = &lpCriticalSection;
      v36 = v12;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800FB60B, v13, v14, 7u, &pData);
    }
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x1000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_SqDDD(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        *(unsigned __int8 *)(a1 + 48),
        (_DWORD)WPP_GLOBAL_Control,
        (_DWORD)pv + 34,
        *(_QWORD *)(a1 + 40),
        *(_BYTE *)(a1 + 48),
        a2,
        *(_BYTE *)(a1 + 72));
    }
    Microsoft::WRL::Wrappers::CriticalSection::Lock(a1, (__int64)&lpCriticalSection);
    if ( *(_QWORD *)(a1 + 40) && (*(_BYTE *)(a1 + 72) || a2) )
    {
      v15 = *(_BYTE *)(a1 + 48);
      *(_BYTE *)(a1 + 48) = 0;
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      v16 = std::function<bool (WAVEFORMATEXTENSIBLE const *)>::function<bool (WAVEFORMATEXTENSIBLE const *)>(
              (__int64)&pData,
              a6);
      LOBYTE(v17) = v15;
      CSpatialProperties::SetSpatialAudioSettingsInternal(a1, v17, a3, a4, (LPCWSTR)pv, a5, v16, (__int64)v26);
    }
    else if ( lpCriticalSection )
    {
      LeaveCriticalSection(lpCriticalSection);
    }
  }
  CoTaskMemFree(pv);
  v19 = *(_QWORD *)(a6 + 56);
  if ( v19 )
  {
    LOBYTE(v18) = v19 != a6;
    v20 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 32LL);
    if ( (char *)v20 == (char *)std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Delete_this )
      std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Delete_this(
        v19,
        v18);
    else
      v20(v19, v18);
    *(_QWORD *)(a6 + 56) = 0LL;
  }
}
