/*
 * XREFs of ?GetUInt64KeyFromUInt64Value@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@_KPEA_K@Z @ 0x18009EE08
 * Callers:
 *     ?GetAccessibilitySettings@@YAJ_KPEAUIPropertySet@Collections@Foundation@Windows@@PEA_K2PEAEPEA_N@Z @ 0x18009F2AC (-GetAccessibilitySettings@@YAJ_KPEAUIPropertySet@Collections@Foundation@Windows@@PEA_K2PEAEPEA_N.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall GetUInt64KeyFromUInt64Value(
        struct Windows::Foundation::Collections::IPropertySet *a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  struct Windows::Foundation::Collections::IPropertySet *v6; // rbx
  int v7; // eax
  int v8; // edi
  int v9; // r9d
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 (__fastcall ***v14)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v15; // rcx
  const wchar_t *StringRawBuffer; // rsi
  size_t v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // r9d
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 (__fastcall ***v24)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  HSTRING string; // [rsp+30h] [rbp-50h] BYREF
  __int64 v29; // [rsp+38h] [rbp-48h] BYREF
  __int64 (__fastcall ***v30)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-40h] BYREF
  __int64 v31; // [rsp+48h] [rbp-38h] BYREF
  __int64 v32; // [rsp+50h] [rbp-30h] BYREF
  __int64 v33; // [rsp+58h] [rbp-28h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v34; // [rsp+60h] [rbp-20h]
  _QWORD v35[3]; // [rsp+68h] [rbp-18h] BYREF
  char v36; // [rsp+B0h] [rbp+30h] BYREF
  UINT32 length; // [rsp+C8h] [rbp+48h] BYREF

  v35[1] = -2LL;
  v6 = 0LL;
  v34 = 0LL;
  v33 = 0LL;
  v32 = 0LL;
  v36 = 0;
  if ( !a1 )
  {
    LOBYTE(v7) = 11;
    v8 = -2147483637;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_57;
    v9 = 132;
    goto LABEL_4;
  }
  (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)a1 + 8LL))(a1);
  v6 = a1;
  v34 = a1;
  v7 = (**(__int64 (__fastcall ***)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, __int64 *))a1)(
         a1,
         &GUID_fe2f3d47_5d47_5499_8374_430c7cda0204,
         &v33);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v33 + 48LL))(v33, &v32);
    v8 = v7;
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v32 + 56LL))(v32, &v36);
      v8 = v7;
      if ( v7 >= 0 )
      {
        if ( v36 )
        {
          while ( 1 )
          {
            v30 = 0LL;
            v29 = 0LL;
            v31 = 0LL;
            string = 0LL;
            v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v32 + 48LL))(v32, &v31);
            v8 = v10;
            if ( v10 < 0 )
              break;
            v12 = v31;
            WindowsDeleteString(string);
            string = 0LL;
            v10 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v12 + 48LL))(v12, &string);
            v8 = v10;
            if ( v10 < 0 )
            {
              if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
                goto LABEL_51;
              v21 = 152;
              goto LABEL_50;
            }
            v13 = v31;
            v14 = v30;
            if ( v30 )
            {
              v30 = 0LL;
              ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v14)[2])(v14);
            }
            v10 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v13 + 56LL))(
                    v13,
                    &v30);
            v8 = v10;
            if ( v10 < 0 )
            {
              if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
                goto LABEL_51;
              v21 = 153;
              goto LABEL_50;
            }
            v15 = v29;
            if ( v29 )
            {
              v29 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
            }
            v10 = (**v30)(v30, &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62, &v29);
            v8 = v10;
            if ( v10 < 0 )
            {
              if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
                goto LABEL_51;
              v21 = 155;
              goto LABEL_50;
            }
            v8 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v29 + 112LL))(v29, v35);
            if ( v8 >= 0 && v35[0] == a2 )
            {
              length = 0;
              StringRawBuffer = WindowsGetStringRawBuffer(string, &length);
              v17 = wcsspn(StringRawBuffer, L"0123456789abcdefABCDEF");
              if ( v17 == length )
              {
                *a3 = _o__wcstoui64(StringRawBuffer, 0LL, 16LL);
                goto LABEL_51;
              }
            }
            v10 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v32 + 64LL))(v32, &v36);
            v8 = v10;
            if ( v10 < 0 )
            {
              if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
                goto LABEL_51;
              v21 = 170;
              goto LABEL_50;
            }
            WindowsDeleteString(string);
            string = 0LL;
            v18 = v31;
            if ( v31 )
            {
              v31 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
            }
            v19 = v29;
            if ( v29 )
            {
              v29 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
            }
            v20 = (__int64)v30;
            if ( v30 )
            {
              v30 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
            }
            if ( !v36 )
            {
              v8 = -2147023728;
              if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
                McTemplateU0qqq(v20, &MinInput_Warning_CheckResult, 0, 173, 144);
              goto LABEL_57;
            }
          }
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            goto LABEL_51;
          v21 = 151;
LABEL_50:
          McTemplateU0qqq(v11, &MinInput_Warning_CheckResult, 0, v21, v10);
LABEL_51:
          WindowsDeleteString(string);
          string = 0LL;
          v22 = v31;
          if ( v31 )
          {
            v31 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
          }
          v23 = v29;
          if ( v29 )
          {
            v29 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
          }
          v24 = v30;
          if ( v30 )
          {
            v30 = 0LL;
            ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v24)[2])(v24);
          }
        }
        else
        {
          LOBYTE(v7) = 11;
          v8 = -2147483637;
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            v9 = 141;
            goto LABEL_4;
          }
        }
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v9 = 138;
        goto LABEL_4;
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v9 = 137;
      goto LABEL_4;
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v9 = 136;
LABEL_4:
    McTemplateU0qqq((__int64)a1, &MinInput_Warning_CheckResult, 0, v9, v7);
  }
LABEL_57:
  v25 = v32;
  if ( v32 )
  {
    v32 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  v26 = v33;
  if ( v33 )
  {
    v33 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  }
  if ( v6 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v6 + 16LL))(v6);
  return (unsigned int)v8;
}
