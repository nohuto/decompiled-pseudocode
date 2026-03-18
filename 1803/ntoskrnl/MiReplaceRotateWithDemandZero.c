/*
 * XREFs of MiReplaceRotateWithDemandZero @ 0x1400C39A0
 * Callers:
 *     MmRotatePhysicalView @ 0x1405BACA0 (MmRotatePhysicalView.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiWorkingSetIsContended @ 0x14004EA30 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x14004EA5C (MiPageTableLockIsContended.c)
 *     KeShouldYieldProcessor @ 0x1400A9D70 (KeShouldYieldProcessor.c)
 *     MiUnmapFrameBuffer @ 0x1400C3D08 (MiUnmapFrameBuffer.c)
 *     MiIsProbeActive @ 0x1400C3E6C (MiIsProbeActive.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiLockPageTableInternal @ 0x140120C90 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiDereferenceIoPages @ 0x140139794 (MiDereferenceIoPages.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall MiReplaceRotateWithDemandZero(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3)
{
  _KPROCESS *Process; // r13
  unsigned int IsProbeActive; // r15d
  __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r14
  __int64 v9; // r13
  unsigned __int64 v10; // rsi
  __int64 v11; // r12
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // r12
  unsigned __int64 v17; // rbx
  __int64 v18; // r8
  unsigned __int8 v20; // [rsp+28h] [rbp-E0h]
  unsigned int v21; // [rsp+2Ch] [rbp-DCh]
  unsigned __int64 v23; // [rsp+38h] [rbp-D0h]
  __int64 v24; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+48h] [rbp-C0h]
  __int64 v26; // [rsp+50h] [rbp-B8h]
  int v27; // [rsp+58h] [rbp-B0h] BYREF
  __int16 v28; // [rsp+5Ch] [rbp-ACh]
  __int64 v29; // [rsp+60h] [rbp-A8h]
  __int64 v30; // [rsp+68h] [rbp-A0h]
  __int64 v31; // [rsp+70h] [rbp-98h]
  _QWORD v32[44]; // [rsp+118h] [rbp+10h] BYREF

  v21 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  IsProbeActive = 0;
  v5 = 0LL;
  v6 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v23 = v7;
  v8 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v28 = 0;
  v30 = 0LL;
  v9 = (__int64)&Process[1].IdealNode[12];
  v31 = 0LL;
  v10 = 0LL;
  v27 = 1;
  v29 = 20LL;
  v25 = v9;
  v20 = MiLockWorkingSetShared(v9);
  if ( v6 <= v7 )
  {
    v11 = 0LL;
    v26 = 0LL;
    while ( 1 )
    {
      if ( !v10 )
        goto LABEL_27;
      if ( (v6 & 0xFFF) == 0 )
        break;
LABEL_5:
      if ( !IsProbeActive )
        IsProbeActive = MiIsProbeActive(v6, 1LL, 3LL);
      if ( (unsigned int)MiUnmapFrameBuffer(v6, a3, IsProbeActive, &v24) )
        IsProbeActive = 1;
      if ( v24 != -1 )
      {
        if ( (_DWORD)v5 && (v12 = 2LL * (unsigned int)(v5 - 1), v13 = v32[2 * (unsigned int)(v5 - 1) + 1], v13 == v24) )
        {
          v14 = v13 + 1;
        }
        else
        {
          v14 = v24 + 1;
          v12 = 2LL * (unsigned int)v5;
          v5 = (unsigned int)(v5 + 1);
          v32[v12] = v24;
        }
        v32[v12 + 1] = v14;
      }
      MiInsertTbFlushEntry((__int64)&v27, (__int64)((v6 << 25) - v11) >> 16, 1LL, 0);
      ++v21;
      v6 += 8LL;
      if ( (v6 & 0xFFF) == 0
        || v6 > v23
        || (_DWORD)v5 == 22
        || (v6 & 0x78) == 0
        && ((unsigned int)MiWorkingSetIsContended(v9)
         || (unsigned int)MiPageTableLockIsContended(v15, v10)
         || KeShouldYieldProcessor()) )
      {
        MiFlushTbList(&v27);
        if ( (_DWORD)v5 )
        {
          v16 = v32;
          do
          {
            MiDereferenceIoPages(1LL, *v16, v16[1] - *v16);
            v16 += 2;
            --v5;
          }
          while ( v5 );
          v9 = v25;
          v11 = v26;
        }
        v17 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v8) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        MiLockPageAtDpcInline(v17);
        *(_QWORD *)(v17 + 24) ^= (*(_QWORD *)(v17 + 24) ^ (*(_QWORD *)(v17 + 24) - v21)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockPageTableInternal(v9, v10);
        MiUnlockWorkingSetShared(v9, v20, v18);
        if ( v6 > v23 )
          return IsProbeActive;
        v5 = 0LL;
        v8 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v21 = 0;
        v10 = 0LL;
        MiLockWorkingSetShared(v9);
      }
    }
    MiUnlockPageTableInternal(v9, v10);
LABEL_27:
    v10 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal(v9, v10, 0LL);
    goto LABEL_5;
  }
  return IsProbeActive;
}
