/*
 * XREFs of sub_1801055C8 @ 0x1801055C8
 * Callers:
 *     sub_180012270 @ 0x180012270 (sub_180012270.c)
 * Callees:
 *     sub_180003864 @ 0x180003864 (sub_180003864.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800624DC @ 0x1800624DC (sub_1800624DC.c)
 *     sub_18006337C @ 0x18006337C (sub_18006337C.c)
 *     sub_1800FC524 @ 0x1800FC524 (sub_1800FC524.c)
 *     sub_180104BE8 @ 0x180104BE8 (sub_180104BE8.c)
 */

__int64 __fastcall sub_1801055C8(__int64 a1, unsigned __int64 a2, void *a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rdi
  __int64 v11; // rcx
  int v12; // r13d
  unsigned __int64 v13; // rax
  volatile signed __int64 *v14; // r10
  __int64 v15; // r9
  __int64 v16; // r8
  __int128 v17; // xmm0
  unsigned __int64 v18; // r12
  __int64 v19; // rcx
  __int128 v20; // xmm0
  __int64 v21; // rcx
  unsigned __int64 *v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rdi
  __int64 v29; // [rsp+30h] [rbp-50h] BYREF
  __int64 v30; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int64 v31; // [rsp+40h] [rbp-40h]
  unsigned __int64 v32; // [rsp+48h] [rbp-38h]
  unsigned __int64 v33; // [rsp+50h] [rbp-30h]
  __int128 v34; // [rsp+60h] [rbp-20h] BYREF
  __int128 v35; // [rsp+70h] [rbp-10h] BYREF
  int v36; // [rsp+C8h] [rbp+48h]

  v36 = a2;
  v4 = *(_QWORD *)(a4 + 32);
  v8 = (unsigned __int64)(*(_QWORD *)(a4 + 8) + 4095LL) >> 12;
  v9 = (v4 + 4095) >> 12;
  v33 = v9 << 12;
  if ( v9 << 12 < v4 )
    return 0LL;
  if ( v9 > v8 || (v11 = *(_QWORD *)a1, BYTE1(*(_QWORD *)a1) >= 2u) && (v11 & 6) == 0 )
  {
    if ( (a2 & 0x2000000) == 0 )
      return sub_180104BE8((unsigned int *)a1, a3, a4, a2);
    return 0LL;
  }
  v12 = a2 & 1;
  if ( (a2 & 1) == 0 )
    RtlAcquireSRWLockExclusive(a1 + 72, a2, (unsigned __int64 *)a3, a4);
  v13 = sub_18006337C(a1, (unsigned __int64)a3);
  v32 = v13;
  if ( v13 )
  {
    v15 = *(_QWORD *)(v13 + 32) & 0xFFFLL;
    v16 = ((*(_QWORD *)(v13 + 32) >> 12) + ((*(_QWORD *)(v13 + 32) >> 1) & 1LL)) << 12;
    v31 = (1LL << (((unsigned __int8)*(_QWORD *)(v13 + 32) >> 2) & 0x3F))
        - (((1LL << (((unsigned __int8)*(_QWORD *)(v13 + 32) >> 2) & 0x3F)) - 1) & ((1LL << (((unsigned __int8)*(_QWORD *)(v13 + 32) >> 2) & 0x3F))
                                                                                  + v16
                                                                                  - 1))
        + v16
        - 1;
    *(_QWORD *)(v13 + 32) = (v9 << 12) | v15;
    *(_WORD *)(v13 + 24) = ((_WORD)v9 << 12) - *(_WORD *)(a4 + 24);
    if ( !v12 )
      RtlReleaseSRWLockExclusive(v14);
    if ( *(_DWORD *)(a4 + 16) )
      sub_180003864((__int64)a3, *(_QWORD *)a4, (__int64)a3, *(_QWORD *)(a4 + 24), v36);
    if ( v9 < v8 )
    {
      v17 = *(_OWORD *)a1;
      v18 = v32;
      v29 = (__int64)a3;
      v34 = v17;
      v29 = (__int64)a3 + 4096 * (v9 + ((*(_DWORD *)(v32 + 32) >> 1) & 1));
      v30 = (__int64)a3 + v31 - v29;
      sub_1800624DC((unsigned __int64 *)&v29, (unsigned __int64 *)&v30, 0x8000, &v34);
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v19 = (__int64)NtCurrentPeb()->HotpatchInformation + 558;
      else
        v19 = 2147353480LL;
      if ( *(_BYTE *)v19 )
        sub_1800FC524(a1, v29, v30);
      v20 = *(_OWORD *)a1;
      v31 -= v30;
      v21 = v29 - ((_QWORD)a3 + v33);
      v29 = (__int64)a3 + v33;
      v30 = v21;
      v35 = v20;
      sub_1800624DC((unsigned __int64 *)&v29, (unsigned __int64 *)&v30, 0x4000, &v35);
      _BitScanForward64(&v24, v31);
      v25 = *(_QWORD *)(v18 + 32);
      v33 = (unsigned int)v24;
      if ( (unsigned int)v24 != (unsigned __int64)((unsigned __int8)v25 >> 2) )
      {
        if ( v12 )
        {
          v26 = v32;
        }
        else
        {
          RtlAcquireSRWLockExclusive(a1 + 72, v25, v22, v23);
          v26 = v32;
          v25 = *(_QWORD *)(v32 + 32);
        }
        *(_QWORD *)(v26 + 32) = v25 ^ (unsigned __int8)(v25 ^ (4 * v33)) & 0xFC;
        if ( !v12 )
          RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 72));
      }
      v27 = v9 - v8;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 104), v27);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 96), v27);
    }
    return (__int64)a3;
  }
  else
  {
    if ( !v12 )
      RtlReleaseSRWLockExclusive(v14);
    return -1LL;
  }
}
