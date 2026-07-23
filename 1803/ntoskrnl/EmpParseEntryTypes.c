/*
 * XREFs of EmpParseEntryTypes @ 0x1408A9B4C
 * Callers:
 *     EmpParseInfDatabase @ 0x1408A97DC (EmpParseInfDatabase.c)
 * Callees:
 *     RtlInitAnsiString @ 0x14006CE80 (RtlInitAnsiString.c)
 *     EmpSearchEntryDatabase @ 0x140175E20 (EmpSearchEntryDatabase.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlGUIDFromString @ 0x140508E70 (RtlGUIDFromString.c)
 *     RtlAnsiStringToUnicodeString @ 0x140518030 (RtlAnsiStringToUnicodeString.c)
 *     EmpInfParseGetSectionLineCount @ 0x1408AAA04 (EmpInfParseGetSectionLineCount.c)
 *     CmpGetSectionLineIndex @ 0x1408AAF6C (CmpGetSectionLineIndex.c)
 */

__int64 __fastcall EmpParseEntryTypes(__int64 a1)
{
  NTSTATUS v1; // ebx
  unsigned int v3; // edi
  unsigned int SectionLineCount; // ebp
  const CHAR *SectionLineIndex; // rax
  GUID *PoolWithTag; // rax
  GUID *v7; // rsi
  GUID *v8; // rcx
  UNICODE_STRING GuidString; // [rsp+20h] [rbp-98h] BYREF
  _STRING DestinationString; // [rsp+30h] [rbp-88h] BYREF
  char v12; // [rsp+40h] [rbp-78h] BYREF

  v1 = 0;
  GuidString.Buffer = (wchar_t *)&v12;
  v3 = 0;
  GuidString.MaximumLength = 78;
  SectionLineCount = EmpInfParseGetSectionLineCount(a1, "EntryTypeGuidDef");
  if ( SectionLineCount )
  {
    while ( 1 )
    {
      SectionLineIndex = (const CHAR *)CmpGetSectionLineIndex(a1, "EntryTypeGuidDef", v3, 0LL);
      if ( !SectionLineIndex )
        return 0;
      RtlInitAnsiString(&DestinationString, SectionLineIndex);
      if ( RtlAnsiStringToUnicodeString(&GuidString, &DestinationString, 0) < 0 )
        break;
      PoolWithTag = (GUID *)ExAllocatePoolWithTag(PagedPool, 0x50uLL, 0x74694D45u);
      v7 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741670;
      ++v3;
      v1 = RtlGUIDFromString(&GuidString, PoolWithTag);
      v8 = v7;
      if ( v1 < 0 || EmpSearchEntryDatabase(v7) )
      {
        ExFreePoolWithTag(v8, 0x74694D45u);
        goto LABEL_13;
      }
      *(_QWORD *)&v7[3].Data1 = (char *)v7 + 40;
      *(_QWORD *)v7[2].Data4 = (char *)v7 + 40;
      *(_QWORD *)v7[4].Data4 = 0LL;
      *(_QWORD *)&v7[4].Data1 = (char *)v7 + 56;
      *(_QWORD *)v7[3].Data4 = (char *)v7 + 56;
      v7[1].Data1 = 0;
      ++EmpNumberOfEntryTypes;
      *(_QWORD *)&v7[2].Data1 = (char *)v7 + 40;
      *(_QWORD *)v7[1].Data4 = EmpEntryListHead;
      EmpEntryListHead = (__int64)v7[1].Data4;
LABEL_8:
      if ( v3 >= SectionLineCount )
        return (unsigned int)v1;
    }
    ++v3;
LABEL_13:
    v1 = 0;
    goto LABEL_8;
  }
  return (unsigned int)v1;
}
