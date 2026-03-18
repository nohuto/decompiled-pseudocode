/*
 * XREFs of ?NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C001F194
 * Callers:
 *     ?ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x1C004AE30 (-ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@.c)
 *     ?ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00A2E00 (-ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C00749C4 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyMemorySegmentActive(VIDMM_GLOBAL *this, struct VIDMM_SEGMENT *a2)
{
  char *v2; // rbx
  __int64 v5; // rdi
  char v6; // r14
  unsigned int v7; // ebx
  __int64 v8; // r8
  _DWORD *v9; // rdx
  int v10; // eax
  int v11; // eax
  char v12; // al
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = (char *)this + 40992;
  v5 = *((_QWORD *)this + 5021) + 472LL * *((unsigned int *)a2 + 101);
  v6 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 5124, &LockHandle);
  *((_QWORD *)v2 + 1) = KeGetCurrentThread();
  v7 = *(_DWORD *)(v5 + 432);
  *(_DWORD *)(v5 + 432) = v7 | (1 << *((_DWORD *)a2 + 5));
  *((_QWORD *)this + 5125) = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( !v7 && *(_DWORD *)(v5 + 24) )
  {
    do
    {
      v9 = *(_DWORD **)(*((_QWORD *)this + 464) + 8LL * (v7 + *(_DWORD *)(v5 + 20)));
      if ( v9[98] != -1 )
      {
        v10 = (v9[20] & 0x1000) != 0 ? 0 : v9[4] + 1;
        if ( *(_DWORD *)(v5 + 64) == v10
          || ((v9[20] & 0x1000) == 0 ? (v11 = v9[4] + 1) : (v11 = 0), *(_DWORD *)(v5 + 48) == v11) )
        {
          LOBYTE(v8) = 1;
          if ( (*((unsigned int (__fastcall **)(_QWORD, _QWORD, __int64))this + 5008))(
                 *((_QWORD *)this + 5009),
                 *((unsigned int *)a2 + 98),
                 v8) == -1071775466 )
          {
            v12 = *(_BYTE *)(v5 + 436);
            if ( (v12 & 4) != 0 )
            {
              v6 = 1;
              *(_BYTE *)(v5 + 436) = v12 | 0x20;
            }
          }
          *(_BYTE *)(v5 + 436) &= ~0x40u;
        }
      }
      ++v7;
    }
    while ( v7 < *(_DWORD *)(v5 + 24) );
  }
  LOBYTE(v8) = 1;
  (*((void (__fastcall **)(_QWORD, _QWORD, __int64))this + 5008))(
    *((_QWORD *)this + 5009),
    *((unsigned int *)a2 + 98),
    v8);
  if ( (*(_BYTE *)(v5 + 436) & 0x20) != 0 )
  {
    if ( v6 )
      VIDMM_GLOBAL::InitPagingProcessVaSpace(this, *((_DWORD *)a2 + 101), 1u);
  }
}
