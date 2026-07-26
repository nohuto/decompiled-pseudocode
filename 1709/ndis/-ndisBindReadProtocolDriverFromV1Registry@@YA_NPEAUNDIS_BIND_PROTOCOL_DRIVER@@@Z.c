/*
 * XREFs of ?ndisBindReadProtocolDriverFromV1Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00FA72C
 * Callers:
 *     ?ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00B0DE4 (-ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0004324 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     ?Open@KRegKey@@QEAAJKPEBGPEAX@Z @ 0x1C00B1D80 (-Open@KRegKey@@QEAAJKPEBGPEAX@Z.c)
 */

char __fastcall ndisBindReadProtocolDriverFromV1Registry(struct NDIS_BIND_PROTOCOL_DRIVER *a1)
{
  Rtl::KString *Myptr; // r9
  int v3; // edi
  __int64 v4; // rcx
  const wchar_t *v5; // rdx
  __int16 v6; // ax
  HANDLE KeyHandle; // [rsp+30h] [rbp-2B8h] BYREF
  _UNICODE_STRING ValueName; // [rsp+38h] [rbp-2B0h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-2A0h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+50h] [rbp-298h] BYREF
  int v12; // [rsp+54h] [rbp-294h]
  int v13; // [rsp+58h] [rbp-290h]
  int v14; // [rsp+5Ch] [rbp-28Ch]
  wchar_t Dest[304]; // [rsp+70h] [rbp-278h] BYREF

  Myptr = a1->Name._Myptr;
  a1->ProtocolBindFlags = 0;
  v3 = 1;
  if ( (int)RtlStringCchPrintfW(Dest, 300LL, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\%wZ", Myptr) < 0 )
    goto LABEL_17;
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
    v6 = v4 ? 0x7FFF - v4 : 0;
    if ( v4 )
    {
      ValueName.Buffer = L"NdisBootStart";
      ValueName.Length = 2 * v6;
      ValueName.MaximumLength = 2 * v6 + 2;
      if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0
        && v12 == 4
        && v13 == 4 )
      {
        v3 = v14;
      }
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v3 )
LABEL_17:
    a1->ProtocolBindFlags |= 1u;
  return 1;
}
