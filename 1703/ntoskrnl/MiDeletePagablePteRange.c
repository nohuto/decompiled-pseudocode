/*
 * XREFs of MiDeletePagablePteRange @ 0x140062D20
 * Callers:
 *     MiDeletePagablePteRange @ 0x140062D20 (MiDeletePagablePteRange.c)
 *     MiDeleteVadBitmap @ 0x140499A8C (MiDeleteVadBitmap.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiDeletePagablePteRange @ 0x140062D20 (MiDeletePagablePteRange.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14007C3EC (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiDeletePteRun @ 0x1400C5B70 (MiDeletePteRun.c)
 *     MiGetNextPageTable @ 0x1400D2560 (MiGetNextPageTable.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiTerminateWsle @ 0x140105650 (MiTerminateWsle.c)
 *     MiReleasePageFileSpace @ 0x14010AE90 (MiReleasePageFileSpace.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14021EE3C (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiDeletePagablePteRange(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rbp
  __int64 SharedVm; // rbx
  KIRQL v6; // al
  ULONG_PTR NextPageTable; // rax
  _QWORD *v8; // rsi
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rcx
  ULONG_PTR v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rbx
  KIRQL v24; // [rsp+30h] [rbp-148h]
  int v25; // [rsp+34h] [rbp-144h]
  unsigned __int64 v27; // [rsp+48h] [rbp-130h]
  _BYTE v28[8]; // [rsp+50h] [rbp-128h] BYREF
  unsigned __int64 v29; // [rsp+58h] [rbp-120h]
  __int64 v30; // [rsp+60h] [rbp-118h]
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-110h]
  __int64 v32; // [rsp+70h] [rbp-108h] BYREF
  __int64 v33; // [rsp+78h] [rbp-100h]
  __int64 v34; // [rsp+80h] [rbp-F8h]
  __int64 v35; // [rsp+88h] [rbp-F0h]
  int v36; // [rsp+90h] [rbp-E8h] BYREF
  __int16 v37; // [rsp+94h] [rbp-E4h]
  __int64 v38; // [rsp+98h] [rbp-E0h]
  __int64 v39; // [rsp+A0h] [rbp-D8h]
  __int64 v40; // [rsp+A8h] [rbp-D0h]

  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v3 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v4 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v27 = v4;
  v30 = *(_QWORD *)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(a1 + 1452));
  SharedVm = MiGetSharedVm(a1 + 1280);
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  v24 = v6;
  *(_DWORD *)(SharedVm + 4) = 0;
  if ( v3 <= v4 )
  {
    while ( 1 )
    {
      NextPageTable = MiGetNextPageTable(v3, v4, 0, v6, 4, (__int64)v28);
      BugCheckParameter2 = NextPageTable;
      if ( !NextPageTable )
        goto LABEL_21;
      v8 = (_QWORD *)NextPageTable;
      v9 = (__int64)(NextPageTable << 25) >> 16;
      v38 = 20LL;
      v36 = 1;
      v37 = 0;
      v39 = 0LL;
      v40 = 0LL;
      v25 = 0;
      do
      {
        v10 = MI_READ_PTE_LOCK_FREE(v8);
        v29 = v10;
        v14 = v10;
        if ( v10 )
        {
          if ( (v10 & 1) != 0 )
          {
            MiTerminateWsle(a1 + 1280, v9, 0LL);
            MiInsertTbFlushEntry(&v36, v9 & 0xFFFFFFFFFFFFF000uLL, 1LL, 0LL);
            v29 = v14 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
            *v8 = v29;
            if ( (unsigned int)MiPteInShadowRange(v8) )
              MiWritePteShadow(v15);
LABEL_12:
            LODWORD(v13) = v25;
            goto LABEL_13;
          }
          if ( !(unsigned int)IS_PTE_NOT_DEMAND_ZERO(v10, v11, v12, v13) )
          {
            MiReleasePageFileSpace(v30, v14, 1LL);
            *v8 = 0LL;
            if ( (unsigned int)MiPteInShadowRange(v8) )
              MiWritePteShadow(v16);
            goto LABEL_12;
          }
        }
LABEL_13:
        v9 += 4096LL;
        if ( (unsigned __int64)++v8 > v27 )
          break;
        if ( ((unsigned __int16)v8 & 0xFFF) == 0 )
          break;
        v25 = v13 + 1;
      }
      while ( (unsigned int)(v13 + 1) < 0x200 );
      MiFlushTbList(&v36);
      v17 = BugCheckParameter2;
      MiDeletePteRun(BugCheckParameter2, (__int64)&v32);
      if ( (v17 < 0xFFFFF6FB7DBED000uLL || v17 > 0xFFFFF6FB7DBEDFFFuLL)
        && (*(_QWORD *)(MI_GET_PFN_FROM_PTE(((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v18, v19, v20) + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      {
        MiUnlockWorkingSetExclusive(a1 + 1280, v24);
        v21 = MiDeletePagablePteRange(a1, v17, v17);
        v33 += v21;
        v22 = MiGetSharedVm(a1 + 1280);
        ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v22);
        *(_DWORD *)(v22 + 4) = 0;
      }
      LODWORD(v4) = v27;
      v3 = v17 + 4096;
      v6 = v24;
      if ( v3 > v27 )
      {
LABEL_21:
        v6 = v24;
        break;
      }
    }
  }
  MiUnlockWorkingSetExclusive(a1 + 1280, v6);
  return v33;
}
