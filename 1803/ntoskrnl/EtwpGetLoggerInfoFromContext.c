/*
 * XREFs of EtwpGetLoggerInfoFromContext @ 0x14058B16C
 * Callers:
 *     EtwpFlushTrace @ 0x140580054 (EtwpFlushTrace.c)
 *     EtwpStopTrace @ 0x140589108 (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x14058A5A4 (EtwpStartLogger.c)
 *     EtwpQueryTrace @ 0x14058B85C (EtwpQueryTrace.c)
 *     EtwpUpdateTrace @ 0x140629C7C (EtwpUpdateTrace.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     RtlCopyUnicodeString @ 0x140106C50 (RtlCopyUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     RtlEqualUnicodeString @ 0x1404C91A0 (RtlEqualUnicodeString.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 *     EtwpMapEnableFlags @ 0x1406290D4 (EtwpMapEnableFlags.c)
 */

__int64 __fastcall EtwpGetLoggerInfoFromContext(__int64 a1, int *a2)
{
  unsigned int v4; // ecx
  int v5; // eax
  __int64 v6; // rax
  char PreviousMode; // r12
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int16 v11; // ax
  char v12; // al
  unsigned __int16 v13; // r14
  __int64 v15; // rcx
  __int64 v16; // rax
  _OWORD v17[2]; // [rsp+40h] [rbp-58h] BYREF

  if ( (a2[3] & 0x2000000) != 0 )
  {
    v15 = 32 * (*((unsigned __int8 *)a2 + 834) + 132LL);
    v16 = *((_QWORD *)a2 + 139);
    v17[0] = *(_OWORD *)(v15 + v16);
    v17[1] = *(_OWORD *)(v15 + v16 + 16);
    EtwpMapEnableFlags(v17, 0LL);
    *(_DWORD *)(a1 + 72) = v17[0];
  }
  else
  {
    *(_DWORD *)(a1 + 72) = 0;
  }
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 73);
  *(_DWORD *)(a1 + 64) = a2[3];
  *(_DWORD *)(a1 + 60) = a2[77];
  *(_DWORD *)(a1 + 68) = a2[56];
  *(_DWORD *)(a1 + 48) = (unsigned int)a2[1] >> 10;
  *(_DWORD *)(a1 + 96) = a2[62];
  *(_DWORD *)(a1 + 52) = a2[60];
  *(_DWORD *)(a1 + 56) = a2[63];
  *(_DWORD *)(a1 + 104) = a2[64];
  *(_DWORD *)(a1 + 100) = a2[61];
  v4 = a2[66];
  if ( v4 <= a2[68] )
    v4 = a2[68];
  *(_DWORD *)(a1 + 108) = v4;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(a1 + 80) = ((unsigned int)a2[208] >> 4) & 1;
  *(_DWORD *)(a1 + 112) = a2[67];
  *(_DWORD *)(a1 + 116) = a2[69];
  *(_DWORD *)(a1 + 160) = a2[90];
  *(_DWORD *)(a1 + 76) = a2[57];
  v5 = *a2;
  if ( !*a2 )
    LOWORD(v5) = -1;
  *(_WORD *)(a1 + 8) = v5;
  v6 = *((_QWORD *)a2 + 6);
  if ( v6 )
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(v6 + 1600);
  *(_DWORD *)(a1 + 40) = a2[54];
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(a2 + 176), 0LL);
  v11 = *((_WORD *)a2 + 84);
  if ( v11 && *(_WORD *)(a1 + 130) )
  {
    if ( PreviousMode )
      ProbeForWrite(*(volatile void **)(a1 + 136), v11 + 2LL, 2u);
    RtlCopyUnicodeString((PUNICODE_STRING)(a1 + 128), (PCUNICODE_STRING)(a2 + 42));
  }
  v12 = _InterlockedExchangeAdd64((volatile signed __int64 *)a2 + 88, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v12 & 2) != 0 && (v12 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)a2 + 88, v8, v9, v10);
  KeAbPostRelease((ULONG_PTR)(a2 + 176));
  v13 = *((_WORD *)a2 + 76);
  if ( v13
    && *(_WORD *)(a1 + 146)
    && !RtlEqualUnicodeString((PCUNICODE_STRING)(a2 + 38), (PCUNICODE_STRING)(a1 + 144), 0) )
  {
    if ( PreviousMode )
      ProbeForWrite(*(volatile void **)(a1 + 152), v13 + 2LL, 2u);
    RtlCopyUnicodeString((PUNICODE_STRING)(a1 + 144), (PCUNICODE_STRING)(a2 + 38));
  }
  return 0LL;
}
