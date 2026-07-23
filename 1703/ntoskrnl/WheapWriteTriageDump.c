/*
 * XREFs of WheapWriteTriageDump @ 0x140724084
 * Callers:
 *     WheapCreateTriageDumpFromPreviousSession @ 0x14041B9C0 (WheapCreateTriageDumpFromPreviousSession.c)
 *     WheaCrashDumpInitializationComplete @ 0x1405D6060 (WheaCrashDumpInitializationComplete.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     swprintf_s @ 0x14016EB70 (swprintf_s.c)
 *     ZwWriteFile @ 0x14017E040 (ZwWriteFile.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenKey @ 0x14017E180 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14017E2E0 (ZwCreateKey.c)
 *     ZwCreateFile @ 0x14017E9E0 (ZwCreateFile.c)
 *     ZwSetValueKey @ 0x14017EB40 (ZwSetValueKey.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlGetNtSystemRoot @ 0x1404B12B0 (RtlGetNtSystemRoot.c)
 */

__int64 __fastcall WheapWriteTriageDump(__int64 a1, int a2)
{
  ULONG v2; // esi
  PVOID v3; // r14
  NTSTATUS v4; // ebx
  wchar_t *PoolWithTag; // rax
  WCHAR *v6; // rdi
  int v7; // r15d
  PWSTR NtSystemRoot; // rax
  __int64 v9; // rax
  PLARGE_INTEGER AllocationSize; // [rsp+20h] [rbp-69h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-29h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-9h] BYREF
  HANDLE KeyHandle; // [rsp+F0h] [rbp+67h] BYREF
  int Data; // [rsp+F8h] [rbp+6Fh] BYREF
  HANDLE FileHandle; // [rsp+100h] [rbp+77h] BYREF

  Data = a2;
  v2 = WheapTriageDumpLength;
  v3 = WheapTriageDump;
  FileHandle = 0LL;
  KeyHandle = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl\\MachineCrash");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
  if ( v4 < 0 )
  {
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x61656857u);
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      v7 = MEMORY[0xFFFFF78000000014];
      swprintf_s(PoolWithTag, 0x100uLL, L"\\SystemRoot\\DUMP%04x.DMP", MEMORY[0xFFFFF78000000014]);
      RtlInitUnicodeString(&DestinationString, v6);
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = &DestinationString;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v4 = ZwCreateFile(&FileHandle, 0x120116u, &ObjectAttributes, &IoStatusBlock, 0LL, 2u, 0, 0, 0x22u, 0LL, 0);
      if ( v4 >= 0 )
      {
        v4 = ZwWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, v3, v2, 0LL, 0LL);
        if ( v4 >= 0 )
        {
          RtlInitUnicodeString(
            &DestinationString,
            L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl\\MachineCrash");
          ObjectAttributes.ObjectName = &DestinationString;
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v4 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 1u, 0LL);
          if ( v4 >= 0 )
          {
            RtlInitUnicodeString(&DestinationString, L"DumpFile");
            NtSystemRoot = RtlGetNtSystemRoot();
            LODWORD(AllocationSize) = v7;
            swprintf_s(v6, 0x100uLL, L"%s\\DUMP%04x.DMP", NtSystemRoot, AllocationSize);
            v9 = -1LL;
            do
              ++v9;
            while ( v6[v9] );
            v4 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 1u, v6, 2 * v9 + 2);
            if ( v4 >= 0 )
            {
              RtlInitUnicodeString(&DestinationString, L"TempDestination");
              Data = 1;
              v4 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
            }
          }
        }
      }
      ExFreePoolWithTag(v6, 0x61656857u);
    }
    else
    {
      v4 = -1073741670;
    }
  }
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v4;
}
