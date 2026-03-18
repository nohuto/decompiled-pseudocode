/*
 * XREFs of EmpMapPhysicalAddress @ 0x140805124
 * Callers:
 *     EmpCacheBiosDate @ 0x140804FF0 (EmpCacheBiosDate.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x14017E440 (ZwMapViewOfSection.c)
 *     ZwOpenSection @ 0x14017E620 (ZwOpenSection.c)
 */

char *__fastcall EmpMapPhysicalAddress(
        SIZE_T a1,
        __int64 a2,
        HANDLE *a3,
        PVOID *a4,
        $5BC46E0569261879018906DEC3127961 *a5)
{
  __int64 v5; // rbx
  char *v8; // rax
  LARGE_INTEGER SectionOffset; // [rsp+50h] [rbp-11h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+7h] BYREF
  SIZE_T CommitSize; // [rsp+C0h] [rbp+5Fh] BYREF
  PVOID BaseAddress; // [rsp+D8h] [rbp+77h] BYREF

  CommitSize = a1;
  v5 = 0LL;
  *a4 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Device\\PhysicalMemory");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenSection(a3, 4u, &ObjectAttributes) >= 0 )
  {
    BaseAddress = 0LL;
    CommitSize = 8LL;
    SectionOffset.QuadPart = 1044480LL;
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)a5);
    if ( ZwMapViewOfSection(
           *a3,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           &BaseAddress,
           0LL,
           CommitSize,
           &SectionOffset,
           &CommitSize,
           ViewUnmap,
           0,
           4u) < 0 )
    {
      KiUnstackDetachProcess(a5, 0LL);
      ZwClose(*a3);
      *a3 = 0LL;
    }
    else
    {
      v8 = (char *)BaseAddress;
      *a4 = BaseAddress;
      return v8 + 4085;
    }
  }
  return (char *)v5;
}
