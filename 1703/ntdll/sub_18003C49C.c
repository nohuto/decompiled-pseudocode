/*
 * XREFs of sub_18003C49C @ 0x18003C49C
 * Callers:
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x18001F9F0 (RtlFreeUnicodeString.c)
 *     sub_180032C0C @ 0x180032C0C (sub_180032C0C.c)
 *     sub_18003A2D4 @ 0x18003A2D4 (sub_18003A2D4.c)
 *     RtlInitString @ 0x18003AB50 (RtlInitString.c)
 *     RtlCompareUnicodeStrings @ 0x18003B5B0 (RtlCompareUnicodeStrings.c)
 *     sub_18003CA5C @ 0x18003CA5C (sub_18003CA5C.c)
 *     sub_18003CAB0 @ 0x18003CAB0 (sub_18003CAB0.c)
 *     RtlAnsiStringToUnicodeString @ 0x180043750 (RtlAnsiStringToUnicodeString.c)
 *     sub_180043FE0 @ 0x180043FE0 (sub_180043FE0.c)
 *     LdrGetDllHandleByName @ 0x18007B930 (LdrGetDllHandleByName.c)
 *     RtlxOemStringToUnicodeSize @ 0x180089700 (RtlxOemStringToUnicodeSize.c)
 *     _strnicmp @ 0x1800972E0 (_strnicmp.c)
 */

__int64 sub_18003C49C()
{
  NTSTATUS v0; // eax
  __int64 v1; // rcx
  PWCH Buffer; // rbx
  unsigned int v3; // edi
  DWORD v4; // r15d
  DWORD v5; // r14d
  __int64 v6; // r13
  __int64 v7; // r12
  const CHAR *v8; // rsi
  unsigned int v9; // edi
  int v10; // eax
  unsigned __int16 v11; // si
  char v12; // bl
  __int64 v13; // r8
  int v14; // eax
  PAPI_SET_NAMESPACE ApiSetMap; // [rsp+30h] [rbp-48h]
  _UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-40h] BYREF
  _STRING DestinationString; // [rsp+48h] [rbp-30h] BYREF
  unsigned __int16 v19; // [rsp+58h] [rbp-20h] BYREF
  PCWCH String2; // [rsp+60h] [rbp-18h]
  char v21; // [rsp+C0h] [rbp+48h] BYREF
  DWORD v22; // [rsp+C8h] [rbp+50h] BYREF
  PVOID DllHandle; // [rsp+D0h] [rbp+58h] BYREF
  __int64 v24; // [rsp+D8h] [rbp+60h] BYREF

  DllHandle = 0LL;
  LdrGetDllHandleByName((PUNICODE_STRING)&BaseDllName, 0LL, &DllHandle);
  v0 = sub_180032C0C((unsigned __int64)DllHandle, 1, 0xDu, &v22, (char **)&v24);
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
        RtlInitString(&DestinationString, v8);
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
            RtlFreeUnicodeString(&UnicodeString);
          UnicodeString.Buffer = (PWCH)sub_180043FE0(v9);
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
        sub_18003CA5C(0LL, &UnicodeString, 5328LL);
        v10 = sub_18003CAB0((_DWORD)ApiSetMap, (unsigned int)&UnicodeString, 0, (unsigned int)&v21, (__int64)&v19);
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
        sub_18003CA5C(0LL, &UnicodeString, v13);
        if ( v12 && !RtlCompareUnicodeStrings(L"KERNEL32.DLL", 0xCuLL, String2, (unsigned __int64)v11 >> 1, 1u) )
        {
          v14 = sub_18003A2D4((char *)DllHandle, (PCIMAGE_DELAYLOAD_DESCRIPTOR)(v6 + 32LL * v5));
          Buffer = UnicodeString.Buffer;
          v3 = v14;
          if ( v14 < 0 )
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
      RtlFreeUnicodeString(&UnicodeString);
  }
  return v3;
}
