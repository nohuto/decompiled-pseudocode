/*
 * XREFs of ndisReadKnob @ 0x1C00B5460
 * Callers:
 *     ?ndisReadRegistryKnobs@@YAJPEAU_DRIVER_OBJECT@@PEBUNDIS_REGISTRY_KNOB@@_K@Z @ 0x1C00B5340 (-ndisReadRegistryKnobs@@YAJPEAU_DRIVER_OBJECT@@PEBUNDIS_REGISTRY_KNOB@@_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     WPP_SF_Sd @ 0x1C0041BF8 (WPP_SF_Sd.c)
 */

__int64 __fastcall ndisReadKnob(HANDLE *a1, void **a2, __int64 a3)
{
  void *v3; // r10
  _DWORD *v4; // rsi
  wchar_t *v7; // r8
  __int64 v8; // rcx
  wchar_t *v9; // rax
  NTSTATUS v10; // edx
  __int16 v11; // ax
  wchar_t *v12; // r8
  __int64 v13; // rdx
  wchar_t *v14; // rax
  NTSTATUS v15; // ecx
  __int16 v16; // bx
  _UNICODE_STRING ValueName; // [rsp+30h] [rbp-40h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-30h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+48h] [rbp-28h] BYREF
  int v21; // [rsp+4Ch] [rbp-24h]
  int v22; // [rsp+50h] [rbp-20h]
  int v23; // [rsp+54h] [rbp-1Ch]

  v3 = *a2;
  v4 = *(_DWORD **)(a3 + 8);
  if ( !*a2 )
    goto LABEL_13;
  v7 = *(wchar_t **)a3;
  *(_DWORD *)&ValueName.Length = 0;
  ValueName.Buffer = 0LL;
  if ( v7 )
  {
    v8 = 0x7FFFLL;
    v9 = v7;
    do
    {
      if ( !*v9 )
        break;
      ++v9;
      --v8;
    }
    while ( v8 );
    v10 = v8 == 0 ? 0xC000000D : 0;
    if ( v8 )
      v11 = 0x7FFF - v8;
    else
      v11 = 0;
    if ( !v8 )
      goto LABEL_11;
    ValueName.Buffer = v7;
    ValueName.Length = 2 * v11;
    ValueName.MaximumLength = 2 * v11 + 2;
  }
  v10 = ZwQueryValueKey(v3, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength);
  if ( v10 >= 0 )
  {
    if ( v21 == 4 )
    {
      if ( v22 == 4 )
      {
        v10 = 0;
        *v4 = v23;
      }
      else
      {
        v10 = -1073741789;
      }
    }
    else
    {
      v10 = -1073741788;
    }
  }
LABEL_11:
  if ( (unsigned int)(v10 + 1073741789) <= 1 )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
      WPP_SF_Sd(0xAu, &WPP_d97384ff81733b666d2a0bed288fd62c_Traceguids, *(const wchar_t **)a3, v10);
    v10 = 0;
  }
  if ( v10 != -1073741772 )
    return (unsigned int)v10;
LABEL_13:
  v12 = *(wchar_t **)a3;
  *(_DWORD *)&ValueName.Length = 0;
  ValueName.Buffer = 0LL;
  if ( !v12 )
    goto LABEL_21;
  v13 = 0x7FFFLL;
  v14 = v12;
  do
  {
    if ( !*v14 )
      break;
    ++v14;
    --v13;
  }
  while ( v13 );
  v15 = v13 == 0 ? 0xC000000D : 0;
  if ( v13 )
    v16 = 0x7FFF - v13;
  else
    v16 = 0;
  if ( v13 )
  {
    ValueName.Buffer = v12;
    ValueName.Length = 2 * v16;
    ValueName.MaximumLength = 2 * v16 + 2;
LABEL_21:
    v15 = ZwQueryValueKey(*a1, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength);
    if ( v15 >= 0 )
    {
      if ( v21 == 4 )
      {
        if ( v22 == 4 )
        {
          v15 = 0;
          *v4 = v23;
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
  }
  if ( v15 == -1073741772 )
  {
    v15 = 0;
    *v4 = *(_DWORD *)(a3 + 16);
  }
  return (unsigned int)v15;
}
