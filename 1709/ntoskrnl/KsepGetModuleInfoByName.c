/*
 * XREFs of KsepGetModuleInfoByName @ 0x1406DB66C
 * Callers:
 *     KsepResolveShimHooks @ 0x1405C5828 (KsepResolveShimHooks.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x1400AE570 (RtlInitAnsiString.c)
 *     RtlFreeAnsiString @ 0x1404DBD90 (RtlFreeAnsiString.c)
 *     RtlUnicodeStringToAnsiString @ 0x1404DF110 (RtlUnicodeStringToAnsiString.c)
 *     RtlCompareString @ 0x14056D060 (RtlCompareString.c)
 */

__int64 __fastcall KsepGetModuleInfoByName(PCWSTR SourceString, _DWORD *a2, _QWORD *a3)
{
  NTSTATUS v5; // ebx
  int v6; // ebx
  __int64 v7; // rbp
  _STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING SourceStringa; // [rsp+30h] [rbp-18h] BYREF

  if ( !SourceString || !a3 || !a2 )
    return 3221225485LL;
  RtlInitUnicodeString(&SourceStringa, SourceString);
  v5 = RtlUnicodeStringToAnsiString(&DestinationString, &SourceStringa, 1u);
  if ( v5 >= 0 )
  {
    v6 = 0;
    if ( *a2 )
    {
      while ( 1 )
      {
        v7 = (__int64)&a2[74 * v6 + 2];
        RtlInitAnsiString((PANSI_STRING)&SourceStringa, (PCSZ)(v7 + *(unsigned __int16 *)(v7 + 38) + 40LL));
        if ( !RtlCompareString((const STRING *)&SourceStringa, &DestinationString, 1u) )
          break;
        if ( (unsigned int)++v6 >= *a2 )
          goto LABEL_8;
      }
      v5 = 0;
      *a3 = *(_QWORD *)(v7 + 16);
    }
    else
    {
LABEL_8:
      v5 = -1073741275;
    }
  }
  if ( DestinationString.Buffer )
    RtlFreeAnsiString(&DestinationString);
  return (unsigned int)v5;
}
