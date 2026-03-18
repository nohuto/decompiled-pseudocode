/*
 * XREFs of PpmEstimateIdleDuration @ 0x14015BDC0
 * Callers:
 *     PpmIdleSelectStates @ 0x14015B9D0 (PpmIdleSelectStates.c)
 *     PpmComputeIdleDurationHint @ 0x14015BD14 (PpmComputeIdleDurationHint.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x1400459E0 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x140089100 (KeGetPrcb.c)
 *     KeEstimateClockTickDuration @ 0x14015BF20 (KeEstimateClockTickDuration.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PpmGetIdleConstrainedMask @ 0x140227C58 (PpmGetIdleConstrainedMask.c)
 */

__int64 __fastcall PpmEstimateIdleDuration(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6,
        __int64 a7,
        _DWORD *a8)
{
  unsigned __int64 v9; // r13
  __int64 v11; // rax
  unsigned __int64 v13; // rbx
  int v14; // edx
  __int64 v15; // r9
  unsigned int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned __int64 v19; // rdi
  unsigned int v20; // ecx
  ULONG v21; // eax
  __int64 result; // rax
  _DWORD *v23; // rsi
  __int64 Prcb; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  _DWORD *v27; // [rsp+30h] [rbp-128h] BYREF
  unsigned __int64 v28; // [rsp+38h] [rbp-120h] BYREF
  unsigned __int64 v29; // [rsp+40h] [rbp-118h]
  unsigned __int16 *v30[2]; // [rsp+48h] [rbp-110h] BYREF
  __int16 v31; // [rsp+58h] [rbp-100h]
  _BYTE v32[8]; // [rsp+60h] [rbp-F8h] BYREF
  unsigned __int16 *v33; // [rsp+68h] [rbp-F0h]

  v9 = 0LL;
  v29 = a3;
  v11 = *(_QWORD *)(a1 + 23936);
  v13 = -1LL;
  v27 = a8;
  v14 = *(unsigned __int8 *)(v11 + 540);
  *a8 = 0;
  if ( *(_BYTE *)(a1 + 33) )
    *a8 = 8;
  if ( a2 )
    *a8 |= 4u;
  KeEstimateClockTickDuration(a1, v14, a2, a3, (__int64)&v28, a7);
  v16 = *(_DWORD *)(a1 + 11684);
  v17 = 0LL;
  v18 = v16;
  if ( v16 )
  {
    do
    {
      v18 = (unsigned int)v18 >> 4;
      v17 = KeMaximumIncrement + (unsigned int)v17;
    }
    while ( (_DWORD)v18 );
  }
  v19 = (unsigned int)v17;
  if ( !a2 && v16 )
  {
    v20 = v16 + 1;
    v17 = KeMaximumIncrement % v20;
    v21 = KeMaximumIncrement / v20;
    if ( !(KeMaximumIncrement / v20) )
      v21 = 1;
    v13 = v21;
  }
  result = v28;
  v23 = v27;
  if ( v28 <= v13 )
  {
    v13 = v28;
    v19 = v28;
  }
  else
  {
    if ( v28 < v19 )
      v19 = v28;
    *v27 |= 1u;
  }
  if ( PpmIdleDurationExpirationTimeout )
  {
    if ( *(_BYTE *)(a1 + 33) )
    {
      result = PpmGetIdleConstrainedMask(v32, v17, v18, v15);
      if ( (_BYTE)result )
      {
        v30[1] = v33;
        v30[0] = (unsigned __int16 *)v32;
        v31 = 0;
        while ( 1 )
        {
          result = KeEnumerateNextProcessor(&v27, v30);
          if ( (_DWORD)result )
            break;
          Prcb = KeGetPrcb((ULONG)v27);
          v25 = *(_QWORD *)(Prcb + 23976);
          if ( v25 != -1LL && v25 > v9 )
            v9 = *(_QWORD *)(Prcb + 23976);
        }
        if ( v9 )
        {
          v26 = v29;
          result = v29 + v19;
          if ( v29 + v19 > v9 )
          {
            *v23 |= 0x2000u;
            v19 = v9 > v26 ? (unsigned int)(v9 - v26) : 1LL;
            if ( v19 < v13 )
              v13 = v19;
          }
        }
      }
    }
  }
  if ( v13 < a4 )
  {
    *v23 |= 0x1000u;
    *a6 = a4;
    *a5 = a4;
  }
  else
  {
    *a6 = v19;
    *a5 = v13;
  }
  return result;
}
