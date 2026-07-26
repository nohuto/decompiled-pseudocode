/*
 * XREFs of ndisWdfUpdateAddDeviceParameters @ 0x1C00ECE14
 * Callers:
 *     ndisPnPAddDevice @ 0x1C00B6980 (ndisPnPAddDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C00419DC (WPP_SF_d.c)
 *     ?IsIfBlockAvailable@@YA_NAEBU_GUID@@@Z @ 0x1C0061E54 (-IsIfBlockAvailable@@YA_NAEBU_GUID@@@Z.c)
 *     ?GetSubkeyName@KRegKey@@QEAAJKAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C00BB2BC (-GetSubkeyName@KRegKey@@QEAAJKAEAV-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wi.c)
 */

__int64 __fastcall ndisWdfUpdateAddDeviceParameters(void **a1, struct _GUID *a2)
{
  NTSTATUS SubkeyName; // edi
  void *v5; // r8
  HANDLE v6; // rbx
  __int64 v7; // rcx
  const wchar_t *v8; // rdx
  __int16 v9; // ax
  NTSTATUS v10; // eax
  HANDLE v11; // rcx
  ULONG i; // r14d
  UNICODE_STRING *v13; // rbx
  UNICODE_STRING *v14; // rcx
  HANDLE KeyHandle; // [rsp+20h] [rbp-29h] BYREF
  PCUNICODE_STRING GuidString; // [rsp+28h] [rbp-21h] BYREF
  const wchar_t *v18; // [rsp+30h] [rbp-19h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-11h] BYREF
  GUID Guid; // [rsp+68h] [rbp+1Fh] BYREF

  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_(0x3Au, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids);
  if ( IsIfBlockAvailable(a2) )
  {
    SubkeyName = 0;
    goto LABEL_33;
  }
  v5 = *a1;
  v6 = 0LL;
  LODWORD(GuidString) = 0;
  KeyHandle = 0LL;
  v7 = 0x7FFFLL;
  v18 = 0LL;
  v8 = L"NetworkInterface";
  do
  {
    if ( !*v8 )
      break;
    ++v8;
    --v7;
  }
  while ( v7 );
  SubkeyName = -1073741811;
  if ( v7 )
  {
    SubkeyName = 0;
    v9 = 0x7FFF - v7;
  }
  else
  {
    v9 = 0;
  }
  if ( v7 )
  {
    v18 = L"NetworkInterface";
    LOWORD(GuidString) = 2 * v9;
    WORD1(GuidString) = 2 * v9 + 2;
    ObjectAttributes.RootDirectory = v5;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&GuidString;
    KeyHandle = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v10 = ZwOpenKey(&KeyHandle, 9u, &ObjectAttributes);
    v6 = KeyHandle;
    SubkeyName = v10;
  }
  if ( SubkeyName < 0 )
  {
    if ( (unsigned __int8)byte_1C0099614 >= 2u )
      WPP_SF_d(0x3Bu, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, SubkeyName);
    if ( v6 )
    {
      v11 = v6;
      goto LABEL_32;
    }
    goto LABEL_33;
  }
  for ( i = 0; ; ++i )
  {
    GuidString = 0LL;
    SubkeyName = KRegKey::GetSubkeyName(&KeyHandle, i, (void **)&GuidString);
    if ( SubkeyName < 0 )
      break;
    v13 = (UNICODE_STRING *)GuidString;
    if ( RtlGUIDFromString(GuidString, &Guid) < 0 )
    {
      if ( !v13 )
        continue;
LABEL_25:
      ExFreePoolWithTag(v13, 0x7274534Bu);
      continue;
    }
    if ( IsIfBlockAvailable(&Guid) )
    {
      SubkeyName = 0;
      *a2 = Guid;
      if ( !v13 )
        goto LABEL_31;
      v14 = v13;
      goto LABEL_30;
    }
    if ( v13 )
      goto LABEL_25;
  }
  v14 = (UNICODE_STRING *)GuidString;
  if ( !GuidString )
    goto LABEL_31;
LABEL_30:
  ExFreePoolWithTag(v14, 0x7274534Bu);
LABEL_31:
  v11 = KeyHandle;
  if ( KeyHandle )
LABEL_32:
    ZwClose(v11);
LABEL_33:
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_d(0x3Cu, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, SubkeyName);
  return (unsigned int)SubkeyName;
}
