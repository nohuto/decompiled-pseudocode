/*
 * XREFs of LdrpMinimalMapModule @ 0x180022288
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x1800220AC (LdrpMapDllWithSectionHandle.c)
 * Callees:
 *     LdrpCheckForRetryLoading @ 0x1800208D8 (LdrpCheckForRetryLoading.c)
 *     RtlEqualUnicodeString @ 0x18002E610 (RtlEqualUnicodeString.c)
 *     RtlQueryImageFileKeyOption @ 0x180076CB0 (RtlQueryImageFileKeyOption.c)
 *     RtlAcquirePrivilege @ 0x18007C0D0 (RtlAcquirePrivilege.c)
 *     RtlReleasePrivilege @ 0x180085270 (RtlReleasePrivilege.c)
 *     LdrpProcessMachineMismatch @ 0x18008B6B8 (LdrpProcessMachineMismatch.c)
 *     ZwMapViewOfSection @ 0x1800A05C0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A0600 (NtUnmapViewOfSection.c)
 *     LdrpLogDbgPrint @ 0x1800D0E14 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpMinimalMapModule(__int64 a1)
{
  __int64 v2; // rbx
  char v3; // bp
  ULONG AllocationType; // esi
  struct _TEB *v5; // r14
  void *ArbitraryUserPointer; // r12
  ULONG Win32Protect; // eax
  PVOID *v8; // r15
  NTSTATUS v9; // eax
  int v10; // ebx
  PVOID ReturnedState; // [rsp+98h] [rbp+10h]

  v2 = *(_QWORD *)(a1 + 56);
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      635,
      (unsigned int)"LdrpMinimalMapModule",
      3,
      "DLL name: %wZ\n",
      v2 + 72);
  if ( !RtlEqualUnicodeString((PUNICODE_STRING)(v2 + 88), (PUNICODE_STRING)&LdrpKernel32DllName, 1u)
    || (v3 = 1, (*(_BYTE *)(LdrpAppHeaders + 22) & 0x20) == 0) )
  {
    v3 = 0;
  }
  ReturnedState = 0LL;
  AllocationType = 0x800000;
  if ( !v3 && LdrpLargePageDllKeyHandle )
    RtlQueryImageFileKeyOption(LdrpLargePageDllKeyHandle, 4, 0LL);
  v5 = NtCurrentTeb();
  *(_QWORD *)(a1 + 160) = 0LL;
  ArbitraryUserPointer = v5->NtTib.ArbitraryUserPointer;
  v5->NtTib.ArbitraryUserPointer = *(void **)(v2 + 80);
  Win32Protect = 4;
  if ( (*(_DWORD *)(a1 + 32) & 0x800000) != 0 )
  {
    Win32Protect = 2;
    AllocationType = 8650752;
  }
  v8 = (PVOID *)(v2 + 48);
  v9 = ZwMapViewOfSection(
         *(HANDLE *)(a1 + 24),
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         (PVOID *)(v2 + 48),
         0LL,
         0LL,
         0LL,
         (PSIZE_T)(a1 + 160),
         ViewShare,
         AllocationType,
         Win32Protect);
  v5->NtTib.ArbitraryUserPointer = ArbitraryUserPointer;
  v10 = v9;
  if ( AllocationType == 0x20000000 )
    RtlReleasePrivilege(ReturnedState);
  switch ( v10 )
  {
    case 1073741827:
      goto LABEL_33;
    case 1073741838:
      v10 = LdrpProcessMachineMismatch(a1);
      break;
    case 1073741878:
LABEL_33:
      if ( !*(_QWORD *)(a1 + 168) )
      {
        if ( LdrpCheckForRetryLoading(a1, 1) )
        {
          v10 = -1073741267;
        }
        else if ( v3 )
        {
          v10 = -1073741800;
        }
      }
      break;
  }
  if ( *v8 && (v10 < 0 || v10 == 1073741838) )
  {
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, *v8);
    *v8 = 0LL;
  }
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      770,
      (unsigned int)"LdrpMinimalMapModule",
      4,
      "Status: 0x%08lx\n",
      v10);
  return (unsigned int)v10;
}
