/*
 * XREFs of PspWow64SetupUserStack @ 0x1404452DC
 * Callers:
 *     PspAllocateThread @ 0x14053F490 (PspAllocateThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     RtlpWow64CreateUserStack @ 0x140445374 (RtlpWow64CreateUserStack.c)
 */

__int64 __fastcall PspWow64SetupUserStack(_KPROCESS *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  char v5; // bl
  int UserStack; // esi
  $5BC46E0569261879018906DEC3127961 v10; // [rsp+30h] [rbp-58h] BYREF

  v5 = 1;
  if ( (*(_BYTE *)a4 & 1) != 0 )
  {
    v5 = 0;
    goto LABEL_4;
  }
  KiStackAttachProcess(a1, 0, (__int64)&v10);
  UserStack = RtlpWow64CreateUserStack(*(_QWORD *)(a4 + 16), *(_QWORD *)(a4 + 24), *(_QWORD *)(a4 + 8), a5, a3);
  if ( UserStack >= 0 )
  {
    KiUnstackDetachProcess(&v10, 0LL);
LABEL_4:
    *(_BYTE *)a4 = (4 * v5) | *(_BYTE *)a4 & 0xFB;
    return 0LL;
  }
  KiUnstackDetachProcess(&v10, 0LL);
  return (unsigned int)UserStack;
}
