/*
 * XREFs of AcpiDiagTraceAmlEvaluation @ 0x1C00414A0
 * Callers:
 *     AsyncEvalObject @ 0x1C0003100 (AsyncEvalObject.c)
 *     RunContext @ 0x1C0003C60 (RunContext.c)
 *     FreeContext @ 0x1C005EDD8 (FreeContext.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 *     AcpiDiagConvertMethodNameToUnicode @ 0x1C0041004 (AcpiDiagConvertMethodNameToUnicode.c)
 *     AcpiDiagTraceIsAmlTracingEnabled @ 0x1C0042088 (AcpiDiagTraceIsAmlTracingEnabled.c)
 */

void __fastcall AcpiDiagTraceAmlEvaluation(const char *a1, unsigned __int8 a2)
{
  __int16 v4; // [rsp+30h] [rbp-9h] BYREF
  __int16 v5; // [rsp+34h] [rbp-5h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp+Fh] BYREF
  wchar_t *Buffer; // [rsp+58h] [rbp+1Fh]
  int Length; // [rsp+60h] [rbp+27h]
  int v10; // [rsp+64h] [rbp+2Bh]
  __int16 *v11; // [rsp+68h] [rbp+2Fh]
  int v12; // [rsp+70h] [rbp+37h]
  int v13; // [rsp+74h] [rbp+3Bh]

  if ( (unsigned __int8)AcpiDiagTraceIsAmlTracingEnabled() )
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
    if ( (int)AcpiDiagConvertMethodNameToUnicode(a1, (__int64)&DestinationString) >= 0 )
    {
      UserData.Reserved = 0;
      v10 = 0;
      v13 = 0;
      v4 = DestinationString.Length >> 1;
      UserData.Size = 2;
      UserData.Ptr = (unsigned __int64)&v4;
      Buffer = DestinationString.Buffer;
      Length = DestinationString.Length;
      v5 = a2;
      v11 = &v5;
      v12 = 2;
      EtwWrite(AcpiDiagHandle, &ACPI_ETW_EVENT_AML_METHOD_TRACE, 0LL, 3u, &UserData);
    }
    if ( DestinationString.Buffer )
      ExFreePoolWithTag(DestinationString.Buffer, 0);
  }
}
