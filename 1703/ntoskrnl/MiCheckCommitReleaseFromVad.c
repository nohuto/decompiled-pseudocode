/*
 * XREFs of MiCheckCommitReleaseFromVad @ 0x14020ADC8
 * Callers:
 *     MiReleaseOutSwappedProcessCommit @ 0x14020C398 (MiReleaseOutSwappedProcessCommit.c)
 * Callees:
 *     MI_PROTO_FORMAT_COMBINED @ 0x140073B74 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiIsPteInStore @ 0x140074CBC (MiIsPteInStore.c)
 *     MiLockTransitionLeafPage @ 0x14007A494 (MiLockTransitionLeafPage.c)
 *     MiLocateCloneAddress @ 0x14007C278 (MiLocateCloneAddress.c)
 *     MiRotatedToFrameBuffer @ 0x14007C2AC (MiRotatedToFrameBuffer.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiLockWorkingSetShared @ 0x1400A7E80 (MiLockWorkingSetShared.c)
 *     MiGetNextPageTable @ 0x1400D2560 (MiGetNextPageTable.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x14017CEE4 (MiIsPrototypePteVadLookup.c)
 *     MiComputeCommitChargeForZeroPteRange @ 0x14020B170 (MiComputeCommitChargeForZeroPteRange.c)
 *     MiComputeImageVadCommitCharge @ 0x14020B220 (MiComputeImageVadCommitCharge.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiCheckCommitReleaseFromVad(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, _QWORD *a6)
{
  __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r14
  __int64 v11; // r9
  unsigned __int8 i; // bp
  __int64 NextPageTable; // rax
  unsigned __int64 v14; // rsi
  __int64 v15; // r8
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  unsigned __int64 PrototypePteDirect; // rax
  __int64 v27; // rax
  bool v28; // zf
  LONG *SharedVm; // rax
  int v31; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v32; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v33; // [rsp+40h] [rbp-48h]
  _BYTE v34[64]; // [rsp+48h] [rbp-40h] BYREF
  unsigned __int8 v37; // [rsp+A8h] [rbp+20h]

  v8 = 0LL;
  v9 = 8 * ((*(unsigned int *)(a4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 32) << 32)) & 0xFFFFFFFFFLL)
     - 0x98000000000LL;
  v33 = 8 * ((*(unsigned int *)(a4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 33) << 32)) & 0xFFFFFFFFFLL)
      - 0x98000000000LL;
  v10 = v33;
  v37 = MiLockWorkingSetShared(a3);
  for ( i = v37; v9 <= v10; i = v37 )
  {
    LOBYTE(v11) = i;
    NextPageTable = MiGetNextPageTable(v9, v10, 0LL, v11, 0, &v31);
    v14 = NextPageTable;
    if ( NextPageTable != v9 )
    {
      v15 = NextPageTable ? (__int64)(NextPageTable - v9) >> 3 : ((__int64)(v10 - v9) >> 3) + 1;
      v8 += MiComputeCommitChargeForZeroPteRange(a4, v9, v15);
      if ( !v14 )
        break;
    }
    v16 = v10;
    v9 = v14;
    if ( (v14 & 0xFFFFFFFFFFFFF000uLL) + 4088 <= v10 )
      v16 = (v14 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    if ( v14 <= v16 )
    {
      while ( 1 )
      {
        v17 = MI_READ_PTE_LOCK_FREE(v9);
        v32 = v17;
        v11 = v17;
        if ( !v17 )
          break;
        if ( (v17 & 1) != 0 )
        {
          v11 = v17 >> 9;
          if ( (v17 & 0x200) == 0 || (*(_BYTE *)(a4 + 48) & 7) == 6 && MiRotatedToFrameBuffer(v9) )
            goto LABEL_44;
          v21 = *(_QWORD *)(48 * MI_GET_PAGE_FRAME_FROM_PTE(&v32) - 0x58000000000LL + 8);
          if ( v21 >= 0 || *(_QWORD *)(a2 + 912) && MiLocateCloneAddress(a2, v21 | 0x8000000000000000uLL) )
            goto LABEL_44;
LABEL_43:
          ++v8;
          goto LABEL_44;
        }
        if ( (v17 & 0x400) != 0 )
        {
          if ( MiIsPrototypePteVadLookup(v17, v18, v19, v17) )
          {
            v23 = v8 + 1;
            v11 = (v22 >> 5) & 5;
            if ( (_BYTE)v11 != 5 )
              v23 = v8;
            v8 = v23;
            goto LABEL_44;
          }
          if ( !MI_PROTO_FORMAT_COMBINED(v22) )
          {
            if ( !*(_QWORD *)(a2 + 912)
              || (PrototypePteDirect = MiGetPrototypePteDirect(v11, v24, v25, v11),
                  !MiLocateCloneAddress(a2, PrototypePteDirect)) )
            {
              v20 = MiComputeImageVadCommitCharge(a4, (unsigned __int64)((__int64)(v9 << 25) >> 16) >> 12, 1LL, v34);
              goto LABEL_29;
            }
          }
        }
        else
        {
          if ( (v17 & 0x800) != 0 )
          {
            v27 = MiLockTransitionLeafPage(v9, 0LL);
            if ( v27 )
            {
              if ( (*(_BYTE *)(v27 + 34) & 0x10) == 0 && (*(_DWORD *)(v27 + 16) & 4) == 0 && !*(_WORD *)(v27 + 32) )
                ++*a6;
              _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
            else
            {
              v9 -= 8LL;
            }
            goto LABEL_44;
          }
          if ( (v17 & 4) != 0 )
          {
            if ( !a5 )
              goto LABEL_44;
            v28 = !MiIsPteInStore(a1, v17);
          }
          else
          {
            v11 = v17 >> 5;
            v28 = ((v17 >> 5) & 0x1F) == 16;
          }
          if ( !v28 )
            goto LABEL_43;
        }
LABEL_44:
        v9 += 8LL;
        if ( v9 > v16 )
        {
          v10 = v33;
          goto LABEL_46;
        }
      }
      v20 = MiComputeCommitChargeForZeroPteRange(a4, v9, 1LL);
LABEL_29:
      v8 += v20;
      goto LABEL_44;
    }
LABEL_46:
    ;
  }
  SharedVm = MiGetSharedVm(a3);
  ExReleaseSpinLockSharedFromDpcLevel(SharedVm);
  __writecr8(i);
  return v8;
}
