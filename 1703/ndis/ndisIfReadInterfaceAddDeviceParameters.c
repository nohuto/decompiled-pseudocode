/*
 * XREFs of ndisIfReadInterfaceAddDeviceParameters @ 0x1C00AED00
 * Callers:
 *     ndisPnPAddDevice @ 0x1C00A9500 (ndisPnPAddDevice.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00169DC (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBG@Z @ 0x1C00AF13C (-Initialize@KString@Rtl@@SAPEAU12@PEBG@Z.c)
 *     ?ndisIfOpenInterfacePersistedStorage@@YAJAEBU_GUID@@AEAVKRegKey@@K@Z @ 0x1C00BCB94 (-ndisIfOpenInterfacePersistedStorage@@YAJAEBU_GUID@@AEAVKRegKey@@K@Z.c)
 */

__int64 __fastcall ndisIfReadInterfaceAddDeviceParameters(unsigned int *a1)
{
  unsigned int v1; // r15d
  int v3; // eax
  __int64 v4; // rcx
  const wchar_t *v5; // rax
  unsigned int v6; // esi
  int v7; // eax
  const WCHAR *v8; // rax
  __int16 v9; // di
  __int64 v10; // rcx
  int v11; // eax
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  const wchar_t *v14; // rax
  int v15; // eax
  const wchar_t *v16; // rax
  __int64 v17; // rcx
  int v18; // eax
  struct Rtl::KString *v19; // rax
  struct Rtl::KString *v20; // rcx
  struct Rtl::KString *v21; // rdi
  HANDLE v23; // rbx
  ULONG Length[2]; // [rsp+28h] [rbp-E0h]
  PULONG ResultLength; // [rsp+30h] [rbp-D8h]
  _UNICODE_STRING ValueName; // [rsp+78h] [rbp-90h] BYREF
  ULONG v27; // [rsp+88h] [rbp-80h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp-78h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+98h] [rbp-70h] BYREF
  int v30; // [rsp+9Ch] [rbp-6Ch]
  int v31; // [rsp+A0h] [rbp-68h]
  unsigned int v32; // [rsp+A4h] [rbp-64h]
  wchar_t Dest[48]; // [rsp+B8h] [rbp-50h] BYREF

  v1 = 0;
  KeyHandle = 0LL;
  v3 = ndisIfOpenInterfacePersistedStorage((const struct _GUID *)a1, (struct KRegKey *)&KeyHandle, 1u);
  if ( v3 < 0 )
  {
    v23 = KeyHandle;
LABEL_47:
    v1 = v3;
  }
  else
  {
    *(_DWORD *)&ValueName.Length = 0;
    ValueName.Buffer = 0LL;
    v4 = 0x7FFFLL;
    v5 = L"NetLuidIndex";
    v6 = 0;
    while ( *v5 )
    {
      ++v5;
      if ( !--v4 )
      {
        v23 = KeyHandle;
LABEL_58:
        v3 = -1073741491;
        goto LABEL_47;
      }
    }
    v23 = KeyHandle;
    ValueName.Buffer = L"NetLuidIndex";
    ValueName.Length = 2 * (0x7FFF - v4);
    ValueName.MaximumLength = ValueName.Length + 2;
    if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &v27) < 0 )
      goto LABEL_58;
    if ( v30 == 4 )
    {
      if ( v31 == 4 )
      {
        v6 = v32;
        v7 = 0;
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
    if ( v7 < 0 )
      goto LABEL_58;
    *(_DWORD *)&ValueName.Length = 0;
    v8 = L"IfType";
    ValueName.Buffer = 0LL;
    v9 = 0;
    v10 = 0x7FFFLL;
    while ( *v8 )
    {
      ++v8;
      if ( !--v10 )
        goto LABEL_58;
    }
    ValueName.Buffer = (wchar_t *)L"IfType";
    ValueName.Length = 2 * (0x7FFF - v10);
    ValueName.MaximumLength = ValueName.Length + 2;
    if ( ZwQueryValueKey(v23, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &v27) < 0 )
      goto LABEL_58;
    if ( v30 == 4 )
    {
      if ( v31 == 4 )
      {
        v9 = v32;
        v11 = 0;
      }
      else
      {
        v11 = -1073741789;
      }
    }
    else
    {
      v11 = -1073741788;
    }
    if ( v11 < 0 )
      goto LABEL_58;
    *((_WORD *)a1 + 11) = v9;
    v12 = *((_QWORD *)a1 + 2) & 0xFFFF000000000000uLL;
    *(_DWORD *)&ValueName.Length = 0;
    ValueName.Buffer = 0LL;
    *((_QWORD *)a1 + 2) = v12 | ((unsigned __int64)(v6 & 0xFFFFFF) << 24);
    v13 = 0x7FFFLL;
    v14 = L"PhysicalMediaType";
    while ( *v14 )
    {
      ++v14;
      if ( !--v13 )
        goto LABEL_58;
    }
    ValueName.Buffer = L"PhysicalMediaType";
    ValueName.Length = 2 * (0x7FFF - v13);
    ValueName.MaximumLength = ValueName.Length + 2;
    if ( ZwQueryValueKey(v23, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &v27) < 0 )
      goto LABEL_58;
    if ( v30 == 4 )
    {
      if ( v31 == 4 )
      {
        a1[7] = v32;
        v15 = 0;
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
    if ( v15 < 0 )
      goto LABEL_58;
    *((_BYTE *)a1 + 24) = 1;
    v16 = L"Characteristics";
    *(_DWORD *)&ValueName.Length = 0;
    ValueName.Buffer = 0LL;
    v17 = 0x7FFFLL;
    while ( *v16 )
    {
      ++v16;
      if ( !--v17 )
        goto LABEL_58;
    }
    ValueName.Buffer = L"Characteristics";
    ValueName.Length = 2 * (0x7FFF - v17);
    ValueName.MaximumLength = ValueName.Length + 2;
    if ( ZwQueryValueKey(v23, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &v27) < 0 )
      goto LABEL_58;
    if ( v30 == 4 )
    {
      if ( v31 == 4 )
      {
        a1[15] = v32;
        v18 = 0;
      }
      else
      {
        v18 = -1073741789;
      }
    }
    else
    {
      v18 = -1073741788;
    }
    if ( v18 < 0 )
      goto LABEL_58;
    LODWORD(ResultLength) = *((unsigned __int16 *)a1 + 3);
    Length[0] = *((unsigned __int16 *)a1 + 2);
    v3 = RtlStringCchPrintfW(
           Dest,
           48LL,
           L"\\Device\\{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
           *a1,
           *(_QWORD *)Length,
           ResultLength,
           *((unsigned __int8 *)a1 + 8),
           *((unsigned __int8 *)a1 + 9),
           *((unsigned __int8 *)a1 + 10),
           *((unsigned __int8 *)a1 + 11),
           *((unsigned __int8 *)a1 + 12),
           *((unsigned __int8 *)a1 + 13),
           *((unsigned __int8 *)a1 + 14),
           *((unsigned __int8 *)a1 + 15));
    if ( v3 < 0 )
      goto LABEL_47;
    v19 = Rtl::KString::Initialize(Dest);
    v20 = (struct Rtl::KString *)*((_QWORD *)a1 + 5);
    v21 = v19;
    if ( v19 != v20 )
    {
      if ( v20 )
        ExFreePoolWithTag(v20, 0x7274534Bu);
      *((_QWORD *)a1 + 5) = v21;
    }
    if ( !*((_QWORD *)a1 + 5) )
    {
      v3 = -1073741670;
      goto LABEL_47;
    }
  }
  if ( v23 )
    ZwClose(v23);
  return v1;
}
