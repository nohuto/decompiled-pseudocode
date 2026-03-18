/*
 * XREFs of PspWow64SetupUserStack @ 0x14058D4A4
 * Callers:
 *     PspAllocateThread @ 0x140493710 (PspAllocateThread.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     RtlpWow64CreateUserStack @ 0x14058D540 (RtlpWow64CreateUserStack.c)
 */

__int64 __fastcall PspWow64SetupUserStack(_KPROCESS *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int UserStack; // edi
  char v8; // cl
  $709EDFC2F9E0D4565D6AA3C4377BC643 v10; // [rsp+30h] [rbp-48h] BYREF

  if ( (*(_BYTE *)a4 & 1) != 0 )
  {
    v8 = 0;
    goto LABEL_4;
  }
  KiStackAttachProcess(a1, 0, (__int64)&v10);
  UserStack = RtlpWow64CreateUserStack(*(_QWORD *)(a4 + 16), *(_QWORD *)(a4 + 24), *(_QWORD *)(a4 + 8), a5, a3);
  if ( UserStack >= 0 )
  {
    KiUnstackDetachProcess(&v10, 0LL);
    v8 = 4;
LABEL_4:
    *(_BYTE *)a4 = v8 | *(_BYTE *)a4 & 0xFB;
    return 0LL;
  }
  KiUnstackDetachProcess(&v10, 0LL);
  return (unsigned int)UserStack;
}
