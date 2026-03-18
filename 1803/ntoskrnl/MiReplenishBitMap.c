/*
 * XREFs of MiReplenishBitMap @ 0x14009E090
 * Callers:
 *     MiEmptyPteBins @ 0x1400DAC70 (MiEmptyPteBins.c)
 *     MiInsertCachedPte @ 0x1401109A0 (MiInsertCachedPte.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiReturnSystemPtes @ 0x14004A1E8 (MiReturnSystemPtes.c)
 *     RtlInterlockedSetClearRunEx @ 0x14004A3B0 (RtlInterlockedSetClearRunEx.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     MiFlushTbListEarly @ 0x14009E7E4 (MiFlushTbListEarly.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiGetPteTimeStamp @ 0x1401A650C (MiGetPteTimeStamp.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall MiReplenishBitMap(unsigned __int64 *a1, ULONG_PTR a2, int a3)
{
  ULONG_PTR v3; // r12
  unsigned int v4; // ebp
  ULONG_PTR v5; // rax
  unsigned __int64 *v6; // r15
  int v7; // r14d
  ULONG_PTR v8; // r13
  ULONG_PTR BugCheckParameter4; // rdi
  unsigned __int64 v10; // r11
  __int64 v11; // r8
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 PteTimeStamp; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r9
  unsigned int v22; // eax
  unsigned __int64 v23; // r8
  ULONG_PTR v24; // r10
  __int64 v25; // r11
  ULONG_PTR v26; // rsi
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // r8
  ULONG_PTR v36; // rbx
  unsigned __int64 v37; // rcx
  __int64 v38; // r11
  ULONG_PTR v39; // r9
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rax
  ULONG_PTR v42; // r11
  ULONG_PTR v43; // r10
  unsigned __int64 v44; // r9
  volatile signed __int32 *v45; // r8
  unsigned __int64 v46; // rdx
  ULONG_PTR v47; // r14
  unsigned __int64 v48; // rsi
  ULONG_PTR v49; // rax
  ULONG_PTR v50; // rdi
  __int64 v51; // rcx
  __int64 v52; // r14
  ULONG_PTR v53; // rbp
  unsigned __int64 *v54; // r13
  unsigned __int64 v55; // rbx
  unsigned __int64 v56; // r10
  unsigned __int64 v57; // rdx
  __int64 v58; // r9
  _QWORD *v59; // rax
  _QWORD *v60; // r8
  bool v61; // zf
  _QWORD *v62; // rax
  signed __int32 v64[8]; // [rsp+0h] [rbp-168h] BYREF
  int v65; // [rsp+30h] [rbp-138h]
  int v66; // [rsp+34h] [rbp-134h]
  unsigned __int64 *v67; // [rsp+38h] [rbp-130h]
  __int64 v68; // [rsp+40h] [rbp-128h]
  ULONG_PTR v69; // [rsp+48h] [rbp-120h]
  ULONG_PTR v70; // [rsp+50h] [rbp-118h]
  ULONG_PTR v71; // [rsp+58h] [rbp-110h]
  int v72; // [rsp+60h] [rbp-108h] BYREF
  __int16 v73; // [rsp+64h] [rbp-104h]
  __int64 v74; // [rsp+68h] [rbp-100h]
  __int64 v75; // [rsp+70h] [rbp-F8h]
  __int64 v76; // [rsp+78h] [rbp-F0h]

  v3 = 0LL;
  v71 = a2;
  v4 = 0;
  v67 = a1;
  v68 = 0LL;
  v5 = a2;
  v65 = 0;
  v6 = a1;
  if ( a3 == 1 )
  {
    v74 = 20LL;
    v72 = 0;
    v73 = 0;
    v75 = 0LL;
    v76 = 0LL;
    _InterlockedOr(v64, 0);
    v7 = KiTbFlushTimeStamp;
  }
  else
  {
    v4 = 1;
    HIDWORD(v74) = 0;
    v65 = 1;
    v7 = 0;
  }
  v66 = v7;
  do
  {
    v8 = 0LL;
    BugCheckParameter4 = v5;
    while ( 1 )
    {
      v10 = v6[2];
      v11 = *(_QWORD *)(v10 + 8 * BugCheckParameter4);
      v12 = v10 + 8 * BugCheckParameter4;
      if ( v12 >= 0xFFFFF6FB7DBED000uLL
        && v12 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow()
        && (v11 & 1) != 0
        && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
      {
        v13 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v13 )
        {
          v14 = *(_QWORD *)(v13 + 8 * ((v12 >> 3) & 0x1FF));
          v15 = v11 | 0x20;
          if ( (v14 & 0x20) == 0 )
            v15 = v11;
          v11 = v15;
          if ( (v14 & 0x42) != 0 )
            v11 = v15 | 0x42;
        }
      }
      if ( (v11 & 0xF000) == 0x1000 )
      {
        PteTimeStamp = 1LL;
      }
      else
      {
        v17 = *(_QWORD *)(v12 + 8);
        if ( v12 + 8 >= 0xFFFFF6FB7DBED000uLL
          && v12 + 8 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow()
          && (v17 & 1) != 0
          && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
        {
          v19 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v19 )
          {
            v20 = *(_QWORD *)(v19 + 8 * ((v18 >> 3) & 0x1FF));
            v21 = v17 | 0x20;
            if ( (v20 & 0x20) == 0 )
              v21 = v17;
            v17 = v21;
            if ( (v20 & 0x42) != 0 )
              v17 = v21 | 0x42;
          }
        }
        PteTimeStamp = (unsigned int)MiGetPteTimeStamp(v17);
      }
      v8 += PteTimeStamp;
      v69 = v8;
      v22 = MiGetPteTimeStamp(v11);
      v26 = v22;
      v70 = v22;
      if ( !v22 )
        goto LABEL_58;
      v27 = *(_QWORD *)(v25 + 8LL * v22);
      v28 = v25 + 8LL * v22;
      if ( v28 >= 0xFFFFF6FB7DBED000uLL
        && v28 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow()
        && (v27 & 1) != 0
        && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
      {
        v23 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v23 )
        {
          v29 = *(_QWORD *)(v23 + 8 * ((v28 >> 3) & 0x1FF));
          v23 = v27 | 0x20;
          if ( (v29 & 0x20) == 0 )
            v23 = v27;
          LOWORD(v27) = v23;
          if ( (v29 & 0x42) != 0 )
            LOWORD(v27) = v23 | 0x42;
        }
      }
      if ( (v27 & 0xF000) == 0x1000 )
      {
        v30 = 1LL;
      }
      else
      {
        v31 = *(_QWORD *)(v28 + 8);
        if ( v28 + 8 >= 0xFFFFF6FB7DBED000uLL
          && v28 + 8 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow()
          && (v31 & 1) != 0
          && ((v31 & 0x20) == 0 || (v31 & 0x42) == 0) )
        {
          v33 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v33 )
          {
            v34 = *(_QWORD *)(v33 + 8 * ((v32 >> 3) & 0x1FF));
            v35 = v31 | 0x20;
            if ( (v34 & 0x20) == 0 )
              v35 = v31;
            v31 = v35;
            if ( (v34 & 0x42) != 0 )
              v31 = v35 | 0x42;
          }
        }
        v30 = (unsigned int)MiGetPteTimeStamp(v31);
      }
      if ( v26 + v30 != BugCheckParameter4 )
      {
LABEL_58:
        v36 = BugCheckParameter4 + v8 - 1;
        if ( v36 >= *v6 )
          goto LABEL_119;
        if ( v8 > 1 )
        {
          v37 = v6[1];
          v38 = *(_QWORD *)(v37 + 8 * (BugCheckParameter4 >> 6));
          v23 = v37 + 8 * (BugCheckParameter4 >> 6);
          v39 = v37 + 8 * (v36 >> 6);
          if ( v23 == v39 )
          {
            v40 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v8) << BugCheckParameter4;
            v41 = v38 & v40;
          }
          else
          {
            if ( (v38 & (-1LL << BugCheckParameter4)) != -1LL << BugCheckParameter4 )
              goto LABEL_119;
            v23 += 8LL;
            if ( v23 != v39 )
            {
              while ( *(_QWORD *)v23 == -1LL )
              {
                v23 += 8LL;
                if ( v23 == v39 )
                  goto LABEL_69;
              }
LABEL_119:
              KeBugCheckEx(0xDAu, 0x504uLL, v24, v8, BugCheckParameter4);
            }
LABEL_69:
            v40 = 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v36;
            v41 = v40 & *(_QWORD *)v23;
          }
          if ( v41 != v40 )
            goto LABEL_119;
        }
        else if ( v8 != 1 || !_bittest64((const signed __int64 *)v6[1], BugCheckParameter4) )
        {
          goto LABEL_119;
        }
        if ( !v4 )
        {
          MiInsertTbFlushEntry((__int64)&v72, (__int64)(v24 << 25) >> 16, v8, 0);
          if ( (unsigned int)MiFlushTbListEarly(&v72, 1LL) == 1 )
          {
            _InterlockedOr(v64, 0);
            if ( (unsigned int)(KiTbFlushTimeStamp - v7) > 2
              || (v7 & 1) == 0 && (unsigned int)(KiTbFlushTimeStamp - v7) >= 2 )
            {
              goto LABEL_115;
            }
          }
          goto LABEL_111;
        }
        v42 = v8;
        do
        {
          *(_QWORD *)v24 = ZeroPte;
          if ( v24 >= 0xFFFFF6FB7DBED000uLL && v24 <= 0xFFFFF6FB7DBED7F8uLL )
            MiWritePteShadow(v24, ZeroPte, v23);
          v24 += 8LL;
          --v42;
        }
        while ( v42 );
        v43 = BugCheckParameter4 & 0x1F;
        v44 = v8;
        v45 = (volatile signed __int32 *)(v6[1] + 4 * (BugCheckParameter4 >> 5));
        if ( v43 + v8 > 0x20 )
        {
          if ( (BugCheckParameter4 & 0x1F) != 0 )
          {
            _InterlockedAnd(v45, ~(((1 << (32 - (BugCheckParameter4 & 0x1F))) - 1) << v43));
            v44 = v8 - (32 - (unsigned int)(BugCheckParameter4 & 0x1F));
            ++v45;
          }
          if ( v44 >= 0x20 )
          {
            v46 = v44 >> 5;
            v44 += -32LL * (v44 >> 5);
            do
            {
              *v45++ = 0;
              --v46;
            }
            while ( v46 );
          }
          if ( v44 )
            _InterlockedAnd(v45, ~((1 << v44) - 1));
        }
        else if ( v8 == 32 )
        {
          *v45 = 0;
        }
        else
        {
          _InterlockedAnd(v45, ~(((1 << v8) - 1) << v43));
        }
        v47 = BugCheckParameter4;
        v48 = 32LL;
        if ( (v6[3] & 4) == 0 )
          v48 = 512LL;
        v49 = BugCheckParameter4 + v48;
        v50 = 0LL;
        v51 = ~(v48 - 1);
        v52 = v51 & v47;
        v53 = (v51 & (v49 + v8 - 1)) - v52;
        if ( !v53 )
        {
LABEL_110:
          v26 = v70;
          v3 = v8 + v68;
          v4 = v65;
          v68 += v8;
LABEL_111:
          v8 = 0LL;
          goto LABEL_112;
        }
        v54 = v67;
        while ( 1 )
        {
          v55 = v50 + v52;
          v56 = v48 - 1 + v50 + v52;
          if ( v56 < *v54 )
          {
            v57 = v54[1];
            v58 = *(_QWORD *)(v57 + 8 * (v55 >> 6));
            v59 = (_QWORD *)(v57 + 8 * (v55 >> 6));
            v60 = (_QWORD *)(v57 + 8 * (v56 >> 6));
            if ( v59 == v60 )
            {
              v61 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v48) << v55) & v58) == 0;
LABEL_105:
              if ( v61 && (unsigned int)RtlInterlockedSetClearRunEx((__int64)v54, v50 + v52, v48) == 1 )
                MiReturnSystemPtes((__int64)v54, v50 + v52, v48, 0);
              goto LABEL_108;
            }
            if ( ((-1LL << v55) & v58) == 0 )
            {
              v62 = v59 + 1;
              if ( v62 != v60 )
              {
                while ( !*v62 )
                {
                  if ( ++v62 == v60 )
                    goto LABEL_104;
                }
                goto LABEL_108;
              }
LABEL_104:
              v61 = ((0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v56) & *v62) == 0;
              goto LABEL_105;
            }
          }
LABEL_108:
          v50 += v48;
          if ( v50 >= v53 )
          {
            v8 = v69;
            v6 = v67;
            goto LABEL_110;
          }
        }
      }
LABEL_112:
      BugCheckParameter4 = v26;
      if ( !v26 )
        break;
      v7 = v66;
    }
    if ( !v4 )
    {
LABEL_115:
      if ( HIDWORD(v74) )
        MiFlushTbList(&v72);
    }
    v7 = v66;
    ++v4;
    v5 = v71;
    v65 = v4;
  }
  while ( v4 < 2 );
  return v3;
}
