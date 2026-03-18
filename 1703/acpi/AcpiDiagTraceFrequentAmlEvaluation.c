/*
 * XREFs of AcpiDiagTraceFrequentAmlEvaluation @ 0x1C0041EE4
 * Callers:
 *     AsyncEvalObject @ 0x1C0003100 (AsyncEvalObject.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 *     AcpiDiagConvertMethodNameToUnicode @ 0x1C0041004 (AcpiDiagConvertMethodNameToUnicode.c)
 *     AcpiDiagTraceIsFrequentAmlMethodTracingEnabled @ 0x1C00420AC (AcpiDiagTraceIsFrequentAmlMethodTracingEnabled.c)
 */

void __fastcall AcpiDiagTraceFrequentAmlEvaluation(__int64 a1, const char *a2)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  __int16 v7; // [rsp+30h] [rbp-19h] BYREF
  __int64 v8; // [rsp+38h] [rbp-11h] BYREF
  __int64 v9; // [rsp+40h] [rbp-9h]
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp+Fh] BYREF
  wchar_t *Buffer; // [rsp+68h] [rbp+1Fh]
  int Length; // [rsp+70h] [rbp+27h]
  int v14; // [rsp+74h] [rbp+2Bh]
  __int64 *v15; // [rsp+78h] [rbp+2Fh]
  int v16; // [rsp+80h] [rbp+37h]
  int v17; // [rsp+84h] [rbp+3Bh]

  if ( (unsigned __int8)AcpiDiagTraceIsFrequentAmlMethodTracingEnabled() )
  {
    v4 = MEMORY[0xFFFFF78000000008] / (unsigned __int64)KeQueryTimeIncrement();
    v8 = *(_QWORD *)(a1 + 144);
    v9 = *(_QWORD *)(a1 + 152);
    v5 = v4 / 0x11E1A300;
    if ( v9 == v4 / 0x11E1A300 )
    {
      v6 = ++v8;
      *(_QWORD *)(a1 + 144) = v8;
      if ( v6 >= 0x3C )
      {
        RtlInitUnicodeString(&DestinationString, 0LL);
        if ( (int)AcpiDiagConvertMethodNameToUnicode(a2, (__int64)&DestinationString) >= 0 )
        {
          UserData.Reserved = 0;
          v14 = 0;
          v17 = 0;
          v7 = DestinationString.Length >> 1;
          UserData.Ptr = (unsigned __int64)&v7;
          Buffer = DestinationString.Buffer;
          Length = DestinationString.Length;
          v15 = &v8;
          UserData.Size = 2;
          v16 = 8;
          EtwWrite(AcpiDiagHandle, &ACPI_ETW_EVENT_FREQUENT_AML_METHOD, 0LL, 3u, &UserData);
        }
        if ( DestinationString.Buffer )
          ExFreePoolWithTag(DestinationString.Buffer, 0);
      }
    }
    else
    {
      *(_DWORD *)(a1 + 148) = 0;
      *(_DWORD *)(a1 + 156) = HIDWORD(v5);
      *(_DWORD *)(a1 + 144) = 1;
      *(_DWORD *)(a1 + 152) = v5;
    }
  }
}
