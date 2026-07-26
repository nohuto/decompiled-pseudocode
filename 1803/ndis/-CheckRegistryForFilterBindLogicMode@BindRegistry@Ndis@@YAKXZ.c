/*
 * XREFs of ?CheckRegistryForFilterBindLogicMode@BindRegistry@Ndis@@YAKXZ @ 0x1C00B83C0
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00BC30C (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 *     ?UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00C27D8 (-UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$unique_ptr@UNDIS.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 */

__int64 __fastcall Ndis::BindRegistry::CheckRegistryForFilterBindLogicMode(Ndis::BindRegistry *this)
{
  unsigned int v1; // edi
  HANDLE v2; // rbx
  __int64 v3; // rcx
  const wchar_t *v4; // rax
  NTSTATUS v5; // eax
  const wchar_t *v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  int v10; // [rsp+30h] [rbp-29h] BYREF
  const wchar_t *v11; // [rsp+38h] [rbp-21h]
  _UNICODE_STRING ValueName; // [rsp+40h] [rbp-19h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-9h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp-1h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+90h] [rbp+37h] BYREF
  int v17; // [rsp+94h] [rbp+3Bh]
  int v18; // [rsp+98h] [rbp+3Fh]
  unsigned int v19; // [rsp+9Ch] [rbp+43h]

  v10 = 0;
  v1 = 0;
  v11 = 0LL;
  v2 = 0LL;
  v3 = 0x7FFFLL;
  v4 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\NDIS\\Parameters";
  while ( *v4 )
  {
    ++v4;
    if ( !--v3 )
      goto LABEL_15;
  }
  v11 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\NDIS\\Parameters";
  KeyHandle = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  LOWORD(v10) = 2 * (0x7FFF - v3);
  HIWORD(v10) = v10 + 2;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v10;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
  v2 = KeyHandle;
  if ( v5 < 0 )
    goto LABEL_15;
  *(_DWORD *)&ValueName.Length = 0;
  v6 = L"FilterBindLogicMode";
  ValueName.Buffer = 0LL;
  v7 = 0x7FFFLL;
  while ( *v6 )
  {
    ++v6;
    if ( !--v7 )
      goto LABEL_15;
  }
  ValueName.Buffer = L"FilterBindLogicMode";
  ValueName.Length = 2 * (0x7FFF - v7);
  ValueName.MaximumLength = ValueName.Length + 2;
  if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) < 0
    || (v17 != 4 ? (v8 = -1073741788) : v18 != 4 ? (v8 = -1073741789) : (v1 = v19, v8 = 0), v8 < 0) )
  {
LABEL_15:
    v1 = 0;
  }
  if ( v2 )
    ZwClose(v2);
  return v1;
}
