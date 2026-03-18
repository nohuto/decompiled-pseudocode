/*
 * XREFs of CmpInitializePreloadedHive @ 0x1408B0CD8
 * Callers:
 *     CmpInitializePreloadedHives @ 0x1408B0BEC (CmpInitializePreloadedHives.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14006DCF0 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     CmpCreateHive @ 0x140497630 (CmpCreateHive.c)
 *     CmpLinkHiveToMaster @ 0x140557540 (CmpLinkHiveToMaster.c)
 *     CmpSetupLoggingState @ 0x14062E43C (CmpSetupLoggingState.c)
 *     CmpGetSystemRelativeRegistryHiveFilePath @ 0x1408DD7A8 (CmpGetSystemRelativeRegistryHiveFilePath.c)
 */

char __fastcall CmpInitializePreloadedHive(__int64 a1, __int64 a2)
{
  int v4; // esi
  wchar_t *PoolWithTag; // rax
  wchar_t *v6; // r12
  int v7; // eax
  unsigned __int16 Length; // r15
  unsigned __int64 v9; // rbx
  wchar_t *v10; // rax
  wchar_t *v11; // r14
  unsigned int v12; // r8d
  int v13; // eax
  ULONG_PTR v14; // rbx
  int v15; // eax
  bool v16; // zf
  int v17; // ecx
  int v18; // ecx
  int v19; // eax
  _QWORD *v20; // rax
  _QWORD *v21; // rbx
  char result; // al
  int v23; // eax
  const WCHAR *SystemRelativeRegistryHiveFilePath; // rbx
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  _BYTE v26[8]; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING Destination; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING v28; // [rsp+78h] [rbp-88h] BYREF
  ULONG_PTR v29; // [rsp+88h] [rbp-78h] BYREF
  ULONG_PTR BugCheckParameter3[44]; // [rsp+90h] [rbp-70h] BYREF
  char v31; // [rsp+1F0h] [rbp+F0h] BYREF

  memset(BugCheckParameter3, 0, sizeof(BugCheckParameter3));
  v4 = 4096;
  v29 = 0LL;
  v26[0] = 0;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x20204D43u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    KeBugCheckEx(0x74u, 3uLL, 4uLL, 0LL, 0xFFFFFFFFC000009AuLL);
  Destination.Buffer = PoolWithTag;
  v7 = *(_DWORD *)(a1 + 24);
  *(_DWORD *)&Destination.Length = 0x10000000;
  if ( (v7 & 0x36) != 0 )
  {
    RtlAppendUnicodeToString(&Destination, *(PCWSTR *)(a1 + 16));
    v23 = *(_DWORD *)(a1 + 24);
    if ( (v23 & 2) == 0 )
    {
      if ( (v23 & 4) != 0 )
        v4 = 0x2000;
      else
        v4 = (v23 & 0x20) != 0 ? 0x200000 : 1;
    }
  }
  else if ( (v7 & 0x80) != 0 )
  {
    SystemRelativeRegistryHiveFilePath = (const WCHAR *)CmpGetSystemRelativeRegistryHiveFilePath(*(_QWORD *)(a1 + 16));
    RtlAppendUnicodeToString(&Destination, L"\\DriverStores\\");
    RtlAppendUnicodeToString(&Destination, *(PCWSTR *)(a1 + 48));
    RtlAppendUnicodeToString(&Destination, SystemRelativeRegistryHiveFilePath);
    v4 = 0x400000;
    if ( CmStateSeparationEnabled && !CmStateSeparationDevMode )
      v4 = 4194305;
  }
  else
  {
    RtlAppendUnicodeToString(&Destination, L"\\SystemRoot\\System32\\Config\\");
    RtlAppendUnicodeToString(&Destination, *(PCWSTR *)(a1 + 16));
    v4 = 0x4000;
  }
  Length = Destination.Length;
  v9 = Destination.Length;
  v10 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, Destination.Length + 2LL, 0x20204D43u);
  v11 = v10;
  if ( !v10 )
    KeBugCheckEx(0x74u, 3uLL, 4uLL, 0LL, 0xFFFFFFFFC000009AuLL);
  memmove(v10, Destination.Buffer, (unsigned int)v9);
  ExFreePoolWithTag(v6, 0);
  Destination.Buffer = v11;
  v11[v9 >> 1] = 0;
  v12 = (32 * (*(_DWORD *)(a1 + 24) & 8)) | 0x12;
  BugCheckParameter4 = *(_QWORD *)(a1 + 32);
  Destination.MaximumLength = Length + 2;
  v13 = CmpCreateHive(
          &v29,
          1u,
          v12,
          2u,
          BugCheckParameter4,
          0LL,
          (__int64)&Destination,
          589832,
          0LL,
          0LL,
          v26,
          (__int64)BugCheckParameter3);
  if ( v13 < 0 )
    KeBugCheckEx(0x74u, 3uLL, 5uLL, (ULONG_PTR)BugCheckParameter3, v13);
  v14 = v29;
  CmpSetupLoggingState(v29, (unsigned int *)(a1 + 64));
  RtlInitUnicodeString((PUNICODE_STRING)(v14 + 1816), v11);
  v15 = v4 | *(_DWORD *)(v14 + 160) | 0x400;
  v16 = v26[0] == 1;
  v17 = v15;
  *(_DWORD *)(v14 + 160) = v15;
  if ( v16 )
  {
    v15 |= 0x800u;
    *(_DWORD *)(v14 + 160) = v15;
    v17 = v15;
  }
  if ( CmpShareSystemHives )
  {
    v17 = v15 | 0x8000;
    *(_DWORD *)(v14 + 160) = v15 | 0x8000;
  }
  if ( CmStateSeparationEnabled && !CmStateSeparationDevMode && (*(_DWORD *)(a1 + 24) & 0x20) == 0 )
    *(_DWORD *)(v14 + 160) = v17 | 0x8000;
  v18 = *(_DWORD *)(*(_QWORD *)(v14 + 64) + 4088LL);
  CmpBootType = v18;
  if ( !CmSelfHeal )
  {
    CmpSelfHeal = 0;
    if ( (v18 & 4) != 0 )
      KeBugCheckEx(0x74u, 3uLL, 6uLL, v14, 0LL);
  }
  *(_DWORD *)&v28.Length = 0x800000;
  v28.Buffer = (wchar_t *)&v31;
  RtlAppendUnicodeToString(&v28, L"\\REGISTRY\\");
  RtlAppendUnicodeToString(&v28, *(PCWSTR *)(a1 + 56));
  RtlAppendUnicodeToString(&v28, L"\\");
  RtlAppendUnicodeToString(&v28, *(PCWSTR *)(a1 + 48));
  v19 = CmpLinkHiveToMaster((__int64)&v28, 0LL, v14, 0, 0x200u, 0, 0LL, a2, 0LL, 0LL, 1);
  if ( v19 < 0 )
    KeBugCheckEx(0x74u, 3uLL, 7uLL, v14, v19);
  v20 = (_QWORD *)qword_1403CA888;
  v21 = (_QWORD *)(v14 + 1616);
  if ( *(__int64 **)qword_1403CA888 != &CmpPreloadedHivesList )
    __fastfail(3u);
  v21[1] = qword_1403CA888;
  *v21 = &CmpPreloadedHivesList;
  *v20 = v21;
  result = 1;
  qword_1403CA888 = (__int64)v21;
  return result;
}
