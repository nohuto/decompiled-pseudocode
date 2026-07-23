/*
 * XREFs of LdrAccessResource_0 @ 0x180010F9C
 * Callers:
 *     RtlLoadString @ 0x180031360 (RtlLoadString.c)
 *     RtlFindMessage @ 0x180069F10 (RtlFindMessage.c)
 *     LdrAccessResource @ 0x18007B5B0 (LdrAccessResource.c)
 * Callees:
 *     sub_18001014C @ 0x18001014C (sub_18001014C.c)
 *     sub_180010BE4 @ 0x180010BE4 (sub_180010BE4.c)
 *     sub_180010CB4 @ 0x180010CB4 (sub_180010CB4.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_1800DB794 @ 0x1800DB794 (sub_1800DB794.c)
 *     sub_1800DBCC0 @ 0x1800DBCC0 (sub_1800DBCC0.c)
 */

NTSTATUS __cdecl LdrAccessResource_0(
        PVOID DllHandle,
        PIMAGE_RESOURCE_DATA_ENTRY ResourceDataEntry,
        PVOID *ResourceBuffer,
        ULONG *ResourceLength)
{
  __int64 v8; // r14
  PSILO_USER_SHARED_DATA SharedData; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdi
  NTSTATUS v12; // ebp
  PSILO_USER_SHARED_DATA v13; // rcx
  unsigned __int64 v15; // r15
  NTSTATUS v16; // eax
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // rcx
  char *v20; // rax
  __int64 v21; // [rsp+30h] [rbp-48h] BYREF
  __int64 v22; // [rsp+38h] [rbp-40h] BYREF
  __int64 v23; // [rsp+40h] [rbp-38h] BYREF
  DWORD v24; // [rsp+80h] [rbp+8h] BYREF

  v23 = 0LL;
  v21 = 0LL;
  v8 = 2147353477LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && SharedData->ServiceSessionId )
    v10 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1;
  else
    v10 = 2147353477LL;
  v11 = 2147353476LL;
  if ( (*(_BYTE *)v10 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v19 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
    else
      v19 = 2147353476LL;
    sub_1800DBCC0(L",.", *(unsigned __int8 *)v19);
  }
  if ( !DllHandle || !ResourceDataEntry )
    return -1073741811;
  if ( NtCurrentTeb()->ResourceRetValue
    && *(PVOID *)NtCurrentTeb()->ResourceRetValue == DllHandle
    && *((PIMAGE_RESOURCE_DATA_ENTRY *)NtCurrentTeb()->ResourceRetValue + 1) == ResourceDataEntry )
  {
    DllHandle = (PVOID)*((_QWORD *)NtCurrentTeb()->ResourceRetValue + 2);
LABEL_10:
    v12 = sub_180010CB4(
            (unsigned __int64)DllHandle,
            &ResourceDataEntry->OffsetToData,
            (unsigned __int64 *)ResourceBuffer,
            ResourceLength);
    goto LABEL_11;
  }
  v15 = (unsigned __int64)DllHandle & 0xFFFFFFFFFFFFFFFCuLL;
  v16 = sub_18001014C((unsigned __int64)DllHandle, 1, 2u, &v24, (char **)&v22);
  v18 = v22;
  if ( v16 < 0 )
    v18 = 0LL;
  if ( v18 )
  {
    if ( (unsigned __int64)ResourceDataEntry < v18 )
      goto LABEL_30;
    v12 = sub_180010BE4((__int64)DllHandle, &v21);
    if ( v12 != -1073741701 )
    {
      if ( !v21 || (unsigned __int64)ResourceDataEntry >= v15 && (unsigned __int64)ResourceDataEntry < v15 + v21 )
        goto LABEL_10;
LABEL_30:
      v20 = (char *)sub_1800DB794(DllHandle, v17, ResourceDataEntry, &v23);
      if ( (unsigned __int64)(v20 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        DllHandle = v20;
      goto LABEL_10;
    }
  }
  else
  {
    v12 = -1073741687;
  }
LABEL_11:
  v13 = NtCurrentPeb()->SharedData;
  if ( v13 && v13->ServiceSessionId )
    v8 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1;
  if ( (*(_BYTE *)v8 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v11 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
    sub_1800DBCC0(L"*,", *(unsigned __int8 *)v11);
  }
  return v12;
}
