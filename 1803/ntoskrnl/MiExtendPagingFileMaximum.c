/*
 * XREFs of MiExtendPagingFileMaximum @ 0x14025F210
 * Callers:
 *     MiCreatePagingFile @ 0x14063BE50 (MiCreatePagingFile.c)
 * Callees:
 *     RtlSetBits @ 0x14000A290 (RtlSetBits.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     RtlSetAllBits @ 0x14007D2B0 (RtlSetAllBits.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x1400CD060 (MiDerefPageFileSpaceBitmaps.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiReleasePtes @ 0x140110560 (MiReleasePtes.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall MiExtendPagingFileMaximum(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v6; // r14
  unsigned int v7; // ecx
  void *v8; // r13
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r12
  unsigned int v11; // edi
  __int64 v12; // rbx
  ULONG v13; // edx
  ULONG v14; // edi
  __int128 v15; // xmm1
  _DWORD *v16; // rdi
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // r11
  __int64 v21; // rbx
  __int64 v22; // r10
  unsigned __int8 v23; // r14
  unsigned __int64 v24; // rax
  __int64 v25; // r9
  unsigned __int64 v26; // rax
  void *v27; // [rsp+20h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  _DWORD *v29[2]; // [rsp+48h] [rbp-30h] BYREF
  __int128 v30; // [rsp+58h] [rbp-20h]
  __int64 v31; // [rsp+68h] [rbp-10h]
  unsigned int v32; // [rsp+C0h] [rbp+48h]
  __int64 v33; // [rsp+C8h] [rbp+50h] BYREF
  unsigned __int64 v34; // [rsp+D0h] [rbp+58h]
  unsigned __int64 v35; // [rsp+D8h] [rbp+60h]

  v34 = a3;
  v33 = a2;
  RtlSetAllBits((PRTL_BITMAP)(a2 + 8));
  RtlSetAllBits((PRTL_BITMAP)(a2 + 24));
  KeAcquireInStackQueuedSpinLock(a1 + 29, &LockHandle);
  v6 = a1[14];
  v7 = *(_DWORD *)(v6 + 8);
  v32 = v7;
  if ( a3 )
  {
    v8 = (void *)(((a1[27] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v27 = v8;
    v9 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v10 = ((4 * (unsigned __int64)v7) >> 12) + (((4LL * v7) & 0xFFF) != 0);
    v35 = v10;
    memmove((void *)v9, v8, 8 * v10);
    memset(v8, 0, 8 * v10);
    v7 = v32;
  }
  else
  {
    v8 = 0LL;
    v9 = 0LL;
    v10 = 0LL;
    v27 = 0LL;
    v35 = 0LL;
  }
  v11 = 8 * ((v7 >> 6) + ((v7 & 0x3F) != 0));
  memmove(*(void **)(v33 + 16), *(const void **)(v6 + 16), v11);
  v12 = v33;
  memmove(*(void **)(v33 + 32), *(const void **)(v6 + 32), v11);
  v13 = *(_DWORD *)(v6 + 8);
  v14 = 8 * v11 - v13;
  if ( v14 )
  {
    RtlSetBits((PRTL_BITMAP)(v12 + 8), v13, v14);
    RtlSetBits((PRTL_BITMAP)(v12 + 24), *(_DWORD *)(v6 + 24), v14);
  }
  a1[1] = *(unsigned int *)(v12 + 8);
  v15 = *(_OWORD *)(v6 + 16);
  v29[1] = *(_DWORD **)(v6 + 8);
  v29[0] = (_DWORD *)v6;
  v31 = *(_QWORD *)(v6 + 32);
  v30 = v15;
  v16 = MiDerefPageFileSpaceBitmaps((__int64)a1, v29, 1);
  a1[14] = v12;
  a1[27] = v34;
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
        v33 = MI_READ_PTE_LOCK_FREE(v9);
        if ( (v33 & 1) != 0 )
        {
          v18 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v33);
          v21 = v20 + 48 * (v19 & (v18 >> 12));
          if ( (v22 | *(_QWORD *)(v21 + 8)) != v9 )
          {
            v23 = MiLockPageInline(v21);
            KeAcquireInStackQueuedSpinLock(a1 + 29, &LockHandle);
            v33 = MI_READ_PTE_LOCK_FREE(v9);
            if ( (v33 & 1) != 0
              && v21 == 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v33) >> 12) & 0xFFFFFFFFFLL)
                      - 0x58000000000LL
              && (*(_QWORD *)(v21 + 8) | 0x8000000000000000uLL) != v9 )
            {
              v24 = MI_READ_PTE_LOCK_FREE(((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
              v26 = v25 & (*(_QWORD *)(v21 + 40) ^ (v24 >> 12));
              *(_QWORD *)(v21 + 8) = v9;
              *(_QWORD *)(v21 + 40) ^= v26;
            }
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            __writecr8(LockHandle.OldIrql);
            _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(v23);
          }
        }
        v9 += 8LL;
        --v17;
      }
      while ( v17 );
      LODWORD(v10) = v35;
      v8 = v27;
    }
    MiReleasePtes((__int64)&qword_1403CC5E0, (unsigned __int64)v8, (unsigned int)v10);
  }
}
