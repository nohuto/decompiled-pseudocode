/*
 * XREFs of MiUnlockCodePage @ 0x1400A19C0
 * Callers:
 *     MiUnlockImageSection @ 0x1400A190C (MiUnlockImageSection.c)
 *     MiLockCode @ 0x14013AB00 (MiLockCode.c)
 *     PopFreeHiberContext @ 0x1405EF808 (PopFreeHiberContext.c)
 *     MiHandleDriverNonPagedSections @ 0x1405FA75C (MiHandleDriverNonPagedSections.c)
 *     MiUnlockDriverCode @ 0x140604B7C (MiUnlockDriverCode.c)
 *     MiUnlockHotPatchPages @ 0x14074CD58 (MiUnlockHotPatchPages.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiPfnReferenceCountIsZero @ 0x1400309A0 (MiPfnReferenceCountIsZero.c)
 *     MiIsPfnCommitNotCharged @ 0x140032060 (MiIsPfnCommitNotCharged.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     MiIsPfnFileOnly @ 0x140121930 (MiIsPfnFileOnly.c)
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

void __fastcall MiUnlockCodePage(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi
  __int64 v4; // r11
  __int64 v5; // r9
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rcx
  __int64 v8; // r14
  ULONG_PTR v9; // rbx
  unsigned __int8 CurrentIrql; // r15
  __int16 v11; // dx
  __int16 v12; // dx
  unsigned __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rcx
  BOOL v16; // esi
  unsigned __int64 v17; // rcx
  char v18; // al
  int v19; // r11d
  __int64 v20; // rbp
  unsigned __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // r8
  unsigned __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // r8
  int v27; // r10d
  int v28; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v29; // [rsp+78h] [rbp+10h] BYREF

  if ( a1 <= a2 )
  {
    v3 = a1;
    v4 = 0xFFFFFFFFFLL;
    v5 = 0x3FFFFFFFFFFFFFFFLL;
    v6 = 0xFFFFF6FB7DBED7F8uLL;
    do
    {
      v7 = *(_QWORD *)v3;
      if ( v3 >= 0xFFFFF6FB7DBED000uLL
        && v3 <= v6
        && (MiFlags & 0x1800000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v7 & 1) != 0
        && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
      {
        v21 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v21 )
        {
          v22 = *(_QWORD *)(v21 + 8 * ((v3 >> 3) & 0x1FF));
          v23 = v7 | 0x20;
          if ( (v22 & 0x20) == 0 )
            v23 = *(_QWORD *)v3;
          v7 = v23;
          if ( (v22 & 0x42) != 0 )
            v7 = v23 | 0x42;
        }
        v6 = 0xFFFFF6FB7DBED7F8uLL;
      }
      v29 = v7;
      if ( (unsigned __int64)&v29 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)&v29 <= v6
        && (MiFlags & 0x1800000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v7 & 1) != 0
        && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
      {
        v24 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v24 )
        {
          v25 = *(_QWORD *)(v24 + 8 * (((unsigned __int64)&v29 >> 3) & 0x1FF));
          v26 = v7 | 0x20;
          if ( (v25 & 0x20) == 0 )
            v26 = v7;
          v7 = v26;
          v6 = 0xFFFFF6FB7DBED7F8uLL;
          if ( (v25 & 0x42) != 0 )
            v7 |= 0x42uLL;
        }
        else
        {
          v6 = 0xFFFFF6FB7DBED7F8uLL;
        }
      }
      v8 = 48 * (v4 & (v7 >> 12));
      v9 = v8 - 0x58000000000LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      v28 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 - 0x58000000000LL + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v28);
          while ( *(__int64 *)(v9 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) );
        v6 = 0xFFFFF6FB7DBED7F8uLL;
        v5 = 0x3FFFFFFFFFFFFFFFLL;
        v4 = 0xFFFFFFFFFLL;
      }
      v11 = *(_WORD *)(v9 + 32);
      if ( !v11 )
        KeBugCheckEx(0x4Eu, 0x9AuLL, v8 / 48, *(_BYTE *)(v9 + 34) & 7, 0LL);
      v12 = v11 - 1;
      *(_WORD *)(v9 + 32) = v12;
      if ( !v12 && (unsigned int)MiIsPfnFileOnly(v9) )
        goto LABEL_60;
      v13 = *(_QWORD *)(v9 + 40);
      v14 = (v13 >> 52) & 1;
      if ( (*(_QWORD *)(v9 + 24) & 0x4000000000000000LL) != 0 )
      {
        if ( v14 )
          goto LABEL_20;
      }
      else if ( v14 )
      {
        goto LABEL_20;
      }
      v15 = v5 & *(_QWORD *)(v9 + 24);
      if ( v12 )
      {
        if ( v12 == 1 )
        {
          if ( !v15 && (*(_BYTE *)(v9 + 34) & 8) == 0 )
            goto LABEL_20;
        }
        else if ( v12 != 2 || !v15 || (*(_BYTE *)(v9 + 34) & 8) == 0 )
        {
          goto LABEL_20;
        }
      }
      if ( ((v16 = v12 == 0, v17 = *(_QWORD *)(v9 + 8) | 0x8000000000000000uLL, v17 > 0xFFFFF6BFFFFFFF78uLL)
         || v17 < 0xFFFFF68000000000uLL)
        && (v18 = *(_BYTE *)(v9 + 35), (v18 & 0x20) != 0) )
      {
        *(_BYTE *)(v9 + 35) = v18 & 0xDF;
      }
      else
      {
        if ( (v13 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v9 + 16) & 0x400LL) != 0 )
        {
          v19 = 1;
        }
        else if ( (unsigned int)MiIsPfnCommitNotCharged(v9) )
        {
          v19 = 1;
        }
        else if ( v16 && v27 )
        {
          v19 = 1;
        }
        v20 = *(_QWORD *)(qword_1403CBD88 + 8 * ((v13 >> 40) & 0x3FF));
        if ( v19 == 1 )
          MiReturnCommit(v20, 1uLL);
        if ( (ULONG_PTR *)v20 == &MiSystemPartition )
          MiReturnResidentAvailable(1LL, 1LL);
        else
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 7104), 1uLL);
        v4 = 0xFFFFFFFFFLL;
      }
      if ( v16 )
      {
LABEL_60:
        MiPfnReferenceCountIsZero(v9, v8 / 48);
        v6 = 0xFFFFF6FB7DBED7F8uLL;
        v5 = 0x3FFFFFFFFFFFFFFFLL;
        v4 = 0xFFFFFFFFFLL;
      }
      else
      {
        v6 = 0xFFFFF6FB7DBED7F8uLL;
        v5 = 0x3FFFFFFFFFFFFFFFLL;
      }
LABEL_20:
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
      v3 += 8LL;
    }
    while ( v3 <= a2 );
  }
}
