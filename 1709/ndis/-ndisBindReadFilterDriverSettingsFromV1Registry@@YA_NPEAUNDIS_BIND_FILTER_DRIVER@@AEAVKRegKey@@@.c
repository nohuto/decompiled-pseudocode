/*
 * XREFs of ?ndisBindReadFilterDriverSettingsFromV1Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@Z @ 0x1C00FA1C8
 * Callers:
 *     ?ndisBindReadFilterDriverFromV1Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C00FA054 (-ndisBindReadFilterDriverFromV1Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C0024644 (WPP_SF_.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C00B1994 (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 */

char __fastcall ndisBindReadFilterDriverSettingsFromV1Registry(struct NDIS_BIND_FILTER_DRIVER *a1, struct KRegKey *a2)
{
  __int64 v3; // rcx
  const wchar_t *v5; // rax
  NTSTATUS v6; // esi
  NTSTATUS v7; // edx
  __int16 v8; // ax
  const wchar_t *v10; // rax
  __int64 v11; // rdx
  NTSTATUS v12; // ecx
  __int16 v13; // ax
  Rtl::KString *Myptr; // rcx
  const wchar_t *v15; // rax
  __int64 v16; // rcx
  __int16 v17; // ax
  const wchar_t *v18; // rax
  __int64 v19; // rdx
  NTSTATUS v20; // ecx
  __int16 v21; // ax
  const wchar_t *v22; // rax
  __int64 v23; // rdx
  NTSTATUS v24; // ecx
  __int16 v25; // ax
  const wchar_t *v26; // rax
  __int64 v27; // rcx
  __int16 v28; // r14
  ULONG ResultLength; // [rsp+30h] [rbp-40h] BYREF
  _UNICODE_STRING ValueName; // [rsp+38h] [rbp-38h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+48h] [rbp-28h] BYREF
  int v32; // [rsp+4Ch] [rbp-24h]
  int v33; // [rsp+50h] [rbp-20h]
  ULONG v34; // [rsp+54h] [rbp-1Ch]

  a1->FilterBindFlags = 0;
  *(_DWORD *)&ValueName.Length = 0;
  v3 = 0x7FFFLL;
  ValueName.Buffer = 0LL;
  v5 = L"FilterType";
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v3;
  }
  while ( v3 );
  v6 = -1073741811;
  v7 = -1073741811;
  if ( v3 )
  {
    v7 = 0;
    v8 = 0x7FFF - v3;
  }
  else
  {
    v8 = 0;
  }
  if ( v3 )
  {
    ValueName.Buffer = L"FilterType";
    ValueName.Length = 2 * v8;
    ValueName.MaximumLength = 2 * v8 + 2;
    v7 = ZwQueryValueKey(a2->m_ptr, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength);
    if ( v7 >= 0 )
    {
      if ( v32 == 4 )
      {
        if ( v33 == 4 )
        {
          v7 = 0;
          ResultLength = v34;
        }
        else
        {
          v7 = -1073741789;
        }
      }
      else
      {
        v7 = -1073741788;
      }
    }
  }
  if ( v7 < 0 )
    return 0;
  if ( ResultLength == 1 )
  {
    a1->FilterBindFlags |= 2u;
  }
  else if ( ResultLength != 2 )
  {
    if ( (unsigned __int8)byte_1C0098751 >= 2u )
      WPP_SF_(0xDu, &WPP_5d5c5ead9ada3b452eff0fb01fda438c_Traceguids);
    return 0;
  }
  *(_DWORD *)&ValueName.Length = 0;
  v10 = L"FilterRunType";
  ValueName.Buffer = 0LL;
  v11 = 0x7FFFLL;
  do
  {
    if ( !*v10 )
      break;
    ++v10;
    --v11;
  }
  while ( v11 );
  v12 = -1073741811;
  if ( v11 )
  {
    v12 = 0;
    v13 = 0x7FFF - v11;
  }
  else
  {
    v13 = 0;
  }
  if ( v11 )
  {
    ValueName.Buffer = L"FilterRunType";
    ValueName.Length = 2 * v13;
    ValueName.MaximumLength = 2 * v13 + 2;
    v12 = ZwQueryValueKey(a2->m_ptr, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength);
    if ( v12 >= 0 )
    {
      if ( v32 == 4 )
      {
        if ( v33 == 4 )
        {
          v12 = 0;
          ResultLength = v34;
        }
        else
        {
          v12 = -1073741789;
        }
      }
      else
      {
        v12 = -1073741788;
      }
    }
  }
  if ( v12 < 0 )
    return 0;
  if ( ResultLength == 1 )
  {
    a1->FilterBindFlags |= 0xCu;
  }
  else
  {
    if ( ResultLength != 2 )
    {
      if ( (unsigned __int8)byte_1C0098751 >= 2u )
      {
        WPP_SF_(0xEu, &WPP_5d5c5ead9ada3b452eff0fb01fda438c_Traceguids);
        return 0;
      }
      return 0;
    }
    a1->FilterBindFlags |= 1u;
  }
  Myptr = a1->FilterClass._Myptr;
  if ( Myptr )
  {
    ExFreePoolWithTag(Myptr, 0x7274534Bu);
    a1->FilterClass._Myptr = 0LL;
  }
  *(_DWORD *)&ValueName.Length = 0;
  v15 = L"FilterClass";
  ValueName.Buffer = 0LL;
  v16 = 0x7FFFLL;
  do
  {
    if ( !*v15 )
      break;
    ++v15;
    --v16;
  }
  while ( v16 );
  if ( v16 )
    v17 = 0x7FFF - v16;
  else
    v17 = 0;
  if ( v16 )
  {
    ValueName.Buffer = L"FilterClass";
    ValueName.Length = 2 * v17;
    ValueName.MaximumLength = 2 * v17 + 2;
    KRegKey::QueryValueString(&a2->m_ptr, &ValueName, (void **)&a1->FilterClass._Myptr);
  }
  v18 = L"UnbindOnAttach";
  *(_DWORD *)&ValueName.Length = 0;
  ValueName.Buffer = 0LL;
  v19 = 0x7FFFLL;
  do
  {
    if ( !*v18 )
      break;
    ++v18;
    --v19;
  }
  while ( v19 );
  v20 = -1073741811;
  if ( v19 )
  {
    v20 = 0;
    v21 = 0x7FFF - v19;
  }
  else
  {
    v21 = 0;
  }
  if ( v19 )
  {
    ValueName.Buffer = L"UnbindOnAttach";
    ValueName.Length = 2 * v21;
    ValueName.MaximumLength = 2 * v21 + 2;
    v20 = ZwQueryValueKey(a2->m_ptr, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength);
    if ( v20 >= 0 )
    {
      if ( v32 == 4 )
      {
        if ( v33 == 4 )
        {
          v20 = 0;
          ResultLength = v34;
        }
        else
        {
          v20 = -1073741789;
        }
      }
      else
      {
        v20 = -1073741788;
      }
    }
  }
  if ( v20 < 0 )
  {
LABEL_71:
    *(_DWORD *)&ValueName.Length = 0;
    v22 = L"UnbindOnDetach";
    ValueName.Buffer = 0LL;
    v23 = 0x7FFFLL;
    do
    {
      if ( !*v22 )
        break;
      ++v22;
      --v23;
    }
    while ( v23 );
    v24 = -1073741811;
    if ( v23 )
    {
      v24 = 0;
      v25 = 0x7FFF - v23;
    }
    else
    {
      v25 = 0;
    }
    if ( v23 )
    {
      ValueName.Buffer = L"UnbindOnDetach";
      ValueName.Length = 2 * v25;
      ValueName.MaximumLength = 2 * v25 + 2;
      v24 = ZwQueryValueKey(
              a2->m_ptr,
              &ValueName,
              KeyValuePartialInformation,
              KeyValueInformation,
              0x14u,
              &ResultLength);
      if ( v24 >= 0 )
      {
        if ( v32 == 4 )
        {
          if ( v33 == 4 )
          {
            v24 = 0;
            ResultLength = v34;
          }
          else
          {
            v24 = -1073741789;
          }
        }
        else
        {
          v24 = -1073741788;
        }
      }
    }
    if ( v24 >= 0 )
    {
      if ( ResultLength )
      {
        if ( ResultLength != 1 )
        {
          if ( (unsigned __int8)byte_1C0098751 < 2u )
            return 0;
          WPP_SF_(0x10u, &WPP_5d5c5ead9ada3b452eff0fb01fda438c_Traceguids);
          return 0;
        }
        a1->FilterBindFlags |= 8u;
      }
      else
      {
        a1->FilterBindFlags &= ~8u;
      }
    }
    *(_DWORD *)&ValueName.Length = 0;
    v26 = L"NdisBootStart";
    ValueName.Buffer = 0LL;
    v27 = 0x7FFFLL;
    do
    {
      if ( !*v26 )
        break;
      ++v26;
      --v27;
    }
    while ( v27 );
    if ( v27 )
    {
      v6 = 0;
      v28 = 0x7FFF - v27;
    }
    else
    {
      v28 = 0;
    }
    if ( v27 )
    {
      ValueName.Buffer = L"NdisBootStart";
      ValueName.Length = 2 * v28;
      ValueName.MaximumLength = 2 * v28 + 2;
      v6 = ZwQueryValueKey(a2->m_ptr, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength);
      if ( v6 >= 0 )
      {
        if ( v32 == 4 )
        {
          if ( v33 == 4 )
          {
            v6 = 0;
            ResultLength = v34;
          }
          else
          {
            v6 = -1073741789;
          }
        }
        else
        {
          v6 = -1073741788;
        }
      }
    }
    if ( v6 >= 0 )
    {
      if ( ResultLength )
      {
        if ( ResultLength != 1 )
        {
          if ( (unsigned __int8)byte_1C0098751 < 2u )
            return 0;
          WPP_SF_(0x11u, &WPP_5d5c5ead9ada3b452eff0fb01fda438c_Traceguids);
          return 0;
        }
      }
      else
      {
        a1->FilterBindFlags |= 0x10u;
      }
    }
    return 1;
  }
  if ( !ResultLength )
  {
    a1->FilterBindFlags &= ~4u;
    goto LABEL_71;
  }
  if ( ResultLength == 1 )
  {
    a1->FilterBindFlags |= 4u;
    goto LABEL_71;
  }
  if ( (unsigned __int8)byte_1C0098751 < 2u )
    return 0;
  WPP_SF_(0xFu, &WPP_5d5c5ead9ada3b452eff0fb01fda438c_Traceguids);
  return 0;
}
