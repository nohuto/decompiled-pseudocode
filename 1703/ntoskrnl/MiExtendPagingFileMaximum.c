/*
 * XREFs of MiExtendPagingFileMaximum @ 0x140219B30
 * Callers:
 *     MiCreatePagingFile @ 0x1405B967C (MiCreatePagingFile.c)
 * Callees:
 *     MiDerefPageFileSpaceBitmaps @ 0x1400321DC (MiDerefPageFileSpaceBitmaps.c)
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     RtlSetBits @ 0x14009ABF0 (RtlSetBits.c)
 *     MiReleasePtes @ 0x1400A23A0 (MiReleasePtes.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlSetAllBits @ 0x14012DAF0 (RtlSetAllBits.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14021EE3C (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall MiExtendPagingFileMaximum(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v6; // r14
  unsigned int v7; // ecx
  _QWORD *v8; // r13
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r12
  unsigned int v11; // edi
  unsigned __int64 v12; // rbx
  ULONG v13; // edx
  ULONG v14; // edi
  __int128 v15; // xmm1
  _DWORD *v16; // rdi
  unsigned __int64 v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // r9
  unsigned __int8 v20; // r14
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  _QWORD *v25; // [rsp+20h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  _DWORD *v27[2]; // [rsp+48h] [rbp-30h] BYREF
  __int128 v28; // [rsp+58h] [rbp-20h]
  __int64 v29; // [rsp+68h] [rbp-10h]
  unsigned int v30; // [rsp+C0h] [rbp+48h]
  unsigned __int64 v31; // [rsp+C8h] [rbp+50h] BYREF
  unsigned __int64 v32; // [rsp+D0h] [rbp+58h]
  unsigned __int64 v33; // [rsp+D8h] [rbp+60h]

  v32 = a3;
  v31 = a2;
  RtlSetAllBits((PRTL_BITMAP)(a2 + 8));
  RtlSetAllBits((PRTL_BITMAP)(a2 + 24));
  KeAcquireInStackQueuedSpinLock(a1 + 29, &LockHandle);
  v6 = a1[14];
  v7 = *(_DWORD *)(v6 + 8);
  v30 = v7;
  if ( a3 )
  {
    v8 = (_QWORD *)(((a1[27] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v25 = v8;
    v9 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v10 = ((4 * (unsigned __int64)v7) >> 12) + (((4LL * v7) & 0xFFF) != 0);
    v33 = v10;
    memmove((void *)v9, v8, 8 * v10);
    memset(v8, 0, 8 * v10);
    v7 = v30;
  }
  else
  {
    v8 = 0LL;
    v9 = 0LL;
    v10 = 0LL;
    v25 = 0LL;
    v33 = 0LL;
  }
  v11 = 8 * ((v7 >> 6) + ((v7 & 0x3F) != 0));
  memmove(*(void **)(v31 + 16), *(const void **)(v6 + 16), v11);
  v12 = v31;
  memmove(*(void **)(v31 + 32), *(const void **)(v6 + 32), v11);
  v13 = *(_DWORD *)(v6 + 8);
  v14 = 8 * v11 - v13;
  if ( v14 )
  {
    RtlSetBits((PRTL_BITMAP)(v12 + 8), v13, v14);
    RtlSetBits((PRTL_BITMAP)(v12 + 24), *(_DWORD *)(v6 + 24), v14);
  }
  a1[1] = *(unsigned int *)(v12 + 8);
  v15 = *(_OWORD *)(v6 + 16);
  v27[1] = *(_DWORD **)(v6 + 8);
  v27[0] = (_DWORD *)v6;
  v29 = *(_QWORD *)(v6 + 32);
  v28 = v15;
  v16 = MiDerefPageFileSpaceBitmaps((__int64)a1, v27, 1);
  a1[14] = v12;
  a1[27] = v32;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  if ( v16 )
    ExFreePoolWithTag(v16, 0);
  if ( v8 )
  {
    if ( v10 )
    {
      v17 = v10;
      do
      {
        v31 = MI_READ_PTE_LOCK_FREE(v9);
        if ( (v31 & 1) != 0 )
        {
          v18 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v31) - 0x58000000000LL;
          if ( (v19 | *(_QWORD *)(v18 + 8)) != v9 )
          {
            v20 = MiLockPageInline(v18);
            KeAcquireInStackQueuedSpinLock(a1 + 29, &LockHandle);
            v31 = MI_READ_PTE_LOCK_FREE(v9);
            if ( (v31 & 1) != 0
              && v18 == MI_GET_PFN_FROM_PTE(&v31, v21, v22, v23)
              && (*(_QWORD *)(v18 + 8) | 0x8000000000000000uLL) != v9 )
            {
              v31 = MI_READ_PTE_LOCK_FREE(((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
              v24 = (*(_QWORD *)(v18 + 40) ^ (v31 >> 12)) & 0xFFFFFFFFFLL;
              *(_QWORD *)(v18 + 8) = v9;
              *(_QWORD *)(v18 + 40) ^= v24;
            }
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            __writecr8(LockHandle.OldIrql);
            _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(v20);
          }
        }
        v9 += 8LL;
        --v17;
      }
      while ( v17 );
      LODWORD(v10) = v33;
      v8 = v25;
    }
    MiReleasePtes((__int64)&qword_14036D0A0, v8, v10);
  }
}
