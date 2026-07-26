/*
 * XREFs of ndisSetOpenRSSParameters @ 0x1C0021618
 * Callers:
 *     ndisOidPreRSSParameters @ 0x1C00BC5E0 (ndisOidPreRSSParameters.c)
 * Callees:
 *     ndisCalculateRssParametersSize @ 0x1C001676C (ndisCalculateRssParametersSize.c)
 *     memcmp @ 0x1C0028680 (memcmp.c)
 *     memmove @ 0x1C0028840 (memmove.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     WPP_SF_qqDD @ 0x1C003CA88 (WPP_SF_qqDD.c)
 *     WPP_SF_qqd @ 0x1C003CAE8 (WPP_SF_qqd.c)
 *     WPP_SF_qqq @ 0x1C003CB3C (WPP_SF_qqq.c)
 *     Template_jqxqqq @ 0x1C0045A18 (Template_jqxqqq.c)
 */

unsigned __int8 __fastcall ndisSetOpenRSSParameters(_QWORD *a1, __int64 a2, int *a3)
{
  __int64 v3; // rsi
  unsigned int v6; // r14d
  _BYTE *v7; // rbx
  unsigned int v8; // eax
  unsigned __int8 v9; // cl
  unsigned __int16 v10; // dx
  int v11; // eax
  int v12; // edi
  __int64 v13; // rdx
  unsigned int v14; // ecx
  __int64 v15; // r14
  PVOID PoolWithTag; // rax
  PVOID v17; // rax
  KSPIN_LOCK *v18; // r12
  KIRQL v19; // dl
  __int64 v20; // r14
  unsigned __int8 v21; // r14
  __int64 v23; // rcx
  _QWORD *v24; // r9
  __int64 v25; // rcx
  _QWORD *v26; // r9
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int16 v29; // r12
  unsigned __int16 v30; // ax
  unsigned __int16 v31; // cx
  unsigned __int64 v32; // rcx
  int v33; // eax
  int v34; // ecx
  KSPIN_LOCK *v35; // rcx
  __int64 v36; // rbx
  unsigned __int8 v37; // r8
  int v38; // r9d
  bool v39; // al
  bool v40; // r8
  __int16 v41; // dx
  __int16 v42; // dx
  unsigned __int16 v43; // r9
  unsigned __int8 v44; // r12
  int v45; // ecx
  int v46; // eax
  unsigned __int16 v47; // ax
  _QWORD *v48; // rcx
  int v49; // r15d
  __int64 v50; // rax
  int v51; // ebx
  int v52; // [rsp+20h] [rbp-88h]
  unsigned int Size; // [rsp+50h] [rbp-58h] BYREF
  int Size_4; // [rsp+54h] [rbp-54h]
  int v55; // [rsp+58h] [rbp-50h]
  KIRQL NewIrql; // [rsp+B0h] [rbp+8h]
  unsigned __int8 v57; // [rsp+B8h] [rbp+10h]
  unsigned __int8 v58; // [rsp+B8h] [rbp+10h]
  unsigned __int8 v60; // [rsp+C8h] [rbp+20h]

  v3 = a1[2];
  Size = 0;
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qqq(139LL, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, v3, a1, a2);
  v6 = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(a2 + 56) = 0;
  if ( v6 < 0x1C )
  {
    *(_DWORD *)(a2 + 56) = 28;
    v12 = -1073676268;
    if ( (unsigned __int8)byte_1C0092612 < 2u )
      goto LABEL_35;
    v23 = 140LL;
    v24 = a1;
LABEL_33:
    WPP_SF_qqd(v23, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, v3, v24, -1073676268);
    goto LABEL_35;
  }
  v7 = *(_BYTE **)(a2 + 40);
  v8 = 40;
  v9 = v7[1];
  if ( v9 >= 2u )
  {
    v10 = *((_WORD *)v7 + 1);
    if ( v10 < 0x28u )
    {
      if ( (unsigned __int8)byte_1C0092612 < 2u )
      {
LABEL_40:
        v12 = -1073676268;
        goto LABEL_35;
      }
      v27 = 141LL;
LABEL_39:
      WPP_SF_qq(v27, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, v3, a2);
      goto LABEL_40;
    }
    if ( v9 >= 3u )
    {
      v8 = 44;
      if ( v10 < 0x2Cu )
      {
        if ( (unsigned __int8)byte_1C0092612 < 2u )
          goto LABEL_40;
        v27 = 142LL;
        goto LABEL_39;
      }
    }
    if ( v6 < v8 )
    {
      *(_DWORD *)(a2 + 56) = v8;
      v12 = -1073676268;
      if ( (unsigned __int8)byte_1C0092612 < 2u )
        goto LABEL_35;
      v23 = 143LL;
      v24 = (_QWORD *)a2;
      goto LABEL_33;
    }
  }
  v11 = ndisCalculateRssParametersSize(*(_QWORD *)(a2 + 40), &Size);
  v12 = v11;
  if ( v11 )
  {
    if ( (unsigned __int8)byte_1C0092612 < 2u )
      goto LABEL_35;
    v25 = 144LL;
    v52 = v11;
    v26 = (_QWORD *)a2;
  }
  else
  {
    v13 = a1[61];
    if ( !v13 && ((v7[4] & 0x10) != 0 || !(unsigned __int8)*((_DWORD *)v7 + 2)) )
      goto LABEL_35;
    if ( *((_WORD *)v7 + 6) > 0x200u )
    {
      if ( (unsigned __int8)byte_1C0092612 < 2u )
      {
LABEL_51:
        v12 = -1073676267;
        goto LABEL_35;
      }
      v28 = 145LL;
LABEL_50:
      WPP_SF_qq(v28, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, v3, a1);
      goto LABEL_51;
    }
    if ( *((_WORD *)v7 + 10) != 40 && (v7[4] & 0x10) == 0 && (unsigned __int8)*((_DWORD *)v7 + 2) )
    {
      if ( (unsigned __int8)byte_1C0092612 < 2u )
        goto LABEL_51;
      v28 = 146LL;
      goto LABEL_50;
    }
    v14 = Size;
    if ( !Size && (v7[4] & 0x10) != 0 )
    {
      v14 = *((unsigned __int16 *)v7 + 1);
      Size = v14;
    }
    v12 = 0;
    if ( v6 >= v14 )
    {
      v15 = 0LL;
      if ( v13 )
        v15 = v13;
      if ( !*(_QWORD *)(v3 + 1984)
        && (PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0x728uLL, 0x7372444Eu),
            (*(_QWORD *)(v3 + 1984) = PoolWithTag) == 0LL)
        || !a1[60]
        && (v17 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0x394uLL, 0x7372444Eu), (a1[60] = v17) == 0LL) )
      {
        v12 = -1073741670;
        goto LABEL_35;
      }
      v18 = (KSPIN_LOCK *)(v3 + 96);
      v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
      *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
      NewIrql = v19;
      *(_DWORD *)(v3 + 1856) = 2305220;
      if ( v15 )
      {
        v57 = v7[1];
        if ( *(_BYTE *)(v15 + 1) == v57 )
        {
          if ( (unsigned __int8)*((_DWORD *)v7 + 2) )
          {
            v29 = *((_WORD *)v7 + 2);
            if ( (v29 & 0x10) == 0 )
            {
              v30 = *(_WORD *)(v15 + 12);
              if ( v30 == *((_WORD *)v7 + 6) )
              {
                if ( !memcmp((const void *)(v15 + *(unsigned int *)(v15 + 16)), &v7[*((unsigned int *)v7 + 4)], v30) )
                {
                  v31 = *(_WORD *)(v15 + 20);
                  if ( v31 == *((_WORD *)v7 + 10)
                    && *(_WORD *)(v15 + 6) == *((_WORD *)v7 + 3)
                    && *(_WORD *)(v15 + 4) == v29
                    && !memcmp((const void *)(v15 + *(unsigned int *)(v15 + 24)), &v7[*((unsigned int *)v7 + 6)], v31) )
                  {
                    v32 = *(_QWORD *)v15 - *(_QWORD *)v7;
                    if ( *(_QWORD *)v15 == *(_QWORD *)v7 )
                      v32 = *(unsigned int *)(v15 + 8) - (unsigned __int64)*((unsigned int *)v7 + 2);
                    if ( !v32 )
                    {
                      if ( v57 < 2u
                        || (v33 = *((_DWORD *)v7 + 8), *(_DWORD *)(v15 + 32) == v33)
                        && (v34 = *((_DWORD *)v7 + 9), *(_DWORD *)(v15 + 36) == v34)
                        && !memcmp(
                              (const void *)(v15 + *(unsigned int *)(v15 + 28)),
                              &v7[*((unsigned int *)v7 + 7)],
                              (unsigned int)(v34 * v33))
                        && (v57 < 3u || *(_WORD *)(v15 + 40) == *((_WORD *)v7 + 20) && *(_BYTE *)(v15 + 42) == v7[42]) )
                      {
                        *(_QWORD *)(v3 + 520) = 0LL;
                        v35 = (KSPIN_LOCK *)(v3 + 96);
                        *(_DWORD *)(v3 + 1856) = 0;
                        v19 = NewIrql;
LABEL_82:
                        KeReleaseSpinLock(v35, v19);
                        goto LABEL_35;
                      }
                    }
                  }
                }
                v19 = NewIrql;
              }
            }
            v18 = (KSPIN_LOCK *)(v3 + 96);
          }
        }
      }
      if ( Size <= 0x394 )
      {
        v20 = *(_QWORD *)(v3 + 1984) + 916LL;
        memmove((void *)v20, v7, Size);
        if ( *(_QWORD *)(v3 + 552) )
        {
          v36 = *(_QWORD *)(v3 + 1984);
          v37 = *(_BYTE *)(v20 + 1);
          v38 = (unsigned __int8)*(_DWORD *)(v20 + 8);
          v58 = *(_BYTE *)(v36 + 1);
          Size_4 = *(_DWORD *)(v20 + 8);
          v39 = v58 == v37;
          v60 = v37;
          v40 = 0;
          v41 = *(_WORD *)(v20 + 4);
          if ( (unsigned __int8)*(_DWORD *)(v36 + 8) == v38 )
            v40 = v39;
          v55 = v38;
          v42 = v41 & 0x10;
          v43 = *(_WORD *)(v20 + 12);
          if ( *(_WORD *)(v36 + 12) != v43 )
            goto LABEL_91;
          v44 = 0;
          if ( (*(_WORD *)(v36 + 4) & 0x10) == v42 )
            v44 = v40;
          if ( memcmp(
                 (const void *)(v36 + *(unsigned int *)(v36 + 16)),
                 (const void *)(v20 + *(unsigned int *)(v20 + 16)),
                 v43) )
          {
LABEL_91:
            v44 = 0;
          }
          if ( v58 >= 2u && v60 >= 2u )
          {
            v45 = *(_DWORD *)(v20 + 32);
            if ( *(_DWORD *)(v36 + 32) != v45
              || (v46 = *(_DWORD *)(v20 + 36), *(_DWORD *)(v36 + 36) != v46)
              || memcmp(
                   (const void *)(v36 + *(unsigned int *)(v36 + 28)),
                   (const void *)(v20 + *(unsigned int *)(v20 + 28)),
                   (unsigned int)(v45 * v46)) )
            {
              v44 = 0;
            }
            if ( v58 >= 3u
              && v60 >= 3u
              && (*(_WORD *)(v36 + 40) != *(_WORD *)(v20 + 40) || *(_BYTE *)(v36 + 42) != *(_BYTE *)(v20 + 42)) )
            {
              v44 = 0;
            }
          }
          v47 = *(_WORD *)(v20 + 20);
          if ( *(_WORD *)(v36 + 20) != v47
            || memcmp(
                 (const void *)(v36 + *(unsigned int *)(v36 + 24)),
                 (const void *)(v20 + *(unsigned int *)(v20 + 24)),
                 v47) )
          {
            v44 = 0;
          }
          v48 = *(_QWORD **)(v3 + 56);
          v49 = Size_4 & 0xFFFF00;
          while ( v48 )
          {
            v50 = v48[61];
            if ( v50 && v48 != a1 )
              v49 |= *(_DWORD *)(v50 + 8) & 0xFFFF00;
            v48 = (_QWORD *)v48[49];
          }
          *(_DWORD *)(v20 + 8) = v49 | v55;
          v51 = *(_DWORD *)(v36 + 8);
          *(_QWORD *)(v3 + 520) = 0LL;
          *(_DWORD *)(v3 + 1856) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), NewIrql);
          v21 = 0;
          if ( v49 == (v51 & 0xFFFF00) )
            v21 = v44;
          if ( v21 == 1 )
            goto LABEL_36;
        }
        else
        {
          *(_QWORD *)(v3 + 520) = 0LL;
          v21 = 0;
          *(_DWORD *)(v3 + 1856) = 0;
          KeReleaseSpinLock(v18, NewIrql);
        }
        *(_DWORD *)(a2 + 88) |= 0x800u;
        *(_QWORD *)(v3 + 528) = *(_QWORD *)(a2 + 40);
        *(_WORD *)(v3 + 536) = *(_WORD *)(a2 + 48);
        *(_QWORD *)(a2 + 40) = *(_QWORD *)(v3 + 1984) + 916LL;
        *(_DWORD *)(a2 + 48) = Size;
        goto LABEL_27;
      }
      *(_QWORD *)(v3 + 520) = 0LL;
      v12 = -1073676268;
      *(_DWORD *)(v3 + 1856) = 0;
      v35 = v18;
      goto LABEL_82;
    }
    *(_DWORD *)(a2 + 56) = v14;
    v12 = -1073676268;
    if ( (unsigned __int8)byte_1C0092612 < 2u )
      goto LABEL_35;
    v25 = 147LL;
    v52 = -1073676268;
    v26 = a1;
  }
  WPP_SF_qqd(v25, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, v3, v26, v52);
LABEL_35:
  v21 = 1;
LABEL_36:
  *(_DWORD *)(a2 + 52) = *(_DWORD *)(a2 + 48);
LABEL_27:
  *a3 = v12;
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qqDD(148LL, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, v3, a1, v21, v12);
  if ( v12 && (Microsoft_Windows_NDISEnableBits & 0x400000000LL) != 0 )
    Template_jqxqqq(
      *(_DWORD *)(v3 + 4080),
      (unsigned int)&SetOpenRSSCapsFailed,
      v3 + 4032,
      v3 + 4032,
      *(_DWORD *)(v3 + 4080),
      *(_QWORD *)(v3 + 4048),
      v12,
      202,
      (char)a1);
  return v21;
}
