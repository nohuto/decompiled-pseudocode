/*
 * XREFs of ACPIRegDumpAcpiTables @ 0x1C00AE068
 * Callers:
 *     ACPILoadProcessRSDT @ 0x1C00AEB50 (ACPILoadProcessRSDT.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000EA0C (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C002BC10 (__security_check_cookie.c)
 *     ACPIRegDumpAcpiTable @ 0x1C00AE1C8 (ACPIRegDumpAcpiTable.c)
 */

__int64 ACPIRegDumpAcpiTables()
{
  ULONG *v0; // rbp
  ULONG *v1; // rsi
  ULONG *v2; // rdi
  ULONG *v3; // rbx
  __int64 result; // rax
  __int64 v5; // rdi
  unsigned __int8 v6; // bl
  _DWORD *v7; // rcx
  char v8; // al
  char SourceString[8]; // [rsp+30h] [rbp-18h] BYREF

  v0 = (ULONG *)*((_QWORD *)AcpiInformation + 3);
  v1 = (ULONG *)*((_QWORD *)AcpiInformation + 2);
  v2 = (ULONG *)*((_QWORD *)AcpiInformation + 1);
  v3 = *(ULONG **)AcpiInformation;
  strcpy(SourceString, "SSD0");
  result = WPP_RECORDER_SF_(
             WPP_GLOBAL_Control->DeviceExtension,
             4,
             11,
             36,
             (__int64)&WPP_0a4d4e1c1f983abcba9684f06d7ceec4_Traceguids);
  if ( v0 )
    result = ACPIRegDumpAcpiTable("DSDT", v0, v0[1]);
  if ( v1 )
    result = ACPIRegDumpAcpiTable("FACS", v1, v1[1]);
  if ( v2 )
    result = ACPIRegDumpAcpiTable("FADT", v2, v2[1]);
  if ( v3 )
    result = ACPIRegDumpAcpiTable("RSDT", v3, v3[1]);
  v5 = AcpiDynamicDataBlockTableList;
  v6 = 0;
  while ( (__int64 *)v5 != &AcpiDynamicDataBlockTableList )
  {
    v7 = *(_DWORD **)(v5 + 24);
    if ( *v7 == 1413763923 )
    {
      if ( v6 )
      {
        if ( v6 >= 0xAu )
        {
          if ( v6 >= 0x23u )
            return result;
          v8 = v6 + 55;
        }
        else
        {
          v8 = v6 + 48;
        }
        SourceString[3] = v8;
      }
      else
      {
        SourceString[3] = 84;
      }
      ++v6;
      result = ACPIRegDumpAcpiTable(SourceString, *(PVOID *)(v5 + 24), v7[1]);
    }
    v5 = *(_QWORD *)v5;
  }
  return result;
}
