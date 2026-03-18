/*
 * XREFs of MiReplenishBitMap @ 0x140084610
 * Callers:
 *     MiEmptyPteBins @ 0x1400844C4 (MiEmptyPteBins.c)
 *     MiInsertCachedPte @ 0x1400A2790 (MiInsertCachedPte.c)
 * Callees:
 *     MiAttemptCoalesce @ 0x1400849D0 (MiAttemptCoalesce.c)
 *     MiFlushTbListEarly @ 0x140084B10 (MiFlushTbListEarly.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiGetPteTimeStamp @ 0x14017CE80 (MiGetPteTimeStamp.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiReplenishBitMap(__int64 a1, ULONG_PTR a2, int a3)
{
  ULONG_PTR v3; // rax
  __int64 v5; // r13
  unsigned int v6; // r15d
  int v7; // r12d
  ULONG_PTR v8; // rdi
  ULONG_PTR BugCheckParameter4; // rsi
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 PteTimeStamp; // rax
  __int64 v13; // rax
  unsigned int v14; // eax
  ULONG_PTR v15; // r10
  __int64 v16; // r11
  ULONG_PTR v17; // rbp
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rax
  ULONG_PTR v21; // r9
  __int64 v22; // rdx
  _QWORD *v23; // rax
  _QWORD *v24; // r8
  unsigned __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r10
  __int64 v28; // r11
  ULONG_PTR v29; // r10
  unsigned __int64 v30; // r9
  volatile signed __int32 *v31; // r8
  int v32; // eax
  unsigned __int64 v33; // rdx
  signed __int32 v35[8]; // [rsp+0h] [rbp-148h] BYREF
  ULONG_PTR v36; // [rsp+30h] [rbp-118h]
  int v37; // [rsp+40h] [rbp-108h] BYREF
  __int16 v38; // [rsp+44h] [rbp-104h]
  __int64 v39; // [rsp+48h] [rbp-100h]
  __int64 v40; // [rsp+50h] [rbp-F8h]
  __int64 v41; // [rsp+58h] [rbp-F0h]

  v36 = a2;
  v3 = a2;
  v5 = 0LL;
  v6 = 0;
  if ( a3 == 1 )
  {
    v39 = 20LL;
    v37 = 0;
    v38 = 0;
    v40 = 0LL;
    v41 = 0LL;
    _InterlockedOr(v35, 0);
    v7 = KiTbFlushTimeStamp;
  }
  else
  {
    v6 = 1;
    HIDWORD(v39) = 0;
    v7 = 0;
  }
  do
  {
    v8 = 0LL;
    BugCheckParameter4 = v3;
    do
    {
      v10 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)(a1 + 16) + 8 * BugCheckParameter4);
      if ( (v10 & 0xF000) == 0x1000 )
      {
        PteTimeStamp = 1LL;
      }
      else
      {
        v13 = MI_READ_PTE_LOCK_FREE(v11 + 8);
        PteTimeStamp = (unsigned int)MiGetPteTimeStamp(v13);
      }
      v8 += PteTimeStamp;
      v14 = MiGetPteTimeStamp(v10);
      v17 = v14;
      if ( !v14
        || ((MI_READ_PTE_LOCK_FREE(v16 + 8LL * v14) & 0xF000) != 0x1000
          ? (v20 = MI_READ_PTE_LOCK_FREE(v18 + 8), v19 = (unsigned int)MiGetPteTimeStamp(v20))
          : (v19 = 1LL),
            v17 + v19 != BugCheckParameter4) )
      {
        v21 = BugCheckParameter4 + v8 - 1;
        if ( v21 >= *(_QWORD *)a1 )
          goto LABEL_55;
        if ( v8 > 1 )
        {
          v22 = *(_QWORD *)(a1 + 8);
          v23 = (_QWORD *)(v22 + 8 * (BugCheckParameter4 >> 6));
          v24 = (_QWORD *)(v22 + 8 * (v21 >> 6));
          if ( v23 == v24 )
          {
            v25 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v8) << BugCheckParameter4;
          }
          else
          {
            if ( (*v23 & (-1LL << BugCheckParameter4)) != -1LL << BugCheckParameter4 )
              goto LABEL_55;
            if ( ++v23 != v24 )
            {
              while ( *v23 == -1LL )
              {
                if ( ++v23 == v24 )
                  goto LABEL_24;
              }
LABEL_55:
              KeBugCheckEx(0xDAu, 0x504uLL, v15, v8, BugCheckParameter4);
            }
LABEL_24:
            v25 = 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v21;
          }
          if ( (*v23 & v25) != v25 )
            goto LABEL_55;
        }
        else if ( v8 != 1 || !_bittest64(*(const signed __int64 **)(a1 + 8), BugCheckParameter4) )
        {
          goto LABEL_55;
        }
        if ( !v6 )
        {
          MiInsertTbFlushEntry(&v37, (__int64)(v15 << 25) >> 16, v8, 0LL);
          if ( (unsigned int)MiFlushTbListEarly(&v37, 1LL) == 1 )
          {
            _InterlockedOr(v35, 0);
            if ( (unsigned int)(KiTbFlushTimeStamp - v7) > 2
              || (v7 & 1) == 0 && (unsigned int)(KiTbFlushTimeStamp - v7) >= 2 )
            {
              goto LABEL_51;
            }
          }
          goto LABEL_48;
        }
        do
        {
          *(_QWORD *)v15 = 0LL;
          if ( (unsigned int)MiPteInShadowRange(v15) )
            MiWritePteShadow(v26);
          v15 = v27 + 8;
        }
        while ( v28 != 1 );
        v29 = BugCheckParameter4 & 0x1F;
        v30 = v8;
        v31 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * (BugCheckParameter4 >> 5));
        if ( v29 + v8 > 0x20 )
        {
          if ( (BugCheckParameter4 & 0x1F) != 0 )
          {
            _InterlockedAnd(v31, ~(((1 << (32 - (BugCheckParameter4 & 0x1F))) - 1) << v29));
            v30 = v8 - (32 - (unsigned int)(BugCheckParameter4 & 0x1F));
            ++v31;
          }
          if ( v30 >= 0x20 )
          {
            v33 = v30 >> 5;
            v30 += -32LL * (v30 >> 5);
            do
            {
              *v31++ = 0;
              --v33;
            }
            while ( v33 );
          }
          if ( !v30 )
            goto LABEL_47;
          v32 = (1 << v30) - 1;
        }
        else
        {
          if ( v8 == 32 )
          {
            *v31 = 0;
LABEL_47:
            MiAttemptCoalesce(a1, BugCheckParameter4, v8);
            v5 += v8;
LABEL_48:
            v8 = 0LL;
            goto LABEL_49;
          }
          v32 = ((1 << v8) - 1) << v29;
        }
        _InterlockedAnd(v31, ~v32);
        goto LABEL_47;
      }
LABEL_49:
      BugCheckParameter4 = v17;
    }
    while ( v17 );
    if ( !v6 )
    {
LABEL_51:
      if ( HIDWORD(v39) )
        MiFlushTbList(&v37);
    }
    v3 = v36;
    ++v6;
  }
  while ( v6 < 2 );
  return v5;
}
