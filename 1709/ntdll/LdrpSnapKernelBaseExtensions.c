/*
 * XREFs of LdrpSnapKernelBaseExtensions @ 0x18002DDC8
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D404C (LdrpInitializeProcess.c)
 * Callees:
 *     RtlInitAnsiString @ 0x180022B80 (RtlInitAnsiString.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x180026720 (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrpResolveDelayLoadDescriptor @ 0x18002A86C (LdrpResolveDelayLoadDescriptor.c)
 *     RtlAnsiStringToUnicodeString @ 0x180030EF0 (RtlAnsiStringToUnicodeString.c)
 *     NtdllpAllocateStringRoutine @ 0x180031338 (NtdllpAllocateStringRoutine.c)
 *     LdrpLogDllState @ 0x180031CA8 (LdrpLogDllState.c)
 *     ApiSetResolveToHost @ 0x180031CFC (ApiSetResolveToHost.c)
 *     RtlCompareUnicodeStrings @ 0x180049F70 (RtlCompareUnicodeStrings.c)
 *     RtlFreeAnsiString @ 0x18004F9F0 (RtlFreeAnsiString.c)
 *     LdrGetDllHandleByName @ 0x18007D190 (LdrGetDllHandleByName.c)
 *     _strnicmp @ 0x180092110 (_strnicmp.c)
 *     RtlxOemStringToUnicodeSize @ 0x1800E90E0 (RtlxOemStringToUnicodeSize.c)
 */

__int64 LdrpSnapKernelBaseExtensions()
{
  NTSTATUS v0; // eax
  __int64 v1; // rcx
  wchar_t *Buffer; // rbx
  unsigned int v3; // edi
  unsigned int v4; // r15d
  unsigned int v5; // r14d
  __int64 v6; // r13
  __int64 v7; // r12
  const CHAR *v8; // rsi
  unsigned int v9; // edi
  int v10; // eax
  unsigned __int16 v11; // si
  char v12; // bl
  __int64 v13; // r8
  int Descriptor; // eax
  void *ApiSetMap; // [rsp+30h] [rbp-48h]
  _UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-40h] BYREF
  _STRING DestinationString; // [rsp+48h] [rbp-30h] BYREF
  unsigned __int16 v19; // [rsp+58h] [rbp-20h] BYREF
  PCWCH String2; // [rsp+60h] [rbp-18h]
  char v21; // [rsp+C0h] [rbp+48h] BYREF
  unsigned int v22; // [rsp+C8h] [rbp+50h] BYREF
  PVOID DllHandle; // [rsp+D0h] [rbp+58h] BYREF
  __int64 v24; // [rsp+D8h] [rbp+60h] BYREF

  DllHandle = 0LL;
  LdrGetDllHandleByName((PUNICODE_STRING)&LdrpKernelbaseDllName, 0LL, &DllHandle);
  v0 = RtlpImageDirectoryEntryToDataEx((unsigned __int64)DllHandle, 1, 0xDu, &v22, &v24);
  v1 = v24;
  if ( v0 < 0 )
    v1 = 0LL;
  v24 = v1;
  if ( !v1 )
    return 0LL;
  Buffer = 0LL;
  v3 = 0;
  v4 = v22 >> 5;
  v5 = 0;
  *(_DWORD *)&UnicodeString.Length = 0;
  ApiSetMap = NtCurrentPeb()->ApiSetMap;
  UnicodeString.Buffer = 0LL;
  if ( v22 >> 5 )
  {
    v6 = v24;
    do
    {
      v7 = v6 + 32LL * v5;
      if ( !*(_DWORD *)(v7 + 4) )
        break;
      v8 = (char *)DllHandle + *(unsigned int *)(v7 + 4);
      if ( !strnicmp(v8, "EXT-", 4uLL) )
      {
        RtlInitAnsiString(&DestinationString, v8);
        if ( NlsMbCodePageTag )
          v9 = RtlxOemStringToUnicodeSize(&DestinationString);
        else
          v9 = 2 * DestinationString.Length + 2;
        if ( v9 > UnicodeString.MaximumLength )
        {
          if ( v9 >= 0xFFFE )
          {
            v3 = -1073741675;
            break;
          }
          if ( Buffer )
            RtlFreeAnsiString(&UnicodeString);
          UnicodeString.Buffer = (wchar_t *)NtdllpAllocateStringRoutine(v9);
          Buffer = UnicodeString.Buffer;
          if ( !UnicodeString.Buffer )
          {
            v3 = -1073741670;
            break;
          }
          UnicodeString.MaximumLength = v9;
        }
        else
        {
          UnicodeString.Length = 0;
        }
        RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 0);
        LdrpLogDllState(0LL, &UnicodeString, 5328LL);
        v10 = ApiSetResolveToHost((_DWORD)ApiSetMap, (unsigned int)&UnicodeString, 0, (unsigned int)&v21, (__int64)&v19);
        v11 = v19;
        v3 = v10;
        v12 = v21;
        if ( v10 >= 0 && v21 )
        {
          if ( v19 )
            v13 = 5329LL;
          else
            v13 = 5330LL;
        }
        else
        {
          v13 = 5331LL;
        }
        LdrpLogDllState(0LL, &UnicodeString, v13);
        if ( v12
          && !RtlCompareUnicodeStrings(LdrpKernel32DllName.Buffer, 0xCuLL, String2, (unsigned __int64)v11 >> 1, 1u) )
        {
          Descriptor = LdrpResolveDelayLoadDescriptor((char *)DllHandle, (PCIMAGE_DELAYLOAD_DESCRIPTOR)(v6 + 32LL * v5));
          Buffer = UnicodeString.Buffer;
          v3 = Descriptor;
          if ( Descriptor < 0 )
            break;
          v3 = 0;
        }
        else
        {
          Buffer = UnicodeString.Buffer;
        }
      }
      ++v5;
    }
    while ( v5 < v4 );
    if ( Buffer )
      RtlFreeAnsiString(&UnicodeString);
  }
  return v3;
}
