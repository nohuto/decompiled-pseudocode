/*
 * XREFs of PipCheckDependencies @ 0x1408B6D18
 * Callers:
 *     IopInitializeSystemDrivers @ 0x1408B5994 (IopInitializeSystemDrivers.c)
 *     IopInitializeBootDrivers @ 0x1408B5D8C (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x1405D9B94 (IopGetRegistryValue.c)
 *     PipLookupGroupName @ 0x1408B6D64 (PipLookupGroupName.c)
 */

__int64 __fastcall PipCheckDependencies(void *a1)
{
  PVOID v2; // rsi
  unsigned int v3; // ebx
  int v4; // ebp
  const WCHAR *v5; // rdi
  unsigned __int16 MaximumLength; // r14
  __int64 v7; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  PVOID P; // [rsp+58h] [rbp+10h] BYREF

  if ( IopGetRegistryValue(a1, L"DependOnGroup", 0, &P) < 0 )
    return 1LL;
  v2 = P;
  v3 = 1;
  v4 = *((_DWORD *)P + 3);
  v5 = (const WCHAR *)((char *)P + *((unsigned int *)P + 2));
  while ( v4 )
  {
    RtlInitUnicodeString(&DestinationString, v5);
    MaximumLength = DestinationString.MaximumLength;
    DestinationString.Length = DestinationString.MaximumLength;
    v7 = PipLookupGroupName(&DestinationString);
    if ( v7 && !*(_DWORD *)(v7 + 28) )
    {
      v3 = 0;
      break;
    }
    v4 -= MaximumLength;
    v5 = (const WCHAR *)((char *)v5 + MaximumLength);
  }
  ExFreePoolWithTag(v2, 0);
  return v3;
}
