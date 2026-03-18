/*
 * XREFs of MiReplaceRotateWithDemandZero @ 0x140009834
 * Callers:
 *     MmRotatePhysicalView @ 0x140448920 (MmRotatePhysicalView.c)
 * Callees:
 *     MiUnmapFrameBuffer @ 0x140009B04 (MiUnmapFrameBuffer.c)
 *     MiIsProbeActive @ 0x140009C98 (MiIsProbeActive.c)
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiDereferenceIoPages @ 0x140118C1C (MiDereferenceIoPages.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

_BOOL8 __fastcall MiReplaceRotateWithDemandZero(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  _KPROCESS *Process; // r9
  unsigned int v5; // r13d
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r12
  __int64 v8; // r14
  __int64 SharedVm; // rbx
  KIRQL v10; // al
  BOOL v11; // r15d
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rbx
  __int64 v16; // rbx
  unsigned __int16 *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rbx
  KIRQL v20; // al
  KIRQL v22; // [rsp+20h] [rbp-E0h]
  __int64 v24; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 *v25; // [rsp+38h] [rbp-C8h]
  int v26; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v27; // [rsp+44h] [rbp-BCh]
  __int64 v28; // [rsp+48h] [rbp-B8h]
  __int64 v29; // [rsp+50h] [rbp-B0h]
  __int64 v30; // [rsp+58h] [rbp-A8h]
  _QWORD v31[44]; // [rsp+100h] [rbp+0h] BYREF

  v3 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v5 = 0;
  v6 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v28 = 20LL;
  v27 = 0;
  v26 = 1;
  v29 = 0LL;
  v30 = 0LL;
  v25 = &Process[1].IdealNode[12];
  SharedVm = MiGetSharedVm(&Process[1].IdealNode[12]);
  v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  v22 = v10;
  v11 = MiIsProbeActive(v6, ((__int64)(v7 - v6) >> 3) + 1, 3LL) != 0;
  if ( v6 <= v7 )
  {
    while ( 1 )
    {
      do
      {
        if ( (unsigned int)MiUnmapFrameBuffer(v6, a3, v11, &v24) )
          v11 = 1;
        if ( v24 != -1 )
        {
          if ( (_DWORD)v3 && (v12 = 2LL * (unsigned int)(v3 - 1), v13 = v31[2 * (unsigned int)(v3 - 1) + 1], v13 == v24) )
          {
            v14 = v13 + 1;
          }
          else
          {
            v14 = v24 + 1;
            v12 = 2LL * (unsigned int)v3;
            v3 = (unsigned int)(v3 + 1);
            v31[v12] = v24;
          }
          v31[v12 + 1] = v14;
        }
        MiInsertTbFlushEntry(&v26, (__int64)(v6 << 25) >> 16, 1LL, 0LL);
        ++v5;
        v6 += 8LL;
      }
      while ( (v6 & 0xFFF) != 0 && v6 <= v7 && (_DWORD)v3 != 22 );
      MiFlushTbList(&v26);
      if ( (_DWORD)v3 )
      {
        v15 = v31;
        do
        {
          MiDereferenceIoPages(1LL, *v15, v15[1] - *v15);
          v15 += 2;
          --v3;
        }
        while ( v3 );
      }
      v16 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(v8) - 0x58000000000LL;
      MiLockPageAtDpcInline(v16);
      *(_QWORD *)(v16 + 24) ^= (*(_QWORD *)(v16 + 24) ^ (*(_QWORD *)(v16 + 24) - v5)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v17 = v25;
      LOBYTE(v18) = v22;
      MiUnlockWorkingSetExclusive(v25, v18);
      if ( v6 > v7 )
        break;
      v8 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v3 = 0LL;
      v5 = 0;
      v19 = MiGetSharedVm(v17);
      v20 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v19);
      *(_DWORD *)(v19 + 4) = 0;
      v22 = v20;
    }
  }
  return v11;
}
