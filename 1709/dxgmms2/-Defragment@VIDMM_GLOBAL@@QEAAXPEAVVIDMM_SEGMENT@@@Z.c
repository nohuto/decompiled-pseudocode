/*
 * XREFs of ?Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C009A32C
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0077550 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     ?GetActiveVprEnd@VIDMM_SEGMENT@@QEBA_KXZ @ 0x1C00211C8 (-GetActiveVprEnd@VIDMM_SEGMENT@@QEBA_KXZ.c)
 *     McTemplateK0p @ 0x1C00215B4 (McTemplateK0p.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C0051BF4 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C005B7DC (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z @ 0x1C005B984 (-StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C005C7E0 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C008112C (-PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C009A650 (-EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?OldDefragment@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00AAED4 (-OldDefragment@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?TrimAllMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00AC27C (-TrimAllMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::Defragment(VIDMM_GLOBAL *this, struct VIDMM_SEGMENT *a2)
{
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int64 ActiveVprEnd; // rbx
  __int64 v11; // rax
  struct VIDMM_SEGMENT *v12; // r14
  _QWORD **v13; // r15
  _QWORD *v14; // r15
  _QWORD *v15; // rbx
  __int64 v16; // rbp
  __int64 v17; // rcx
  __int64 v18; // r8

  v4 = *(_QWORD *)(*(_QWORD *)this + 232LL);
  *((_QWORD *)a2 + 60) = v4;
  if ( (*((_DWORD *)this + 1616) & 0x4000) != 0 )
  {
    v5 = WdLogNewEntry5_WdEvent(this, a2);
    *(_QWORD *)(v5 + 24) = a2;
    WdLogEvent5_WdEvent(v5);
  }
  else
  {
    v6 = *((unsigned int *)a2 + 95);
    if ( ((unsigned int)Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
      McTemplateK0p((__int64)this, &EventVidMmStartDefragment, v4, this);
    VIDMM_GLOBAL::StartPreparation((__int64)this, (unsigned int)v6, 0LL, 0LL, 1002);
    v7 = *((_QWORD *)this + 3);
    v8 = *(unsigned int *)(*(_QWORD *)(v7 + 2216) + 48 * v6 + 16);
    if ( (v8 & 4) != 0
      && (LOBYTE(v8) = (*(_BYTE *)(v7 + 1692) & 8) != 0,
          ((unsigned __int8)v8 & ((*((_DWORD *)this + 1616) & 0x20000) == 0)) != 0) )
    {
      v9 = WdLogNewEntry5_WdEvent(v8, v7);
      *(_QWORD *)(v9 + 24) = a2;
      WdLogEvent5_WdEvent(v9);
      VIDMM_GLOBAL::EnsureFlipQueuesSuspendedForMove(this);
      VIDMM_SEGMENT::TrimAllMarkedForEvictionAllocations(a2);
      if ( (*((_BYTE *)a2 + 82) & 1) != 0 )
      {
        ActiveVprEnd = VIDMM_SEGMENT::GetActiveVprEnd(a2);
        (*(void (__fastcall **)(struct VIDMM_SEGMENT *, _QWORD))(*(_QWORD *)a2 + 128LL))(a2, 0LL);
        (*(void (__fastcall **)(struct VIDMM_SEGMENT *, unsigned __int64, _QWORD))(*(_QWORD *)a2 + 128LL))(
          a2,
          ActiveVprEnd,
          *((_QWORD *)a2 + 6));
      }
      else
      {
        (*(void (__fastcall **)(struct VIDMM_SEGMENT *, _QWORD, _QWORD))(*(_QWORD *)a2 + 128LL))(
          a2,
          0LL,
          *((_QWORD *)a2 + 6));
      }
    }
    else
    {
      v11 = WdLogNewEntry5_WdEvent(v8, v7);
      *(_QWORD *)(v11 + 24) = a2;
      WdLogEvent5_WdEvent(v11);
      v12 = (struct VIDMM_SEGMENT *)*((_QWORD *)a2 + 17);
      while ( v12 != (struct VIDMM_SEGMENT *)((char *)a2 + 136) )
      {
        v13 = (_QWORD **)((char *)v12 - 24);
        v12 = *(struct VIDMM_SEGMENT **)v12;
        if ( !(unsigned __int8)PsIsSystemProcess(**v13) && !*(_BYTE *)((*v13)[4] + 304LL) )
        {
          v14 = v13 + 5;
          v15 = (_QWORD *)*v14;
          while ( v15 != v14 )
          {
            v16 = v15[4];
            v15 = (_QWORD *)*v15;
            if ( !*(_QWORD *)(v16 + 176) )
              VIDMM_DEVICE::PartiallySuspend((VIDMM_GLOBAL **)v16);
            VIDMM_DEVICE::FaultAllAllocations((VIDMM_DEVICE *)v16);
          }
        }
      }
      VIDMM_SEGMENT::OldDefragment(a2);
    }
    VIDMM_GLOBAL::EndPreparation(this, v6, 0LL, 0, 0LL, 0LL);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, v6);
    if ( ((unsigned int)Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
      McTemplateK0p(v17, &EventVidMmEndDefragment, v18, this);
  }
}
