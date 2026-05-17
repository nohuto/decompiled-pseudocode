/*
 * XREFs of sub_18010072C @ 0x18010072C
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180067770 (RtlQueryProcessDebugInformation.c)
 *     sub_1800F096C @ 0x1800F096C (sub_1800F096C.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwQueryInformationProcess @ 0x1800A5620 (ZwQueryInformationProcess.c)
 *     ZwPowerInformation @ 0x1800A5ED0 (ZwPowerInformation.c)
 */

__int64 __fastcall sub_18010072C(__int64 a1, _QWORD *a2)
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
