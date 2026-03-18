/*
 * XREFs of ?DxgkRetrieveValueFromRegistry@@YAJPEAXPEAU_UNICODE_STRING@@PEAPEAU_KEY_VALUE_PARTIAL_INFORMATION@@@Z @ 0x1C0109F8C
 * Callers:
 *     ?_ProcessMonitorResolutionKey@DXGMONITOR@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1C0108048 (-_ProcessMonitorResolutionKey@DXGMONITOR@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z.c)
 *     ?_ReadOneBlockMonitorDescriptorFromRegistry@DXGMONITOR@@CAJPEAXIPEAPEAU_MONITORDESCRIPTOR@1@@Z @ 0x1C01E5E90 (-_ReadOneBlockMonitorDescriptorFromRegistry@DXGMONITOR@@CAJPEAXIPEAPEAU_MONITORDESCRIPTOR@1@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DxgkRetrieveValueFromRegistry(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        struct _KEY_VALUE_PARTIAL_INFORMATION **a3)
{
  struct _KEY_VALUE_PARTIAL_INFORMATION *v3; // rbx
  ULONG Length; // ebp
  __int64 v8; // rdx
  __int64 v9; // rcx
  NTSTATUS v10; // eax
  int v11; // edi
  __int64 v13; // rax
  ULONG ResultLength; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0LL;
  Length = 1024;
  if ( !a3 )
    return 3221225485LL;
  *a3 = 0LL;
  do
  {
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
    v3 = (struct _KEY_VALUE_PARTIAL_INFORMATION *)operator new(Length, 0x4D677844u, PagedPool);
    if ( v3 )
    {
      ResultLength = 0;
      v10 = ZwQueryValueKey(KeyHandle, ValueName, KeyValuePartialInformation, v3, Length, &ResultLength);
      Length = ResultLength;
      v11 = v10;
    }
    else
    {
      v13 = WdLogNewEntry5_WdError(v9, v8);
      WdLogEvent5_WdError(v13);
      v11 = -1073741801;
    }
  }
  while ( v11 == -2147483643 || v11 == -1073741789 );
  if ( v11 >= 0 )
  {
    *a3 = v3;
  }
  else
  {
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
    *a3 = 0LL;
  }
  return (unsigned int)v11;
}
