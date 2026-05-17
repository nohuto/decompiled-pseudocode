/*
 * XREFs of RtlRbInsertNodeEx @ 0x18003A130
 * Callers:
 *     RtlpHpSegContextReserve @ 0x1800040FC (RtlpHpSegContextReserve.c)
 *     LdrpCheckForRetryLoading @ 0x1800208D8 (LdrpCheckForRetryLoading.c)
 *     LdrpInsertModuleToIndexLockHeld @ 0x180029BB0 (LdrpInsertModuleToIndexLockHeld.c)
 *     RtlpHpSegContextCompact @ 0x180036078 (RtlpHpSegContextCompact.c)
 *     EtwpInsertRegistration @ 0x180036BF0 (EtwpInsertRegistration.c)
 *     RtlpHpSegPageRangeShrink @ 0x1800383A4 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegPageRangeAllocate @ 0x180038558 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpVsChunkSplit @ 0x18003D9A0 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsContextFree @ 0x18003E180 (RtlpHpVsContextFree.c)
 *     EtwpInsertGuidEntry @ 0x180064370 (EtwpInsertGuidEntry.c)
 *     RtlpHpLargeAlloc @ 0x18006EC20 (RtlpHpLargeAlloc.c)
 *     RtlpHpVsFreeChunkInsert @ 0x180071FAC (RtlpHpVsFreeChunkInsert.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlRbInsertNodeEx(__int64 a1, unsigned __int64 a2, bool a3, unsigned __int64 a4)
{
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rax
  char v7; // r11
  unsigned __int64 v8; // r8
  __int64 v9; // rbx
  _BOOL8 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  bool v13; // zf
  unsigned __int64 v14; // rax
  int v15; // r10d
  unsigned __int64 *v16; // rsi
  unsigned __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // rax
  _QWORD *v20; // r11
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdx
  BOOL v27; // ebx
  unsigned __int64 v28; // rax
  int v29; // r9d
  _BOOL8 v30; // r11
  __int64 *v31; // rbx
  __int64 v32; // rax
  _QWORD *v33; // rax
  unsigned __int64 v34; // r10
  __int64 v35; // rcx
  unsigned __int64 v36; // rcx
  __int64 v37; // rcx
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // r8
  __int64 v40; // rdi
  unsigned __int64 v41; // r10
  unsigned __int64 v42; // r10
  __int64 v43; // rcx
  unsigned __int64 v44; // rcx
  __int64 v45; // rbp
  unsigned __int64 v46; // rdi
  unsigned __int64 v47; // rdi

  *(_QWORD *)a4 = 0LL;
  *(_QWORD *)(a4 + 8) = 0LL;
  if ( a2 )
  {
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
      v5 = a4 ^ a2;
    else
      v5 = a4;
    *(_QWORD *)(a2 + 8LL * a3) = v5;
    v6 = a2;
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
      v6 = a4 ^ a2;
    *(_QWORD *)(a4 + 16) = v6 | 1;
    if ( !a3 && a2 == (*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFFEuLL) )
    {
      v13 = (*(_BYTE *)(a1 + 8) & 1) == 0;
      *(_QWORD *)(a1 + 8) = a4;
      if ( !v13 )
        *(_BYTE *)(a1 + 8) |= 1u;
    }
    if ( (*(_BYTE *)(a2 + 16) & 1) != 0 )
    {
      v7 = *(_BYTE *)(a1 + 8) & 1;
      while ( 1 )
      {
        v8 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v7 && v8 )
          v8 ^= a2;
        v9 = *(_QWORD *)v8;
        if ( v7 && v9 )
          v9 ^= v8;
        v10 = v9 != a2;
        v11 = *(_QWORD *)(v8 + 8 * !v10);
        if ( v7 )
        {
          if ( !v11 )
            break;
          v11 ^= v8;
        }
        if ( !v11 || (*(_BYTE *)(v11 + 16) & 1) == 0 )
          break;
        *(_BYTE *)(a2 + 16) &= ~1u;
        a4 = v8;
        *(_BYTE *)(v11 + 16) &= ~1u;
        a2 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
        {
          if ( !a2 )
            return;
          a2 ^= v8;
        }
        if ( a2 )
        {
          *(_BYTE *)(v8 + 16) |= 1u;
          v12 = *(_QWORD *)a2;
          v7 = *(_BYTE *)(a1 + 8) & 1;
          if ( v7 )
          {
            if ( v12 )
              v12 ^= a2;
          }
          a3 = v8 != v12;
          if ( (*(_BYTE *)(a2 + 16) & 1) != 0 )
            continue;
        }
        return;
      }
      if ( a3 == v10 )
      {
LABEL_43:
        v27 = !v10;
        v28 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        v29 = *(_BYTE *)(a1 + 8) & 1;
        if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v28 )
          v28 ^= a2;
        if ( v28 != v8 )
          __fastfail(0x1Du);
        v30 = v27;
        v31 = (__int64 *)(v8 + 8 * !v27);
        v32 = *v31;
        if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v32 )
          v32 ^= v8;
        if ( v32 != a2 )
          __fastfail(0x1Du);
        v33 = (_QWORD *)(v8 + 16);
        v34 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
        {
          if ( !v34 )
            goto LABEL_82;
          v34 ^= v8;
        }
        if ( v34 )
        {
          v35 = *(_QWORD *)(v34 + 8);
          if ( v29 && v35 )
            v35 ^= v34;
          if ( v35 == v8 )
          {
            if ( v29 )
              v36 = a2 ^ v34;
            else
              v36 = a2;
            *(_QWORD *)(v34 + 8) = v36;
          }
          else
          {
            v43 = *(_QWORD *)v34;
            if ( v29 && v43 )
              v43 ^= v34;
            if ( v43 != v8 )
              __fastfail(0x1Du);
            if ( v29 )
              v44 = a2 ^ v34;
            else
              v44 = a2;
            *(_QWORD *)v34 = v44;
          }
          goto LABEL_54;
        }
LABEL_82:
        if ( *(_QWORD *)a1 != v8 )
          __fastfail(0x1Du);
        *(_QWORD *)a1 = a2;
LABEL_54:
        if ( v29 && v34 )
          v34 ^= a2;
        *(_QWORD *)(a2 + 16) &= 3uLL;
        *(_QWORD *)(a2 + 16) |= v34;
        v37 = *(_QWORD *)(a2 + 8 * v30);
        if ( v29 )
        {
          if ( !v37 )
          {
LABEL_57:
            if ( v29 && v37 )
              v37 ^= v8;
            *v31 = v37;
            v38 = v8;
            if ( v29 )
              v38 = a2 ^ v8;
            *(_QWORD *)(a2 + 8 * v30) = v38;
            if ( v29 )
              v39 = a2 ^ v8;
            else
              v39 = a2;
            *v33 &= 3uLL;
            *v33 |= v39;
            *(_BYTE *)v33 |= 1u;
            *(_BYTE *)(a2 + 16) &= ~1u;
            return;
          }
          v37 ^= a2;
        }
        if ( v37 )
        {
          v40 = *(_QWORD *)(v37 + 16);
          v41 = v40 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v29 && v41 )
            v41 ^= v37;
          if ( v41 != a2 )
            __fastfail(0x1Du);
          if ( v29 )
            v42 = v8 ^ v37;
          else
            v42 = v8;
          *(_QWORD *)(v37 + 16) = v42 | v40 & 3;
        }
        goto LABEL_57;
      }
      v14 = *(_QWORD *)(a4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      v15 = *(_BYTE *)(a1 + 8) & 1;
      if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v14 )
        v14 ^= a4;
      if ( v14 != a2 )
        __fastfail(0x1Du);
      v16 = (unsigned __int64 *)(a2 + 8 * !v10);
      v17 = *v16;
      if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v17 )
        v17 ^= a2;
      if ( v17 != a4 )
        __fastfail(0x1Du);
      v18 = 8 * v10;
      v19 = *(_QWORD *)(8 * v10 + v8);
      if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v19 )
        v19 ^= v8;
      if ( v19 != a2 )
        goto LABEL_115;
      v20 = (_QWORD *)(a2 + 16);
      v21 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v21 )
        v21 ^= a2;
      if ( v21 != v8 )
LABEL_115:
        __fastfail(0x1Du);
      if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
        v22 = a4 ^ v8;
      else
        v22 = a4;
      *(_QWORD *)(v18 + v8) = v22;
      v23 = v8;
      if ( v15 )
        v23 = a4 ^ v8;
      *(_QWORD *)(a4 + 16) &= 3uLL;
      *(_QWORD *)(a4 + 16) |= v23;
      v24 = *(_QWORD *)(v18 + a4);
      if ( v15 )
      {
        if ( !v24 )
        {
LABEL_37:
          if ( v15 && v24 )
            v24 ^= a2;
          *v16 = v24;
          v25 = a2;
          if ( v15 )
            v25 = a4 ^ a2;
          *(_QWORD *)(v18 + a4) = v25;
          if ( v15 )
            v26 = a4 ^ a2;
          else
            v26 = a4;
          *v20 &= 3uLL;
          *v20 |= v26;
          a2 = a4;
          goto LABEL_43;
        }
        v24 ^= a4;
      }
      if ( v24 )
      {
        v45 = *(_QWORD *)(v24 + 16);
        v46 = v45 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v15 && v46 )
          v46 ^= v24;
        if ( v46 != a4 )
          __fastfail(0x1Du);
        if ( v15 )
          v47 = a2 ^ v24;
        else
          v47 = a2;
        *(_QWORD *)(v24 + 16) = v47 | v45 & 3;
      }
      goto LABEL_37;
    }
  }
  else
  {
    v13 = (*(_BYTE *)(a1 + 8) & 1) == 0;
    *(_QWORD *)(a1 + 8) = a4;
    *(_QWORD *)a1 = a4;
    if ( !v13 )
      *(_BYTE *)(a1 + 8) |= 1u;
    *(_QWORD *)(a4 + 16) = 0LL;
  }
}
