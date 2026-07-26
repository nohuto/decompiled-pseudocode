/*
 * XREFs of ?ndisBindReadProtocolDriverFromV1Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00F1230
 * Callers:
 *     ?ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00AF298 (-ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00169DC (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     ?Open@KRegKey@@QEAAJKPEBGPEAX@Z @ 0x1C00B1388 (-Open@KRegKey@@QEAAJKPEBGPEAX@Z.c)
 */

char __fastcall ndisBindReadProtocolDriverFromV1Registry(struct NDIS_BIND_PROTOCOL_DRIVER *a1)
{
  Rtl::KString *Myptr; // r9
  int v3; // edi
  __int64 v4; // rax
  const wchar_t *v5; // rdx
  int v6; // edx
  __int16 v7; // cx
  HANDLE KeyHandle; // [rsp+30h] [rbp-2B8h] BYREF
  _UNICODE_STRING ValueName; // [rsp+38h] [rbp-2B0h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-2A0h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+50h] [rbp-298h] BYREF
  int v13; // [rsp+54h] [rbp-294h]
  int v14; // [rsp+58h] [rbp-290h]
  int v15; // [rsp+5Ch] [rbp-28Ch]
  wchar_t Dest[304]; // [rsp+70h] [rbp-278h] BYREF

  Myptr = a1->Name._Myptr;
  a1->ProtocolBindFlags = 0;
  v3 = 1;
  if ( (int)RtlStringCchPrintfW(Dest, 300LL, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\%wZ", Myptr) < 0 )
    goto LABEL_19;
  KeyHandle = 0LL;
  if ( (int)KRegKey::Open((KRegKey *)&KeyHandle, 1u, Dest, 0LL) >= 0 )
  {
    *(_DWORD *)&ValueName.Length = 0;
    ValueName.Buffer = 0LL;
    v4 = 0x7FFFLL;
    v5 = L"NdisBootStart";
    do
    {
      if ( !*v5 )
        break;
      ++v5;
      --v4;
    }
    while ( v4 );
    v6 = -1073741811;
    if ( v4 )
    {
      v6 = 0;
      v7 = 0x7FFF - v4;
    }
    else
    {
      v7 = 0;
    }
    if ( v4 )
    {
      ValueName.Buffer = L"NdisBootStart";
      ValueName.Length = 2 * v7;
      ValueName.MaximumLength = 2 * v7 + 2;
    }
    if ( v6 >= 0
      && ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0
      && v13 == 4
      && v14 == 4 )
    {
      v3 = v15;
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v3 )
LABEL_19:
    a1->ProtocolBindFlags |= 1u;
  return 1;
}
