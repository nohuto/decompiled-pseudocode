/*
 * XREFs of AslRegistryGetKey @ 0x140772448
 * Callers:
 *     SdbpQueryAppCompatFlagsByExeID @ 0x140771664 (SdbpQueryAppCompatFlagsByExeID.c)
 * Callees:
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
 *     AslRegistryBuildMachinePath @ 0x1407722CC (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x140772374 (AslRegistryBuildUserPath.c)
 */

__int64 __fastcall AslRegistryGetKey(_QWORD *a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // ebx
  NTSTATUS v6; // eax
  HANDLE v7; // rax
  UNICODE_STRING Destination; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp+18h] BYREF

  *a1 = 0LL;
  KeyHandle = 0LL;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  if ( a4 )
  {
    v5 = AslRegistryBuildMachinePath(&Destination);
    if ( v5 < 0 )
    {
LABEL_3:
      AslLogCallPrintf(1LL);
      goto LABEL_9;
    }
  }
  else
  {
    v5 = AslRegistryBuildUserPath(&Destination);
    if ( v5 < 0 )
      goto LABEL_3;
  }
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &Destination;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&KeyHandle, 0x80000100, &ObjectAttributes);
  v5 = v6;
  if ( v6 >= 0 )
  {
    v7 = KeyHandle;
    v5 = 0;
    KeyHandle = 0LL;
    *a1 = v7;
  }
  else if ( v6 != -1073741772 )
  {
    goto LABEL_3;
  }
LABEL_9:
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0x74705041u);
  return (unsigned int)v5;
}
