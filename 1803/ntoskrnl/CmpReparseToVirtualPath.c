/*
 * XREFs of CmpReparseToVirtualPath @ 0x1406F5694
 * Callers:
 *     CmpVEExecuteCreateLogic @ 0x140565A58 (CmpVEExecuteCreateLogic.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405AD720 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmKeyBodyRemapToVirtual @ 0x1406F3FF0 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406F4248 (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     CmRealKCBToVirtualPath @ 0x1405C06B0 (CmRealKCBToVirtualPath.c)
 *     CmpVirtualPathPresent @ 0x1406F5CCC (CmpVirtualPathPresent.c)
 */

char __fastcall CmpReparseToVirtualPath(__int64 a1, __int64 a2, __int64 a3, UNICODE_STRING *a4)
{
  char v7; // bl
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( (*(_DWORD *)(a1 + 176) & 0x800000) != 0 && (int)CmRealKCBToVirtualPath(a1, 0LL, a3, &DestinationString) >= 0 )
  {
    v7 = CmpVirtualPathPresent(&DestinationString);
    if ( v7 )
    {
      *a4 = DestinationString;
      RtlInitUnicodeString(&DestinationString, 0LL);
      v7 = 1;
    }
  }
  else
  {
    v7 = 0;
  }
  if ( DestinationString.Buffer )
    RtlFreeAnsiString(&DestinationString);
  return v7;
}
