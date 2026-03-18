/*
 * XREFs of KiCheckForTimerExpiration @ 0x140098BB0
 * Callers:
 *     KeAccumulateTicks @ 0x1400987C0 (KeAccumulateTicks.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     KiResetClockInterval @ 0x14010F138 (KiResetClockInterval.c)
 *     KiSetClockInterval @ 0x14010F168 (KiSetClockInterval.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x14012C3A8 (PoTraceSystemTimerResolutionKernel.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

void __fastcall KiCheckForTimerExpiration(__int64 a1)
{
  unsigned __int64 v2; // rdi
  char v3; // r10
  __int64 v4; // rdx
  char v5; // r11
  __int64 v6; // r9
  __int64 v7; // r9
  int v8; // ecx
  int v9; // r8d
  int v10; // edx
  unsigned __int64 v11; // rax
  char v12; // dl
  unsigned __int16 v13; // ax
  __int64 v14; // rcx
  unsigned __int16 v15; // tt
  char v16; // cl
  unsigned int v17; // esi
  unsigned __int8 CurrentIrql; // bp
  char v19; // al
  __int16 v20; // cx
  unsigned __int64 v21; // [rsp+30h] [rbp-48h] BYREF
  __int16 v22; // [rsp+38h] [rbp-40h]
  _QWORD v23[2]; // [rsp+40h] [rbp-38h] BYREF

  v2 = MEMORY[0xFFFFF78000000008];
  if ( (*(_BYTE *)(a1 + 11884) & 8) != 0 )
    goto LABEL_13;
  if ( *(_QWORD *)(a1 + 11688) == KiLastNonHrTimerExpiration )
  {
    v5 = 0;
    goto LABEL_12;
  }
  v3 = 0;
  v4 = MEMORY[0xFFFFF78000000008] >> 18;
  v5 = 1;
  if ( KiSerializeTimerExpiration )
  {
    if ( !*(_BYTE *)(a1 + 33) )
      goto LABEL_17;
    v6 = KiProcessorBlock[0];
  }
  else
  {
    v6 = a1;
  }
  v7 = v6 + 13952;
  if ( !v7 )
  {
LABEL_17:
    *(_DWORD *)(a1 + 11888) = v4;
    goto LABEL_13;
  }
  v8 = *(_DWORD *)(a1 + 11888);
  v9 = v8 + 255;
  if ( (unsigned int)(v4 - v8) < 0x100 )
    v9 = MEMORY[0xFFFFF78000000008] >> 18;
  v10 = v8 - 1;
  while ( MEMORY[0xFFFFF78000000008] < *(_QWORD *)(32LL * (unsigned __int8)++v10 + v7 + 536) )
  {
    if ( v10 == v9 )
      goto LABEL_11;
  }
  v3 = 1;
LABEL_11:
  *(_DWORD *)(a1 + 11888) = v10;
  if ( !v3 )
  {
LABEL_12:
    if ( !*(_BYTE *)(a1 + 33) )
      goto LABEL_13;
    if ( v5 )
    {
      if ( KiNextTimer2DueTime > v2 )
        goto LABEL_13;
    }
    else if ( qword_140371268 > v2 )
    {
      goto LABEL_13;
    }
  }
  _m_prefetchw((const void *)(a1 + 11884));
  v13 = *(_WORD *)(a1 + 11884);
  do
  {
    v14 = v13;
    BYTE1(v14) = HIBYTE(v13);
    v15 = v13;
    v13 = _InterlockedCompareExchange16((volatile signed __int16 *)(a1 + 11884), v13 | 8, v13);
  }
  while ( v15 != v13 );
  if ( (v13 & 0x29) == 0 )
  {
    if ( *(_BYTE *)(a1 + 32) )
    {
      *(_BYTE *)(a1 + 6) = 1;
    }
    else
    {
      LOBYTE(v14) = 2;
      HalRequestSoftwareInterrupt(v14);
    }
  }
LABEL_13:
  if ( *(_BYTE *)(a1 + 33) )
  {
    v11 = v2 + KeMaximumIncrement;
    v12 = KiHRTimerClockActive;
    if ( KiHRTimerClockActive )
    {
      if ( v11 > qword_140371268 )
        goto LABEL_14;
    }
    else if ( v11 <= qword_140371268 )
    {
      goto LABEL_14;
    }
    v16 = 0;
    v17 = 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( v12 == KiHRTimerClockActive )
    {
      if ( v12 )
      {
        KiResetClockInterval(&KiHRTimerClockRequest);
        v19 = 0;
      }
      else
      {
        KiSetClockInterval((unsigned int)KiHrIncrement, 0LL, &KiHRTimerClockRequest);
        v17 = KiHrIncrement;
        v19 = 1;
      }
      KiHRTimerClockActive = v19;
      v16 = 1;
    }
    __writecr8(CurrentIrql);
    if ( v16 )
      PoTraceSystemTimerResolutionKernel(v17, 1834242632LL);
  }
LABEL_14:
  if ( (DWORD2(PerfGlobalGroupMask) & 0x40000) != 0 && KeGetCurrentIrql() == 13 )
  {
    v20 = 0;
    v21 = v2;
    v22 = 0;
    if ( *(_BYTE *)(a1 + 33) )
    {
      v20 = 1;
      v22 = 1;
    }
    if ( (*(_BYTE *)(a1 + 11884) & 8) != 0 )
      v22 = v20 | 8;
    v23[1] = 16LL;
    v23[0] = &v21;
    EtwTraceKernelEvent((unsigned int)v23, 1, 1074003968, 3919, 4196866);
  }
}
