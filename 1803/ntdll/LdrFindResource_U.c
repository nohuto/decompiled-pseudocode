/*
 * XREFs of LdrFindResource_U @ 0x180032D20
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_180032DB4 @ 0x180032DB4 (sub_180032DB4.c)
 *     sub_1800DBCC0 @ 0x1800DBCC0 (sub_1800DBCC0.c)
 */

NTSTATUS __cdecl LdrFindResource_U(
        PVOID DllHandle,
        PLDR_RESOURCE_INFO ResourceInfo,
        ULONG Level,
        PIMAGE_RESOURCE_DATA_ENTRY *ResourceDataEntry)
{
  int v6; // r14d
  int v7; // r15d
  __int64 v8; // rdi
  __int64 v9; // r10
  __int64 v10; // rbx
  NTSTATUS v11; // esi
  __int64 v13; // rcx

  v6 = (int)ResourceInfo;
  v7 = (int)DllHandle;
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
    sub_1800DBCC0(L",.", *(unsigned __int8 *)v13);
  }
  v11 = sub_180032DB4(v7, v6, Level, 0, (__int64)ResourceDataEntry);
  if ( RtlGetCurrentServiceSessionId() )
    v8 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1;
  if ( (*(_BYTE *)v8 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v10 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
    sub_1800DBCC0(L"*,", *(unsigned __int8 *)v10);
  }
  return v11;
}
