/*
 * XREFs of LdrFindResource_U @ 0x18007B9D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180035838 @ 0x180035838 (sub_180035838.c)
 *     sub_1800E2008 @ 0x1800E2008 (sub_1800E2008.c)
 */

NTSTATUS __cdecl LdrFindResource_U(
        PVOID DllHandle,
        PLDR_RESOURCE_INFO ResourceInfo,
        ULONG Level,
        PIMAGE_RESOURCE_DATA_ENTRY *ResourceDataEntry)
{
  __int64 v8; // rdi
  __int64 v9; // r10
  __int64 v10; // rbx
  NTSTATUS v11; // esi
  __int64 v13; // rcx

  v8 = 2147353477LL;
  if ( RtlGetCurrentServiceSessionId() )
    v9 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1;
  else
    v9 = 2147353477LL;
  v10 = 2147353476LL;
  if ( (*(_BYTE *)v9 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v13 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
    else
      v13 = 2147353476LL;
    sub_1800E2008(L",.", *(unsigned __int8 *)v13);
  }
  v11 = sub_180035838(DllHandle, (__int64)ResourceInfo, Level, 0, (__int64)ResourceDataEntry);
  if ( RtlGetCurrentServiceSessionId() )
    v8 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1;
  if ( (*(_BYTE *)v8 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v10 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
    sub_1800E2008(L"*,", *(unsigned __int8 *)v10);
  }
  return v11;
}
