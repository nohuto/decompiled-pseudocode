/*
 * XREFs of KiCancelTimer @ 0x1400E22F0
 * Callers:
 *     KiSuspendThread @ 0x1400ABB8C (KiSuspendThread.c)
 *     KeCancelTimerInternal @ 0x1400D3430 (KeCancelTimerInternal.c)
 *     ExpCancelTimer @ 0x1400E1D98 (ExpCancelTimer.c)
 *     KiSetTimerEx @ 0x1400E1F70 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1400E2110 (KeCancelTimer.c)
 *     KeSetTimerEx @ 0x1400E2140 (KeSetTimerEx.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

__int64 __fastcall KiCancelTimer(__int64 a1, char a2)
{
  unsigned __int8 v2; // di
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  unsigned __int64 v8; // r14
  __int64 v9; // r15
  volatile signed __int32 *v10; // rsi
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  unsigned int v13; // r12d
  __int64 v14; // r14
  unsigned int v15; // eax
  int v16; // eax
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
    {
      if ( a2 )
        _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
      goto LABEL_6;
    }
    v6 = *(unsigned __int8 *)(a1 + 2);
    v7 = *(unsigned int *)(a1 + 56);
    v8 = v6;
    v18 = 0;
    v9 = KiProcessorBlock[v7] + 13952;
    v10 = (volatile signed __int32 *)(v9 + 32 * (v6 + 16));
    while ( _interlockedbittestandset64(v10, 0LL) )
    {
      do
        KeYieldProcessorEx(&v18);
      while ( *(_QWORD *)v10 );
    }
    if ( *(char *)(a1 + 3) >= 0 )
    {
      v11 = *(_QWORD **)(a1 + 32);
      v12 = *(_QWORD **)(a1 + 40);
      if ( v11[1] != a1 + 32 || *v12 != a1 + 32 )
        __fastfail(3u);
      *v12 = v11;
      v11[1] = v12;
      if ( v12 == v11 )
      {
        *(_DWORD *)(32 * (v6 + 16) + v9 + 28) = -1;
        if ( KiSerializeTimerExpiration )
        {
          v13 = v6 & 0x3F;
          v14 = 8 * (v8 >> 6);
        }
        else
        {
          v13 = *(unsigned __int8 *)(v9 - 13743);
          v14 = v8 << 6;
        }
        _interlockedbittestandreset64(
          (volatile signed __int32 *)(qword_140402288[2 * *(unsigned __int8 *)(v9 - 13744)] + v14),
          v13);
      }
      _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
      v15 = -1073741953;
      if ( !a2 )
        v15 = -1073741825;
      _InterlockedAnd((volatile signed __int32 *)a1, v15);
      v2 = 1;
      goto LABEL_6;
    }
    _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
    if ( _InterlockedExchange64((volatile __int64 *)(v9 + 8LL * (*(_BYTE *)(a1 + 3) & 0x3F)), 0LL) )
      break;
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    v19 = 0;
    while ( *(char *)(a1 + 3) < 0 )
      KeYieldProcessorEx(&v19);
  }
  v16 = -16777216;
  if ( a2 )
    v16 = -16777088;
  _InterlockedAnd((volatile signed __int32 *)a1, ~v16);
  v2 = 1;
LABEL_6:
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 && v2 )
  {
    v20 = a1;
    v21[0] = &v20;
    v21[1] = 8LL;
    EtwTraceKernelEvent((__int64)v21, 1u, 0x40020000u, 0xF55u, 0x602u);
  }
  return v2;
}
