/*
 * XREFs of MiScrubLargeMappedPage @ 0x14022617C
 * Callers:
 *     MiScrubProcesses @ 0x1406C0060 (MiScrubProcesses.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x14000D660 (KeShouldYieldProcessor.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiWorkingSetIsContended @ 0x14007A1C0 (MiWorkingSetIsContended.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400A3C70 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiIsAddressValid @ 0x1400A58A0 (MiIsAddressValid.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakePageBad @ 0x140225FD8 (MiMakePageBad.c)
 *     MiScrubPage @ 0x140226824 (MiScrubPage.c)
 */

__int64 __fastcall MiScrubLargeMappedPage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r14
  __int64 v5; // r13
  LONG *SharedVm; // rdi
  KIRQL v7; // si
  __int64 v8; // rdi
  unsigned __int64 v9; // r15
  __int64 v10; // r12
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rdi
  _KPROCESS *v14; // rdx
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rax
  LONG *v17; // rsi
  LONG *v18; // rdi
  unsigned __int64 v19; // r10
  unsigned __int8 v21; // [rsp+20h] [rbp-178h]
  char v22; // [rsp+22h] [rbp-176h]
  __int64 v23; // [rsp+30h] [rbp-168h] BYREF
  __int64 v24; // [rsp+38h] [rbp-160h]
  __int64 v25; // [rsp+40h] [rbp-158h]
  __int64 v26; // [rsp+48h] [rbp-150h]
  __int64 v27; // [rsp+50h] [rbp-148h]
  __int64 v28; // [rsp+60h] [rbp-138h]
  unsigned __int64 v29; // [rsp+70h] [rbp-128h]
  unsigned __int64 v30; // [rsp+78h] [rbp-120h]
  unsigned __int64 v31; // [rsp+80h] [rbp-118h]
  int v32; // [rsp+90h] [rbp-108h] BYREF
  __int16 v33; // [rsp+94h] [rbp-104h]
  __int64 v34; // [rsp+98h] [rbp-100h]
  __int64 v35; // [rsp+A0h] [rbp-F8h]
  __int64 v36; // [rsp+A8h] [rbp-F0h]

  v25 = a2;
  v28 = a2;
  v34 = 20LL;
  v32 = 1;
  v33 = 0;
  v35 = 0LL;
  v36 = 0LL;
  v22 = 0;
  v4 = ((((unsigned __int64)*(unsigned int *)(a1 + 24) >> 6) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 26)) & 0x3FFFFFF8)
     - 0x904C0000000LL;
  v30 = (((((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) << 12) | 0xFFF) >> 18) & 0x3FFFFFF8)
      - 0x904C0000000LL;
  v5 = a3 + 1280;
  v26 = a3 + 1280;
  SharedVm = MiGetSharedVm(a3 + 1280);
  v7 = ExAcquireSpinLockExclusive(SharedVm);
  v21 = v7;
LABEL_2:
  SharedVm[1] = 0;
  while ( v4 <= v30 )
  {
    v8 = 512LL;
    v24 = 512LL;
    v27 = 512LL;
    v9 = v4;
    v10 = (__int64)(v4 << 25) >> 16 << 25 >> 16;
    if ( !MiIsAddressValid(v10) )
    {
      MiUnlockWorkingSetExclusive(v5, v7);
      SharedVm = MiGetSharedVm(v5);
      ExAcquireSpinLockExclusive(SharedVm);
      goto LABEL_2;
    }
    v11 = MI_IS_PHYSICAL_ADDRESS(v10);
    if ( !v11 )
    {
      v4 = v4 & 0xFFFFFFFFFFFFF000uLL | 0xFF8;
      goto LABEL_8;
    }
    if ( v11 > 1 )
    {
      v12 = v11 - 1;
      do
      {
        v9 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v8 <<= 9;
        v27 = v8;
        --v12;
      }
      while ( v12 );
      v24 = v8;
    }
    v13 = MI_READ_PTE_LOCK_FREE(v9);
    v23 = v13;
    if ( v13 )
    {
      *(_QWORD *)v9 = 0LL;
      if ( MiPteInShadowRange(v9) )
        MiWritePteShadow();
      MiInsertTbFlushEntry((__int64)&v32, v10, 1LL, 1);
      MiFlushTbList((__int64)&v32, v14);
      v15 = 48 * MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v23) - 0x58000000000LL;
      v16 = v15 + 48 * v24;
      v31 = v16;
      while ( 1 )
      {
        v29 = v15;
        if ( v15 >= v16 )
          break;
        if ( *(_WORD *)(v15 + 32) == 2 )
        {
          if ( (int)MiScrubPage(v25, *(_QWORD *)(v25 + 24), v15, 0LL) < 0 )
          {
            MiLockPageAtDpcInline(v15);
            MiMakePageBad(v15, 0);
            _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v13 = v23;
          }
          if ( (unsigned int)MiWorkingSetIsContended(v5) || KeShouldYieldProcessor() )
          {
            v13 |= 0x20uLL;
            v23 = v13;
            *(_QWORD *)v9 = v13;
            if ( MiPteInShadowRange(v9) )
              MiWritePteShadow();
            MiUnlockWorkingSetExclusive(v5, v21);
            v17 = MiGetSharedVm(v5);
            ExAcquireSpinLockExclusive(v17);
            v17[1] = 0;
            while ( !MiIsAddressValid(v10) )
            {
              MiUnlockWorkingSetExclusive(v5, v21);
              v18 = MiGetSharedVm(v5);
              ExAcquireSpinLockExclusive(v18);
              v18[1] = 0;
              v13 = v23;
            }
            v15 = v29;
          }
          if ( *(_DWORD *)(a4 + 4) )
          {
            v22 = 1;
            break;
          }
          v16 = v31;
        }
        v15 += 48LL;
      }
      v23 = v13 | 0x20;
      *(_QWORD *)v9 = v13 | 0x20;
      if ( MiPteInShadowRange(v9) )
        MiWritePteShadow();
      v7 = v21;
      v4 += 8 * (v19 >> 9);
      if ( v22 == 1 )
      {
        MiUnlockWorkingSetExclusive(v5, v21);
        return 0LL;
      }
    }
    else
    {
LABEL_8:
      v4 += 8LL;
    }
  }
  MiUnlockWorkingSetExclusive(v5, v7);
  return 1LL;
}
