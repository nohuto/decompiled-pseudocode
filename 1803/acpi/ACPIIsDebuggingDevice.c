/*
 * XREFs of ACPIIsDebuggingDevice @ 0x1C008B584
 * Callers:
 *     ACPIBuildPdo @ 0x1C000BBF0 (ACPIBuildPdo.c)
 * Callees:
 *     ACPIQueryDeviceBiosName @ 0x1C008BEA0 (ACPIQueryDeviceBiosName.c)
 */

__int64 __fastcall ACPIIsDebuggingDevice(__int64 a1)
{
  int v1; // ebx
  _QWORD *v2; // rsi
  unsigned int v3; // edi
  UNICODE_STRING String2; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&String2.Length = 0LL;
  String2.Buffer = 0LL;
  v1 = ACPIQueryDeviceBiosName(a1, &String2);
  if ( v1 >= 0 )
  {
    v1 = -1073741823;
    v2 = &unk_1C0066948;
    v3 = 0;
    while ( !*v2 || RtlCompareUnicodeString((PCUNICODE_STRING)&gDebuggingDevicesInUse + v3, &String2, 0) )
    {
      ++v3;
      v2 += 2;
      if ( v3 >= 2 )
        goto LABEL_8;
    }
    v1 = 0;
  }
LABEL_8:
  if ( String2.Buffer )
    ExFreePoolWithTag(String2.Buffer, 0x53706341u);
  return (unsigned int)v1;
}
