/*
 * XREFs of ?GetUInt64KeyFromUInt64Value@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@_KPEA_K@Z @ 0x180077E78
 * Callers:
 *     ?GetAccessibilitySettings@@YA_N_KPEAUIPropertySet@Collections@Foundation@Windows@@PEA_K2PEAEPEA_N@Z @ 0x180078210 (-GetAccessibilitySettings@@YA_N_KPEAUIPropertySet@Collections@Foundation@Windows@@PEA_K2PEAEPEA_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall GetUInt64KeyFromUInt64Value(
        struct Windows::Foundation::Collections::IPropertySet *a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  struct Windows::Foundation::Collections::IPropertySet *v6; // rbx
  int v7; // edi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 (__fastcall ***v10)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v11; // rcx
  const wchar_t *StringRawBuffer; // rsi
  size_t v13; // rax
  HSTRING v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 (__fastcall ***v17)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 (__fastcall ***v20)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  HSTRING string; // [rsp+20h] [rbp-50h] BYREF
  __int64 v25; // [rsp+28h] [rbp-48h] BYREF
  __int64 (__fastcall ***v26)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-40h] BYREF
  __int64 v27; // [rsp+38h] [rbp-38h] BYREF
  __int64 v28; // [rsp+40h] [rbp-30h] BYREF
  __int64 v29; // [rsp+48h] [rbp-28h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v30; // [rsp+50h] [rbp-20h]
  _QWORD v31[3]; // [rsp+58h] [rbp-18h] BYREF
  char v32; // [rsp+A0h] [rbp+30h] BYREF
  UINT32 length; // [rsp+B8h] [rbp+48h] BYREF

  v31[1] = -2LL;
  v6 = 0LL;
  v30 = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  v32 = 0;
  if ( !a1 )
    goto LABEL_2;
  (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)a1 + 8LL))(a1);
  v6 = a1;
  v30 = a1;
  v7 = (**(__int64 (__fastcall ***)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, __int64 *))a1)(
         a1,
         &GUID_fe2f3d47_5d47_5499_8374_430c7cda0204,
         &v29);
  if ( v7 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v29 + 48LL))(v29, &v28);
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v28 + 56LL))(v28, &v32);
      if ( v7 >= 0 )
      {
        if ( !v32 )
        {
LABEL_2:
          v7 = -2147483637;
          goto LABEL_35;
        }
        while ( 1 )
        {
          v26 = 0LL;
          v25 = 0LL;
          v27 = 0LL;
          string = 0LL;
          v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v28 + 48LL))(v28, &v27);
          if ( v7 < 0 )
            break;
          v8 = v27;
          WindowsDeleteString(string);
          string = 0LL;
          v7 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v8 + 48LL))(v8, &string);
          if ( v7 < 0 )
            break;
          v9 = v27;
          v10 = v26;
          if ( v26 )
          {
            v26 = 0LL;
            ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v10)[2])(v10);
          }
          v7 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v9 + 56LL))(
                 v9,
                 &v26);
          if ( v7 < 0 )
            break;
          v11 = v25;
          if ( v25 )
          {
            v25 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
          }
          v7 = (**v26)(v26, &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62, &v25);
          if ( v7 < 0 )
            break;
          v7 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v25 + 112LL))(v25, v31);
          if ( v7 >= 0 && v31[0] == a2 )
          {
            length = 0;
            StringRawBuffer = WindowsGetStringRawBuffer(string, &length);
            v13 = wcsspn(StringRawBuffer, L"0123456789abcdefABCDEF");
            if ( v13 == length )
            {
              *a3 = _o__wcstoui64(StringRawBuffer, 0LL, 16LL);
              break;
            }
          }
          v7 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v28 + 64LL))(v28, &v32);
          v14 = string;
          if ( v7 < 0 )
            goto LABEL_29;
          WindowsDeleteString(string);
          string = 0LL;
          v15 = v27;
          if ( v27 )
          {
            v27 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
          }
          v16 = v25;
          if ( v25 )
          {
            v25 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
          }
          v17 = v26;
          if ( v26 )
          {
            v26 = 0LL;
            ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v17)[2])(v17);
          }
          if ( !v32 )
          {
            v7 = -2147023728;
            goto LABEL_35;
          }
        }
        v14 = string;
LABEL_29:
        WindowsDeleteString(v14);
        string = 0LL;
        v18 = v27;
        if ( v27 )
        {
          v27 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        }
        v19 = v25;
        if ( v25 )
        {
          v25 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        }
        v20 = v26;
        if ( v26 )
        {
          v26 = 0LL;
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v20)[2])(v20);
        }
      }
    }
  }
LABEL_35:
  v21 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  v22 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  if ( v6 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v6 + 16LL))(v6);
  return (unsigned int)v7;
}
