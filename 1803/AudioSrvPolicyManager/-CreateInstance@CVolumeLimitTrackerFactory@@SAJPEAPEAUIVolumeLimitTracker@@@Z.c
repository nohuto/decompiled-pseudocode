/*
 * XREFs of ?CreateInstance@CVolumeLimitTrackerFactory@@SAJPEAPEAUIVolumeLimitTracker@@@Z @ 0x18002AA4C
 * Callers:
 *     ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x1800254E8 (-TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z.c)
 * Callees:
 *     IsEUCountry @ 0x18002AD2C (IsEUCountry.c)
 *     ??0CVolumeLimitTrackerImpl@@QEAA@XZ @ 0x18002B5B0 (--0CVolumeLimitTrackerImpl@@QEAA@XZ.c)
 *     ?CreateInstance@CVolumeLimitTrackerNull@@SAJPEAPEAUIVolumeLimitTracker@@@Z @ 0x18002C300 (-CreateInstance@CVolumeLimitTrackerNull@@SAJPEAPEAUIVolumeLimitTracker@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180035538 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVolumeLimitTrackerFactory::CreateInstance(struct IVolumeLimitTracker **a1)
{
  BOOL v2; // ebx
  CVolumeLimitTrackerImpl *v3; // rax
  unsigned int v4; // edi
  CVolumeLimitTrackerImpl *v5; // rbx
  CVolumeLimitTrackerImpl *cbData; // [rsp+60h] [rbp+20h] BYREF
  CVolumeLimitTrackerImpl *Data; // [rsp+68h] [rbp+28h] BYREF
  HKEY hKey; // [rsp+70h] [rbp+30h] BYREF

  v2 = 0;
  hKey = 0LL;
  if ( !RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"SOFTWARE\\OEM\\VolumeLimit\\", 0, 1u, &hKey) )
  {
    LODWORD(cbData) = 4;
    if ( !RegQueryValueExW(hKey, L"EnableVolumeLimit", 0LL, 0LL, (LPBYTE)&Data, (LPDWORD)&cbData) && (_DWORD)Data == 1 )
      v2 = IsEUCountry() != 0;
    RegCloseKey(hKey);
  }
  *a1 = 0LL;
  if ( v2 )
  {
    *a1 = 0LL;
    v3 = (CVolumeLimitTrackerImpl *)operator new(0x2C8uLL, (const struct std::nothrow_t *)&std::nothrow);
    cbData = v3;
    Data = v3;
    if ( v3 )
    {
      hKey = (HKEY)v3;
      v5 = CVolumeLimitTrackerImpl::CVolumeLimitTrackerImpl(v3);
      Data = v5;
      cbData = 0LL;
      v4 = (**(__int64 (__fastcall ***)(CVolumeLimitTrackerImpl *, GUID *, struct IVolumeLimitTracker **))v5)(
             v5,
             &GUID_caa0a1b0_90b5_451e_b5d6_8c3807017c35,
             a1);
      (*(void (__fastcall **)(CVolumeLimitTrackerImpl *))(*(_QWORD *)v5 + 16LL))(v5);
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  else
  {
    return (unsigned int)CVolumeLimitTrackerNull::CreateInstance(a1);
  }
  return v4;
}
