/*
 * XREFs of ?ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00B3410
 * Callers:
 *     ?ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00B0DE4 (-ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0004324 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     KRegKey::QueryValueBlob__lambda_1e1d3c9721006777a03f858ff1740b3c___ @ 0x1C00B1404 (KRegKey--QueryValueBlob__lambda_1e1d3c9721006777a03f858ff1740b3c___.c)
 *     ?QueryValueBoolean@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAEW4BooleanDisposition@1@@Z @ 0x1C00B1AD0 (-QueryValueBoolean@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAEW4BooleanDisposition@1@@Z.c)
 */

__int64 __fastcall ndisBindReadProtocolDriverFromV2Registry(struct NDIS_BIND_PROTOCOL_DRIVER *a1)
{
  HANDLE v2; // rcx
  __int64 v3; // rdx
  const wchar_t *v4; // rax
  unsigned __int8 v5; // bl
  NTSTATUS v6; // eax
  HANDLE v7; // rcx
  wchar_t *v8; // rax
  __int64 v9; // rdx
  NTSTATUS v10; // eax
  const wchar_t *v11; // rax
  __int64 v12; // rdx
  unsigned __int8 v14[8]; // [rsp+78h] [rbp-90h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp-88h] BYREF
  struct _UNICODE_STRING v16; // [rsp+88h] [rbp-80h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-70h] BYREF
  const wchar_t *v18; // [rsp+A0h] [rbp-68h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v20; // [rsp+D8h] [rbp-30h] BYREF
  wchar_t Dest[304]; // [rsp+E8h] [rbp-20h] BYREF

  a1->ProtocolBindFlags = 0;
  v2 = 0LL;
  LODWORD(Handle) = 0;
  v3 = 0x7FFFLL;
  v18 = 0LL;
  v4 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Protocols\\Lookup";
  while ( *v4 )
  {
    ++v4;
    if ( !--v3 )
      goto LABEL_4;
  }
  v18 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Protocols\\Lookup";
  KeyHandle = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  LOWORD(Handle) = 2 * (0x7FFF - v3);
  WORD1(Handle) = (_WORD)Handle + 2;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&Handle;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
  v2 = KeyHandle;
  Handle = KeyHandle;
  if ( v6 < 0 )
    goto LABEL_4;
  if ( (int)KRegKey::QueryValueBlob__lambda_1e1d3c9721006777a03f858ff1740b3c___(
              &Handle,
              &a1->Name._Myptr->_UNICODE_STRING,
              &v20) < 0
    || (int)RtlStringCchPrintfW(
              Dest,
              300LL,
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Protocols\\{%08x-%04x-%04x-%02x%02"
               "x-%02x%02x%02x%02x%02x%02x}\\Kernel",
              (unsigned int)v20,
              WORD2(v20),
              WORD3(v20),
              BYTE8(v20),
              BYTE9(v20),
              BYTE10(v20),
              BYTE11(v20),
              BYTE12(v20),
              BYTE13(v20),
              BYTE14(v20),
              HIBYTE(v20)) < 0 )
  {
    v2 = Handle;
LABEL_4:
    v5 = 0;
    goto LABEL_24;
  }
  v7 = 0LL;
  *(_DWORD *)&v16.Length = 0;
  v16.Buffer = 0LL;
  v8 = Dest;
  v9 = 0x7FFFLL;
  while ( *v8 )
  {
    ++v8;
    if ( !--v9 )
      goto LABEL_28;
  }
  KeyHandle = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  v16.Length = 2 * (0x7FFF - v9);
  v16.MaximumLength = v16.Length + 2;
  v16.Buffer = Dest;
  ObjectAttributes.ObjectName = &v16;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v10 = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
  v7 = KeyHandle;
  if ( v10 < 0 )
  {
LABEL_28:
    v5 = 0;
    goto LABEL_21;
  }
  v14[0] = 0;
  v11 = L"NoStartAtBoot";
  *(_DWORD *)&v16.Length = 0;
  v16.Buffer = 0LL;
  v12 = 0x7FFFLL;
  while ( *v11 )
  {
    ++v11;
    if ( !--v12 )
      goto LABEL_28;
  }
  v16.Buffer = L"NoStartAtBoot";
  v16.Length = 2 * (0x7FFF - v12);
  v16.MaximumLength = v16.Length + 2;
  if ( (int)KRegKey::QueryValueBoolean((KRegKey *)&KeyHandle, &v16, v14, DefaultToFalse) < 0 )
  {
    v7 = KeyHandle;
    goto LABEL_28;
  }
  if ( !v14[0] )
    a1->ProtocolBindFlags |= 1u;
  v7 = KeyHandle;
  v5 = 1;
LABEL_21:
  if ( v7 )
    ZwClose(v7);
  v2 = Handle;
LABEL_24:
  if ( v2 )
    ZwClose(v2);
  return v5;
}
