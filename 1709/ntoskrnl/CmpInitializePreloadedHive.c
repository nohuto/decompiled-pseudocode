/*
 * XREFs of CmpInitializePreloadedHive @ 0x14083C6D0
 * Callers:
 *     CmpInitializePreloadedHives @ 0x14083C5EC (CmpInitializePreloadedHives.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x1400DEC60 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     CmpInitializeHive @ 0x140470188 (CmpInitializeHive.c)
 *     CmpLinkHiveToMaster @ 0x1404E46C4 (CmpLinkHiveToMaster.c)
 *     CmpSetupLoggingState @ 0x1405C0978 (CmpSetupLoggingState.c)
 */

char __fastcall CmpInitializePreloadedHive(__int64 a1, __int64 a2)
{
  wchar_t *PoolWithTag; // rax
  wchar_t *v5; // rbx
  int v6; // eax
  int v7; // edi
  unsigned int Length; // r12d
  unsigned __int64 v9; // r15
  wchar_t *v10; // rax
  wchar_t *v11; // r14
  int v12; // r8d
  int v13; // eax
  ULONG_PTR v14; // rbx
  int v15; // ecx
  int v16; // eax
  _QWORD *v17; // rax
  _QWORD *v18; // rbx
  char result; // al
  int v20; // eax
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  _BYTE v22[8]; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING Destination; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING v24; // [rsp+78h] [rbp-88h] BYREF
  ULONG_PTR v25; // [rsp+88h] [rbp-78h] BYREF
  ULONG_PTR BugCheckParameter3[44]; // [rsp+90h] [rbp-70h] BYREF
  char v27; // [rsp+1F0h] [rbp+F0h] BYREF

  memset(BugCheckParameter3, 0, sizeof(BugCheckParameter3));
  v25 = 0LL;
  v22[0] = 0;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x20204D43u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    KeBugCheckEx(0x74u, 3uLL, 4uLL, 0LL, 0xFFFFFFFFC000009AuLL);
  Destination.Buffer = PoolWithTag;
  v6 = *(_DWORD *)(a1 + 24);
  *(_DWORD *)&Destination.Length = 0x10000000;
  if ( (v6 & 0x16) != 0 )
  {
    RtlAppendUnicodeToString(&Destination, *(PCWSTR *)(a1 + 16));
    v20 = *(_DWORD *)(a1 + 24);
    if ( (v20 & 2) != 0 )
      v7 = 5120;
    else
      v7 = (v20 & 4) != 0 ? 9216 : 1025;
  }
  else
  {
    RtlAppendUnicodeToString(&Destination, L"\\SystemRoot\\System32\\Config\\");
    RtlAppendUnicodeToString(&Destination, *(PCWSTR *)(a1 + 16));
    v7 = 17408;
  }
  Length = Destination.Length;
  v9 = Destination.Length;
  v10 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, Destination.Length + 2LL, 0x20204D43u);
  v11 = v10;
  if ( !v10 )
    KeBugCheckEx(0x74u, 3uLL, 4uLL, 0LL, 0xFFFFFFFFC000009AuLL);
  memmove(v10, Destination.Buffer, Length);
  ExFreePoolWithTag(v5, 0);
  Destination.Buffer = v11;
  v11[v9 >> 1] = 0;
  v12 = (32 * (*(_DWORD *)(a1 + 24) & 8)) | 0x12;
  BugCheckParameter4 = *(_QWORD *)(a1 + 32);
  Destination.MaximumLength = Length + 2;
  v13 = CmpInitializeHive(
          &v25,
          1u,
          v12,
          2u,
          BugCheckParameter4,
          0LL,
          (__int64)&Destination,
          589832,
          0LL,
          0LL,
          (__int64)v22,
          (__int64)BugCheckParameter3);
  if ( v13 < 0 )
    KeBugCheckEx(0x74u, 3uLL, 5uLL, (ULONG_PTR)BugCheckParameter3, v13);
  v14 = v25;
  CmpSetupLoggingState(v25, (unsigned int *)(a1 + 64));
  RtlInitUnicodeString((PUNICODE_STRING)(v14 + 2992), v11);
  *(_DWORD *)(v14 + 144) |= v7;
  if ( v22[0] == 1 )
    *(_DWORD *)(v14 + 144) |= 0x800u;
  if ( CmpShareSystemHives )
    *(_DWORD *)(v14 + 144) = *(_DWORD *)(v14 + 144) & 0xFFFDFFFE | 1;
  if ( CmStateSeparationEnabled )
    *(_DWORD *)(v14 + 144) = *(_DWORD *)(v14 + 144) & 0xFFFD7FFF | 0x8000;
  v15 = *(_DWORD *)(*(_QWORD *)(v14 + 64) + 4088LL);
  CmpBootType = v15;
  if ( !CmSelfHeal )
  {
    CmpSelfHeal = 0;
    if ( (v15 & 4) != 0 )
      KeBugCheckEx(0x74u, 3uLL, 6uLL, v14, 0LL);
  }
  *(_DWORD *)&v24.Length = 0x800000;
  v24.Buffer = (wchar_t *)&v27;
  RtlAppendUnicodeToString(&v24, L"\\REGISTRY\\");
  RtlAppendUnicodeToString(&v24, *(PCWSTR *)(a1 + 56));
  RtlAppendUnicodeToString(&v24, L"\\");
  RtlAppendUnicodeToString(&v24, *(PCWSTR *)(a1 + 48));
  v16 = CmpLinkHiveToMaster((__int64)&v24, 0LL, v14, 0, 0x200u, 0, 0LL, a2, 0LL, 0LL, 1);
  if ( v16 < 0 )
    KeBugCheckEx(0x74u, 3uLL, 7uLL, v14, v16);
  v17 = (_QWORD *)qword_140387358;
  v18 = (_QWORD *)(v14 + 2744);
  if ( *(__int64 **)qword_140387358 != &CmpPreloadedHivesList )
    __fastfail(3u);
  v18[1] = qword_140387358;
  *v18 = &CmpPreloadedHivesList;
  *v17 = v18;
  result = 1;
  qword_140387358 = (__int64)v18;
  return result;
}
