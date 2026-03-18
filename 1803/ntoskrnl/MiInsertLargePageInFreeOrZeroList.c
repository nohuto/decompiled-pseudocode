/*
 * XREFs of MiInsertLargePageInFreeOrZeroList @ 0x140029290
 * Callers:
 *     MiDemoteLargeFreePage @ 0x140003C2C (MiDemoteLargeFreePage.c)
 *     MiDemoteLocalLargePage @ 0x1400E6D90 (MiDemoteLocalLargePage.c)
 *     MiDemoteLargeFreeZeroPage @ 0x14014C928 (MiDemoteLargeFreeZeroPage.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeAbPostReleaseEx @ 0x14007C82C (KeAbPostReleaseEx.c)
 *     ExfTryAcquirePushLockShared @ 0x1400A27C0 (ExfTryAcquirePushLockShared.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     MiInsertLargePageInNodeListHelper @ 0x140122680 (MiInsertLargePageInNodeListHelper.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiAddColdPagesToHotRanges @ 0x140264C70 (MiAddColdPagesToHotRanges.c)
 *     MiArePageContentsZero @ 0x140264DE4 (MiArePageContentsZero.c)
 *     MiSetFreshPfnFromFreeList @ 0x140265454 (MiSetFreshPfnFromFreeList.c)
 *     HvlNotifyPageHeat @ 0x1402CA4CC (HvlNotifyPageHeat.c)
 */

__int64 __fastcall MiInsertLargePageInFreeOrZeroList(__int64 a1, unsigned int a2, int a3, int a4, int a5)
{
  __int64 v7; // r11
  unsigned __int64 v8; // r10
  int v9; // r14d
  __int64 v10; // rdx
  BOOL v11; // ecx
  int v12; // eax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r8
  unsigned int v15; // r9d
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rsi
  char v20; // r13
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // r15
  ULONG_PTR v23; // r12
  int v24; // r13d
  int v25; // eax
  int v26; // r14d
  __int64 v27; // rcx
  volatile signed __int64 *v28; // rdi
  __int64 v29; // rbx
  __int64 v30; // rdx
  ULONG_PTR *v31; // rbx
  unsigned int i; // edi
  ULONG_PTR v33; // rbx
  __int64 v34; // rdi
  __int64 v35; // r8
  ULONG_PTR v36; // rbx
  unsigned __int64 v37; // rax
  bool v38; // zf
  char v39; // al
  ULONG_PTR v40; // r14
  __int64 v41; // rbx
  __int64 v42; // rdi
  unsigned __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rbx
  ULONG_PTR v47; // r14
  __int64 v48; // rdi
  __int64 v49; // rbx
  signed __int32 v50[8]; // [rsp+0h] [rbp-100h] BYREF
  BOOL v51; // [rsp+20h] [rbp-E0h]
  int v52; // [rsp+24h] [rbp-DCh]
  int v53; // [rsp+28h] [rbp-D8h]
  __int64 v54; // [rsp+30h] [rbp-D0h]
  _DWORD v55[2]; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v56; // [rsp+40h] [rbp-C0h]
  __int64 v57; // [rsp+48h] [rbp-B8h]
  __int64 v58; // [rsp+50h] [rbp-B0h]
  __int64 v59; // [rsp+58h] [rbp-A8h]
  ULONG_PTR v60; // [rsp+60h] [rbp-A0h]
  __int64 v61; // [rsp+68h] [rbp-98h]
  __int64 v62; // [rsp+70h] [rbp-90h]
  ULONG_PTR v63; // [rsp+78h] [rbp-88h]
  __int64 CurrentIrql; // [rsp+80h] [rbp-80h]
  unsigned int v65; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v66; // [rsp+94h] [rbp-6Ch]
  _BYTE v67[7]; // [rsp+98h] [rbp-68h] BYREF
  ULONG_PTR v68; // [rsp+120h] [rbp+20h] BYREF
  ULONG_PTR v69; // [rsp+128h] [rbp+28h]
  ULONG_PTR v70; // [rsp+158h] [rbp+58h]
  ULONG_PTR v71; // [rsp+160h] [rbp+60h]

  v58 = a1;
  v59 = 0LL;
  v7 = a1;
  v61 = 0LL;
  v8 = MiLargePageSizes[a2];
  v70 = 0LL;
  v71 = 0LL;
  v9 = 512;
  v10 = (a1 + 0x58000000000LL) / 48;
  v68 = v10;
  v11 = a3 == 1;
  v51 = v11;
  v69 = v10 + 16;
  if ( a3 != 1 )
    v9 = 64;
  v12 = a5;
  if ( a3 == 1 )
  {
    if ( !a5 )
    {
      a4 = 0;
      v12 = 16;
    }
    goto LABEL_7;
  }
  if ( a5 )
  {
LABEL_7:
    v13 = (v12 + 15) & 0xFFFFFFF0;
    v14 = v8;
    if ( v13 <= v8 )
      v14 = v13;
    if ( a2 > 1 || v14 >= v8 )
    {
      v15 = a4 & 0xF;
    }
    else
    {
      v15 = dword_1403CB6D8 & a4;
      v68 = v10 + (v15 & 0xFFFFFFF0);
      v69 = v68 + v14;
      if ( v68 + v14 > v10 + v8 )
      {
        v69 = v10 + v8;
        v70 = v10;
        v71 = v10 + v14 + (v15 & 0xFFFFFFF0) - v8;
      }
      v7 = v58;
      v11 = v51;
    }
    v59 = 48 * (v10 + v15) - 0x58000000000LL;
  }
  if ( v8 <= 0x10 )
  {
    v54 = 0LL;
    v56 = 0LL;
    if ( !a3 )
      v11 = 1;
    v51 = v11;
  }
  else
  {
    v16 = a2 + 1;
    v17 = MiLargePageContainingFrames[v16];
    v18 = MiLargePageSizes[v16];
    v54 = v17;
    v56 = v18;
  }
  v19 = v7 + 48 * v8;
  v20 = *(_BYTE *)(v7 + 34);
  v21 = *(_QWORD *)(v7 + 40);
  v22 = 0LL;
  v52 = 0;
  v23 = (v19 + 0x58000000000LL) / 48;
  v66 = 0;
  v24 = v20 & 7;
  v53 = v24;
  v25 = v9 | ((v24 != 0) + 1);
  v26 = 0;
  v55[1] = v25;
  v27 = *(_QWORD *)(qword_1403CBD88 + 8 * ((v21 >> 40) & 0x3FF));
  v62 = v27;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (HvlEnlightenments & 0x200000) != 0 && a3 == 1 )
  {
    v28 = (volatile signed __int64 *)(v27 + 184);
    v65 = 1;
    v52 = 1;
    v26 = 1;
    v29 = KeAbPreAcquire(v27 + 184, 0LL, 1);
    if ( !_InterlockedCompareExchange64(v28, 17LL, 0LL) || (unsigned __int8)ExfTryAcquirePushLockShared(v28) )
    {
      if ( v29 )
        *(_BYTE *)(v29 + 26) |= 1u;
    }
    else
    {
      if ( v29 )
        KeAbPostReleaseEx((ULONG_PTR)v28);
      v31 = &v68;
      for ( i = 0; i < 2; ++i )
      {
        if ( !v31[1] )
          break;
        MiAddColdPagesToHotRanges(&v65, v30, *v31);
        v31 += 7;
      }
      if ( v66 )
        HvlNotifyPageHeat(v65, v66, v67);
      v26 = 0;
      v52 = 0;
    }
  }
  v54 &= 0xFFFFFFFFFuLL;
  v33 = v23 + 1;
  v34 = 48 * v23 - 0x57FFFFFFFD0LL;
  v35 = 0x7FFFFFFFFFFFFFFFLL;
  do
  {
    --v23;
    v55[0] = 0;
    v36 = v33 - 1;
    v60 = v23;
    v34 -= 48LL;
    v63 = v36;
    v19 -= 48LL;
    v57 = v34;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(v55);
        while ( *(__int64 *)(v19 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) );
      v35 = 0x7FFFFFFFFFFFFFFFLL;
    }
    *(_QWORD *)(v19 + 24) &= 0xC000000000000000uLL;
    v37 = v54 | *(_QWORD *)(v19 + 40) & 0xFFFFFFF000000000uLL;
    v38 = v51;
    *(_QWORD *)(v19 + 40) = v37;
    if ( v38 && (v23 >= v68 && v23 < v69 || v23 >= v70 && v23 < v71) )
    {
      if ( v26 )
      {
        MiAddColdPagesToHotRanges(&v65, 0LL, v23);
        v37 = *(_QWORD *)(v19 + 40);
      }
      *(_QWORD *)(v19 + 40) = v37 & 0xFFFFFFF000000000uLL;
      if ( v19 != v59 )
      {
        MiInsertPageInFreeOrZeroedList(v23);
        goto LABEL_55;
      }
      *(_QWORD *)(v19 + 8) |= 0x8000000000000000uLL;
      *(_QWORD *)(v19 + 24) &= 0xFFFFFFF000000000uLL;
      *(_QWORD *)v19 = 0LL;
      _InterlockedOr(v50, 0);
      v39 = *(_BYTE *)(v19 + 34);
      *(_QWORD *)(v19 + 24) ^= (*(_QWORD *)(v19 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
      *(_BYTE *)(v19 + 34) = v39 & 0xF8 | 5;
      *(_QWORD *)(v19 + 16) = ZeroPte;
      if ( v24 )
      {
        MiSetFreshPfnFromFreeList(v19);
      }
      else if ( (MiFlags & 0x80u) != 0 && (++dword_1403CBEAC & MmPageValidationFrequency) == 0 )
      {
        MiArePageContentsZero(v23);
        v61 = v19;
LABEL_55:
        v35 = 0x7FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v40 = v36;
        v41 = v34;
        if ( !v22 )
          goto LABEL_61;
        do
        {
          v42 = 16LL;
          do
          {
            MiLockPageAtDpcInline(v41);
            *(_QWORD *)(v41 + 40) = *(_QWORD *)(v41 + 40) & 0xFFFFFFF000000000uLL | 0xFFFFFFFFCLL;
            _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v41 += 48LL;
            --v42;
          }
          while ( v42 );
          MiLockPageAtDpcInline(v41 - 768);
          v24 = v53;
          MiInsertLargePageInNodeListHelper(v40);
          v35 = 0x7FFFFFFFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)(v41 - 744), 0x7FFFFFFFFFFFFFFFuLL);
          v40 += 16LL;
          v22 -= 16LL;
        }
        while ( v22 );
        v23 = v60;
LABEL_60:
        v34 = v57;
        goto LABEL_61;
      }
      v61 = v19;
      goto LABEL_55;
    }
    ++v22;
    if ( ((v56 - 1) & v23) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
      v47 = v23;
      v48 = v19;
      if ( v22 % v56 )
      {
        do
        {
          if ( v48 == v19 )
            _InterlockedAnd64((volatile signed __int64 *)(v48 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v49 = 16LL;
          do
          {
            MiLockPageAtDpcInline(v48);
            *(_QWORD *)(v48 + 40) = *(_QWORD *)(v48 + 40) & 0xFFFFFFF000000000uLL | 0xFFFFFFFFCLL;
            _InterlockedAnd64((volatile signed __int64 *)(v48 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v48 += 48LL;
            --v49;
          }
          while ( v49 );
          MiLockPageAtDpcInline(v48 - 768);
          v24 = v53;
          MiInsertLargePageInNodeListHelper(v47);
          v35 = 0x7FFFFFFFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)(v48 - 744), 0x7FFFFFFFFFFFFFFFuLL);
          v22 -= 16LL;
          v47 += 16LL;
        }
        while ( v22 % v56 );
        v23 = v60;
      }
      if ( !v22 )
        goto LABEL_60;
      MiInsertLargePageInNodeListHelper(v23);
      v35 = 0x7FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v34 = v57;
      v22 = 0LL;
    }
LABEL_61:
    v43 = 0xFFFFFFF000000000uLL;
    v33 = v63;
    v26 = v52;
  }
  while ( v19 != v58 );
  if ( v52 )
  {
    v44 = v66;
    if ( v66 )
      HvlNotifyPageHeat(v65, v66, v67);
    v45 = v62;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v62 + 184), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v45 + 184, v44, v35, v43);
    KeAbPostRelease(v45 + 184);
  }
  __writecr8((unsigned __int8)CurrentIrql);
  return v61;
}
