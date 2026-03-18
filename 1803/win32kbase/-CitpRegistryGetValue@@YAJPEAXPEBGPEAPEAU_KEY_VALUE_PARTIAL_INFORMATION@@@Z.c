/*
 * XREFs of ?CitpRegistryGetValue@@YAJPEAXPEBGPEAPEAU_KEY_VALUE_PARTIAL_INFORMATION@@@Z @ 0x1C016416C
 * Callers:
 *     ?CitpParameterGetString@@YAJPEAXPEBGPEAPEBG@Z @ 0x1C01621B4 (-CitpParameterGetString@@YAJPEAXPEBGPEAPEBG@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C0162004 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpRegistryGetValue(
        HANDLE KeyHandle,
        const unsigned __int16 *a2,
        struct _KEY_VALUE_PARTIAL_INFORMATION **a3)
{
  struct _KEY_VALUE_PARTIAL_INFORMATION *v5; // rdi
  NTSTATUS v6; // eax
  unsigned int v7; // ebx
  struct _KEY_VALUE_PARTIAL_INFORMATION *v8; // rax
  const char *v9; // rdx
  NTSTATUS v10; // eax
  const char *v11; // rdx
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF
  const unsigned __int16 *ResultLength; // [rsp+58h] [rbp+10h] BYREF

  ResultLength = a2;
  v5 = 0LL;
  RtlInitUnicodeString(&ValueName, L"BuildLabEx");
  LODWORD(ResultLength) = 0;
  v6 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, 0LL, 0, (PULONG)&ResultLength);
  v7 = v6;
  if ( (v6 == -2147483643 || v6 == -1073741789) && (_DWORD)ResultLength )
  {
    v8 = (struct _KEY_VALUE_PARTIAL_INFORMATION *)Win32AllocPool((unsigned int)ResultLength, 0x49637355u);
    v5 = v8;
    if ( !v8 )
    {
      v7 = -1073741670;
      CitpLogFailureWorker(3221225626LL, v9, 0x89Cu);
      return v7;
    }
    v10 = ZwQueryValueKey(
            KeyHandle,
            &ValueName,
            KeyValuePartialInformation,
            v8,
            (ULONG)ResultLength,
            (PULONG)&ResultLength);
    v7 = v10;
    if ( v10 >= 0 )
    {
      *a3 = v5;
      return 0;
    }
    CitpLogFailureWorker((unsigned int)v10, v11, 0x8A8u);
  }
  else
  {
    if ( v6 < 0 )
      return v7;
    v7 = -1073741823;
  }
  if ( v5 )
    Win32FreePool((__int64)v5);
  return v7;
}
