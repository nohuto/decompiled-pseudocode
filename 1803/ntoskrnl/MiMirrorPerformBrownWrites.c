/*
 * XREFs of MiMirrorPerformBrownWrites @ 0x14015649C
 * Callers:
 *     MmDuplicateMemory @ 0x140476A94 (MmDuplicateMemory.c)
 * Callees:
 *     MiPfnReferenceCountIsZero @ 0x1400309A0 (MiPfnReferenceCountIsZero.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030AF8 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiAddLockedPageCharge @ 0x140058004 (MiAddLockedPageCharge.c)
 *     RtlFindNextForwardRunClearCappedEx @ 0x1400D7BF0 (RtlFindNextForwardRunClearCappedEx.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiUnlinkPageFromList @ 0x14011AAD0 (MiUnlinkPageFromList.c)
 *     MiDiscardTransitionPte @ 0x140154D68 (MiDiscardTransitionPte.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MiMirrorPerformBrownWrites(__int64 a1, char a2, _QWORD *a3)
{
  char v3; // r12
  int v4; // r15d
  ULONG_PTR v5; // rdi
  int v6; // r14d
  __int64 v7; // rbp
  unsigned __int64 v8; // r9
  unsigned __int64 i; // r8
  _QWORD *v10; // rsi
  __int64 j; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rsi
  unsigned __int64 NextForwardRunClearCapped; // rax
  __int64 v15; // rdi
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // rdi
  int v18; // r12d
  __int64 v20; // r8
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // rdx
  volatile signed __int32 *v23; // r8
  unsigned int v24; // eax
  unsigned __int64 v25; // rcx
  __int64 v26; // rbp
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // r15
  unsigned __int64 v30; // rsi
  unsigned __int8 v31; // al
  unsigned __int8 v32; // r14
  unsigned __int64 v33; // rdx
  ULONG_PTR v34; // r9
  volatile signed __int32 *v35; // r8
  int v36; // eax
  unsigned __int64 v37; // rcx
  __int64 v38; // rax
  unsigned __int64 v39; // rbp
  unsigned __int64 v40; // r14
  unsigned __int64 v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  int v45; // [rsp+20h] [rbp-68h]
  __int64 v46; // [rsp+28h] [rbp-60h]
  unsigned __int64 v47[11]; // [rsp+30h] [rbp-58h] BYREF
  int v51; // [rsp+A8h] [rbp+20h]

  v3 = a2;
  v4 = 0;
  v45 = 0;
  v5 = 0LL;
  v51 = 0;
  v6 = 0;
  v46 = 0LL;
  v7 = 0LL;
  while ( 1 )
  {
    v8 = v5 & -(__int64)(v5 < qword_1403CBDF0);
    for ( i = qword_1403CBDF0 - 1; i - v8 == -1LL; i = v20 - 1 )
    {
      v13 = -1LL;
LABEL_23:
      if ( !v8 )
        goto LABEL_10;
      v20 = v5 + 1;
      v8 = 0LL;
      if ( v5 + 1 > qword_1403CBDF0 )
        v20 = qword_1403CBDF0;
    }
    v10 = (_QWORD *)(qword_1403CBDF8 + 8 * (v8 >> 6));
    for ( j = ~*v10 | ((1LL << (v8 & 0x3F)) - 1); j == -1; j = ~*v10 )
    {
      if ( (unsigned __int64)++v10 > qword_1403CBDF8 + 8 * (i >> 6) )
        goto LABEL_20;
    }
    _BitScanForward64(&v12, ~j);
    v13 = v12 + (((__int64)v10 - qword_1403CBDF8) >> 3 << 6);
    if ( v13 > i )
    {
LABEL_20:
      v13 = -1LL;
      goto LABEL_23;
    }
    if ( v13 == -1LL )
      goto LABEL_23;
LABEL_10:
    if ( v13 < v5 || v13 == -1LL )
      goto LABEL_19;
    NextForwardRunClearCapped = RtlFindNextForwardRunClearCappedEx((__int64)&qword_1403CBDF0, v13, i, v47);
    v15 = v47[0];
    v16 = NextForwardRunClearCapped;
    if ( !NextForwardRunClearCapped )
      v15 = qword_1403CBDF0;
    v17 = v15 - v13;
    v18 = v3 & 8;
    if ( !v18 )
      goto LABEL_15;
    if ( v6 != 1 )
      break;
    v21 = v13 & 0x1F;
    v22 = v17;
    v23 = (volatile signed __int32 *)(qword_1403CBE08 + 4 * (v13 >> 5));
    if ( v21 + v17 <= 0x20 )
    {
      if ( v17 == 32 )
      {
        *v23 = -1;
        goto LABEL_40;
      }
      v24 = ((1 << v17) - 1) << v21;
      goto LABEL_39;
    }
    if ( (v13 & 0x1F) != 0 )
    {
      _InterlockedOr(v23, ((1 << (32 - (v13 & 0x1F))) - 1) << v21);
      v22 = v17 - (32 - (unsigned int)(v13 & 0x1F));
      ++v23;
    }
    if ( v22 >= 0x20 )
    {
      v25 = v22 >> 5;
      v22 += -32LL * (v22 >> 5);
      do
      {
        *v23++ = -1;
        --v25;
      }
      while ( v25 );
    }
    if ( v22 )
    {
      v24 = (1 << v22) - 1;
LABEL_39:
      _InterlockedOr(v23, v24);
    }
LABEL_40:
    v5 = v16 + v13 + v17;
LABEL_18:
    v7 = v46;
    v3 = a2;
    if ( v5 >= qword_1403CBDF0 )
      goto LABEL_19;
  }
  v16 = 0LL;
  if ( v17 > 0x100 )
    v17 = 256LL;
  v26 = -1LL;
  v27 = v17;
  v5 = v13;
  v28 = 48 * v13 - 0x58000000000LL;
  v29 = v28 + 48 * v27;
  v30 = v28 + 24;
  while ( 1 )
  {
    v31 = MiLockPageInline(v28);
    v32 = v31;
    if ( *(_WORD *)(v30 + 8) || (unsigned __int8)((*(_BYTE *)(v30 + 10) & 7) - 2) > 2u )
    {
      _InterlockedAnd64((volatile signed __int64 *)v30, 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v31);
      if ( v26 != -1 )
        goto LABEL_68;
      goto LABEL_61;
    }
    if ( !(unsigned int)MiUnlinkPageFromList(v28, 0LL) )
      break;
    *(_QWORD *)v30 &= 0xC000000000000000uLL;
    if ( !(unsigned int)MiAddLockedPageCharge(v28, 0) )
    {
      MiPfnReferenceCountIsZero(v28, v5);
      _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_65;
    }
    LOBYTE(v33) = 1;
    v34 = v5 & 0x1F;
    v35 = (volatile signed __int32 *)(qword_1403CBE08 + 4 * (v5 >> 5));
    if ( v34 + 1 > 0x20 )
    {
      if ( (v5 & 0x1F) != 0 )
      {
        _InterlockedAnd(v35++, ~(((1 << (32 - (v5 & 0x1F))) - 1) << v34));
        v33 = 1LL - (32 - (unsigned int)(v5 & 0x1F));
        if ( v33 >= 0x20 )
        {
          v37 = v33 >> 5;
          v33 += -32LL * (v33 >> 5);
          do
          {
            *v35++ = 0;
            --v37;
          }
          while ( v37 );
        }
        if ( !v33 )
          goto LABEL_57;
      }
      v36 = (1 << v33) - 1;
    }
    else
    {
      v36 = 1 << v34;
    }
    _InterlockedAnd(v35, ~v36);
LABEL_57:
    _InterlockedAnd64((volatile signed __int64 *)v30, 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v32);
    v38 = v5;
    if ( v26 != -1 )
      v38 = v26;
    v26 = v38;
LABEL_61:
    v28 += 48LL;
    v30 += 48LL;
    ++v5;
    if ( v28 >= v29 )
    {
      v6 = v51;
      goto LABEL_66;
    }
  }
  MiDiscardTransitionPte(v28);
  _InterlockedAnd64((volatile signed __int64 *)v30, 0x7FFFFFFFFFFFFFFFuLL);
LABEL_65:
  __writecr8(v32);
  v6 = 1;
  v51 = 1;
LABEL_66:
  if ( v26 == -1 )
  {
    v4 = v45;
    goto LABEL_18;
  }
LABEL_68:
  v13 = v26;
  v17 = v5 - v26;
  v7 = v46;
LABEL_15:
  v46 = v17 + v7;
  v45 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64))(a1 + 16))(v13 << 12, v17 << 12);
  v4 = v45;
  if ( v18 )
  {
    v39 = 48 * v13 - 0x58000000000LL;
    v40 = v39 + 48 * v17;
    do
    {
      v41 = (unsigned __int8)MiLockPageInline(v39);
      MiRemoveLockedPageChargeAndDecRef(v39, v42, v43, v44);
      _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v41);
      v39 += 48LL;
    }
    while ( v39 < v40 );
    v4 = v45;
  }
  if ( v4 >= 0 )
  {
    v6 = v51;
    v5 = v13 + v16 + v17;
    goto LABEL_18;
  }
LABEL_19:
  *a3 = v46;
  return (unsigned int)v4;
}
