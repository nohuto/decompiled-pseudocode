/*
 * XREFs of PspSetupUserStack @ 0x140516848
 * Callers:
 *     PspAllocateThread @ 0x14053F490 (PspAllocateThread.c)
 * Callees:
 *     ExGenRandom @ 0x14004F864 (ExGenRandom.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x14017E300 (ZwFreeVirtualMemory.c)
 *     PspWow64SetupCpuArea @ 0x1404241B0 (PspWow64SetupCpuArea.c)
 *     RtlCreateUserStack @ 0x1405165A8 (RtlCreateUserStack.c)
 */

__int64 __fastcall PspSetupUserStack(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  char v5; // bl
  SIZE_T v10; // rsi
  int UserStack; // esi
  __int64 v12; // r15
  void *v14; // rax
  ULONG_PTR v15; // [rsp+20h] [rbp-98h]
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-88h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-80h] BYREF
  $5BC46E0569261879018906DEC3127961 v18; // [rsp+40h] [rbp-78h] BYREF

  v5 = 1;
  if ( (*(_BYTE *)a4 & 1) != 0 )
  {
    v5 = 0;
    goto LABEL_9;
  }
  v10 = 4096LL;
  if ( a5 )
    v10 = ((unsigned __int64)a5 << 56) | 0x1000;
  KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)&v18);
  UserStack = RtlCreateUserStack(
                *(_QWORD *)(a4 + 16),
                *(_QWORD *)(a4 + 24),
                *(_QWORD *)(a4 + 8),
                v10,
                v15,
                (PINITIAL_TEB)a3);
  if ( UserStack < 0 )
    goto LABEL_14;
  if ( (*(_DWORD *)(a1 + 768) & 0x20000) != 0 )
    v12 = 0LL;
  else
    v12 = 16 * (unsigned int)(ExGenRandom(1) & 0x7F);
  if ( !*(_QWORD *)(a1 + 1064) || (UserStack = PspWow64SetupCpuArea((unsigned __int64 *)(a3 + 16), a1), UserStack >= 0) )
  {
    *(_QWORD *)(a2 + 152) = *(_QWORD *)(a3 + 16) - v12 - 40;
    KiUnstackDetachProcess(&v18, 0LL);
LABEL_9:
    *(_BYTE *)a4 = (2 * v5) | *(_BYTE *)a4 & 0xFD;
    return 0LL;
  }
  v14 = *(void **)(a3 + 32);
  RegionSize = 0LL;
  BaseAddress = v14;
  ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
LABEL_14:
  KiUnstackDetachProcess(&v18, 0LL);
  return (unsigned int)UserStack;
}
