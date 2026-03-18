/*
 * XREFs of EtwpAddMicroarchitecturalPmcToPmcGroup @ 0x1407AA830
 * Callers:
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x1407AAA00 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140061AF0 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     ZwCreateKey @ 0x1401A7860 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1401A80C0 (ZwSetValueKey.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpAddMicroarchitecturalPmcToPmcGroup(__int64 a1, unsigned __int8 *a2)
{
  __int64 v2; // rax
  unsigned __int8 *v3; // r14
  __int64 v4; // r8
  SIZE_T v8; // rbx
  wchar_t *PoolWithTag; // r15
  NTSTATUS v10; // ebx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  int Data; // [rsp+B8h] [rbp+38h] BYREF
  HANDLE KeyHandle; // [rsp+C0h] [rbp+40h] BYREF

  v2 = -1LL;
  v3 = a2 + 178;
  v4 = -1LL;
  do
    ++v4;
  while ( *(_WORD *)&v3[2 * v4] );
  if ( (unsigned int)v4 >= 0xFF )
    return 3221225476LL;
  do
    ++v2;
  while ( *(_WORD *)(a1 + 2 * v2) );
  v8 = (unsigned int)(2 * v2 + 512);
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v8, 0x50777445u);
  RtlStringCbPrintfW(PoolWithTag, (unsigned int)v8, L"%ws\\%ws", a1, v3);
  RtlInitUnicodeString(&DestinationString, PoolWithTag);
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v10 = ZwCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( v10 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Interval");
    v10 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, a2 + 4, 4u);
    if ( v10 >= 0 )
    {
      Data = *a2;
      RtlInitUnicodeString(&DestinationString, L"Event");
      v10 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
      if ( v10 >= 0 )
      {
        Data = a2[1];
        RtlInitUnicodeString(&DestinationString, L"Unit");
        v10 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
      }
    }
  }
  ExFreePoolWithTag(PoolWithTag, 0x50777445u);
  return (unsigned int)v10;
}
