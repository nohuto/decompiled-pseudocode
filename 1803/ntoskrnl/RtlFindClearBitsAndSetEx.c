/*
 * XREFs of RtlFindClearBitsAndSetEx @ 0x1400D8720
 * Callers:
 *     RtlpHpFixedVsAllocate @ 0x1400AB270 (RtlpHpFixedVsAllocate.c)
 *     MiObtainSessionVa @ 0x1400CB090 (MiObtainSessionVa.c)
 *     MiScanLeafNonPagedPool @ 0x1400D7D50 (MiScanLeafNonPagedPool.c)
 *     MiReplenishNonPagedSlists @ 0x1400D83E8 (MiReplenishNonPagedSlists.c)
 *     ExpSaPageGroupAllocateMemory @ 0x14015AA34 (ExpSaPageGroupAllocateMemory.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x140592B34 (MiAllocateFromSubAllocatedRegion.c)
 * Callees:
 *     RtlSetBitsEx @ 0x1400DA370 (RtlSetBitsEx.c)
 */

unsigned __int64 __fastcall RtlFindClearBitsAndSetEx(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r15
  unsigned __int64 v5; // r14
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rsi
  unsigned __int64 *v12; // r8
  signed __int64 v13; // r9
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  unsigned __int64 v18; // r10
  __int64 v19; // rdx
  unsigned __int64 *v20; // rdi
  bool v21; // zf
  __int64 v22; // rax
  unsigned int v23; // r10d
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned int v27; // eax
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // r10
  __int64 v31; // rdx
  unsigned int v32; // ecx
  unsigned __int64 *v33; // r9
  unsigned int v34; // r9d
  __int64 v35; // rcx
  __int64 v36; // rax

  v3 = *a1;
  v5 = a1[1];
  v8 = a3 & -(__int64)(a3 < *a1);
  v9 = *a1 - 1;
  if ( a2 )
  {
    while ( 1 )
    {
      if ( v9 - v8 + 1 < a2 )
        goto LABEL_16;
      v10 = v9 - a2 + 1;
      v11 = v5 + 8 * (v10 >> 6);
      v12 = (unsigned __int64 *)(v5 + 8 * (v8 >> 6));
      v13 = *v12 | ((1LL << (v8 & 0x3F)) - 1);
      if ( a2 <= 0x7F )
      {
        if ( a2 < 0x40 )
        {
          if ( a2 > 1 )
          {
            v19 = 0LL;
            v20 = (unsigned __int64 *)(v5 + 8 * (v9 >> 6));
            while ( v13 != -1 )
            {
LABEL_23:
              v21 = !_BitScanForward64((unsigned __int64 *)&v22, v13);
              if ( v21 )
                LODWORD(v22) = 64;
              if ( (unsigned int)(v19 + v22) >= a2 )
              {
                v24 = -v19;
LABEL_30:
                v15 = ((__int64)((__int64)v12 - v5) >> 3 << 6) + v24;
                goto LABEL_10;
              }
              v23 = a2;
              v24 = ~v13;
              while ( 1 )
              {
                v24 &= v24 >> (v23 >> 1);
                if ( !v24 )
                  break;
                v23 -= v23 >> 1;
                if ( v23 <= 1 )
                {
                  _BitScanForward64(&v24, v24);
                  goto LABEL_30;
                }
              }
              if ( v12 == v20 )
                goto LABEL_16;
              v21 = !_BitScanReverse64((unsigned __int64 *)&v25, v13);
              if ( v21 )
                v19 = 64LL;
              else
                v19 = (unsigned int)(63 - v25);
              v13 = *++v12;
            }
            while ( (unsigned __int64)++v12 <= v11 )
            {
              v13 = *v12;
              if ( *v12 != -1LL )
              {
                v19 = 0LL;
                goto LABEL_23;
              }
            }
          }
          else
          {
            while ( v13 == -1 )
            {
              if ( (unsigned __int64)++v12 > v11 )
                goto LABEL_16;
              v13 = *v12;
            }
            _BitScanForward64(&v14, ~v13);
            v15 = v14 + ((__int64)((__int64)v12 - v5) >> 3 << 6);
LABEL_10:
            if ( v15 <= v10 )
              goto LABEL_11;
          }
LABEL_16:
          v15 = -1LL;
          goto LABEL_17;
        }
        while ( 1 )
        {
          while ( v13 < 0 )
          {
            if ( (unsigned __int64)++v12 > v11 )
              goto LABEL_16;
            v13 = *v12;
          }
          v21 = !_BitScanReverse64((unsigned __int64 *)&v26, v13);
          if ( v21 )
            v27 = 64;
          else
            v27 = 63 - v26;
          v15 = ((((__int64)((__int64)v12 - v5) >> 3) + 1) << 6) - v27;
          if ( v15 > v10 )
            goto LABEL_16;
          v28 = a2 - v27;
          if ( a2 == v27 )
            goto LABEL_11;
          v13 = *++v12;
          if ( v28 >= 0x40 )
          {
            if ( *v12 )
              continue;
            v28 -= 64LL;
            if ( !v28 )
              goto LABEL_11;
            v13 = *++v12;
          }
          v21 = !_BitScanForward64(&v29, v13);
          if ( v21 )
            v29 = 64LL;
          if ( v29 >= v28 )
            goto LABEL_11;
        }
      }
      v30 = v11 + 8;
      if ( (v10 & 0x3F) == 0 )
        v30 = v5 + 8 * (v10 >> 6);
      if ( !v13 )
      {
        v32 = 0;
        goto LABEL_61;
      }
      if ( !*++v12 )
        break;
      do
      {
        do
        {
LABEL_57:
          if ( (unsigned __int64)v12 > v30 )
            goto LABEL_16;
          ++v12;
        }
        while ( *v12 );
        v21 = !_BitScanReverse64((unsigned __int64 *)&v31, *(v12 - 1));
        if ( v21 )
          v32 = 64;
        else
          v32 = 63 - v31;
LABEL_61:
        v15 = ((__int64)((__int64)v12 - v5) >> 3 << 6) - v32;
        if ( v15 > v10 )
          goto LABEL_16;
        v33 = &v12[(a2 - v32) >> 6];
        while ( ++v12 != v33 )
        {
          if ( *v12 )
            goto LABEL_57;
        }
        v34 = ((_BYTE)a2 - (_BYTE)v32) & 0x3F;
        if ( (((_BYTE)a2 - (_BYTE)v32) & 0x3F) == 0 )
          break;
        v21 = !_BitScanForward64((unsigned __int64 *)&v35, *v12);
        if ( v21 )
          LODWORD(v35) = 64;
      }
      while ( (unsigned int)v35 < v34 );
LABEL_11:
      if ( v15 != -1LL )
      {
LABEL_12:
        v16 = v15;
        goto LABEL_13;
      }
LABEL_17:
      if ( !v8 )
        goto LABEL_12;
      v18 = a2 + a3;
      if ( a2 + a3 > v3 )
        v18 = v3;
      v9 = v18 - 1;
      v8 = 0LL;
    }
    v21 = !_BitScanReverse64((unsigned __int64 *)&v36, v13);
    if ( v21 )
      v32 = 64;
    else
      v32 = 63 - v36;
    goto LABEL_61;
  }
  v16 = v8 & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_13:
  if ( v16 != -1LL )
    RtlSetBitsEx(a1, v16, a2);
  return v16;
}
