/*
 * XREFs of ??$GetPropertyValue@K@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAK@Z @ 0x1800A2318
 * Callers:
 *     ?GetAccessibilitySettings@@YAJ_KPEAUIPropertySet@Collections@Foundation@Windows@@PEA_K2PEAEPEA_N@Z @ 0x18009F2AC (-GetAccessibilitySettings@@YAJ_KPEAUIPropertySet@Collections@Foundation@Windows@@PEA_K2PEAEPEA_N.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800367A8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall GetPropertyValue<unsigned long>(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  int v8; // r9d
  __int64 v9; // rdi
  HRESULT v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 (__fastcall ***v13)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v14; // rcx
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-50h] BYREF
  __int64 v17; // [rsp+38h] [rbp-48h] BYREF
  __int64 v18; // [rsp+40h] [rbp-40h] BYREF
  __int64 v19; // [rsp+48h] [rbp-38h]
  __int64 v20; // [rsp+50h] [rbp-30h]
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  HSTRING string; // [rsp+70h] [rbp-10h] BYREF

  v20 = -2LL;
  v5 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  if ( !a1 )
  {
    LOBYTE(v6) = 11;
    v7 = -2147483637;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_24;
    v8 = 104;
    goto LABEL_23;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  v5 = a1;
  v19 = a1;
  v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))a1)(
         a1,
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         &v18);
  v7 = v6;
  if ( v6 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_24;
    v8 = 107;
    goto LABEL_23;
  }
  v9 = v18;
  string = 0LL;
  v10 = WindowsCreateStringReference(L"GamepadAccessibilityVibrationSetting", 0x24u, &hstringHeader, &string);
  if ( v10 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v10);
  v6 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD))(*(_QWORD *)v9 + 48LL))(v9, string, &v16);
  v7 = v6;
  if ( v6 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_24;
    v8 = 108;
    goto LABEL_23;
  }
  if ( !v16 )
  {
    LOBYTE(v6) = 11;
    v7 = -2147483637;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_24;
    v8 = 111;
    goto LABEL_23;
  }
  v11 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v6 = (**v16)(v16, &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62, &v17);
  v7 = v6;
  if ( v6 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_24;
    v8 = 113;
    goto LABEL_23;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 96LL))(v17, a3);
  v7 = v6;
  if ( v6 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v8 = 114;
LABEL_23:
    McTemplateU0qqq(a1, &MinInput_Warning_CheckResult, 0, v8, v6);
  }
LABEL_24:
  v12 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v13)[2])(v13);
  }
  v14 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return v7;
}
