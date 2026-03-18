/*
 * XREFs of KiTimerExpiration @ 0x14020BF44
 * Callers:
 *     KiTimerExpirationDpc @ 0x14020C0F0 (KiTimerExpirationDpc.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KiExpireTimerTable @ 0x14020BD88 (KiExpireTimerTable.c)
 */

void __fastcall KiTimerExpiration(__int64 a1, int a2, unsigned __int64 a3, int *a4)
{
  unsigned __int64 v4; // rsi
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rbx
  unsigned __int64 v12; // rbp
  unsigned int v13; // ebx
  int v14; // ebp
  int v15; // eax
  unsigned int v16; // eax
  _QWORD v17[2]; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 v18; // [rsp+50h] [rbp-68h] BYREF
  char v19; // [rsp+58h] [rbp-60h]

  v4 = 0LL;
  if ( KiSerializeTimerExpiration )
  {
    if ( !*(_BYTE *)(a1 + 33) )
      return;
    v9 = KiProcessorBlock[0];
  }
  else
  {
    v9 = a1;
  }
  v10 = v9 + 13952;
  if ( v9 != -13952 )
  {
    v11 = 2LL * *(unsigned int *)(a1 + 26624);
    *(_DWORD *)(a1 + 26624) = ((unsigned __int8)*(_DWORD *)(a1 + 26624) + 1) & 0xF;
    *(_QWORD *)(a1 + 8 * v11 + 26632) = a3;
    *(LARGE_INTEGER *)(a1 + 8 * v11 + 26640) = KeQueryPerformanceCounter(0LL);
    v12 = a3 >> 18;
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    {
      v18 = a3;
      v17[0] = &v18;
      v19 = 0;
      v17[1] = 16LL;
      EtwTraceKernelEvent((__int64)v17, 1u, 0x40020000u, 0xF50u, 0x602u);
    }
    v13 = v12 - a2 + 1;
    if ( v13 > 0x100 )
      v4 = (v12 - v13 + 1) << 18;
    do
    {
      if ( v13 <= 0x100 )
      {
        v14 = v13;
        v15 = 256 - v13;
        v4 = a3;
        if ( 256 - v13 > 0x18 )
          v15 = 24;
      }
      else
      {
        v4 += 0x4000000LL;
        v14 = 256;
        v15 = 0;
      }
      KiExpireTimerTable(a1, v10, a2, v14, v15, v4, a4);
      a2 += v14;
      v13 -= v14;
    }
    while ( v13 );
    if ( (*(_BYTE *)(a1 + 11884) & 8) == 0 )
    {
      *(_DWORD *)(a1 + 23460) = 0;
      v16 = *(_DWORD *)(a1 + 23464);
      if ( v16 < KeTimeIncrement )
        *(_DWORD *)(a1 + 23464) = 0;
      else
        *(_DWORD *)(a1 + 23464) = v16 - KeTimeIncrement;
    }
  }
}
