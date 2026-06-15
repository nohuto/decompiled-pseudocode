/*
 * XREFs of ?SetSpatialAudioSettings@CSpatialProperties@@QEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@@Z @ 0x1800CB530
 * Callers:
 *     ?SetSpatialAudioSettings@CEndpointCharacteristics@@AEAAX_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x1800B81AC (-SetSpatialAudioSettings@CEndpointCharacteristics@@AEAAX_NW4__MIDL___MIDL_itf_audioengineendpoin.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18002C198 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     memset @ 0x180033A5A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_Sd @ 0x180067B48 (WPP_SF_Sd.c)
 *     ??0?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AEBV01@@Z @ 0x1800BBB78 (--0-$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AE.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@PEAGPEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800CB9CC (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@P.c)
 *     WPP_SF_SDqDDD @ 0x1800CD78C (WPP_SF_SDqDDD.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CSpatialProperties::SetSpatialAudioSettings(
        LPCRITICAL_SECTION lpCriticalSection,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int v10; // eax
  const WCHAR *v11; // rcx
  __int64 v12; // r10
  LPCGUID v13; // r8
  LPCGUID v14; // r9
  PRTL_CRITICAL_SECTION_DEBUG v15; // rcx
  int LockSemaphore_high; // eax
  unsigned __int16 v17; // ax
  LPCGUID v18; // r8
  LPCGUID v19; // r9
  __int64 v20; // rax
  LPCGUID v21; // r8
  LPCGUID v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned __int16 v25; // [rsp+50h] [rbp-B0h] BYREF
  LPCWSTR pwsz; // [rsp+58h] [rbp-A8h] BYREF
  int SpinCount_low; // [rsp+60h] [rbp-A0h] BYREF
  int v28; // [rsp+64h] [rbp-9Ch] BYREF
  int LockCount_low; // [rsp+68h] [rbp-98h] BYREF
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // [rsp+70h] [rbp-90h] BYREF
  LPCRITICAL_SECTION v31; // [rsp+78h] [rbp-88h]
  __int64 v32; // [rsp+80h] [rbp-80h]
  __int64 v33; // [rsp+88h] [rbp-78h]
  __int64 v34[6]; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+E0h] [rbp-20h] BYREF
  __int16 *v37; // [rsp+F0h] [rbp-10h]
  __int64 v38; // [rsp+F8h] [rbp-8h]
  PRTL_CRITICAL_SECTION_DEBUG *p_DebugInfo; // [rsp+100h] [rbp+0h]
  __int64 v40; // [rsp+108h] [rbp+8h]
  int *v41; // [rsp+110h] [rbp+10h]
  __int64 v42; // [rsp+118h] [rbp+18h]
  int *p_SpinCount_low; // [rsp+120h] [rbp+20h]
  __int64 v44; // [rsp+128h] [rbp+28h]
  int *p_LockCount_low; // [rsp+130h] [rbp+30h]
  __int64 v46; // [rsp+138h] [rbp+38h]

  v32 = -2LL;
  v33 = a6;
  memset(v34, 0, 0x28uLL);
  pwsz = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, LPCWSTR *))(*(_QWORD *)a3 + 40LL))(a3, &pwsz);
  v11 = pwsz;
  if ( v10 < 0 )
    v11 = 0LL;
  pwsz = v11;
  if ( a4 )
  {
    EnterCriticalSection(lpCriticalSection);
    v31 = lpCriticalSection;
    if ( (unsigned int)hProvider > 4 )
    {
      TlgCreateWsz(&pDesc, pwsz);
      v25 = WORD2(lpCriticalSection[171].LockSemaphore);
      v37 = (__int16 *)&v25;
      v38 = 2LL;
      DebugInfo = lpCriticalSection[1].DebugInfo;
      p_DebugInfo = &DebugInfo;
      v40 = 8LL;
      v28 = a2;
      v41 = &v28;
      v42 = v12;
      SpinCount_low = LOBYTE(lpCriticalSection[1].SpinCount);
      p_SpinCount_low = &SpinCount_low;
      v44 = v12;
      LockCount_low = LOBYTE(lpCriticalSection[171].LockCount);
      p_LockCount_low = &LockCount_low;
      v46 = v12;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180111CDD, v13, v14, 8u, &pData);
    }
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x1000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_SDqDDD(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        LOBYTE(lpCriticalSection[1].SpinCount),
        (_DWORD)WPP_GLOBAL_Control,
        (_DWORD)pwsz + 34,
        HIDWORD(lpCriticalSection[171].LockSemaphore),
        (char)lpCriticalSection[1].DebugInfo,
        lpCriticalSection[1].SpinCount,
        a2,
        lpCriticalSection[171].LockCount);
    }
    v15 = lpCriticalSection[1].DebugInfo;
    if ( v15 && (LOBYTE(lpCriticalSection[171].LockCount) || a2) )
    {
      if ( LOBYTE(lpCriticalSection[1].SpinCount) )
      {
        (*(void (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD *)&v15->Type + 32LL))(v15);
        LOBYTE(lpCriticalSection[1].SpinCount) = 0;
      }
      else
      {
        LockSemaphore_high = HIDWORD(lpCriticalSection[171].LockSemaphore);
        if ( LockSemaphore_high )
        {
          if ( LockSemaphore_high == 1 )
            HIDWORD(lpCriticalSection[171].LockSemaphore) = 3;
        }
        else
        {
          HIDWORD(lpCriticalSection[171].LockSemaphore) = 1;
          if ( lpCriticalSection )
            LeaveCriticalSection(lpCriticalSection);
          v17 = 0;
          v25 = 0;
          v31 = lpCriticalSection;
          while ( 1 )
          {
            if ( v17 == 3 && (unsigned int)hProvider > 2 )
            {
              TlgCreateWsz(&pDesc, pwsz);
              LOWORD(SpinCount_low) = WORD2(lpCriticalSection[171].LockSemaphore);
              v37 = (__int16 *)&SpinCount_low;
              v38 = 2LL;
              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180111D77, v18, v19, 4u, &pData);
            }
            v20 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
                    (__int64)&pData,
                    a6);
            CSpatialProperties::SetSpatialAudioSettingsInternal(
              (int)lpCriticalSection,
              0,
              a3,
              a4,
              pwsz,
              a5,
              v20,
              (__int64)v34);
            EnterCriticalSection(lpCriticalSection);
            if ( HIDWORD(lpCriticalSection[171].LockSemaphore) < 2 )
              break;
            if ( (unsigned int)hProvider > 4 )
            {
              TlgCreateWsz(&pDesc, pwsz);
              v37 = (__int16 *)&v25;
              v38 = 2LL;
              LOWORD(v28) = WORD2(lpCriticalSection[171].LockSemaphore);
              p_DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG *)&v28;
              v40 = 2LL;
              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180111C7B, v21, v22, 5u, &pData);
            }
            if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x1000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_Sd(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                0xEu,
                (__int64)&WPP_c60d31e5227a3b60c341af8111bf1f82_Traceguids,
                pwsz + 17);
            }
            if ( HIDWORD(lpCriticalSection[171].LockSemaphore) != 3 )
            {
              HIDWORD(lpCriticalSection[171].LockSemaphore) = 0;
              (*(void (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD *)lpCriticalSection[1].DebugInfo + 32LL))(lpCriticalSection[1].DebugInfo);
              goto LABEL_38;
            }
            HIDWORD(lpCriticalSection[171].LockSemaphore) = 1;
            if ( lpCriticalSection )
              LeaveCriticalSection(lpCriticalSection);
            v17 = v25 + 1;
            v25 = v17;
            if ( v17 >= 5u )
              goto LABEL_40;
          }
          HIDWORD(lpCriticalSection[171].LockSemaphore) = 0;
        }
      }
    }
LABEL_38:
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
  }
LABEL_40:
  CoTaskMemFree((LPVOID)pwsz);
  v24 = *(_QWORD *)(a6 + 56);
  if ( v24 )
  {
    LOBYTE(v23) = v24 != a6;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 32LL))(v24, v23);
    *(_QWORD *)(a6 + 56) = 0LL;
  }
}
