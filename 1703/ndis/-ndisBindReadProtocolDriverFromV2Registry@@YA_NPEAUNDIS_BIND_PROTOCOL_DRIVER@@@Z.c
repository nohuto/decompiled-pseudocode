/*
 * XREFs of ?ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00AFE40
 * Callers:
 *     ?ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00AF298 (-ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00169DC (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     KRegKey::QueryValueBlob__lambda_1e1d3c9721006777a03f858ff1740b3c___ @ 0x1C00B0898 (KRegKey--QueryValueBlob__lambda_1e1d3c9721006777a03f858ff1740b3c___.c)
 *     ?QueryValueBoolean@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAEW4BooleanDisposition@1@@Z @ 0x1C00B0F6C (-QueryValueBoolean@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAEW4BooleanDisposition@1@@Z.c)
 *     ?Open@KRegKey@@QEAAJKPEBGPEAX@Z @ 0x1C00B1388 (-Open@KRegKey@@QEAAJKPEBGPEAX@Z.c)
 */

__int64 __fastcall ndisBindReadProtocolDriverFromV2Registry(struct NDIS_BIND_PROTOCOL_DRIVER *a1)
{
  __int64 v2; // rdx
  HANDLE v3; // rcx
  const wchar_t *v4; // rax
  unsigned __int8 v5; // bl
  NTSTATUS v6; // eax
  const wchar_t *v7; // rax
  __int64 v8; // rcx
  unsigned __int8 v10[8]; // [rsp+78h] [rbp-90h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-80h] BYREF
  const wchar_t *v13; // [rsp+90h] [rbp-78h]
  struct _UNICODE_STRING v14; // [rsp+98h] [rbp-70h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v16; // [rsp+D8h] [rbp-30h] BYREF
  unsigned __int16 v17; // [rsp+DCh] [rbp-2Ch]
  unsigned __int16 v18; // [rsp+DEh] [rbp-2Ah]
  unsigned __int8 v19; // [rsp+E0h] [rbp-28h]
  unsigned __int8 v20; // [rsp+E1h] [rbp-27h]
  unsigned __int8 v21; // [rsp+E2h] [rbp-26h]
  unsigned __int8 v22; // [rsp+E3h] [rbp-25h]
  unsigned __int8 v23; // [rsp+E4h] [rbp-24h]
  unsigned __int8 v24; // [rsp+E5h] [rbp-23h]
  unsigned __int8 v25; // [rsp+E6h] [rbp-22h]
  unsigned __int8 v26; // [rsp+E7h] [rbp-21h]
  wchar_t Dest[304]; // [rsp+E8h] [rbp-20h] BYREF

  a1->ProtocolBindFlags = 0;
  v2 = 0x7FFFLL;
  LODWORD(Handle) = 0;
  v3 = 0LL;
  v13 = 0LL;
  v4 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Protocols\\Lookup";
  while ( *v4 )
  {
    ++v4;
    if ( !--v2 )
      goto LABEL_4;
  }
  v13 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Protocols\\Lookup";
  KeyHandle = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  LOWORD(Handle) = 2 * (0x7FFF - v2);
  WORD1(Handle) = (_WORD)Handle + 2;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&Handle;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
  v3 = KeyHandle;
  Handle = KeyHandle;
  if ( v6 < 0 )
  {
LABEL_4:
    v5 = 0;
    goto LABEL_20;
  }
  if ( (int)KRegKey::QueryValueBlob__lambda_1e1d3c9721006777a03f858ff1740b3c___(&Handle, a1->Name._Myptr, &v16) < 0
    || (int)RtlStringCchPrintfW(
              Dest,
              300LL,
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Protocols\\{%08x-%04x-%04x-%02x%02"
               "x-%02x%02x%02x%02x%02x%02x}\\Kernel",
              v16,
              v17,
              v18,
              v19,
              v20,
              v21,
              v22,
              v23,
              v24,
              v25,
              v26) < 0 )
  {
    v3 = Handle;
    goto LABEL_4;
  }
  KeyHandle = 0LL;
  if ( (int)KRegKey::Open((KRegKey *)&KeyHandle, 1u, Dest, 0LL) < 0 )
    goto LABEL_12;
  v10[0] = 0;
  v7 = L"NoStartAtBoot";
  *(_DWORD *)&v14.Length = 0;
  v14.Buffer = 0LL;
  v8 = 0x7FFFLL;
  while ( *v7 )
  {
    ++v7;
    if ( !--v8 )
      goto LABEL_12;
  }
  v14.Buffer = L"NoStartAtBoot";
  v14.Length = 2 * (0x7FFF - v8);
  v14.MaximumLength = v14.Length + 2;
  if ( (int)KRegKey::QueryValueBoolean((KRegKey *)&KeyHandle, &v14, v10, DefaultToFalse) < 0 )
  {
LABEL_12:
    v5 = 0;
  }
  else
  {
    if ( !v10[0] )
      a1->ProtocolBindFlags |= 1u;
    v5 = 1;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  v3 = Handle;
LABEL_20:
  if ( v3 )
    ZwClose(v3);
  return v5;
}
