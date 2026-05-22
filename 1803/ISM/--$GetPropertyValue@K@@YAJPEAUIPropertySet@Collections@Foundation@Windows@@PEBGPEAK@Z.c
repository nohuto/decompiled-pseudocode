/*
 * XREFs of ??$GetPropertyValue@K@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAK@Z @ 0x18007A86C
 * Callers:
 *     ?GetAccessibilitySettings@@YA_N_KPEAUIPropertySet@Collections@Foundation@Windows@@PEA_K2PEAEPEA_N@Z @ 0x180078210 (-GetAccessibilitySettings@@YA_N_KPEAUIPropertySet@Collections@Foundation@Windows@@PEA_K2PEAEPEA_.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18007AC28 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall GetPropertyValue<unsigned long>(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  int v6; // edi
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 (__fastcall ***v11)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v12; // rcx
  __int64 (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-60h] BYREF
  __int64 v15; // [rsp+28h] [rbp-58h] BYREF
  __int64 v16; // [rsp+30h] [rbp-50h] BYREF
  __int64 v17; // [rsp+38h] [rbp-48h]
  _QWORD v18[3]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v19[32]; // [rsp+58h] [rbp-28h] BYREF

  v18[2] = -2LL;
  v18[0] = L"GamepadAccessibilityVibrationSetting";
  v5 = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  if ( !a1 )
    goto LABEL_2;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  v5 = a1;
  v17 = a1;
  v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))a1)(
         a1,
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         &v16);
  if ( v6 >= 0 )
  {
    v7 = v16;
    v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v19, v18);
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v7 + 48LL))(v7, *(_QWORD *)(v8 + 24), &v14);
    if ( v6 >= 0 )
    {
      if ( !v14 )
      {
LABEL_2:
        v6 = -2147483637;
        goto LABEL_10;
      }
      v9 = v15;
      if ( v15 )
      {
        v15 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      v6 = (**v14)(v14, &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62, &v15);
      if ( v6 >= 0 )
        v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 96LL))(v15, a3);
    }
  }
LABEL_10:
  v10 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v11)[2])(v11);
  }
  v12 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return (unsigned int)v6;
}
