/*
 * XREFs of CmpInitializePreloadedHive @ 0x1408082A4
 * Callers:
 *     CmpInitializePreloadedHives @ 0x1408081C0 (CmpInitializePreloadedHives.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14004BFF0 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmpInitializeHive @ 0x1404395AC (CmpInitializeHive.c)
 *     CmpLinkHiveToMaster @ 0x1404CCCAC (CmpLinkHiveToMaster.c)
 *     CmpSetupLoggingState @ 0x1405A6ACC (CmpSetupLoggingState.c)
 */

char __fastcall CmpInitializePreloadedHive(__int64 a1, __int64 a2)
{
  int v4; // edi
  wchar_t *PoolWithTag; // rax
  wchar_t *v6; // rbx
  int v7; // eax
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
  v4 = 4096;
  v25 = 0LL;
  v22[0] = 0;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x20204D43u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    KeBugCheckEx(0x74u, 3uLL, 4uLL, 0LL, 0xFFFFFFFFC000009AuLL);
  Destination.Buffer = PoolWithTag;
  v7 = *(_DWORD *)(a1 + 24);
  *(_DWORD *)&Destination.Length = 0x10000000;
  if ( (v7 & 0x16) != 0 )
  {
    RtlAppendUnicodeToString(&Destination, *(PCWSTR *)(a1 + 16));
    v20 = *(_DWORD *)(a1 + 24);
    if ( (v20 & 2) == 0 )
      v4 = (v20 & 4) != 0 ? 0x2000 : 1;
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
  memmove(v10, Destination.Buffer, Length);
  ExFreePoolWithTag(v6, 0);
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
  *(_DWORD *)(v14 + 144) |= v4 | 0x400;
  if ( v22[0] == 1 )
    *(_DWORD *)(v14 + 144) |= 0x800u;
  if ( CmpShareSystemHives )
    *(_DWORD *)(v14 + 144) = *(_DWORD *)(v14 + 144) & 0xFFFDFFFE | 1;
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
  v17 = (_QWORD *)qword_14036B3B8;
  v18 = (_QWORD *)(v14 + 2744);
  if ( *(__int64 **)qword_14036B3B8 != &CmpPreloadedHivesList )
    __fastfail(3u);
  v18[1] = qword_14036B3B8;
  *v18 = &CmpPreloadedHivesList;
  *v17 = v18;
  result = 1;
  qword_14036B3B8 = (__int64)v18;
  return result;
}
