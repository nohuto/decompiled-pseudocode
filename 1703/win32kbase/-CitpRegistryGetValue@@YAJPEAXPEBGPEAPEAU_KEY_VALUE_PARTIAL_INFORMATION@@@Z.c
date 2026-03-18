/*
 * XREFs of ?CitpRegistryGetValue@@YAJPEAXPEBGPEAPEAU_KEY_VALUE_PARTIAL_INFORMATION@@@Z @ 0x1C0086C00
 * Callers:
 *     ?CitpParameterGetString@@YAJPEAXPEBGPEAPEBG@Z @ 0x1C0086B70 (-CitpParameterGetString@@YAJPEAXPEBGPEAPEBG@Z.c)
 *     ?CitpSavedDataRead@@YAJPEAXPEBU_CIT_SAVE_KEY@@PEAPEAU_KEY_VALUE_PARTIAL_INFORMATION@@@Z @ 0x1C01560D0 (-CitpSavedDataRead@@YAJPEAXPEBU_CIT_SAVE_KEY@@PEAPEAU_KEY_VALUE_PARTIAL_INFORMATION@@@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C003F850 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ?CitIsBufferSmallStatus@@YAEJ@Z @ 0x1C0086CD8 (-CitIsBufferSmallStatus@@YAEJ@Z.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C0154590 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpRegistryGetValue(
        HANDLE KeyHandle,
        const unsigned __int16 *a2,
        struct _KEY_VALUE_PARTIAL_INFORMATION **a3)
{
  struct _KEY_VALUE_PARTIAL_INFORMATION *v5; // rdi
  unsigned int v6; // ebx
  struct _KEY_VALUE_PARTIAL_INFORMATION *v7; // rax
  const char *v8; // rdx
  NTSTATUS v9; // eax
  const char *v10; // rdx
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+68h] [rbp+20h] BYREF

  v5 = 0LL;
  RtlInitUnicodeString(&ValueName, a2);
  ResultLength = 0;
  v6 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, 0LL, 0, &ResultLength);
  if ( CitIsBufferSmallStatus(v6) && ResultLength )
  {
    v7 = (struct _KEY_VALUE_PARTIAL_INFORMATION *)Win32AllocPool(ResultLength, 0x49637355u);
    v5 = v7;
    if ( !v7 )
    {
      v6 = -1073741670;
      CitpLogFailureWorker(-1073741670, v8, 0xC12u);
      return v6;
    }
    v9 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, v7, ResultLength, &ResultLength);
    v6 = v9;
    if ( v9 >= 0 )
    {
      *a3 = v5;
      return 0;
    }
    CitpLogFailureWorker(v9, v10, 0xC1Eu);
  }
  else
  {
    if ( (v6 & 0x80000000) != 0 )
      return v6;
    v6 = -1073741823;
  }
  if ( v5 )
    Win32FreePool((__int64)v5);
  return v6;
}
