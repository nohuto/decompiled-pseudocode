/*
 * XREFs of EtwpGetLoggerInfoFromContext @ 0x1404EDB70
 * Callers:
 *     EtwpUpdateTrace @ 0x140450B18 (EtwpUpdateTrace.c)
 *     EtwpStartLogger @ 0x1404ECD4C (EtwpStartLogger.c)
 *     EtwpQueryTrace @ 0x1404ED7B8 (EtwpQueryTrace.c)
 *     EtwpStopTrace @ 0x1404F0484 (EtwpStopTrace.c)
 *     EtwpFlushTrace @ 0x1405959E0 (EtwpFlushTrace.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     RtlCopyUnicodeString @ 0x140085200 (RtlCopyUnicodeString.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     RtlEqualUnicodeString @ 0x140483080 (RtlEqualUnicodeString.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
 *     EtwpMapEnableFlags @ 0x140749890 (EtwpMapEnableFlags.c)
 */

__int64 __fastcall EtwpGetLoggerInfoFromContext(__int64 a1, __int64 a2)
{
  unsigned int v4; // ecx
  __int16 v5; // ax
  __int64 v6; // rax
  char PreviousMode; // r12
  unsigned __int16 v8; // ax
  char v9; // cl
  unsigned __int16 v10; // r14
  __int64 v12; // rcx
  __int64 v13; // rax
  _OWORD v14[2]; // [rsp+40h] [rbp-58h] BYREF

  if ( (*(_DWORD *)(a2 + 12) & 0x2000000) != 0 )
  {
    v12 = 32LL * *(unsigned __int8 *)(a2 + 834);
    v13 = *(_QWORD *)(a2 + 2256);
    v14[0] = *(_OWORD *)(v12 + v13 + 4208);
    v14[1] = *(_OWORD *)(v12 + v13 + 4224);
    EtwpMapEnableFlags(v14, 0LL);
    *(_DWORD *)(a1 + 72) = v14[0];
  }
  else
  {
    *(_DWORD *)(a1 + 72) = 0;
  }
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 292);
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a1 + 60) = *(_DWORD *)(a2 + 308);
  *(_DWORD *)(a1 + 68) = *(_DWORD *)(a2 + 224);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 4) >> 10;
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 248);
  *(_DWORD *)(a1 + 52) = *(_DWORD *)(a2 + 240);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 252);
  *(_DWORD *)(a1 + 104) = *(_DWORD *)(a2 + 256);
  *(_DWORD *)(a1 + 100) = *(_DWORD *)(a2 + 244);
  v4 = *(_DWORD *)(a2 + 272);
  if ( *(_DWORD *)(a2 + 264) > v4 )
    v4 = *(_DWORD *)(a2 + 264);
  *(_DWORD *)(a1 + 108) = v4;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(a1 + 80) ^= (*(_DWORD *)(a2 + 832) & 0x10) != 0;
  *(_DWORD *)(a1 + 112) = *(_DWORD *)(a2 + 268);
  *(_DWORD *)(a1 + 116) = *(_DWORD *)(a2 + 276);
  *(_DWORD *)(a1 + 160) = *(_DWORD *)(a2 + 360);
  *(_DWORD *)(a1 + 76) = *(_DWORD *)(a2 + 228);
  if ( *(_DWORD *)a2 )
    v5 = *(_WORD *)a2;
  else
    v5 = -1;
  *(_WORD *)(a1 + 8) = v5;
  v6 = *(_QWORD *)(a2 + 48);
  if ( v6 )
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(v6 + 1600);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 216);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  ExAcquirePushLockExclusiveEx(a2 + 704, 0LL);
  v8 = *(_WORD *)(a2 + 168);
  if ( v8 && *(_WORD *)(a1 + 130) )
  {
    if ( PreviousMode )
      ProbeForWrite(*(volatile void **)(a1 + 136), v8 + 2LL, 2u);
    RtlCopyUnicodeString((PUNICODE_STRING)(a1 + 128), (PCUNICODE_STRING)(a2 + 168));
  }
  v9 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 704), 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v9 & 2) != 0 && (v9 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 704));
  KeAbPostRelease(a2 + 704);
  v10 = *(_WORD *)(a2 + 152);
  if ( v10
    && *(_WORD *)(a1 + 146)
    && !RtlEqualUnicodeString((PCUNICODE_STRING)(a2 + 152), (PCUNICODE_STRING)(a1 + 144), 0) )
  {
    if ( PreviousMode )
      ProbeForWrite(*(volatile void **)(a1 + 152), v10 + 2LL, 2u);
    RtlCopyUnicodeString((PUNICODE_STRING)(a1 + 144), (PCUNICODE_STRING)(a2 + 152));
  }
  return 0LL;
}
