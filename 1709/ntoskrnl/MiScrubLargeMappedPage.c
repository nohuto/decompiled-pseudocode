/*
 * XREFs of MiScrubLargeMappedPage @ 0x1402387C4
 * Callers:
 *     MiScrubProcesses @ 0x1406EEA90 (MiScrubProcesses.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     MiIsAddressValid @ 0x140066790 (MiIsAddressValid.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400BD300 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiWorkingSetIsContended @ 0x1400EBDF0 (MiWorkingSetIsContended.c)
 *     KeShouldYieldProcessor @ 0x1401091E0 (KeShouldYieldProcessor.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MiMakePageBad @ 0x1402385C8 (MiMakePageBad.c)
 *     MiScrubPage @ 0x140238F30 (MiScrubPage.c)
 */

__int64 __fastcall MiScrubLargeMappedPage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r14
  __int64 v5; // rsi
  LONG *SharedVm; // rbx
  __int64 v7; // rdx
  KIRQL v8; // r13
  __int64 v9; // rbx
  unsigned __int64 v10; // r15
  __int64 v11; // r12
  __int64 v12; // rdx
  unsigned int v13; // eax
  __int64 v14; // rcx
  __int64 PteShadow; // rbx
  _KPROCESS *v16; // rdx
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  LONG *v22; // rsi
  LONG *v23; // rbx
  KIRQL v25; // [rsp+20h] [rbp-168h]
  char v26; // [rsp+22h] [rbp-166h]
  __int64 v27; // [rsp+30h] [rbp-158h] BYREF
  __int64 v28; // [rsp+38h] [rbp-150h]
  __int64 v29; // [rsp+40h] [rbp-148h]
  __int64 v30; // [rsp+48h] [rbp-140h]
  __int64 v31; // [rsp+50h] [rbp-138h]
  __int64 v32; // [rsp+60h] [rbp-128h]
  unsigned __int64 v33; // [rsp+70h] [rbp-118h]
  unsigned __int64 v34; // [rsp+78h] [rbp-110h]
  int v35; // [rsp+80h] [rbp-108h] BYREF
  __int16 v36; // [rsp+84h] [rbp-104h]
  int v37; // [rsp+88h] [rbp-100h]
  int v38; // [rsp+8Ch] [rbp-FCh]
  __int64 v39; // [rsp+90h] [rbp-F8h]
  __int64 v40; // [rsp+98h] [rbp-F0h]

  v30 = a2;
  v32 = a2;
  v38 = 0;
  v35 = 1;
  v36 = 0;
  v39 = 0LL;
  v37 = 20;
  v40 = 0LL;
  v26 = 0;
  v4 = ((((unsigned __int64)*(unsigned int *)(a1 + 24) >> 6) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 26)) & 0x3FFFFFF8)
     - 0x904C0000000LL;
  v33 = (((((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) << 12) | 0xFFF) >> 18) & 0x3FFFFFF8)
      - 0x904C0000000LL;
  v5 = a3 + 1280;
  v29 = a3 + 1280;
  SharedVm = MiGetSharedVm(a3 + 1280);
  v8 = ExAcquireSpinLockExclusive(SharedVm);
  v25 = v8;
LABEL_2:
  SharedVm[1] = 0;
  while ( v4 <= v33 )
  {
    v9 = 512LL;
    v28 = 512LL;
    v31 = 512LL;
    v10 = v4;
    v11 = (__int64)(v4 << 25) >> 16 << 25 >> 16;
    if ( !MiIsAddressValid(v11) )
    {
      LOBYTE(v12) = v8;
      MiUnlockWorkingSetExclusive(v5, v12);
      SharedVm = MiGetSharedVm(v5);
      ExAcquireSpinLockExclusive(SharedVm);
      goto LABEL_2;
    }
    v13 = MI_IS_PHYSICAL_ADDRESS(v11);
    if ( !v13 )
    {
      v4 = v4 & 0xFFFFFFFFFFFFF000uLL | 0xFF8;
      goto LABEL_8;
    }
    if ( v13 > 1 )
    {
      v14 = v13 - 1;
      do
      {
        v10 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v9 <<= 9;
        v31 = v9;
        --v14;
      }
      while ( v14 );
      v28 = v9;
    }
    PteShadow = *(_QWORD *)v10;
    v7 = 0xFFFFF6FB7DBED7F8uLL;
    if ( v10 >= 0xFFFFF6FB7DBED000uLL && v10 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      PteShadow = MiReadPteShadow();
      v7 = 0xFFFFF6FB7DBED7F8uLL;
    }
    v27 = PteShadow;
    if ( PteShadow )
    {
      *(_QWORD *)v10 = 0LL;
      if ( v10 >= 0xFFFFF6FB7DBED000uLL && v10 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow();
      MiInsertTbFlushEntry(&v35, v11, 1LL, 1);
      MiFlushTbList((__int64)&v35, v16);
      v17 = 48 * MI_GET_PAGE_FRAME_FROM_PTE((unsigned __int64 *)&v27) - 0x58000000000LL;
      v18 = v28;
      v19 = v17 + 48 * v28;
      v34 = v19;
      while ( v17 < v19 )
      {
        if ( *(_WORD *)(v17 + 32) == 2 )
        {
          if ( (int)MiScrubPage(v30, *(_QWORD *)(v30 + 152), v17, 0LL) < 0 )
          {
            MiLockPageAtDpcInline(v17);
            MiMakePageBad(v17, 0, v20, v21);
            _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            PteShadow = v27;
          }
          if ( (unsigned int)MiWorkingSetIsContended(v5) || KeShouldYieldProcessor() )
          {
            PteShadow |= 0x20uLL;
            v27 = PteShadow;
            *(_QWORD *)v10 = PteShadow;
            if ( v10 >= 0xFFFFF6FB7DBED000uLL && v10 <= 0xFFFFF6FB7DBED7F8uLL )
              MiWritePteShadow();
            LOBYTE(v7) = v25;
            MiUnlockWorkingSetExclusive(v5, v7);
            v22 = MiGetSharedVm(v5);
            ExAcquireSpinLockExclusive(v22);
            v22[1] = 0;
            v5 = v29;
            while ( !MiIsAddressValid(v11) )
            {
              LOBYTE(v7) = v25;
              MiUnlockWorkingSetExclusive(v5, v7);
              v23 = MiGetSharedVm(v5);
              ExAcquireSpinLockExclusive(v23);
              v23[1] = 0;
              PteShadow = v27;
            }
          }
          v18 = v28;
          if ( *(_DWORD *)(a4 + 4) )
          {
            v26 = 1;
            break;
          }
          v19 = v34;
        }
        v17 += 48LL;
      }
      v27 = PteShadow | 0x20;
      *(_QWORD *)v10 = PteShadow | 0x20;
      if ( v10 >= 0xFFFFF6FB7DBED000uLL && v10 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow();
      v8 = v25;
      v4 += 8 * (v18 >> 9);
      if ( v26 == 1 )
      {
        LOBYTE(v7) = v25;
        MiUnlockWorkingSetExclusive(v5, v7);
        return 0LL;
      }
    }
    else
    {
LABEL_8:
      v4 += 8LL;
    }
  }
  LOBYTE(v7) = v8;
  MiUnlockWorkingSetExclusive(v5, v7);
  return 1LL;
}
