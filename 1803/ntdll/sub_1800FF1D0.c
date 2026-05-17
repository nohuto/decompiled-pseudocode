/*
 * XREFs of sub_1800FF1D0 @ 0x1800FF1D0
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180077500 (RtlQueryProcessDebugInformation.c)
 *     sub_1800ECAC0 @ 0x1800ECAC0 (sub_1800ECAC0.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwQueryInformationProcess @ 0x18009ADE0 (ZwQueryInformationProcess.c)
 *     ZwPowerInformation @ 0x18009B690 (ZwPowerInformation.c)
 */

__int64 __fastcall sub_1800FF1D0(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  int v4; // ebx
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-9h] BYREF
  __int64 v6; // [rsp+78h] [rbp+17h]
  char v7; // [rsp+B0h] [rbp+4Fh]
  __int64 v8; // [rsp+D8h] [rbp+77h]

  v6 = 64LL;
  result = ZwQueryInformationProcess();
  if ( (int)result >= 0 )
  {
    if ( (v7 & 0x40) != 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"QueryDebugInformation request");
      v4 = ZwPowerInformation();
      if ( v4 >= 0 )
      {
        v4 = ZwPowerInformation();
        if ( v4 >= 0 )
          *a2 = v8;
        else
          ZwClose();
      }
      return (unsigned int)v4;
    }
    else
    {
      *a2 = 0LL;
      return 0LL;
    }
  }
  return result;
}
