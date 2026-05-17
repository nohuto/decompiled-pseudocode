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

__int64 __fastcall LdrpMinimalMapModule(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  char v5; // bp
  int v6; // esi
  struct _TEB *v7; // r14
  void *ArbitraryUserPointer; // r12
  int v9; // eax
  _QWORD *v10; // r15
  int v11; // eax
  __int64 v12; // r8
  int v13; // ebx
  __int64 v15; // rdx
  int v16; // [rsp+90h] [rbp+8h] BYREF
  __int64 v17; // [rsp+98h] [rbp+10h] BYREF

  v4 = *(_QWORD *)(a1 + 56);
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      635,
      (unsigned int)"LdrpMinimalMapModule",
      3,
      "DLL name: %wZ\n",
      v4 + 72);
  LOBYTE(a3) = 1;
  if ( !(unsigned __int8)RtlEqualUnicodeString(v4 + 88, &LdrpKernel32DllName, a3)
    || (v5 = 1, (*(_BYTE *)(LdrpAppHeaders + 22) & 0x20) == 0) )
  {
    v5 = 0;
  }
  v17 = 0LL;
  v6 = 0x800000;
  if ( !v5 )
  {
    if ( LdrpLargePageDllKeyHandle )
    {
      v15 = *(_QWORD *)(v4 + 96);
      v16 = 0;
      RtlQueryImageFileKeyOption(LdrpLargePageDllKeyHandle, v15, 4LL, &v16, 4, 0LL);
      if ( v16 )
      {
        if ( (int)RtlAcquirePrivilege(&LdrpLockMemoryPrivilege, 1LL, 0LL, &v17) >= 0 )
          v6 = 0x20000000;
      }
    }
  }
  v7 = NtCurrentTeb();
  *(_QWORD *)(a1 + 160) = 0LL;
  ArbitraryUserPointer = v7->NtTib.ArbitraryUserPointer;
  v7->NtTib.ArbitraryUserPointer = *(void **)(v4 + 80);
  v9 = 4;
  if ( (*(_DWORD *)(a1 + 32) & 0x800000) != 0 )
  {
    v9 = 2;
    v6 |= 0x40000u;
  }
  v10 = (_QWORD *)(v4 + 48);
  v11 = ZwMapViewOfSection(*(_QWORD *)(a1 + 24), -1LL, v4 + 48, 0LL, 0LL, 0LL, a1 + 160, 1, v6, v9);
  v7->NtTib.ArbitraryUserPointer = ArbitraryUserPointer;
  v13 = v11;
  if ( v6 == 0x20000000 )
    RtlReleasePrivilege(v17);
  switch ( v13 )
  {
    case 1073741827:
      goto LABEL_36;
    case 1073741838:
      v13 = LdrpProcessMachineMismatch(a1);
      break;
    case 1073741878:
LABEL_36:
      if ( !*(_QWORD *)(a1 + 168) )
      {
        if ( LdrpCheckForRetryLoading(a1, 1) )
        {
          v13 = -1073741267;
        }
        else if ( v5 )
        {
          v13 = -1073741800;
        }
      }
      break;
  }
  if ( *v10 && (v13 < 0 || v13 == 1073741838) )
  {
    NtUnmapViewOfSection(-1LL, *v10, v12);
    *v10 = 0LL;
  }
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      770,
      (unsigned int)"LdrpMinimalMapModule",
      4,
      "Status: 0x%08lx\n",
      v13);
  return (unsigned int)v13;
}
