/*
 * XREFs of AslRegistryGetKey @ 0x1405D7118
 * Callers:
 *     SdbpQueryAppCompatFlagsByExeID @ 0x1405D70A4 (SdbpQueryAppCompatFlagsByExeID.c)
 * Callees:
 *     ZwOpenKey @ 0x14017E180 (ZwOpenKey.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     AslRegistryBuildMachinePath @ 0x1405D6EE0 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x1405D6F60 (AslRegistryBuildUserPath.c)
 *     AslLogCallPrintf @ 0x14072E8A4 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslRegistryGetKey(_QWORD *a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // ebx
  NTSTATUS v6; // eax
  const char *v8; // r9
  int v9; // r8d
  HANDLE v10; // rax
  UNICODE_STRING Destination; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp+18h] BYREF

  *a1 = 0LL;
  KeyHandle = 0LL;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  if ( !a4 )
  {
    v5 = AslRegistryBuildUserPath(&Destination);
    if ( v5 >= 0 )
      goto LABEL_3;
    v8 = "AslRegistryBuildUserPath failed for %ws [%x]";
    v9 = 1409;
LABEL_11:
    AslLogCallPrintf(1, (unsigned int)"AslRegistryGetKey", v9, (_DWORD)v8);
    goto LABEL_5;
  }
  v5 = AslRegistryBuildMachinePath(&Destination);
  if ( v5 < 0 )
  {
    v8 = "AslRegistryBuildMachinePath failed for %ws [%x]";
    v9 = 1402;
    goto LABEL_11;
  }
LABEL_3:
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &Destination;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&KeyHandle, 0x80000100, &ObjectAttributes);
  v5 = v6;
  if ( v6 < 0 )
  {
    if ( v6 == -1073741772 )
      goto LABEL_5;
    v8 = "NtOpenKey failed for %ws [%x]";
    v9 = 1445;
    goto LABEL_11;
  }
  v10 = KeyHandle;
  v5 = 0;
  KeyHandle = 0LL;
  *a1 = v10;
LABEL_5:
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0x74705041u);
  return (unsigned int)v5;
}
