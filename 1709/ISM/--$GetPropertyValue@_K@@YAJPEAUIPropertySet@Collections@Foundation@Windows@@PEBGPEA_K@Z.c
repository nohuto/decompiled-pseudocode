/*
 * XREFs of ??$GetPropertyValue@_K@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEA_K@Z @ 0x1800A203C
 * Callers:
 *     ?GetAccessibilitySettings@@YAJ_KPEAUIPropertySet@Collections@Foundation@Windows@@PEA_K2PEAEPEA_N@Z @ 0x18009F2AC (-GetAccessibilitySettings@@YAJ_KPEAUIPropertySet@Collections@Foundation@Windows@@PEA_K2PEAEPEA_N.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800367A8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall GetPropertyValue<unsigned __int64>(__int64 a1, const WCHAR *a2, __int64 a3)
{
  __int64 v6; // rbx
  int v7; // eax
  unsigned int v8; // edi
  int v9; // r9d
  __int64 v10; // rdi
  unsigned __int64 v11; // rax
  unsigned int v12; // r9d
  unsigned int v13; // r8d
  unsigned int v14; // eax
  UINT32 v15; // edx
  HRESULT v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 (__fastcall ***v19)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v20; // rcx
  __int64 (__fastcall ***v22)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-50h] BYREF
  __int64 v23; // [rsp+38h] [rbp-48h] BYREF
  __int64 v24; // [rsp+40h] [rbp-40h] BYREF
  __int64 v25; // [rsp+48h] [rbp-38h]
  __int64 v26; // [rsp+50h] [rbp-30h]
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  HSTRING string; // [rsp+70h] [rbp-10h] BYREF

  v26 = -2LL;
  v6 = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  if ( !a1 )
  {
    LOBYTE(v7) = 11;
    v8 = -2147483637;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_35;
    v9 = 104;
    goto LABEL_34;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  v6 = a1;
  v25 = a1;
  v7 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))a1)(
         a1,
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         &v24);
  v8 = v7;
  if ( v7 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_35;
    v9 = 107;
    goto LABEL_34;
  }
  v10 = v24;
  string = 0LL;
  v11 = -1LL;
  do
    ++v11;
  while ( a2[v11] );
  v12 = -1;
  if ( v11 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException(v11 > 0xFFFFFFFF ? (Microsoft::WRL::Details *)0x80070216LL : 0);
    __debugbreak();
  }
  v13 = v11;
  v14 = v11 + 1;
  if ( v13 + 1 >= v13 )
    v12 = v13 + 1;
  if ( v14 < v13 )
  {
    Microsoft::WRL::Details::RaiseException(v14 < v13 ? (Microsoft::WRL::Details *)0x80070216LL : 0);
    __debugbreak();
  }
  v15 = v12 - 1;
  if ( v13 < v12 )
    v15 = v13;
  v16 = WindowsCreateStringReference(a2, v15, &hstringHeader, &string);
  if ( v16 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v16);
  v7 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD))(*(_QWORD *)v10 + 48LL))(v10, string, &v22);
  v8 = v7;
  if ( v7 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_35;
    v9 = 108;
    goto LABEL_34;
  }
  if ( !v22 )
  {
    LOBYTE(v7) = 11;
    v8 = -2147483637;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_35;
    v9 = 111;
    goto LABEL_34;
  }
  v17 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v7 = (**v22)(v22, &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62, &v23);
  v8 = v7;
  if ( v7 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_35;
    v9 = 113;
    goto LABEL_34;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 112LL))(v23, a3);
  v8 = v7;
  if ( v7 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v9 = 114;
LABEL_34:
    McTemplateU0qqq(a1, &MinInput_Warning_CheckResult, 0, v9, v7);
  }
LABEL_35:
  v18 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v19 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v19)[2])(v19);
  }
  v20 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return v8;
}
