/*
 * XREFs of EtwpGetLoggerInfoFromContext @ 0x140551788
 * Callers:
 *     EtwpStopTrace @ 0x140434854 (EtwpStopTrace.c)
 *     EtwpFlushTrace @ 0x140451AD4 (EtwpFlushTrace.c)
 *     EtwpStartLogger @ 0x1405509F8 (EtwpStartLogger.c)
 *     EtwpQueryTrace @ 0x1405515A4 (EtwpQueryTrace.c)
 *     EtwpUpdateTrace @ 0x1405D8AE8 (EtwpUpdateTrace.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     RtlCopyUnicodeString @ 0x1400F1110 (RtlCopyUnicodeString.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     EtwpMapEnableFlags @ 0x1404357C4 (EtwpMapEnableFlags.c)
 *     RtlEqualUnicodeString @ 0x1404F7D80 (RtlEqualUnicodeString.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 */

__int64 __fastcall EtwpGetLoggerInfoFromContext(__int64 a1, __int64 a2)
{
  unsigned int v4; // ecx
  __int16 v5; // ax
  __int64 v6; // rax
  char PreviousMode; // r12
  unsigned __int16 v8; // ax
  unsigned __int16 v9; // r14
  __int64 v11; // rax
  _OWORD v12[2]; // [rsp+40h] [rbp-58h] BYREF

  if ( (*(_DWORD *)(a2 + 12) & 0x2000000) != 0 )
  {
    v11 = 32LL * *(unsigned __int8 *)(a2 + 818);
    v12[0] = *(_OWORD *)((char *)&EtwpGroupMasks + v11);
    v12[1] = *(_OWORD *)((char *)&EtwpGroupMasks + v11 + 16);
    EtwpMapEnableFlags((__int64)v12, 0);
    *(_DWORD *)(a1 + 72) = v12[0];
  }
  else
  {
    *(_DWORD *)(a1 + 72) = 0;
  }
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 276);
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a1 + 60) = *(_DWORD *)(a2 + 292);
  *(_DWORD *)(a1 + 68) = *(_DWORD *)(a2 + 208);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 4) >> 10;
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 232);
  *(_DWORD *)(a1 + 52) = *(_DWORD *)(a2 + 224);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 236);
  *(_DWORD *)(a1 + 104) = *(_DWORD *)(a2 + 240);
  *(_DWORD *)(a1 + 100) = *(_DWORD *)(a2 + 228);
  v4 = *(_DWORD *)(a2 + 256);
  if ( *(_DWORD *)(a2 + 248) > v4 )
    v4 = *(_DWORD *)(a2 + 248);
  *(_DWORD *)(a1 + 108) = v4;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(a1 + 80) ^= (*(_DWORD *)(a2 + 816) & 0x10) != 0;
  *(_DWORD *)(a1 + 112) = *(_DWORD *)(a2 + 252);
  *(_DWORD *)(a1 + 116) = *(_DWORD *)(a2 + 260);
  *(_DWORD *)(a1 + 160) = *(_DWORD *)(a2 + 344);
  *(_DWORD *)(a1 + 76) = *(_DWORD *)(a2 + 212);
  if ( *(_DWORD *)a2 )
    v5 = *(_WORD *)a2;
  else
    v5 = -1;
  *(_WORD *)(a1 + 8) = v5;
  v6 = *(_QWORD *)(a2 + 48);
  if ( v6 )
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(v6 + 1600);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 200);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  ExAcquirePushLockExclusiveEx(a2 + 688, 0LL);
  v8 = *(_WORD *)(a2 + 152);
  if ( v8 && *(_WORD *)(a1 + 130) )
  {
    if ( PreviousMode )
      ProbeForWrite(*(volatile void **)(a1 + 136), v8 + 2LL, 2u);
    RtlCopyUnicodeString((PUNICODE_STRING)(a1 + 128), (PCUNICODE_STRING)(a2 + 152));
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 688), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 688));
  KeAbPostRelease(a2 + 688);
  v9 = *(_WORD *)(a2 + 136);
  if ( v9
    && *(_WORD *)(a1 + 146)
    && !RtlEqualUnicodeString((PCUNICODE_STRING)(a2 + 136), (PCUNICODE_STRING)(a1 + 144), 0) )
  {
    if ( PreviousMode )
      ProbeForWrite(*(volatile void **)(a1 + 152), v9 + 2LL, 2u);
    RtlCopyUnicodeString((PUNICODE_STRING)(a1 + 144), (PCUNICODE_STRING)(a2 + 136));
  }
  return 0LL;
}
