/*
 * XREFs of BiUnloadHiveByName @ 0x1405EE3C0
 * Callers:
 *     BiUnloadHiveByHandle @ 0x1405EE330 (BiUnloadHiveByHandle.c)
 *     BiAddStoreFromFile @ 0x140606570 (BiAddStoreFromFile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     swprintf_s @ 0x14018D230 (swprintf_s.c)
 *     ZwUnloadKey @ 0x1401AACA0 (ZwUnloadKey.c)
 *     ZwUnloadKey2 @ 0x1401AACC0 (ZwUnloadKey2.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     BiReleasePrivilege @ 0x1406069F8 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x140606A48 (BiAcquirePrivilege.c)
 */

__int64 __fastcall BiUnloadHiveByName(__int64 a1, int a2, char a3)
{
  SIZE_T v5; // rbx
  wchar_t *PoolWithTag; // rax
  WCHAR *v7; // rdi
  int v8; // ebx
  NTSTATUS v9; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES TargetKey; // [rsp+40h] [rbp-38h] BYREF
  char v13; // [rsp+98h] [rbp+20h] BYREF

  v5 = (unsigned int)(a2 + 38);
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v5, 0x4B444342u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    swprintf_s(PoolWithTag, v5 >> 1, L"%s\\%s", L"\\Registry\\Machine", a1);
    RtlInitUnicodeString(&DestinationString, v7);
    TargetKey.RootDirectory = 0LL;
    TargetKey.ObjectName = &DestinationString;
    TargetKey.Length = 48;
    TargetKey.Attributes = 576;
    *(_OWORD *)&TargetKey.SecurityDescriptor = 0LL;
    v8 = BiAcquirePrivilege(18LL, &v13);
    if ( v8 >= 0 )
    {
      if ( a3 )
        v9 = ZwUnloadKey2(&TargetKey, 1u);
      else
        v9 = ZwUnloadKey(&TargetKey);
      v8 = v9;
      BiReleasePrivilege(&v13);
    }
    ExFreePoolWithTag(v7, 0x4B444342u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v8;
}
