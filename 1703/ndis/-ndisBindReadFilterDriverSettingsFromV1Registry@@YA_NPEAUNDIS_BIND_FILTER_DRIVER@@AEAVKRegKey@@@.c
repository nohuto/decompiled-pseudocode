/*
 * XREFs of ?ndisBindReadFilterDriverSettingsFromV1Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@Z @ 0x1C00F0CB8
 * Callers:
 *     ?ndisBindReadFilterDriverFromV1Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C00F0B44 (-ndisBindReadFilterDriverFromV1Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C0028184 (WPP_SF_.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C00B0E30 (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 */

char __fastcall ndisBindReadFilterDriverSettingsFromV1Registry(struct NDIS_BIND_FILTER_DRIVER *a1, struct KRegKey *a2)
{
  const wchar_t *v3; // rcx
  __int64 v5; // rax
  int v6; // esi
  int v7; // ecx
  __int16 v8; // dx
  NTSTATUS v9; // ecx
  const wchar_t *v11; // rcx
  __int64 v12; // rax
  int v13; // ecx
  __int16 v14; // dx
  NTSTATUS v15; // ecx
  Rtl::KString *Myptr; // rcx
  const wchar_t *v17; // rcx
  __int64 v18; // rax
  int v19; // edx
  __int16 v20; // cx
  const wchar_t *v21; // rcx
  __int64 v22; // rax
  int v23; // ecx
  __int16 v24; // dx
  NTSTATUS v25; // ecx
  const wchar_t *v26; // rcx
  __int64 v27; // rax
  int v28; // ecx
  __int16 v29; // dx
  NTSTATUS v30; // ecx
  const wchar_t *v31; // rcx
  __int64 v32; // rax
  __int16 v33; // r14
  NTSTATUS v34; // esi
  ULONG ResultLength; // [rsp+30h] [rbp-40h] BYREF
  _UNICODE_STRING ValueName; // [rsp+38h] [rbp-38h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+48h] [rbp-28h] BYREF
  int v38; // [rsp+4Ch] [rbp-24h]
  int v39; // [rsp+50h] [rbp-20h]
  ULONG v40; // [rsp+54h] [rbp-1Ch]

  a1->FilterBindFlags = 0;
  *(_DWORD *)&ValueName.Length = 0;
  v3 = L"FilterType";
  ValueName.Buffer = 0LL;
  v5 = 0x7FFFLL;
  do
  {
    if ( !*v3 )
      break;
    ++v3;
    --v5;
  }
  while ( v5 );
  v6 = -1073741811;
  v7 = -1073741811;
  if ( v5 )
  {
    v7 = 0;
    v8 = 0x7FFF - v5;
  }
  else
  {
    v8 = 0;
  }
  if ( v5 )
  {
    ValueName.Buffer = L"FilterType";
    ValueName.Length = 2 * v8;
    ValueName.MaximumLength = 2 * v8 + 2;
  }
  if ( v7 < 0 )
    return 0;
  v9 = ZwQueryValueKey(a2->m_ptr, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength);
  if ( v9 >= 0 )
  {
    if ( v38 == 4 )
    {
      if ( v39 == 4 )
      {
        v9 = 0;
        ResultLength = v40;
      }
      else
      {
        v9 = -1073741789;
      }
    }
    else
    {
      v9 = -1073741788;
    }
  }
  if ( v9 < 0 )
    return 0;
  if ( ResultLength == 1 )
  {
    a1->FilterBindFlags |= 2u;
  }
  else if ( ResultLength != 2 )
  {
    if ( (unsigned __int8)byte_1C0092611 >= 2u )
      WPP_SF_(0xDu, &WPP_5d5c5ead9ada3b452eff0fb01fda438c_Traceguids);
    return 0;
  }
  *(_DWORD *)&ValueName.Length = 0;
  v11 = L"FilterRunType";
  ValueName.Buffer = 0LL;
  v12 = 0x7FFFLL;
  do
  {
    if ( !*v11 )
      break;
    ++v11;
    --v12;
  }
  while ( v12 );
  v13 = -1073741811;
  if ( v12 )
  {
    v13 = 0;
    v14 = 0x7FFF - v12;
  }
  else
  {
    v14 = 0;
  }
  if ( v12 )
  {
    ValueName.Buffer = L"FilterRunType";
    ValueName.Length = 2 * v14;
    ValueName.MaximumLength = 2 * v14 + 2;
  }
  if ( v13 < 0 )
    return 0;
  v15 = ZwQueryValueKey(a2->m_ptr, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength);
  if ( v15 >= 0 )
  {
    if ( v38 == 4 )
    {
      if ( v39 == 4 )
      {
        v15 = 0;
        ResultLength = v40;
      }
      else
      {
        v15 = -1073741789;
      }
    }
    else
    {
      v15 = -1073741788;
    }
  }
  if ( v15 < 0 )
    return 0;
  if ( ResultLength == 1 )
  {
    a1->FilterBindFlags |= 0xCu;
  }
  else
  {
    if ( ResultLength != 2 )
    {
      if ( (unsigned __int8)byte_1C0092611 >= 2u )
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
  v17 = L"FilterClass";
  ValueName.Buffer = 0LL;
  v18 = 0x7FFFLL;
  do
  {
    if ( !*v17 )
      break;
    ++v17;
    --v18;
  }
  while ( v18 );
  v19 = -1073741811;
  if ( v18 )
  {
    v19 = 0;
    v20 = 0x7FFF - v18;
  }
  else
  {
    v20 = 0;
  }
  if ( v18 )
  {
    ValueName.Buffer = L"FilterClass";
    ValueName.Length = 2 * v20;
    ValueName.MaximumLength = 2 * v20 + 2;
  }
  if ( v19 >= 0 )
    KRegKey::QueryValueString(&a2->m_ptr, &ValueName, (void **)&a1->FilterClass._Myptr);
  v21 = L"UnbindOnAttach";
  *(_DWORD *)&ValueName.Length = 0;
  ValueName.Buffer = 0LL;
  v22 = 0x7FFFLL;
  do
  {
    if ( !*v21 )
      break;
    ++v21;
    --v22;
  }
  while ( v22 );
  v23 = -1073741811;
  if ( v22 )
  {
    v23 = 0;
    v24 = 0x7FFF - v22;
  }
  else
  {
    v24 = 0;
  }
  if ( v22 )
  {
    ValueName.Buffer = L"UnbindOnAttach";
    ValueName.Length = 2 * v24;
    ValueName.MaximumLength = 2 * v24 + 2;
  }
  if ( v23 < 0 )
    goto LABEL_79;
  v25 = ZwQueryValueKey(a2->m_ptr, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength);
  if ( v25 >= 0 )
  {
    if ( v38 == 4 )
    {
      if ( v39 == 4 )
      {
        v25 = 0;
        ResultLength = v40;
      }
      else
      {
        v25 = -1073741789;
      }
    }
    else
    {
      v25 = -1073741788;
    }
  }
  if ( v25 < 0 )
  {
LABEL_79:
    *(_DWORD *)&ValueName.Length = 0;
    v26 = L"UnbindOnDetach";
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
    v28 = -1073741811;
    if ( v27 )
    {
      v28 = 0;
      v29 = 0x7FFF - v27;
    }
    else
    {
      v29 = 0;
    }
    if ( v27 )
    {
      ValueName.Buffer = L"UnbindOnDetach";
      ValueName.Length = 2 * v29;
      ValueName.MaximumLength = 2 * v29 + 2;
    }
    if ( v28 >= 0 )
    {
      v30 = ZwQueryValueKey(
              a2->m_ptr,
              &ValueName,
              KeyValuePartialInformation,
              KeyValueInformation,
              0x14u,
              &ResultLength);
      if ( v30 >= 0 )
      {
        if ( v38 == 4 )
        {
          if ( v39 == 4 )
          {
            v30 = 0;
            ResultLength = v40;
          }
          else
          {
            v30 = -1073741789;
          }
        }
        else
        {
          v30 = -1073741788;
        }
      }
      if ( v30 >= 0 )
      {
        if ( ResultLength )
        {
          if ( ResultLength != 1 )
          {
            if ( (unsigned __int8)byte_1C0092611 < 2u )
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
    }
    *(_DWORD *)&ValueName.Length = 0;
    v31 = L"NdisBootStart";
    ValueName.Buffer = 0LL;
    v32 = 0x7FFFLL;
    do
    {
      if ( !*v31 )
        break;
      ++v31;
      --v32;
    }
    while ( v32 );
    if ( v32 )
    {
      v6 = 0;
      v33 = 0x7FFF - v32;
    }
    else
    {
      v33 = 0;
    }
    if ( v32 )
    {
      ValueName.Buffer = L"NdisBootStart";
      ValueName.Length = 2 * v33;
      ValueName.MaximumLength = 2 * v33 + 2;
    }
    if ( v6 >= 0 )
    {
      v34 = ZwQueryValueKey(
              a2->m_ptr,
              &ValueName,
              KeyValuePartialInformation,
              KeyValueInformation,
              0x14u,
              &ResultLength);
      if ( v34 >= 0 )
      {
        if ( v38 == 4 )
        {
          if ( v39 == 4 )
          {
            v34 = 0;
            ResultLength = v40;
          }
          else
          {
            v34 = -1073741789;
          }
        }
        else
        {
          v34 = -1073741788;
        }
      }
      if ( v34 >= 0 )
      {
        if ( ResultLength )
        {
          if ( ResultLength != 1 )
          {
            if ( (unsigned __int8)byte_1C0092611 < 2u )
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
    }
    return 1;
  }
  if ( !ResultLength )
  {
    a1->FilterBindFlags &= ~4u;
    goto LABEL_79;
  }
  if ( ResultLength == 1 )
  {
    a1->FilterBindFlags |= 4u;
    goto LABEL_79;
  }
  if ( (unsigned __int8)byte_1C0092611 < 2u )
    return 0;
  WPP_SF_(0xFu, &WPP_5d5c5ead9ada3b452eff0fb01fda438c_Traceguids);
  return 0;
}
