/*
 * XREFs of ndisFindMiniportOnGlobalList @ 0x1C010F2A8
 * Callers:
 *     NdisIMInitializeDeviceInstanceEx @ 0x1C00E5660 (NdisIMInitializeDeviceInstanceEx.c)
 * Callees:
 *     memcmp @ 0x1C0025D20 (memcmp.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     ndisDereferencePackage @ 0x1C00ADAEC (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00ADB10 (ndisReferencePackage.c)
 */

wchar_t *__fastcall ndisFindMiniportOnGlobalList(PCUNICODE_STRING SourceString)
{
  wchar_t *result; // rax
  wchar_t *v3; // rsi
  KIRQL v4; // al
  struct _NDIS_MINIPORT_BLOCK *v5; // rbx
  KIRQL v6; // bp
  unsigned __int16 Length; // di
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_q(0x63u, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, (__int64)SourceString);
  DestinationString.Length = SourceString->Length;
  DestinationString.MaximumLength = DestinationString.Length + 2;
  result = (wchar_t *)ExAllocatePoolWithTag(
                        NonPagedPoolNx,
                        (unsigned __int16)(DestinationString.Length + 2),
                        0x7473444Eu);
  DestinationString.Buffer = result;
  v3 = result;
  if ( result )
  {
    RtlUpcaseUnicodeString(&DestinationString, SourceString, 0);
    ndisReferencePackage((__int64)&ndisPkgs);
    v4 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
    v5 = ndisMiniportList;
    v6 = v4;
    if ( ndisMiniportList )
    {
      Length = DestinationString.Length;
      do
      {
        if ( Length == v5->MiniportName.Length && !memcmp(DestinationString.Buffer, v5->MiniportName.Buffer, Length) )
          break;
        v5 = v5->NextGlobalMiniport;
      }
      while ( v5 );
    }
    KeReleaseSpinLock(&ndisMiniportListLock, v6);
    ndisDereferencePackage((__int64)&ndisPkgs);
    ExFreePoolWithTag(v3, 0);
    if ( (unsigned __int8)byte_1C0099614 >= 4u )
      WPP_SF_q(0x64u, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, (__int64)v5);
    return (wchar_t *)v5;
  }
  return result;
}
