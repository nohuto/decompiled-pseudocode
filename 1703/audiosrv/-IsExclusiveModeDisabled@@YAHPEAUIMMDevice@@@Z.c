/*
 * XREFs of ?IsExclusiveModeDisabled@@YAHPEAUIMMDevice@@@Z @ 0x18002D6C8
 * Callers:
 *     AudioServerIsFormatSupported @ 0x18000A9B0 (AudioServerIsFormatSupported.c)
 * Callees:
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall IsExclusiveModeDisabled(struct IMMDevice *a1)
{
  unsigned int v1; // ebx
  int v2; // eax
  int v3; // edi
  PROPVARIANT pvar; // [rsp+28h] [rbp-18h] BYREF
  __int64 v6; // [rsp+30h] [rbp-10h]
  __int64 v7; // [rsp+38h] [rbp-8h]
  __int64 v8; // [rsp+50h] [rbp+10h] BYREF

  v1 = 0;
  pvar = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v2 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a1->lpVtbl->OpenPropertyStore)(a1, 0LL, &v8);
  v3 = v2;
  if ( v2 < 0 )
    AudSrvTraceLoggingErrorHelper("GetDevicePropertyStore", 0xE33u, v2);
  if ( v3 < 0 )
  {
    if ( v3 == -2147024894 )
    {
      pvar = 0LL;
      v6 = 0LL;
      v7 = 0LL;
      v3 = 0;
    }
  }
  else
  {
    v3 = (*(__int64 (__fastcall **)(__int64, const struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)v8 + 40LL))(
           v8,
           &PKEY_Endpoint_AllowExclusive,
           &pvar);
  }
  if ( v3 < 0 )
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::GetPropertyStoreProperty", 0x1200u, v3);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v3 < 0 )
  {
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        67LL,
        &WPP_6a2f5d392ebc3a7b5b56686ced9a2fbc_Traceguids,
        (unsigned int)v3);
    }
  }
  else if ( (_WORD)pvar )
  {
    LOBYTE(v1) = (_WORD)v6 == 0;
  }
  PropVariantClear(&pvar);
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 68LL, &WPP_6a2f5d392ebc3a7b5b56686ced9a2fbc_Traceguids, v1);
  }
  return v1;
}
