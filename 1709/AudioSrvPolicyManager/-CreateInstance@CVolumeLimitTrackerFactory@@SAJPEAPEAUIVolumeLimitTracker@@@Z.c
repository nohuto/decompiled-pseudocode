/*
 * XREFs of ?CreateInstance@CVolumeLimitTrackerFactory@@SAJPEAPEAUIVolumeLimitTracker@@@Z @ 0x180020F5C
 * Callers:
 *     ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001C164 (-TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z.c)
 * Callees:
 *     IsEUCountry @ 0x1800213F4 (IsEUCountry.c)
 *     McTemplateU0pt @ 0x180021C20 (McTemplateU0pt.c)
 *     McTemplateU0dsdp @ 0x180021C98 (McTemplateU0dsdp.c)
 *     ??0CVolumeLimitTrackerImpl@@QEAA@XZ @ 0x180021DA0 (--0CVolumeLimitTrackerImpl@@QEAA@XZ.c)
 *     ??0CDriverListener@@QEAA@XZ @ 0x1800231B0 (--0CDriverListener@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180027058 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVolumeLimitTrackerFactory::CreateInstance(struct IVolumeLimitTracker **a1)
{
  unsigned int v2; // edi
  BOOL v3; // r15d
  int v4; // ecx
  CVolumeLimitTrackerImpl *v5; // rax
  __int64 v6; // rcx
  int v7; // esi
  __int64 v8; // rdx
  _DWORD *v9; // rax
  _DWORD *v10; // rbx
  CVolumeLimitTrackerImpl *v12; // [rsp+38h] [rbp-8h]
  CVolumeLimitTrackerImpl *cbData; // [rsp+80h] [rbp+40h] BYREF
  CVolumeLimitTrackerImpl *Data; // [rsp+88h] [rbp+48h] BYREF
  HKEY hKey; // [rsp+90h] [rbp+50h] BYREF
  CVolumeLimitTrackerImpl *v16; // [rsp+98h] [rbp+58h]

  v2 = 0;
  v3 = 0;
  hKey = 0LL;
  if ( !RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"SOFTWARE\\OEM\\VolumeLimit\\", 0, 1u, &hKey) )
  {
    LODWORD(cbData) = 4;
    if ( !RegQueryValueExW(hKey, L"EnableVolumeLimit", 0LL, 0LL, (LPBYTE)&Data, (LPDWORD)&cbData) && (_DWORD)Data == 1 )
      v3 = IsEUCountry() != 0;
    RegCloseKey(hKey);
  }
  if ( !a1 )
  {
    if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) != 0 )
      McTemplateU0dsdp(
        v4,
        (unsigned int)&EUVolumePolicy_Error_Origination,
        -2147467261,
        (unsigned int)"CVolumeLimitTrackerFactory::CreateInstance",
        37,
        0);
    return (unsigned int)-2147467261;
  }
  *a1 = 0LL;
  *a1 = 0LL;
  if ( !v3 )
  {
    v9 = operator new(0x220uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = v9;
    if ( v9 )
    {
      v9[3] = 1;
      *(_QWORD *)v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IVolumeLimitTracker>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *(_QWORD *)v10 = &CVolumeLimitTrackerNull::`vftable';
      v10[4] = 1;
      CDriverListener::CDriverListener((CDriverListener *)(v10 + 6));
      v7 = (**(__int64 (__fastcall ***)(_DWORD *, GUID *, struct IVolumeLimitTracker **))v10)(
             v10,
             &GUID_caa0a1b0_90b5_451e_b5d6_8c3807017c35,
             a1);
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 16LL))(v10);
      if ( v7 >= 0 )
        goto LABEL_24;
    }
    else
    {
      v7 = -2147024882;
    }
    if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) != 0 )
      McTemplateU0dsdp(
        v6,
        (unsigned int)&EUVolumePolicy_Error_Propagation,
        v7,
        (unsigned int)"CVolumeLimitTrackerFactory::CreateInstance",
        47,
        0);
    return (unsigned int)v7;
  }
  v5 = (CVolumeLimitTrackerImpl *)operator new(0x2C8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v5;
  cbData = v5;
  if ( !v5 )
  {
    v7 = -2147024882;
    goto LABEL_14;
  }
  Data = v5;
  v12 = CVolumeLimitTrackerImpl::CVolumeLimitTrackerImpl(v5);
  v16 = 0LL;
  v7 = (**(__int64 (__fastcall ***)(CVolumeLimitTrackerImpl *, GUID *, struct IVolumeLimitTracker **))v12)(
         v12,
         &GUID_caa0a1b0_90b5_451e_b5d6_8c3807017c35,
         a1);
  (*(void (__fastcall **)(CVolumeLimitTrackerImpl *))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v7 < 0 )
  {
LABEL_14:
    if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) != 0 )
      McTemplateU0dsdp(
        v6,
        (unsigned int)&EUVolumePolicy_Error_Propagation,
        v7,
        (unsigned int)"CVolumeLimitTrackerFactory::CreateInstance",
        43,
        0);
    return (unsigned int)v7;
  }
LABEL_24:
  if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 2) != 0 )
    McTemplateU0pt(v6, v8, *a1, v3);
  return v2;
}
