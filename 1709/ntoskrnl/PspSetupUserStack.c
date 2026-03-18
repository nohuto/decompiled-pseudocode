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

__int64 __fastcall PspSetupUserStack(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  int UserStack; // esi
  __int64 v10; // r15
  ULONG_PTR v12; // [rsp+20h] [rbp-98h]
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-88h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-80h] BYREF
  $709EDFC2F9E0D4565D6AA3C4377BC643 v15; // [rsp+40h] [rbp-78h] BYREF

  v4 = 0;
  if ( (*(_BYTE *)a4 & 1) != 0 )
    goto LABEL_7;
  KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)&v15);
  UserStack = RtlCreateUserStack(*(_QWORD *)(a4 + 16), *(_QWORD *)(a4 + 24), *(_QWORD *)(a4 + 8), 4096, v12, a3);
  if ( UserStack >= 0 )
  {
    if ( (*(_DWORD *)(a1 + 2088) & 0x40) != 0 )
      v10 = 0LL;
    else
      v10 = 16 * (unsigned int)(ExGenRandom(1) & 0x7F);
    if ( *(_QWORD *)(a1 + 1064) )
    {
      UserStack = PspWow64SetupCpuArea(a3 + 16, a1);
      if ( UserStack < 0 )
      {
        BaseAddress = *(PVOID *)(a3 + 32);
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
        goto LABEL_11;
      }
    }
    *(_QWORD *)(a2 + 152) = *(_QWORD *)(a3 + 16) - v10 - 40;
    KiUnstackDetachProcess(&v15, 0LL);
    v4 = 2;
LABEL_7:
    *(_BYTE *)a4 = v4 | *(_BYTE *)a4 & 0xFD;
    return 0LL;
  }
LABEL_11:
  KiUnstackDetachProcess(&v15, 0LL);
  return (unsigned int)UserStack;
}
