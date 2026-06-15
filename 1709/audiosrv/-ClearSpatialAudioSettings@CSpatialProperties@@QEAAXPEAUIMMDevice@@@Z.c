/*
 * XREFs of ?ClearSpatialAudioSettings@CSpatialProperties@@QEAAXPEAUIMMDevice@@@Z @ 0x1800C9420
 * Callers:
 *     ?SetSpatialAudioSettings@CEndpointCharacteristics@@AEAAX_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x1800B81AC (-SetSpatialAudioSettings@CEndpointCharacteristics@@AEAAX_NW4__MIDL___MIDL_itf_audioengineendpoin.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x1800B8530 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@PEAGPEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800CB9CC (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@P.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18002C198 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     memset @ 0x180033A5A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?InitSpatialTechList@CSpatialProperties@@AEAAJPEAUIMMDevice@@@Z @ 0x1800C95DC (-InitSpatialTechList@CSpatialProperties@@AEAAJPEAUIMMDevice@@@Z.c)
 *     WPP_SF_SqD @ 0x1800CDBF8 (WPP_SF_SqD.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSpatialProperties::ClearSpatialAudioSettings(
        LPCRITICAL_SECTION lpCriticalSection,
        struct IMMDevice *a2)
{
  int v3; // eax
  int v4; // r8d
  void *v5; // rdx
  LPCGUID v6; // r8
  LPCGUID v7; // r9
  struct IMMDevice *v8; // rdx
  LPVOID pv; // [rsp+38h] [rbp-39h] BYREF
  int LockCount_low; // [rsp+40h] [rbp-31h] BYREF
  _QWORD v11[2]; // [rsp+48h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+78h] [rbp+7h] BYREF
  _QWORD *v14; // [rsp+88h] [rbp+17h]
  __int64 v15; // [rsp+90h] [rbp+1Fh]
  int *p_LockCount_low; // [rsp+98h] [rbp+27h]
  __int64 v17; // [rsp+A0h] [rbp+2Fh]

  v11[1] = -2LL;
  pv = 0LL;
  v3 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a2->lpVtbl->GetId)(a2, &pv);
  v5 = pv;
  if ( v3 < 0 )
    v5 = 0LL;
  pv = v5;
  if ( (unsigned int)hProvider > 4 )
  {
    TlgCreateWsz(&pDesc, (LPCWSTR)v5);
    v11[0] = lpCriticalSection[1].DebugInfo;
    v14 = v11;
    v15 = 8LL;
    LockCount_low = LOBYTE(lpCriticalSection[171].LockCount);
    p_LockCount_low = &LockCount_low;
    v17 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180111DCC, v6, v7, 5u, &pData);
    LODWORD(v5) = (_DWORD)pv;
  }
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x1000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_SqD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      (_DWORD)v5,
      v4,
      (_DWORD)v5 + 34,
      (char)lpCriticalSection[1].DebugInfo,
      lpCriticalSection[171].LockCount);
  }
  EnterCriticalSection(lpCriticalSection);
  v11[0] = lpCriticalSection;
  if ( lpCriticalSection[1].DebugInfo )
  {
    HIDWORD(lpCriticalSection[1].SpinCount) = 0;
    memset((char *)&lpCriticalSection[2].OwningThread + 4, 0, 0x48uLL);
    HIDWORD(lpCriticalSection[2].OwningThread) = 0;
    *(_QWORD *)&lpCriticalSection[4].LockCount = 0LL;
    memset(&lpCriticalSection[4].OwningThread, 0, 0x1A10uLL);
    (*(void (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG, char *, _QWORD, _QWORD))(*(_QWORD *)lpCriticalSection[1].DebugInfo
                                                                                + 48LL))(
      lpCriticalSection[1].DebugInfo,
      (char *)&lpCriticalSection[2].OwningThread + 4,
      0LL,
      0LL);
    LOBYTE(lpCriticalSection[171].LockCount) = 1;
    CSpatialProperties::InitSpatialTechList((CSpatialProperties *)lpCriticalSection, v8);
  }
  CoTaskMemFree(pv);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
}
