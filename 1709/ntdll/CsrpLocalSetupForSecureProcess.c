/*
 * XREFs of CsrpLocalSetupForSecureProcess @ 0x1800CE750
 * Callers:
 *     CsrClientConnectToServer @ 0x1800067D0 (CsrClientConnectToServer.c)
 * Callees:
 *     RtlGetNtSystemRoot @ 0x1800179D0 (RtlGetNtSystemRoot.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     swprintf_s @ 0x18009C290 (swprintf_s.c)
 *     wcscpy_s @ 0x18009C430 (wcscpy_s.c)
 *     NtQuerySystemInformation @ 0x1800A0780 (NtQuerySystemInformation.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 */

__int64 __fastcall CsrpLocalSetupForSecureProcess(__int64 a1, __int64 a2)
{
  struct _PEB *v2; // rbp
  __int64 NtSystemRoot; // rax
  __int64 v4; // rsi
  unsigned int SessionId; // ebx
  size_t v6; // rsi
  size_t v7; // r15
  __int64 v8; // r14
  size_t v9; // r14
  __int64 Heap; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rdi
  NTSTATUS SystemInformation; // ebx
  void **v15; // r13
  char *v16; // rbx
  const void *v17; // rax
  char *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  const void *v21; // rax
  char *v22; // rcx
  __int128 v23; // xmm0
  unsigned __int64 v24; // rdi
  wchar_t Destination[256]; // [rsp+30h] [rbp-238h] BYREF

  v2 = NtCurrentPeb();
  NtSystemRoot = RtlGetNtSystemRoot(a1, a2);
  v4 = -1LL;
  do
    ++v4;
  while ( *(_WORD *)(NtSystemRoot + 2 * v4) );
  SessionId = v2->SessionId;
  v6 = 2 * v4;
  v7 = v6 + 18;
  if ( SessionId == (unsigned int)RtlGetCurrentServiceSessionId() )
    wcscpy_s(Destination, 0x100uLL, L"\\BaseNamedObjects");
  else
    swprintf_s(Destination, 0x100uLL, L"%ws\\%ld\\BaseNamedObjects", L"\\Sessions", SessionId);
  v8 = -1LL;
  do
    ++v8;
  while ( Destination[v8] );
  v9 = 2 * v8;
  Heap = RtlAllocateHeap(CsrHeap, 8u, v6 + v9 + v6 + 2960);
  v13 = Heap;
  if ( Heap )
  {
    v15 = (void **)(Heap + 2920);
    *(_QWORD *)(Heap + 2928) = Heap;
    v16 = (char *)(Heap + 2936);
    *(_QWORD *)(Heap + 8) = Heap + 2936;
    *(_WORD *)Heap = v6;
    *(_WORD *)(Heap + 2) = v6 + 2;
    v17 = (const void *)RtlGetNtSystemRoot(v12, v11);
    memmove(v16, v17, v6);
    *(_WORD *)(v13 + 16) = v7;
    *(_WORD *)(v13 + 18) = v6 + 20;
    v18 = &v16[v6 + 2];
    *(_QWORD *)(v13 + 24) = v18;
    v21 = (const void *)RtlGetNtSystemRoot(v20, v19);
    memmove(v18, v21, v6);
    v22 = &v18[v7 + 2];
    *(_OWORD *)&v18[v6] = *(_OWORD *)L"\\System32";
    *(_DWORD *)&v18[v6 + 16] = *(_DWORD *)L"2";
    *(_WORD *)(v13 + 34) = v9 + 2;
    *(_QWORD *)(v13 + 40) = v22;
    *(_WORD *)(v13 + 32) = v9;
    memmove(v22, Destination, v9);
    v23 = *(_OWORD *)(v13 + 32);
    *(_DWORD *)(v13 + 2864) = -1;
    *(_QWORD *)(v13 + 2896) = v13;
    *(_OWORD *)(v13 + 2880) = v23;
    SystemInformation = NtQuerySystemInformation(SystemTimeOfDayInformation, (PVOID)(v13 + 320), 0x30u, 0LL);
    if ( SystemInformation < 0 )
    {
      RtlFreeHeap(CsrHeap, 0, v13);
    }
    else
    {
      v24 = v13 & 0xFFFFFFFFFFFF0000uLL;
      v2->ReadOnlyStaticServerData = v15;
      v2->CsrServerReadOnlySharedMemoryBase = v24;
      v2->ReadOnlySharedMemoryBase = (void *)v24;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)SystemInformation;
}
