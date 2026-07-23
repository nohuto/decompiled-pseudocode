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

NTSTATUS __fastcall sub_18010072C(void *a1, _QWORD *a2)
{
  NTSTATUS result; // eax
  NTSTATUS v5; // ebx
  HANDLE v6; // [rsp+38h] [rbp-29h] BYREF
  int v7; // [rsp+40h] [rbp-21h]
  char v8; // [rsp+44h] [rbp-1Dh]
  void *v9; // [rsp+48h] [rbp-19h]
  _DWORD InputBuffer[2]; // [rsp+50h] [rbp-11h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-9h] BYREF
  __int64 ProcessInformation[7]; // [rsp+78h] [rbp+17h] BYREF
  char v13; // [rsp+B0h] [rbp+4Fh]
  HANDLE OutputBuffer; // [rsp+D8h] [rbp+77h] BYREF

  ProcessInformation[0] = 64LL;
  result = ZwQueryInformationProcess(a1, ProcessBasicInformation, ProcessInformation, 0x40u, 0LL);
  if ( result >= 0 )
  {
    if ( (v13 & 0x40) != 0 )
    {
      InputBuffer[0] = 0;
      InputBuffer[1] = 1;
      RtlInitUnicodeString(&DestinationString, L"QueryDebugInformation request");
      v5 = ZwPowerInformation(PlmPowerRequestCreate, InputBuffer, 0x28u, &OutputBuffer, 8u);
      if ( v5 >= 0 )
      {
        v6 = OutputBuffer;
        v7 = 3;
        v8 = 1;
        v9 = a1;
        v5 = ZwPowerInformation(PowerRequestAction, &v6, 0x18u, 0LL, 0);
        if ( v5 >= 0 )
          *a2 = OutputBuffer;
        else
          ZwClose(OutputBuffer);
      }
      return v5;
    }
    else
    {
      *a2 = 0LL;
      return 0;
    }
  }
  return result;
}
