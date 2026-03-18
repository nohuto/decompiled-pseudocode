/*
 * XREFs of MiCheckCommitReleaseFromVad @ 0x140211C90
 * Callers:
 *     MiReleaseOutSwappedProcessCommit @ 0x140213338 (MiReleaseOutSwappedProcessCommit.c)
 * Callees:
 *     MiRotatedToFrameBuffer @ 0x140008950 (MiRotatedToFrameBuffer.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiGetNextPageTable @ 0x14003FDB0 (MiGetNextPageTable.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiLockWorkingSetShared @ 0x1400A63A0 (MiLockWorkingSetShared.c)
 *     MiLockTransitionLeafPage @ 0x1400E5058 (MiLockTransitionLeafPage.c)
 *     MiLocateCloneAddress @ 0x1400EA120 (MiLocateCloneAddress.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x14011D054 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x14017C740 (MiIsPrototypePteVadLookup.c)
 *     MiComputeCommitChargeForZeroPteRange @ 0x14021206C (MiComputeCommitChargeForZeroPteRange.c)
 *     MiComputeImageVadCommitCharge @ 0x140212118 (MiComputeImageVadCommitCharge.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiCheckCommitReleaseFromVad(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, _QWORD *a6)
{
  __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r14
  unsigned __int8 v11; // bp
  __int64 NextPageTable; // rax
  __int64 v13; // rdx
  __int64 v14; // r9
  unsigned __int64 v15; // rsi
  __int64 v16; // r8
  unsigned __int64 v17; // rbp
  ULONG_PTR PteShadow; // r8
  __int64 v19; // rax
  bool v20; // zf
  unsigned __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // r8
  unsigned __int64 PrototypePteDirect; // rax
  __int64 v25; // rax
  LONG *SharedVm; // rax
  int v28; // [rsp+30h] [rbp-58h] BYREF
  ULONG_PTR v29; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v30; // [rsp+40h] [rbp-48h]
  _BYTE v31[64]; // [rsp+48h] [rbp-40h] BYREF
  KIRQL v34; // [rsp+A8h] [rbp+20h]

  v8 = 0LL;
  v9 = 8 * ((*(unsigned int *)(a4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 32) << 32)) & 0xFFFFFFFFFLL)
     - 0x98000000000LL;
  v30 = 8 * ((*(unsigned int *)(a4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 33) << 32)) & 0xFFFFFFFFFLL)
      - 0x98000000000LL;
  v10 = v30;
  v34 = MiLockWorkingSetShared(a3);
  v11 = v34;
  while ( v9 <= v10 )
  {
    NextPageTable = MiGetNextPageTable(v9, v10, 0LL, v11, 0, &v28);
    v15 = NextPageTable;
    if ( NextPageTable != v9 )
    {
      v16 = NextPageTable ? (__int64)(NextPageTable - v9) >> 3 : ((__int64)(v10 - v9) >> 3) + 1;
      v8 += MiComputeCommitChargeForZeroPteRange(a4, v9, v16);
      if ( !v15 )
        break;
    }
    v17 = v10;
    v9 = v15;
    if ( (v15 & 0xFFFFFFFFFFFFF000uLL) + 4088 <= v10 )
      v17 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    if ( v15 <= v17 )
    {
      while ( 1 )
      {
        PteShadow = *(_QWORD *)v9;
        if ( v9 >= 0xFFFFF6FB7DBED000uLL && v9 <= 0xFFFFF6FB7DBED7F8uLL )
          PteShadow = MiReadPteShadow();
        v29 = PteShadow;
        if ( !PteShadow )
        {
          v19 = MiComputeCommitChargeForZeroPteRange(a4, v9, 1LL);
LABEL_33:
          v8 += v19;
          goto LABEL_47;
        }
        if ( (PteShadow & 1) != 0 )
          break;
        if ( (PteShadow & 0x400) != 0 )
        {
          if ( MiIsPrototypePteVadLookup(PteShadow, v13, PteShadow) )
          {
            v22 = v8 + 1;
            if ( ((v21 >> 5) & 5) != 5 )
              v22 = v8;
            v8 = v22;
            goto LABEL_47;
          }
          if ( !MI_PROTO_FORMAT_COMBINED(v21) )
          {
            if ( !*(_QWORD *)(a2 + 912)
              || (PrototypePteDirect = MiGetPrototypePteDirect(v23, v13, v23),
                  !MiLocateCloneAddress(a2, PrototypePteDirect)) )
            {
              v19 = MiComputeImageVadCommitCharge(a4, (unsigned __int64)((__int64)(v9 << 25) >> 16) >> 12, 1LL, v31);
              goto LABEL_33;
            }
          }
        }
        else
        {
          if ( (PteShadow & 0x800) != 0 )
          {
            v25 = MiLockTransitionLeafPage((ULONG_PTR *)v9, 0LL, PteShadow, v14);
            if ( v25 )
            {
              if ( (*(_BYTE *)(v25 + 34) & 0x10) == 0 && (*(_DWORD *)(v25 + 16) & 4) == 0 && !*(_WORD *)(v25 + 32) )
                ++*a6;
              _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
            else
            {
              v9 -= 8LL;
            }
            goto LABEL_47;
          }
          if ( (PteShadow & 4) != 0 )
          {
            if ( !a5 )
              goto LABEL_47;
            v20 = (unsigned __int16)PteShadow >> 12 == *(_DWORD *)(a1 + 1140);
            goto LABEL_22;
          }
          if ( ((PteShadow >> 5) & 0x1F) != 0x10 )
            goto LABEL_46;
        }
LABEL_47:
        v9 += 8LL;
        if ( v9 > v17 )
        {
          v10 = v30;
          goto LABEL_49;
        }
      }
      if ( (PteShadow & 0x200) == 0 || (*(_BYTE *)(a4 + 48) & 7) == 6 && MiRotatedToFrameBuffer((__int64 *)v9) )
        goto LABEL_47;
      v13 = *(_QWORD *)(48 * MI_GET_PAGE_FRAME_FROM_PTE(&v29) - 0x58000000000LL + 8);
      if ( v13 >= 0 )
        goto LABEL_47;
      if ( !*(_QWORD *)(a2 + 912) )
      {
LABEL_46:
        ++v8;
        goto LABEL_47;
      }
      v20 = MiLocateCloneAddress(a2, v13 | 0x8000000000000000uLL) == 0LL;
LABEL_22:
      if ( v20 )
        goto LABEL_46;
      goto LABEL_47;
    }
LABEL_49:
    v11 = v34;
  }
  SharedVm = MiGetSharedVm(a3);
  ExReleaseSpinLockSharedFromDpcLevel(SharedVm);
  __writecr8(v11);
  return v8;
}
