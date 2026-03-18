/*
 * XREFs of KiCancelTimer @ 0x14004D1D0
 * Callers:
 *     KeCancelTimerInternal @ 0x140031670 (KeCancelTimerInternal.c)
 *     KeCancelTimer @ 0x14004D010 (KeCancelTimer.c)
 *     KiSetTimerEx @ 0x14004D040 (KiSetTimerEx.c)
 *     KiSuspendThread @ 0x14007301C (KiSuspendThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

__int64 __fastcall KiCancelTimer(__int64 a1, char a2)
{
  unsigned __int8 v2; // di
  unsigned __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // r15
  volatile signed __int32 *v8; // rsi
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  unsigned __int64 v11; // r9
  __int64 v12; // rcx
  unsigned int v13; // r14d
  volatile signed __int32 *v14; // rcx
  int v15; // eax
  int v17; // [rsp+30h] [rbp-58h] BYREF
  int v18; // [rsp+34h] [rbp-54h] BYREF
  int v19; // [rsp+38h] [rbp-50h] BYREF
  __int64 v20; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v21[2]; // [rsp+48h] [rbp-40h] BYREF

  v2 = 0;
  while ( 1 )
  {
    v17 = 0;
    while ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
    {
      do
        KeYieldProcessorEx(&v17);
      while ( (*(_DWORD *)a1 & 0x80u) != 0 );
    }
    if ( (*(_BYTE *)(a1 + 3) & 0xC0) == 0 )
      break;
    v5 = *(unsigned __int8 *)(a1 + 2);
    v6 = *(unsigned int *)(a1 + 56);
    v18 = 0;
    v7 = KiProcessorBlock[v6] + 13952;
    v8 = (volatile signed __int32 *)(v7 + 32 * (v5 + 16));
    while ( _interlockedbittestandset64(v8, 0LL) )
    {
      do
        KeYieldProcessorEx(&v18);
      while ( *(_QWORD *)v8 );
    }
    if ( *(char *)(a1 + 3) >= 0 )
    {
      v9 = *(_QWORD **)(a1 + 32);
      v10 = *(_QWORD **)(a1 + 40);
      v11 = v5;
      if ( v9[1] != a1 + 32 || *v10 != a1 + 32 )
        __fastfail(3u);
      *v10 = v9;
      v9[1] = v10;
      if ( v10 == v9 )
      {
        *(_DWORD *)(32 * (v5 + 16) + v7 + 28) = -1;
        v12 = qword_1403E4FD8[2 * *(unsigned __int8 *)(v7 - 13744)];
        if ( KiSerializeTimerExpiration )
        {
          v13 = v5 & 0x3F;
          v14 = (volatile signed __int32 *)(v12 + 8 * (v11 >> 6));
        }
        else
        {
          v13 = *(unsigned __int8 *)(v7 - 13743);
          v14 = (volatile signed __int32 *)((v11 << 6) + v12);
        }
        _interlockedbittestandreset64(v14, v13);
      }
      _InterlockedAnd64((volatile signed __int64 *)v8, 0LL);
      v15 = 0x40000000;
      if ( a2 )
        v15 = 1073741952;
LABEL_15:
      _InterlockedAnd((volatile signed __int32 *)a1, ~v15);
      v2 = 1;
      goto LABEL_16;
    }
    _InterlockedAnd64((volatile signed __int64 *)v8, 0LL);
    if ( _InterlockedExchange64((volatile __int64 *)(v7 + 8LL * (*(_BYTE *)(a1 + 3) & 0x3F)), 0LL) )
    {
      v15 = -16777216;
      if ( a2 )
        v15 = -16777088;
      goto LABEL_15;
    }
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    v19 = 0;
    while ( *(char *)(a1 + 3) < 0 )
      KeYieldProcessorEx(&v19);
  }
  if ( a2 )
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
LABEL_16:
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 && v2 )
  {
    v20 = a1;
    v21[0] = &v20;
    v21[1] = 8LL;
    EtwTraceKernelEvent((unsigned int)v21, 1, 1073872896, 3925, 1538);
  }
  return v2;
}
