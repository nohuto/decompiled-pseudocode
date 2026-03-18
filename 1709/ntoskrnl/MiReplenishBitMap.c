/*
 * XREFs of MiReplenishBitMap @ 0x1400E6290
 * Callers:
 *     MiInsertCachedPte @ 0x1400753D0 (MiInsertCachedPte.c)
 *     MiEmptyPteBins @ 0x1400A4EA0 (MiEmptyPteBins.c)
 * Callees:
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiAttemptCoalesce @ 0x1400E6760 (MiAttemptCoalesce.c)
 *     MiFlushTbListEarly @ 0x1400E94BC (MiFlushTbListEarly.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiGetPteTimeStamp @ 0x14017C6B8 (MiGetPteTimeStamp.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

__int64 __fastcall MiReplenishBitMap(__int64 a1, ULONG_PTR a2, int a3)
{
  ULONG_PTR v3; // rax
  __int64 v4; // r14
  __int64 v5; // r13
  unsigned int v6; // r15d
  int v7; // r12d
  ULONG_PTR v8; // rdi
  ULONG_PTR BugCheckParameter4; // rsi
  __int64 v10; // r11
  __int64 PteShadow; // r9
  unsigned __int64 v12; // r10
  __int64 PteTimeStamp; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned int v16; // eax
  ULONG_PTR v17; // r10
  __int64 v18; // r11
  ULONG_PTR v19; // rbp
  __int64 v20; // rax
  unsigned __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  ULONG_PTR v25; // r11
  __int64 v26; // rcx
  __int64 *v27; // r8
  __int64 *v28; // r9
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  __int64 *v31; // r8
  _KPROCESS *v32; // rdx
  ULONG_PTR v33; // r11
  ULONG_PTR v34; // r10
  unsigned __int64 v35; // r9
  volatile signed __int32 *v36; // r8
  int v37; // eax
  unsigned __int64 v38; // rdx
  signed __int32 v40[8]; // [rsp+0h] [rbp-158h] BYREF
  int v41; // [rsp+30h] [rbp-128h]
  __int64 v42; // [rsp+38h] [rbp-120h]
  ULONG_PTR v43; // [rsp+40h] [rbp-118h]
  int v44; // [rsp+50h] [rbp-108h] BYREF
  __int16 v45; // [rsp+54h] [rbp-104h]
  __int64 v46; // [rsp+58h] [rbp-100h]
  __int64 v47; // [rsp+60h] [rbp-F8h]
  __int64 v48; // [rsp+68h] [rbp-F0h]

  v43 = a2;
  v42 = a1;
  v3 = a2;
  v4 = a1;
  v5 = 0LL;
  v6 = 0;
  if ( a3 == 1 )
  {
    v46 = 20LL;
    v44 = 0;
    v45 = 0;
    v47 = 0LL;
    v48 = 0LL;
    _InterlockedOr(v40, 0);
    v7 = KiTbFlushTimeStamp;
    v41 = KiTbFlushTimeStamp;
  }
  else
  {
    v6 = 1;
    v41 = 0;
    v7 = 0;
    HIDWORD(v46) = 0;
  }
  do
  {
    v8 = 0LL;
    BugCheckParameter4 = v3;
    do
    {
      v10 = *(_QWORD *)(v4 + 16);
      PteShadow = *(_QWORD *)(v10 + 8 * BugCheckParameter4);
      v12 = v10 + 8 * BugCheckParameter4;
      if ( v12 >= 0xFFFFF6FB7DBED000uLL && v12 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow(v10 + 8 * BugCheckParameter4, *(_QWORD *)(v10 + 8 * BugCheckParameter4));
      if ( (PteShadow & 0xF000) == 0x1000 )
      {
        PteTimeStamp = 1LL;
      }
      else
      {
        v14 = *(_QWORD *)(v12 + 8);
        v15 = v12 + 8;
        if ( v12 + 8 >= 0xFFFFF6FB7DBED000uLL && v15 <= 0xFFFFF6FB7DBED7F8uLL )
          v14 = MiReadPteShadow(v15, *(_QWORD *)(v12 + 8));
        PteTimeStamp = (unsigned int)MiGetPteTimeStamp(v14);
      }
      v8 += PteTimeStamp;
      v16 = MiGetPteTimeStamp(PteShadow);
      v19 = v16;
      if ( !v16 )
        goto LABEL_25;
      v20 = *(_QWORD *)(v18 + 8LL * v16);
      v21 = v18 + 8 * v19;
      if ( v21 >= 0xFFFFF6FB7DBED000uLL && v21 <= 0xFFFFF6FB7DBED7F8uLL )
        LOWORD(v20) = MiReadPteShadow(v18 + 8 * v19, *(_QWORD *)(v18 + 8 * v19));
      if ( (v20 & 0xF000) == 0x1000 )
      {
        v22 = 1LL;
      }
      else
      {
        v23 = *(_QWORD *)(v21 + 8);
        v24 = v21 + 8;
        if ( v21 + 8 >= 0xFFFFF6FB7DBED000uLL && v24 <= 0xFFFFF6FB7DBED7F8uLL )
          v23 = MiReadPteShadow(v24, *(_QWORD *)(v21 + 8));
        v22 = (unsigned int)MiGetPteTimeStamp(v23);
      }
      if ( v19 + v22 != BugCheckParameter4 )
      {
LABEL_25:
        v25 = BugCheckParameter4 + v8 - 1;
        if ( v25 >= *(_QWORD *)v4 )
          goto LABEL_69;
        if ( v8 > 1 )
        {
          v26 = *(_QWORD *)(v4 + 8);
          v27 = (__int64 *)(v26 + 8 * (BugCheckParameter4 >> 6));
          v28 = (__int64 *)(v26 + 8 * (v25 >> 6));
          v29 = *v27;
          if ( v27 == v28 )
          {
            v30 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v8) << BugCheckParameter4;
          }
          else
          {
            if ( ((-1LL << BugCheckParameter4) & v29) != -1LL << BugCheckParameter4 )
              goto LABEL_69;
            v31 = v27 + 1;
            if ( v31 != v28 )
            {
              while ( *v31 == -1 )
              {
                if ( ++v31 == v28 )
                  goto LABEL_36;
              }
LABEL_69:
              KeBugCheckEx(0xDAu, 0x504uLL, v17, v8, BugCheckParameter4);
            }
LABEL_36:
            v29 = *v31;
            v30 = 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v25;
          }
          if ( (v30 & v29) != v30 )
            goto LABEL_69;
        }
        else if ( v8 != 1 || !_bittest64(*(const signed __int64 **)(v4 + 8), BugCheckParameter4) )
        {
          goto LABEL_69;
        }
        if ( !v6 )
        {
          MiInsertTbFlushEntry(&v44, (__int64)(v17 << 25) >> 16, v8, 0);
          if ( (unsigned int)MiFlushTbListEarly(&v44, 1LL) == 1 )
          {
            _InterlockedOr(v40, 0);
            if ( (unsigned int)(KiTbFlushTimeStamp - v7) > 2
              || (v7 & 1) == 0 && (unsigned int)(KiTbFlushTimeStamp - v7) >= 2 )
            {
              goto LABEL_65;
            }
          }
          goto LABEL_62;
        }
        v33 = v8;
        do
        {
          *(_QWORD *)v17 = 0LL;
          if ( v17 >= 0xFFFFF6FB7DBED000uLL && v17 <= 0xFFFFF6FB7DBED7F8uLL )
            MiWritePteShadow(v17, 0LL);
          v17 += 8LL;
          --v33;
        }
        while ( v33 );
        v4 = v42;
        v7 = v41;
        v34 = BugCheckParameter4 & 0x1F;
        v35 = v8;
        v36 = (volatile signed __int32 *)(*(_QWORD *)(v42 + 8) + 4 * (BugCheckParameter4 >> 5));
        if ( v34 + v8 > 0x20 )
        {
          if ( (BugCheckParameter4 & 0x1F) != 0 )
          {
            _InterlockedAnd(v36, ~(((1 << (32 - (BugCheckParameter4 & 0x1F))) - 1) << v34));
            v35 = v8 - (32 - (unsigned int)(BugCheckParameter4 & 0x1F));
            ++v36;
          }
          if ( v35 >= 0x20 )
          {
            v38 = v35 >> 5;
            v35 += -32LL * (v35 >> 5);
            do
            {
              *v36++ = 0;
              --v38;
            }
            while ( v38 );
          }
          if ( !v35 )
            goto LABEL_61;
          v37 = (1 << v35) - 1;
        }
        else
        {
          if ( v8 == 32 )
          {
            *v36 = 0;
LABEL_61:
            MiAttemptCoalesce(v4, BugCheckParameter4, v8);
            v5 += v8;
LABEL_62:
            v8 = 0LL;
            goto LABEL_63;
          }
          v37 = ((1 << v8) - 1) << v34;
        }
        _InterlockedAnd(v36, ~v37);
        goto LABEL_61;
      }
LABEL_63:
      BugCheckParameter4 = v19;
      v32 = (_KPROCESS *)0xFFFFF6FB7DBED000LL;
    }
    while ( v19 );
    if ( !v6 )
    {
LABEL_65:
      if ( HIDWORD(v46) )
        MiFlushTbList((__int64)&v44, v32);
    }
    v3 = v43;
    ++v6;
  }
  while ( v6 < 2 );
  return v5;
}
