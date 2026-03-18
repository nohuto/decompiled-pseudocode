/*
 * XREFs of PspIsProcessReadyForRemoteThread @ 0x1400C9B1C
 * Callers:
 *     PspCreateThread @ 0x1404B98F8 (PspCreateThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

bool __fastcall PspIsProcessReadyForRemoteThread(__int64 a1)
{
  bool v2; // bl
  int v4; // eax
  _BYTE v5[48]; // [rsp+28h] [rbp-40h] BYREF

  v2 = 1;
  if ( PsNoRemoteThreadBeforeProcessInit )
  {
    v4 = *(_DWORD *)(a1 + 1740);
    if ( (v4 & 1) == 0 && (v4 & 0x1000) == 0 && (*(_BYTE *)(a1 + 720) & 1) == 0 )
    {
      KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)v5);
      v2 = *(_QWORD *)(*(_QWORD *)(a1 + 1016) + 24LL) != 0LL;
      KiUnstackDetachProcess((__int64)v5, 0LL);
    }
  }
  return v2;
}
