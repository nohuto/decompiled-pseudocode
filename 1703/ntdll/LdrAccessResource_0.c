/*
 * XREFs of LdrAccessResource_0 @ 0x1800380F8
 * Callers:
 *     RtlFindMessage @ 0x180037F80 (RtlFindMessage.c)
 *     LdrAccessResource @ 0x180038290 (LdrAccessResource.c)
 *     RtlLoadString @ 0x1800753A0 (RtlLoadString.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_18002FC7C @ 0x18002FC7C (sub_18002FC7C.c)
 *     sub_18002FEC4 @ 0x18002FEC4 (sub_18002FEC4.c)
 *     sub_180032C0C @ 0x180032C0C (sub_180032C0C.c)
 *     sub_1800E1AD8 @ 0x1800E1AD8 (sub_1800E1AD8.c)
 *     sub_1800E2008 @ 0x1800E2008 (sub_1800E2008.c)
 */

NTSTATUS __cdecl LdrAccessResource_0(
        PVOID DllHandle,
        PIMAGE_RESOURCE_DATA_ENTRY ResourceDataEntry,
        PVOID *ResourceBuffer,
        ULONG *ResourceLength)
{
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rdi
  NTSTATUS v11; // ebp
  unsigned __int64 v13; // r15
  NTSTATUS v14; // eax
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // rcx
  char *v18; // rax
  __int64 v19; // [rsp+30h] [rbp-48h] BYREF
  __int64 v20; // [rsp+38h] [rbp-40h] BYREF
  __int64 v21; // [rsp+40h] [rbp-38h] BYREF
  DWORD v22; // [rsp+80h] [rbp+8h] BYREF

  v21 = 0LL;
  v19 = 0LL;
  v8 = 2147353477LL;
  if ( RtlGetCurrentServiceSessionId() )
    v9 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1;
  else
    v9 = 2147353477LL;
  v10 = 2147353476LL;
  if ( (*(_BYTE *)v9 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v17 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
    else
      v17 = 2147353476LL;
    sub_1800E2008(L",.", *(unsigned __int8 *)v17);
  }
  if ( !DllHandle || !ResourceDataEntry )
    return -1073741811;
  if ( NtCurrentTeb()->ResourceRetValue
    && *(PVOID *)NtCurrentTeb()->ResourceRetValue == DllHandle
    && *((PIMAGE_RESOURCE_DATA_ENTRY *)NtCurrentTeb()->ResourceRetValue + 1) == ResourceDataEntry )
  {
    DllHandle = (PVOID)*((_QWORD *)NtCurrentTeb()->ResourceRetValue + 2);
  }
  else
  {
    v13 = (unsigned __int64)DllHandle & 0xFFFFFFFFFFFFFFFCuLL;
    v14 = sub_180032C0C((unsigned __int64)DllHandle, 1, 2u, &v22, (char **)&v20);
    v16 = v20;
    if ( v14 < 0 )
      v16 = 0LL;
    if ( !v16 )
    {
      v11 = -1073741687;
      goto LABEL_11;
    }
    if ( (unsigned __int64)ResourceDataEntry < v16 )
      goto LABEL_30;
    v11 = sub_18002FEC4((__int64)DllHandle, &v19);
    if ( v11 == -1073741701 )
      goto LABEL_11;
    if ( v19 && ((unsigned __int64)ResourceDataEntry < v13 || (unsigned __int64)ResourceDataEntry >= v13 + v19) )
    {
LABEL_30:
      v18 = (char *)sub_1800E1AD8(DllHandle, v15, ResourceDataEntry, &v21);
      if ( (unsigned __int64)(v18 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        DllHandle = v18;
    }
  }
  v11 = sub_18002FC7C(DllHandle, &ResourceDataEntry->OffsetToData, ResourceBuffer, ResourceLength);
LABEL_11:
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
