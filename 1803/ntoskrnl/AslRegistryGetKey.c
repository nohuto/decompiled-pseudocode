/*
 * XREFs of AslRegistryGetKey @ 0x14061FB84
 * Callers:
 *     SdbpQueryAppCompatFlagsByExeID @ 0x14061FB08 (SdbpQueryAppCompatFlagsByExeID.c)
 *     AslpProcessMatchRegNode @ 0x1407DBB08 (AslpProcessMatchRegNode.c)
 * Callees:
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     AslRegistryBuildMachinePath @ 0x14061FC58 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x14061FD0C (AslRegistryBuildUserPath.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslRegistryGetKey(_QWORD *a1, const WCHAR *a2, ACCESS_MASK a3, int a4)
{
  NTSTATUS v7; // eax
  unsigned int v8; // ebx
  const char *v10; // r9
  int v11; // r8d
  HANDLE v12; // rax
  NTSTATUS v13; // [rsp+28h] [rbp-48h]
  UNICODE_STRING Destination; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp+20h] BYREF

  *a1 = 0LL;
  KeyHandle = 0LL;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  if ( !a4 )
  {
    v7 = AslRegistryBuildUserPath(&Destination, a2);
    v8 = v7;
    if ( v7 >= 0 )
      goto LABEL_3;
    v10 = "AslRegistryBuildUserPath failed for %ws [%x]";
    v11 = 1473;
LABEL_11:
    v13 = v7;
    AslLogCallPrintf(1, (unsigned int)"AslRegistryGetKey", v11, (_DWORD)v10, a2, v13, *(_QWORD *)&Destination.Length);
    goto LABEL_5;
  }
  v7 = AslRegistryBuildMachinePath(&Destination, a2);
  v8 = v7;
  if ( v7 < 0 )
  {
    v10 = "AslRegistryBuildMachinePath failed for %ws [%x]";
    v11 = 1466;
    goto LABEL_11;
  }
LABEL_3:
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &Destination;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwOpenKey(&KeyHandle, a3, &ObjectAttributes);
  v8 = v7;
  if ( v7 < 0 )
  {
    if ( v7 == -1073741772 )
      goto LABEL_5;
    v10 = "NtOpenKey failed for %ws [%x]";
    v11 = 1509;
    goto LABEL_11;
  }
  v12 = KeyHandle;
  v8 = 0;
  KeyHandle = 0LL;
  *a1 = v12;
LABEL_5:
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0x74705041u);
  return v8;
}
