/*
 * XREFs of MiExtendPagingFileMaximum @ 0x14022501C
 * Callers:
 *     MiCreatePagingFile @ 0x1405D3FF0 (MiCreatePagingFile.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiReleasePtes @ 0x140074F70 (MiReleasePtes.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlSetBits @ 0x1400A1A30 (RtlSetBits.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     RtlSetAllBits @ 0x14012CF30 (RtlSetAllBits.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x140224FAC (MiDerefPageFileSpaceBitmaps.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall MiExtendPagingFileMaximum(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v6; // r14
  unsigned int v7; // ecx
  void *v8; // rdi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r12
  unsigned int v11; // edi
  ULONG v12; // edx
  ULONG v13; // edi
  __int128 v14; // xmm1
  _DWORD *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // r14
  __int64 PteShadow; // rax
  __int64 v22; // rax
  __int64 v23; // rbx
  unsigned __int8 v24; // r15
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  unsigned __int64 *v29; // rcx
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  KSPIN_LOCK *SpinLock; // [rsp+20h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-50h] BYREF
  _DWORD *v34[2]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v35; // [rsp+50h] [rbp-28h]
  __int64 v36; // [rsp+60h] [rbp-18h]
  unsigned int v37; // [rsp+C0h] [rbp+48h]
  unsigned __int64 v38; // [rsp+C8h] [rbp+50h]
  __int64 v39; // [rsp+D0h] [rbp+58h] BYREF
  unsigned __int64 v40; // [rsp+D8h] [rbp+60h]

  v39 = a3;
  RtlSetAllBits((PRTL_BITMAP)(a2 + 8));
  RtlSetAllBits((PRTL_BITMAP)(a2 + 24));
  SpinLock = a1 + 29;
  KeAcquireInStackQueuedSpinLock(a1 + 29, &LockHandle);
  v6 = a1[14];
  v7 = *(_DWORD *)(v6 + 8);
  v37 = v7;
  if ( a3 )
  {
    v8 = (void *)(((a1[27] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v38 = (unsigned __int64)v8;
    v9 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v10 = ((4 * (unsigned __int64)v7) >> 12) + (((4LL * v7) & 0xFFF) != 0);
    v40 = v10;
    memmove((void *)v9, v8, 8 * v10);
    memset(v8, 0, 8 * v10);
    v7 = v37;
  }
  else
  {
    v38 = 0LL;
    v9 = 0LL;
    v10 = 0LL;
    v40 = 0LL;
  }
  v11 = 8 * ((v7 >> 6) + ((v7 & 0x3F) != 0));
  memmove(*(void **)(a2 + 16), *(const void **)(v6 + 16), v11);
  memmove(*(void **)(a2 + 32), *(const void **)(v6 + 32), v11);
  v12 = *(_DWORD *)(v6 + 8);
  v13 = 8 * v11 - v12;
  if ( v13 )
  {
    RtlSetBits((PRTL_BITMAP)(a2 + 8), v12, v13);
    RtlSetBits((PRTL_BITMAP)(a2 + 24), *(_DWORD *)(v6 + 24), v13);
  }
  a1[1] = *(unsigned int *)(a2 + 8);
  v14 = *(_OWORD *)(v6 + 16);
  v34[1] = *(_DWORD **)(v6 + 8);
  v34[0] = (_DWORD *)v6;
  v36 = *(_QWORD *)(v6 + 32);
  v35 = v14;
  v15 = MiDerefPageFileSpaceBitmaps((__int64)a1, v34, 1);
  a1[14] = a2;
  a1[27] = v39;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  v19 = v38;
  if ( v38 )
  {
    if ( v10 )
    {
      v20 = v10;
      v18 = 0x8000000000000000uLL;
      do
      {
        PteShadow = *(_QWORD *)v9;
        if ( v9 >= 0xFFFFF6FB7DBED000uLL && v9 <= 0xFFFFF6FB7DBED7F8uLL )
          PteShadow = MiReadPteShadow();
        v39 = PteShadow;
        if ( (PteShadow & 1) != 0 )
        {
          v22 = MI_GET_PFN_FROM_PTE(&v39, v16, v17, v18);
          v23 = v22;
          if ( (v18 | *(_QWORD *)(v22 + 8)) != v9 )
          {
            v24 = MiLockPageInline(v22);
            KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
            v28 = *(_QWORD *)v9;
            if ( v9 >= 0xFFFFF6FB7DBED000uLL && v9 <= 0xFFFFF6FB7DBED7F8uLL )
              v28 = MiReadPteShadow();
            v39 = v28;
            if ( (v28 & 1) != 0
              && v23 == MI_GET_PFN_FROM_PTE(&v39, v25, v26, v27)
              && (*(_QWORD *)(v23 + 8) | 0x8000000000000000uLL) != v9 )
            {
              v29 = (unsigned __int64 *)(((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
              v30 = *v29;
              if ( (unsigned __int64)v29 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v29 <= 0xFFFFF6FB7DBED7F8uLL )
                v30 = MiReadPteShadow();
              v31 = (*(_QWORD *)(v23 + 40) ^ (v30 >> 12)) & 0xFFFFFFFFFLL;
              *(_QWORD *)(v23 + 8) = v9;
              *(_QWORD *)(v23 + 40) ^= v31;
            }
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            __writecr8(LockHandle.OldIrql);
            _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(v24);
            v18 = 0x8000000000000000uLL;
          }
        }
        v9 += 8LL;
        --v20;
      }
      while ( v20 );
      LODWORD(v10) = v40;
      v19 = v38;
    }
    MiReleasePtes((__int64)&qword_140389360, v19, v10, v18);
  }
}
