/*
 * XREFs of PpmEstimateIdleDuration @ 0x14023A918
 * Callers:
 *     PpmIdleSelectStates @ 0x14013A6A0 (PpmIdleSelectStates.c)
 * Callees:
 *     KeGetPrcb @ 0x14008D0A4 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x14008F8D0 (KeEnumerateNextProcessor.c)
 *     PpmGetIdleConstrainedMask @ 0x140142F00 (PpmGetIdleConstrainedMask.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeEstimateClockTickDuration @ 0x140203110 (KeEstimateClockTickDuration.c)
 */

unsigned __int64 *__fastcall PpmEstimateIdleDuration(
        __int64 a1,
        char a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6,
        int *a7,
        int *a8)
{
  unsigned __int64 v9; // rdi
  char v13; // dl
  int v14; // eax
  unsigned int v15; // edx
  unsigned int v16; // ecx
  unsigned int i; // eax
  unsigned __int64 v18; // rbx
  ULONG v19; // eax
  unsigned __int64 v20; // rsi
  __int64 Prcb; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 *result; // rax
  unsigned __int64 v24; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 *v25; // [rsp+38h] [rbp-C8h]
  unsigned __int64 *v26; // [rsp+40h] [rbp-C0h]
  unsigned __int16 *v27[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v28; // [rsp+58h] [rbp-A8h]
  int v29; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 *v30; // [rsp+68h] [rbp-98h]

  v9 = -1LL;
  v26 = a5;
  v25 = a6;
  v13 = *(_BYTE *)(*(_QWORD *)(a1 + 23808) + 540LL);
  v14 = 0;
  *a8 = 0;
  if ( *(_BYTE *)(a1 + 33) )
    v14 = 8;
  *a8 = v14;
  if ( a2 )
    *a8 |= 4u;
  KeEstimateClockTickDuration(a1, v13, a2, a3, &v24, a7);
  v15 = *(_DWORD *)(a1 + 11684);
  v16 = 0;
  for ( i = v15; i; i >>= 4 )
    v16 += KeMaximumIncrement;
  v18 = v16;
  if ( !a2 && v15 )
  {
    v19 = KeMaximumIncrement / (v15 + 1);
    if ( !v19 )
      v19 = 1;
    v9 = v19;
  }
  if ( v24 <= v9 )
  {
    v9 = v24;
    v18 = v24;
  }
  else
  {
    if ( v24 < v16 )
      v18 = v24;
    *a8 |= 1u;
  }
  if ( PpmIdleDurationExpirationTimeout && *(_BYTE *)(a1 + 33) && PpmGetIdleConstrainedMask(&v29) )
  {
    v20 = 0LL;
    v27[1] = v30;
    v27[0] = (unsigned __int16 *)&v29;
    v28 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v24, v27) )
    {
      Prcb = KeGetPrcb(v24);
      v22 = *(_QWORD *)(Prcb + 23848);
      if ( v22 != -1LL && v22 > v20 )
        v20 = *(_QWORD *)(Prcb + 23848);
    }
    if ( v20 && a3 + v18 > v20 )
    {
      *a8 |= 0x2000u;
      v18 = v20 > a3 ? (unsigned int)(v20 - a3) : 1LL;
      if ( v18 < v9 )
        v9 = v18;
    }
  }
  if ( v9 < a4 )
  {
    *a8 |= 0x1000u;
    v9 = a4;
    v18 = a4;
  }
  *v25 = v18;
  result = v26;
  *v26 = v9;
  return result;
}
