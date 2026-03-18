/*
 * XREFs of MiCheckCommitReleaseFromVad @ 0x14025018C
 * Callers:
 *     MiReleaseOutSwappedProcessCommit @ 0x1402515B8 (MiReleaseOutSwappedProcessCommit.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiGetNextPageTable @ 0x14003DA90 (MiGetNextPageTable.c)
 *     MiRotatedToFrameBuffer @ 0x14004F064 (MiRotatedToFrameBuffer.c)
 *     MiLocateCloneAddress @ 0x140050C4C (MiLocateCloneAddress.c)
 *     MiLockTransitionLeafPage @ 0x14005253C (MiLockTransitionLeafPage.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1400BC2D0 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiIsPteInStore @ 0x1400C62F4 (MiIsPteInStore.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x1401A6594 (MiIsPrototypePteVadLookup.c)
 *     MiComputeCommitChargeForZeroPteRange @ 0x140250570 (MiComputeCommitChargeForZeroPteRange.c)
 *     MiComputeImageVadCommitCharge @ 0x14025061C (MiComputeImageVadCommitCharge.c)
 */

__int64 __fastcall MiCheckCommitReleaseFromVad(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, _QWORD *a6)
{
  __int64 v6; // rbp
  __int64 v9; // rdi
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r12
  __int64 v12; // r8
  char v13; // r15
  __int64 NextPageTable; // rax
  unsigned __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // rbp
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rdx
  unsigned __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r10
  unsigned __int64 PrototypePteDirect; // rax
  __int64 v31; // rax
  bool v32; // zf
  unsigned __int64 v33; // rdx
  int v35; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v36; // [rsp+38h] [rbp-60h] BYREF
  __int64 v37; // [rsp+40h] [rbp-58h]
  unsigned __int64 v38; // [rsp+48h] [rbp-50h]
  _BYTE v39[72]; // [rsp+50h] [rbp-48h] BYREF
  char i; // [rsp+B8h] [rbp+20h]

  v6 = a3;
  v9 = 0LL;
  v10 = 8 * ((*(unsigned int *)(a4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 32) << 32)) & 0xFFFFFFFFFLL)
      - 0x98000000000LL;
  v11 = 8 * ((*(unsigned int *)(a4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 33) << 32)) & 0xFFFFFFFFFLL)
      - 0x98000000000LL;
  v38 = v11;
  v13 = MiLockWorkingSetShared(a3);
  for ( i = v13; v10 <= v11; v13 = i )
  {
    NextPageTable = MiGetNextPageTable(v10, v11, 0LL, v13, 0, &v35);
    v15 = NextPageTable;
    if ( NextPageTable != v10 )
    {
      v16 = NextPageTable ? (__int64)(NextPageTable - v10) >> 3 : ((__int64)(v11 - v10) >> 3) + 1;
      v9 += MiComputeCommitChargeForZeroPteRange(a4, v10, v16);
      if ( !v15 )
        break;
    }
    v10 = v15;
    v17 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v18 = v11;
    v37 = v17;
    if ( (v15 & 0xFFFFFFFFFFFFF000uLL) + 4088 <= v11 )
      v18 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    if ( v15 <= v18 )
    {
      while ( 1 )
      {
        v19 = MI_READ_PTE_LOCK_FREE(v10);
        v36 = v19;
        if ( !v19 )
          break;
        if ( (v19 & 1) != 0 )
        {
          if ( (v19 & 0x200) == 0 || (*(_BYTE *)(a4 + 48) & 7) == 6 && MiRotatedToFrameBuffer(v10) )
            goto LABEL_44;
          v23 = *(_QWORD *)(48
                          * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v36) >> 12) & 0xFFFFFFFFFLL)
                          - 0x57FFFFFFFF8LL);
          if ( v23 >= 0 || *(_QWORD *)(a2 + 912) && MiLocateCloneAddress(a2, v23 | 0x8000000000000000uLL) )
            goto LABEL_44;
LABEL_43:
          ++v9;
          goto LABEL_44;
        }
        if ( (v19 & 0x400) != 0 )
        {
          if ( MiIsPrototypePteVadLookup(v19, v20, v21, v19) )
          {
            v25 = v9 + 1;
            if ( ((v24 >> 5) & 5) != 5 )
              v25 = v9;
            v9 = v25;
            goto LABEL_44;
          }
          if ( !MI_PROTO_FORMAT_COMBINED(v24) )
          {
            if ( !*(_QWORD *)(a2 + 912)
              || (PrototypePteDirect = MiGetPrototypePteDirect(v28, v26, v27, v28),
                  !MiLocateCloneAddress(a2, PrototypePteDirect)) )
            {
              v22 = MiComputeImageVadCommitCharge(
                      a4,
                      (unsigned __int64)((__int64)((v10 << 25) - (v29 << 25)) >> 16) >> 12,
                      1LL,
                      v39);
              goto LABEL_29;
            }
          }
        }
        else
        {
          if ( (v19 & 0x800) != 0 )
          {
            v31 = MiLockTransitionLeafPage(v10, 0LL);
            if ( v31 )
            {
              if ( (*(_BYTE *)(v31 + 34) & 0x10) == 0 && (*(_DWORD *)(v31 + 16) & 4) == 0 && !*(_WORD *)(v31 + 32) )
                ++*a6;
              _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
            else
            {
              v10 -= 8LL;
            }
            goto LABEL_44;
          }
          if ( (v19 & 4) != 0 )
          {
            if ( !a5 )
              goto LABEL_44;
            v32 = !MiIsPteInStore(a1, v19);
          }
          else
          {
            v32 = ((v19 >> 5) & 0x1F) == 16;
          }
          if ( !v32 )
            goto LABEL_43;
        }
LABEL_44:
        v10 += 8LL;
        if ( v10 > v18 )
        {
          v17 = v37;
          v11 = v38;
          goto LABEL_46;
        }
      }
      v22 = MiComputeCommitChargeForZeroPteRange(a4, v10, 1LL);
LABEL_29:
      v9 += v22;
      goto LABEL_44;
    }
LABEL_46:
    v33 = v17;
    v6 = a3;
    MiUnlockPageTableInternal(a3, v33);
  }
  MiUnlockWorkingSetShared(v6, v13, v12);
  return v9;
}
