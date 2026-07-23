/*
 * XREFs of PspSetupUserStack @ 0x140508E04
 * Callers:
 *     PspAllocateThread @ 0x140493710 (PspAllocateThread.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     ExGenRandom @ 0x1400C3144 (ExGenRandom.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x14017DC80 (ZwFreeVirtualMemory.c)
 *     RtlCreateUserStack @ 0x140508F24 (RtlCreateUserStack.c)
 *     PspWow64SetupCpuArea @ 0x1405963A4 (PspWow64SetupCpuArea.c)
 */

__int64 __fastcall PspSetupUserStack(__int64 a1, __int64 a2, struct _INITIAL_TEB *a3, __int64 a4, unsigned int a5)
{
  char v5; // bl
  SIZE_T v10; // rsi
  NTSTATUS UserStack; // esi
  __int64 v12; // r15
  ULONG_PTR v14; // [rsp+20h] [rbp-98h]
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-88h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-80h] BYREF
  $709EDFC2F9E0D4565D6AA3C4377BC643 v17; // [rsp+40h] [rbp-78h] BYREF

  v5 = 0;
  if ( (*(_BYTE *)a4 & 1) != 0 )
    goto LABEL_9;
  v10 = 4096LL;
  if ( a5 )
    v10 = ((unsigned __int64)a5 << 56) | 0x1000;
  KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)&v17);
  UserStack = RtlCreateUserStack(*(_QWORD *)(a4 + 16), *(_QWORD *)(a4 + 24), *(_QWORD *)(a4 + 8), v10, v14, a3);
  if ( UserStack < 0 )
    goto LABEL_13;
  if ( (*(_DWORD *)(a1 + 2088) & 0x40) != 0 )
    v12 = 0LL;
  else
    v12 = 16 * (unsigned int)(ExGenRandom(1) & 0x7F);
  if ( !*(_QWORD *)(a1 + 1064) || (UserStack = PspWow64SetupCpuArea(&a3->StackBase, a1), UserStack >= 0) )
  {
    *(_QWORD *)(a2 + 152) = (char *)a3->StackBase - v12 - 40;
    KiUnstackDetachProcess(&v17, 0LL);
    v5 = 2;
LABEL_9:
    *(_BYTE *)a4 = v5 | *(_BYTE *)a4 & 0xFD;
    return 0LL;
  }
  BaseAddress = a3->AllocatedStackBase;
  RegionSize = 0LL;
  ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
LABEL_13:
  KiUnstackDetachProcess(&v17, 0LL);
  return (unsigned int)UserStack;
}
