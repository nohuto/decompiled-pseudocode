/*
 * XREFs of PspLocateSystemDll @ 0x14063B288
 * Callers:
 *     PsLocateSystemDlls @ 0x14063B20C (PsLocateSystemDlls.c)
 * Callees:
 *     ZwOpenFile @ 0x1401A7B20 (ZwOpenFile.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     ObCloseHandle @ 0x1404B5DD0 (ObCloseHandle.c)
 *     PspMapSystemDll @ 0x1404E9248 (PspMapSystemDll.c)
 *     ObInitializeFastReference @ 0x1404F0348 (ObInitializeFastReference.c)
 *     MmCreateSpecialImageSection @ 0x1404F0B68 (MmCreateSpecialImageSection.c)
 *     MmGetSectionInformation @ 0x1404F91C0 (MmGetSectionInformation.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall PspLocateSystemDll(__int64 a1, char a2)
{
  NTSTATUS result; // eax
  int SpecialImageSection; // eax
  NTSTATUS v6; // eax
  int SectionInformation; // eax
  PVOID v8; // rdx
  int v9; // eax
  __int64 v10; // [rsp+30h] [rbp-50h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+38h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-38h] BYREF
  HANDLE FileHandle; // [rsp+A0h] [rbp+20h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+30h] BYREF
  PVOID Object; // [rsp+B8h] [rbp+38h] BYREF

  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)(a1 + 24);
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenFile(&FileHandle, 0x100020u, &ObjectAttributes, &IoStatusBlock, 1u, 0);
  if ( result >= 0 )
  {
    ObjectAttributes.ObjectName = 0LL;
    SpecialImageSection = MmCreateSpecialImageSection(
                            (__int64 *)&Handle,
                            (int)&ObjectAttributes,
                            0LL,
                            12,
                            (__int64)FileHandle,
                            a2 | 2u);
    if ( SpecialImageSection < 0 )
      KeBugCheckEx(0x6Bu, SpecialImageSection, 3uLL, 0LL, 0LL);
    ObCloseHandle(FileHandle, 0);
    v6 = ObReferenceObjectByHandle(Handle, 0xF001Fu, MmSectionObjectType, 0, &Object, 0LL);
    if ( v6 < 0 )
      KeBugCheckEx(0x6Bu, v6, 4uLL, 0LL, 0LL);
    ObCloseHandle(Handle, 0);
    SectionInformation = MmGetSectionInformation((__int64)Object, 2);
    if ( SectionInformation < 0 )
      KeBugCheckEx(0x6Bu, SectionInformation, 8uLL, 0LL, 0LL);
    v8 = Object;
    *(_QWORD *)(a1 + 64) = v10;
    ObInitializeFastReference((ULONG_PTR *)a1, (ULONG_PTR)v8);
    *(_QWORD *)(a1 + 8) = 0LL;
    v9 = PspMapSystemDll(KeGetCurrentThread()->ApcState.Process, a1, 0, 1);
    if ( v9 < 0 )
      KeBugCheckEx(0x6Bu, v9, 5uLL, 0LL, 0LL);
    return 0;
  }
  return result;
}
