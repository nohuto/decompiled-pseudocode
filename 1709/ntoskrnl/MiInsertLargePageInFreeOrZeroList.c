/*
 * XREFs of MiInsertLargePageInFreeOrZeroList @ 0x14004DAD0
 * Callers:
 *     MiDemoteLocalLargePage @ 0x1400C62F0 (MiDemoteLocalLargePage.c)
 *     MiDemoteLargeFreePage @ 0x1401264DC (MiDemoteLargeFreePage.c)
 *     MiDemoteLargeFreeZeroPage @ 0x14012E980 (MiDemoteLargeFreeZeroPage.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14004F970 (MiInsertPageInFreeOrZeroedList.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x1400BAF60 (KeAbPostReleaseEx.c)
 *     MiInsertLargePageInNodeListHelper @ 0x1400C6B30 (MiInsertLargePageInNodeListHelper.c)
 *     ExfTryAcquirePushLockShared @ 0x140100550 (ExfTryAcquirePushLockShared.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiAddColdPagesToHotRanges @ 0x14022A2C8 (MiAddColdPagesToHotRanges.c)
 *     MiSetFreshPfnFromFreeList @ 0x14022A964 (MiSetFreshPfnFromFreeList.c)
 *     HvlNotifyPageHeat @ 0x140294980 (HvlNotifyPageHeat.c)
 */

_QWORD *__fastcall MiInsertLargePageInFreeOrZeroList(__int64 a1, unsigned int a2, int a3, int a4, int a5)
{
  __int64 v5; // rsi
  unsigned __int64 v9; // r10
  __int64 v10; // r14
  int v11; // r11d
  __int64 v12; // r8
  BOOL v13; // ecx
  int v14; // eax
  unsigned __int64 v15; // rdx
  unsigned int v16; // r9d
  __int64 v17; // rcx
  __int64 v18; // rax
  _QWORD *v19; // r12
  char v20; // di
  __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // r15
  unsigned __int64 v24; // r13
  int v25; // edi
  __int64 v26; // rcx
  volatile signed __int64 *v27; // rdi
  __int64 v28; // rbx
  __int64 v29; // rdx
  unsigned __int64 *v30; // rbx
  unsigned int i; // edi
  unsigned __int64 v32; // rbx
  volatile signed __int32 *v33; // rsi
  __int64 v34; // rax
  bool v35; // zf
  unsigned __int64 v36; // rcx
  char v37; // al
  unsigned __int64 v38; // r14
  __int64 v39; // rdi
  __int64 v40; // rbx
  __int64 v41; // rbx
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // r14
  __int64 v45; // rbx
  __int64 v46; // rdi
  signed __int32 v47[8]; // [rsp+0h] [rbp-100h] BYREF
  unsigned int v48; // [rsp+20h] [rbp-E0h]
  BOOL v49; // [rsp+24h] [rbp-DCh]
  unsigned int v50; // [rsp+28h] [rbp-D8h]
  int v51; // [rsp+2Ch] [rbp-D4h]
  __int64 v52; // [rsp+30h] [rbp-D0h]
  int v53; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v54; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v55; // [rsp+48h] [rbp-B8h]
  _QWORD *v56; // [rsp+50h] [rbp-B0h]
  volatile signed __int32 *v57; // [rsp+58h] [rbp-A8h]
  __int64 v58; // [rsp+60h] [rbp-A0h]
  _QWORD *v59; // [rsp+68h] [rbp-98h]
  __int64 v60; // [rsp+70h] [rbp-90h]
  __int64 v61; // [rsp+78h] [rbp-88h]
  _QWORD *v62; // [rsp+80h] [rbp-80h]
  __int64 CurrentIrql; // [rsp+88h] [rbp-78h]
  unsigned int v64; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v65; // [rsp+94h] [rbp-6Ch]
  _BYTE v66[7]; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v67; // [rsp+120h] [rbp+20h] BYREF
  unsigned __int64 v68; // [rsp+128h] [rbp+28h]
  unsigned __int64 v69; // [rsp+158h] [rbp+58h]
  unsigned __int64 v70; // [rsp+160h] [rbp+60h]

  v5 = 0LL;
  v62 = (_QWORD *)a1;
  v58 = 0LL;
  v59 = 0LL;
  v9 = MiLargePageSizes[a2];
  v10 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  v11 = 512;
  v12 = (a1 + 0x58000000000LL) / 48;
  v67 = v12;
  v13 = a3 == 1;
  v49 = v13;
  v68 = v12 + 16;
  if ( a3 != 1 )
    v11 = 64;
  v14 = a5;
  v50 = v11;
  if ( a3 == 1 )
  {
    if ( !a5 )
    {
      a4 = 0;
      v14 = 16;
    }
  }
  else if ( !a5 )
  {
    goto LABEL_15;
  }
  v15 = (v14 + 15) & 0xFFFFFFF0;
  if ( v15 > v9 )
    v15 = v9;
  if ( a2 > 1 || v15 >= v9 )
  {
    v16 = a4 & 0xF;
  }
  else
  {
    v16 = dword_140388540 & a4;
    v17 = v12 + (v16 & 0xFFFFFFF0);
    v67 = v17;
    v68 = v17 + v15;
    if ( v17 + v15 > v12 + v9 )
    {
      v68 = v12 + v9;
      v69 = v12;
      v70 = v15 + v17 - v9;
    }
    v11 = v50;
    v13 = v49;
  }
  v10 = 48 * (v12 + v16) - 0x58000000000LL;
  v58 = v10;
LABEL_15:
  if ( v9 <= 0x10 )
  {
    v54 = 0LL;
    if ( !a3 )
      v13 = 1;
    v49 = v13;
  }
  else
  {
    v18 = a2 + 1;
    v5 = MiLargePageContainingFrames[v18];
    v54 = MiLargePageSizes[v18];
  }
  v19 = (_QWORD *)(a1 + 48 * v9);
  v20 = *(_BYTE *)(a1 + 34);
  v51 = 0;
  v65 = 0;
  v21 = (unsigned __int128)((__int64)(v19 + 0xB000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v22 = *(_QWORD *)(a1 + 40);
  v23 = 0LL;
  v24 = (__int64)(v19 + 0xB000000000LL) / 48;
  v25 = v20 & 7;
  v48 = v25;
  v50 = ((v25 != 0) + 1) | v11;
  v26 = *(_QWORD *)(qword_140388AF0 + 8 * ((v22 >> 40) & 0x3FF));
  v60 = v26;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (HvlEnlightenments & 0x200000) != 0 && a3 == 1 )
  {
    v27 = (volatile signed __int64 *)(v26 + 184);
    v64 = 1;
    v51 = 1;
    v28 = KeAbPreAcquire(v26 + 184, 0LL);
    if ( !_InterlockedCompareExchange64(v27, 17LL, 0LL) || (unsigned __int8)ExfTryAcquirePushLockShared(v27) )
    {
      if ( v28 )
        *(_BYTE *)(v28 + 26) |= 1u;
    }
    else
    {
      if ( v28 )
        KeAbPostReleaseEx((ULONG_PTR)v27);
      v29 = 0LL;
      v30 = &v67;
      for ( i = 0; i < 2; ++i )
      {
        if ( !v30[1] )
          break;
        MiAddColdPagesToHotRanges(&v64, v29, *v30);
        v30 += 7;
      }
      v21 = v65;
      if ( v65 )
        HvlNotifyPageHeat(v64, v65, v66);
      v51 = 0;
    }
    v25 = v48;
  }
  v32 = v24 + 1;
  v61 = v5 & 0xFFFFFFFFFLL;
  v33 = (volatile signed __int32 *)(v19 + 3);
  v34 = 48 * v24 - 0x57FFFFFFFD0LL;
  do
  {
    v33 -= 12;
    v53 = 0;
    v19 -= 6;
    v57 = v33;
    --v32;
    v56 = v19;
    v55 = v32;
    --v24;
    v52 = v34 - 48;
    while ( _interlockedbittestandset64(v33, 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v53);
      while ( *(__int64 *)v33 < 0 );
    }
    *(_QWORD *)v33 &= 0xC000000000000000uLL;
    v35 = v49;
    *((_QWORD *)v33 + 2) = v61 | *((_QWORD *)v33 + 2) & 0xFFFFFFF000000000uLL;
    if ( v35 && (v24 >= v67 && v24 < v68 || v24 >= v69 && v24 < v70) )
    {
      if ( v51 )
        MiAddColdPagesToHotRanges(&v64, v21, v24);
      *((_QWORD *)v33 + 2) &= 0xFFFFFFF000000000uLL;
      if ( v19 == (_QWORD *)v10 )
      {
        v21 = 0LL;
        *((_QWORD *)v33 - 2) |= 0x8000000000000000uLL;
        *(_QWORD *)v33 &= 0xFFFFFFF000000000uLL;
        *v19 = 0LL;
        _InterlockedOr(v47, 0);
        v36 = (*(_QWORD *)v33 ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
        *((_QWORD *)v33 - 1) = 0LL;
        v37 = *((_BYTE *)v33 + 10);
        *(_QWORD *)v33 ^= v36;
        *((_BYTE *)v33 + 10) = v37 & 0xF8 | 5;
        if ( v25 )
          MiSetFreshPfnFromFreeList(v19);
        v59 = v19;
      }
      else
      {
        MiInsertPageInFreeOrZeroedList(v24, v50);
      }
      _InterlockedAnd64((volatile signed __int64 *)v33, 0x7FFFFFFFFFFFFFFFuLL);
      v34 = v52;
      v38 = v32;
      v39 = v52;
      if ( v23 )
      {
        do
        {
          v40 = 16LL;
          do
          {
            MiLockPageAtDpcInline(v39);
            *(_QWORD *)(v39 + 40) = *(_QWORD *)(v39 + 40) & 0xFFFFFFF000000000uLL | 0xFFFFFFFFCLL;
            _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v39 += 48LL;
            --v40;
          }
          while ( v40 );
          MiLockPageAtDpcInline(v39 - 768);
          MiInsertLargePageInNodeListHelper(v38, 16LL, v48, 1LL);
          _InterlockedAnd64((volatile signed __int64 *)(v39 - 744), 0x7FFFFFFFFFFFFFFFuLL);
          v38 += 16LL;
          v23 -= 16LL;
        }
        while ( v23 );
        v33 = v57;
        v19 = v56;
        v32 = v55;
        v34 = v52;
      }
      v25 = v48;
    }
    else
    {
      v43 = v54;
      ++v23;
      if ( ((v54 - 1) & v24) != 0 )
      {
        _InterlockedAnd64((volatile signed __int64 *)v33, 0x7FFFFFFFFFFFFFFFuLL);
        v34 = v52;
      }
      else
      {
        v21 = v23 % v54;
        v44 = v24;
        v45 = (__int64)v19;
        if ( v23 % v54 )
        {
          do
          {
            if ( (_QWORD *)v45 == v19 )
              _InterlockedAnd64((volatile signed __int64 *)(v45 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v46 = 16LL;
            do
            {
              MiLockPageAtDpcInline(v45);
              *(_QWORD *)(v45 + 40) = *(_QWORD *)(v45 + 40) & 0xFFFFFFF000000000uLL | 0xFFFFFFFFCLL;
              _InterlockedAnd64((volatile signed __int64 *)(v45 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v45 += 48LL;
              --v46;
            }
            while ( v46 );
            MiLockPageAtDpcInline(v45 - 768);
            MiInsertLargePageInNodeListHelper(v44, 16LL, v48, 1LL);
            _InterlockedAnd64((volatile signed __int64 *)(v45 - 744), 0x7FFFFFFFFFFFFFFFuLL);
            v43 = v54;
            v23 -= 16LL;
            v19 = v56;
            v44 += 16LL;
            v21 = v23 % v54;
          }
          while ( v23 % v54 );
          v33 = v57;
        }
        v25 = v48;
        if ( v23 )
        {
          MiInsertLargePageInNodeListHelper(v24, v43, v48, 1LL);
          _InterlockedAnd64((volatile signed __int64 *)v33, 0x7FFFFFFFFFFFFFFFuLL);
          v32 = v55;
          v34 = v52;
          v23 = 0LL;
        }
        else
        {
          v32 = v55;
          v34 = v52;
        }
      }
    }
    v10 = v58;
  }
  while ( v19 != v62 );
  if ( v51 )
  {
    if ( v65 )
      HvlNotifyPageHeat(v64, v65, v66);
    v41 = v60;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v60 + 184), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v41 + 184);
    KeAbPostRelease(v41 + 184);
  }
  __writecr8((unsigned __int8)CurrentIrql);
  return v59;
}
