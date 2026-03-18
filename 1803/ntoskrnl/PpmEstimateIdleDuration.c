/*
 * XREFs of PpmEstimateIdleDuration @ 0x140271D48
 * Callers:
 *     PpmIdleSelectStates @ 0x14015F520 (PpmIdleSelectStates.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140034620 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x140036E98 (KeGetPrcb.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeEstimateClockTickDuration @ 0x140240790 (KeEstimateClockTickDuration.c)
 *     PpmGetIdleConstrainedMask @ 0x140272040 (PpmGetIdleConstrainedMask.c)
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
  unsigned __int64 v10; // rdi
  char v13; // dl
  int v14; // eax
  unsigned int v15; // edx
  unsigned int v16; // ecx
  unsigned int i; // eax
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rsi
  ULONG v20; // eax
  __int64 Prcb; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 *result; // rax
  ULONG v24; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 *v26; // [rsp+40h] [rbp-C0h]
  unsigned __int64 *v27; // [rsp+48h] [rbp-B8h]
  unsigned __int16 *v28[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v29; // [rsp+60h] [rbp-A0h]
  char v30[8]; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 *v31; // [rsp+78h] [rbp-88h]

  v27 = a5;
  v10 = -1LL;
  v26 = a6;
  v13 = *(_BYTE *)(*(_QWORD *)(a1 + 23808) + 540LL);
  v14 = 0;
  *a8 = 0;
  if ( *(_BYTE *)(a1 + 33) )
  {
    v14 = 8;
    *a8 = 8;
  }
  if ( a2 )
    *a8 = v14 | 4;
  KeEstimateClockTickDuration(a1, v13, a2, a3, (__int64 *)&v25, a7);
  v15 = *(_DWORD *)(a1 + 11684);
  v16 = 0;
  for ( i = v15; i; i >>= 4 )
    v16 += KeMaximumIncrement;
  v18 = v16;
  if ( a2 )
  {
    v19 = 0LL;
  }
  else
  {
    v19 = 0LL;
    if ( v15 )
    {
      v20 = KeMaximumIncrement / (v15 + 1);
      if ( !v20 )
        v20 = 1;
      v10 = v20;
    }
  }
  if ( v25 <= v10 )
  {
    v10 = v25;
    v18 = v25;
  }
  else
  {
    if ( v25 < v16 )
      v18 = v25;
    *a8 |= 1u;
  }
  if ( PpmIdleDurationExpirationTimeout && *(_BYTE *)(a1 + 33) && (unsigned __int8)PpmGetIdleConstrainedMask(v30) )
  {
    v28[1] = v31;
    v28[0] = (unsigned __int16 *)v30;
    v29 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v24, v28) )
    {
      Prcb = KeGetPrcb(v24);
      v22 = *(_QWORD *)(Prcb + 23848);
      if ( v22 != -1LL && v22 > v19 )
        v19 = *(_QWORD *)(Prcb + 23848);
    }
    if ( v19 && a3 + v18 > v19 )
    {
      *a8 |= 0x2000u;
      v18 = v19 > a3 ? (unsigned int)(v19 - a3) : 1LL;
      if ( v18 < v10 )
        v10 = v18;
    }
  }
  if ( v10 < a4 )
  {
    *a8 |= 0x1000u;
    v10 = a4;
    v18 = a4;
  }
  *v26 = v18;
  result = v27;
  *v27 = v10;
  return result;
}
