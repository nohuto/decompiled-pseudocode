/*
 * XREFs of PspIsProcessReadyForRemoteThread @ 0x140129E88
 * Callers:
 *     PspCreateThread @ 0x140492B18 (PspCreateThread.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

bool __fastcall PspIsProcessReadyForRemoteThread(__int64 a1)
{
  bool v2; // bl
  int v4; // eax
  $709EDFC2F9E0D4565D6AA3C4377BC643 v5; // [rsp+28h] [rbp-40h] BYREF

  v2 = 1;
  if ( PsNoRemoteThreadBeforeProcessInit )
  {
    v4 = *(_DWORD *)(a1 + 1740);
    if ( (v4 & 1) == 0 && (v4 & 0x1000) == 0 && (*(_BYTE *)(a1 + 720) & 1) == 0 )
    {
      KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)&v5);
      v2 = *(_QWORD *)(*(_QWORD *)(a1 + 1016) + 24LL) != 0LL;
      KiUnstackDetachProcess(&v5, 0LL);
    }
  }
  return v2;
}
