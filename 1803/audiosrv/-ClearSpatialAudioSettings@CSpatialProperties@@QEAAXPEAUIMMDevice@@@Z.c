/*
 * XREFs of ?ClearSpatialAudioSettings@CSpatialProperties@@QEAAXPEAUIMMDevice@@@Z @ 0x1800FDB98
 * Callers:
 *     ?SetSpatialAudioSettings@CEndpointCharacteristics@@AEAAX_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180051DF8 (-SetSpatialAudioSettings@CEndpointCharacteristics@@AEAAX_NW4__MIDL___MIDL_itf_audioengineendpoin.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@PEAGPEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800540EC (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@P.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x1800ED620 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 * Callees:
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180043DA4 (_TlgCreateWsz.c)
 *     ?InitSpatialTechList@CSpatialProperties@@AEAAJPEAUIMMDevice@@@Z @ 0x180054DDC (-InitSpatialTechList@CSpatialProperties@@AEAAJPEAUIMMDevice@@@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSpatialProperties::ClearSpatialAudioSettings(struct _RTL_CRITICAL_SECTION *this, struct IMMDevice *a2)
{
  LPCGUID v4; // r8
  LPCGUID v5; // r9
  struct IMMDevice *v6; // rdx
  LPCWSTR pwsz; // [rsp+38h] [rbp-39h] BYREF
  int LockCount_low; // [rsp+40h] [rbp-31h] BYREF
  _QWORD v9[4]; // [rsp+48h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp+17h] BYREF
  _QWORD *v12; // [rsp+98h] [rbp+27h]
  int v13; // [rsp+A0h] [rbp+2Fh]
  int v14; // [rsp+A4h] [rbp+33h]
  int *p_LockCount_low; // [rsp+A8h] [rbp+37h]
  int v16; // [rsp+B0h] [rbp+3Fh]
  int v17; // [rsp+B4h] [rbp+43h]

  v9[1] = -2LL;
  EnterCriticalSection(this);
  v9[2] = this;
  pwsz = 0LL;
  if ( ((int (__fastcall *)(struct IMMDevice *, LPCWSTR *))a2->lpVtbl->GetId)(a2, &pwsz) >= 0 )
  {
    if ( (unsigned int)hProvider > 4 )
    {
      TlgCreateWsz(&pDesc, pwsz);
      v9[0] = this[1].DebugInfo;
      v12 = v9;
      v13 = 8;
      v14 = 0;
      LockCount_low = LOBYTE(this[171].LockCount);
      p_LockCount_low = &LockCount_low;
      v16 = 4;
      v17 = 0;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18014938F, v4, v5, 5u, &pData);
    }
    if ( this[1].DebugInfo )
    {
      HIDWORD(this[1].SpinCount) = 0;
      memset_0((char *)&this[2].OwningThread + 4, 0, 0x48uLL);
      HIDWORD(this[2].OwningThread) = 0;
      this[4].LockCount = 0;
      this[4].RecursionCount = 0;
      memset_0(&this[4].OwningThread, 0, 0x1A10uLL);
      (*(void (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG, char *, _QWORD, _QWORD))(*(_QWORD *)this[1].DebugInfo + 48LL))(
        this[1].DebugInfo,
        (char *)&this[2].OwningThread + 4,
        0LL,
        0LL);
      LOBYTE(this[171].LockCount) = 1;
      CSpatialProperties::InitSpatialTechList((CSpatialProperties *)this, v6);
    }
  }
  if ( pwsz )
  {
    CoTaskMemFree((LPVOID)pwsz);
    pwsz = 0LL;
  }
  if ( this )
    LeaveCriticalSection(this);
}
