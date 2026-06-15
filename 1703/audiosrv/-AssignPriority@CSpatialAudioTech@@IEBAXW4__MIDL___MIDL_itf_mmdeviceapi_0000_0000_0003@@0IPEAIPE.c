/*
 * XREFs of ?AssignPriority@CSpatialAudioTech@@IEBAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@0IPEAIPEA_N@Z @ 0x180040734
 * Callers:
 *     ?IsTechnologySupported@CSpatialAudioDolbyStereo@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18003C980 (-IsTechnologySupported@CSpatialAudioDolbyStereo@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000.c)
 *     ?IsTechnologySupported@CSpatialAudioDolbyHeadphones@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18003D960 (-IsTechnologySupported@CSpatialAudioDolbyHeadphones@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_.c)
 *     ?IsTechnologySupported@CSpatialAudioMSHRTF@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800408B0 (-IsTechnologySupported@CSpatialAudioMSHRTF@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003.c)
 * Callees:
 *     ?GetLegacyMode@CSpatialAudioDolbyHeadphones@@UEBAIXZ @ 0x18002F530 (-GetLegacyMode@CSpatialAudioDolbyHeadphones@@UEBAIXZ.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x18004AE50 (IsGetDefaultSpatialRenderingModePresent.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSpatialAudioTech::AssignPriority(
        CSpatialAudioTech *this,
        unsigned int a2,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003 a3,
        unsigned int a4,
        unsigned int *a5,
        bool *a6)
{
  int DefaultSpatialRenderingMode; // esi
  __int64 (__fastcall *v11)(CSpatialAudioDolbyHeadphones *); // rax
  int LegacyMode; // eax

  DefaultSpatialRenderingMode = 0;
  *a5 = 0;
  *a6 = 1;
  if ( (unsigned __int8)IsGetDefaultSpatialRenderingModePresent() )
    DefaultSpatialRenderingMode = GetDefaultSpatialRenderingMode(a2);
  v11 = *(__int64 (__fastcall **)(CSpatialAudioDolbyHeadphones *))(*(_QWORD *)this + 64LL);
  if ( v11 == CSpatialAudioDolbyHeadphones::GetLegacyMode )
    LegacyMode = CSpatialAudioDolbyHeadphones::GetLegacyMode(this);
  else
    LegacyMode = v11(this);
  if ( DefaultSpatialRenderingMode == LegacyMode )
  {
    *a5 = 1;
  }
  else if ( DefaultSpatialRenderingMode )
  {
    *a6 = 0;
  }
  else if ( a2 == a3 || a2 == 5 && a3 == Headphones )
  {
    *a5 = a4;
  }
}
