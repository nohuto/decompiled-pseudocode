/*
 * XREFs of MiReplaceRotateWithDemandZero @ 0x140122D2C
 * Callers:
 *     MmRotatePhysicalView @ 0x14055CBF0 (MmRotatePhysicalView.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiIsProbeActive @ 0x140122A60 (MiIsProbeActive.c)
 *     MiUnmapFrameBuffer @ 0x140122FFC (MiUnmapFrameBuffer.c)
 *     MiDereferenceIoPages @ 0x140124B9C (MiDereferenceIoPages.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

_BOOL8 __fastcall MiReplaceRotateWithDemandZero(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  _KPROCESS *Process; // r9
  unsigned int v5; // r13d
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r12
  __int64 v8; // r14
  LONG *SharedVm; // rbx
  KIRQL v10; // al
  BOOL v11; // r15d
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  _KPROCESS *v15; // rdx
  __int64 v16; // r9
  _QWORD *v17; // rbx
  __int64 v18; // rbx
  __int64 v19; // rbx
  LONG *v20; // rbx
  KIRQL v21; // al
  unsigned __int8 v23; // [rsp+20h] [rbp-E0h]
  __int64 v25; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 *v26; // [rsp+38h] [rbp-C8h]
  int v27; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v28; // [rsp+44h] [rbp-BCh]
  __int64 v29; // [rsp+48h] [rbp-B8h]
  __int64 v30; // [rsp+50h] [rbp-B0h]
  __int64 v31; // [rsp+58h] [rbp-A8h]
  _QWORD v32[44]; // [rsp+100h] [rbp+0h] BYREF

  v3 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v5 = 0;
  v6 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v29 = 20LL;
  v28 = 0;
  v27 = 1;
  v30 = 0LL;
  v31 = 0LL;
  v26 = &Process[1].IdealNode[12];
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
  v10 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v23 = v10;
  v11 = MiIsProbeActive(v6, ((__int64)(v7 - v6) >> 3) + 1, 3) != 0;
  if ( v6 <= v7 )
  {
    while ( 1 )
    {
      do
      {
        if ( (unsigned int)MiUnmapFrameBuffer(v6, a3, v11, &v25) )
          v11 = 1;
        if ( v25 != -1 )
        {
          if ( (_DWORD)v3 && (v12 = 2LL * (unsigned int)(v3 - 1), v13 = v32[2 * (unsigned int)(v3 - 1) + 1], v13 == v25) )
          {
            v14 = v13 + 1;
          }
          else
          {
            v14 = v25 + 1;
            v12 = 2LL * (unsigned int)v3;
            v3 = (unsigned int)(v3 + 1);
            v32[v12] = v25;
          }
          v32[v12 + 1] = v14;
        }
        MiInsertTbFlushEntry((__int64)&v27, (__int64)(v6 << 25) >> 16, 1LL, 0);
        ++v5;
        v6 += 8LL;
      }
      while ( (v6 & 0xFFF) != 0 && v6 <= v7 && (_DWORD)v3 != 22 );
      MiFlushTbList((__int64)&v27, v15);
      if ( (_DWORD)v3 )
      {
        v17 = v32;
        do
        {
          MiDereferenceIoPages(1LL, *v17, v17[1] - *v17, v16);
          v17 += 2;
          --v3;
        }
        while ( v3 );
      }
      v18 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(v8) - 0x58000000000LL;
      MiLockPageAtDpcInline(v18);
      *(_QWORD *)(v18 + 24) ^= (*(_QWORD *)(v18 + 24) ^ (*(_QWORD *)(v18 + 24) - v5)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v19 = (__int64)v26;
      MiUnlockWorkingSetExclusive((__int64)v26, v23);
      if ( v6 > v7 )
        break;
      v8 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v3 = 0LL;
      v5 = 0;
      v20 = MiGetSharedVm(v19);
      v21 = ExAcquireSpinLockExclusive(v20);
      v20[1] = 0;
      v23 = v21;
    }
  }
  return v11;
}
