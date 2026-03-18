/*
 * XREFs of ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0058E30
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0077550 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002440 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00024F4 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000F1F0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0016F44 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     ?SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z @ 0x1C0058020 (-SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z.c)
 *     ?MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C0058D60 (-MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 *     ?UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1C00592CC (-UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C005B7DC (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z @ 0x1C005B984 (-StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z.c)
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z @ 0x1C005E970 (-EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0060FE8 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00611B0 (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::ProcessSystemMemoryOfferList(VIDMM_GLOBAL *this)
{
  char *v2; // rbp
  _QWORD *v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // r8
  _QWORD *v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rcx
  int v9; // r12d
  int v10; // r13d
  _QWORD *v11; // r15
  _QWORD *v12; // r8
  _QWORD *v13; // r15
  _QWORD *v14; // r14
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rax
  __int16 v18; // cx
  __int64 v19; // rax
  __int64 *v20; // rax
  __int64 *v21; // rcx
  __int64 *v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // r14
  int v25; // r9d
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // r8
  int v29; // [rsp+20h] [rbp-58h]
  __int64 v30; // [rsp+40h] [rbp-38h] BYREF
  __int64 *v31; // [rsp+48h] [rbp-30h]

  if ( !qword_1C00402E8 )
    return;
  v2 = (char *)this + 39912;
  v3 = (_QWORD *)((char *)this + 39952);
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v2, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v25 = *((_DWORD *)v2 + 4);
      if ( v25 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v4, (__int64)&EventBlockThread, v5, v25);
    }
    ExAcquirePushLockSharedEx(v2, 0LL);
  }
  v6 = (_QWORD *)*v3;
  ExReleasePushLockSharedEx(v2, 0LL);
  KeLeaveCriticalRegion();
  if ( v6 == v3 )
    return;
  v7 = 0x8000000000000000uLL;
  if ( (*((_DWORD *)this + 1616) & 0x8000) == 0 )
  {
    v8 = *((_QWORD *)this + 576) - *((_QWORD *)this + 884);
    if ( v8 < qword_1C00402E8 )
    {
      v7 = v8 - qword_1C00402E8;
      goto LABEL_8;
    }
  }
  v9 = 0;
  v31 = &v30;
  v10 = 0;
  v30 = (__int64)&v30;
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v2);
  while ( 1 )
  {
    v11 = (_QWORD *)*v3;
    if ( (_QWORD *)*v3 == v3 || !VIDMM_GLOBAL::UnderCleanupLimit(this) )
      break;
    v13 = v11 - 50;
    v14 = v13 + 50;
    v15 = v13[50];
    if ( *(_QWORD **)(v15 + 8) != v13 + 50 || (v16 = (_QWORD *)v13[51], (_QWORD *)*v16 != v14) )
      __fastfail(3u);
    *v16 = v15;
    *(_QWORD *)(v15 + 8) = v16;
    v17 = v13[63];
    *v14 = 0LL;
    v18 = *(_WORD *)(v17 + 4);
    switch ( v18 )
    {
      case 2:
        v19 = v13[17];
        if ( v19 )
        {
          if ( (*(_DWORD *)(v19 + 80) & 0x1001) == 0 )
            goto LABEL_21;
          if ( !v10 )
          {
            v10 = 1;
            VIDMM_GLOBAL::StartPreparation(this, 0xFFFFFFFFLL, 0LL, 0LL, 1000);
            v12 = &unk_1C00402F8;
          }
          if ( (*((_DWORD *)this + 1616) & 0x8000) != 0 || *((_QWORD *)this + 576) - v13[55] > v12[*((int *)v13 + 108)] )
          {
            v9 = 0;
            *((_QWORD *)v2 + 1) = 0LL;
            ExReleasePushLockExclusiveEx(v2, 0LL);
            KeLeaveCriticalRegion();
            VIDMM_GLOBAL::MarkGlobalAllocation(this, (DXGFASTMUTEX **)v13, 0LL, 0LL);
            LOBYTE(v26) = 1;
            LOBYTE(v29) = 0;
            (*(void (__fastcall **)(_QWORD, _QWORD *, __int64, _QWORD, int, _QWORD))(*(_QWORD *)v13[17] + 48LL))(
              v13[17],
              v13,
              v26,
              0LL,
              v29,
              0LL);
            DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v2);
            *((_QWORD *)this + 888) += v13[1];
            ++*((_DWORD *)this + 1778);
          }
          else
          {
LABEL_21:
            v20 = v31;
            if ( (__int64 *)*v31 != &v30 )
              __fastfail(3u);
            v13[51] = v31;
            *v14 = &v30;
            v9 = 0;
            *v20 = (__int64)v14;
            v31 = v13 + 50;
          }
        }
        else
        {
          DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)v13[40]);
          if ( (unsigned int)VIDMM_GLOBAL::DiscardOfferedAllocation(this, (struct _VIDMM_GLOBAL_ALLOC *)v13)
            && (*((_DWORD *)v13 + 21) & 8) == 0 )
          {
            *((_QWORD *)v2 + 1) = 0LL;
            ExReleasePushLockExclusiveEx(v2, 0LL);
            KeLeaveCriticalRegion();
            v9 = 1;
            if ( v13[33] )
              VIDMM_GLOBAL::EvictTemporaryAllocations(this, 1u, *((_DWORD *)v13 + 19) & 0x3F);
            VIDMM_GLOBAL::ResetBackingStore(this, (struct _VIDMM_GLOBAL_ALLOC *)v13);
            *((_QWORD *)this + 888) += v13[1];
            ++*((_DWORD *)this + 1778);
          }
          DXGFASTMUTEX::Release((struct _KTHREAD **)v13[40], v27, v28);
          if ( v9 )
          {
            DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v2);
            v9 = 0;
          }
          else
          {
LABEL_52:
            v9 = 0;
          }
        }
        break;
      case 0:
        goto LABEL_52;
      case 3:
        v9 = 0;
        break;
      default:
        goto LABEL_21;
    }
  }
  if ( (__int64 *)v30 != &v30 )
  {
    v21 = (__int64 *)v3[1];
    if ( (_QWORD *)v11[1] != v3 || (_QWORD *)*v21 != v3 )
      __fastfail(3u);
    if ( *(__int64 **)(v30 + 8) != &v30 || (__int64 *)*v31 != &v30 )
      __fastfail(3u);
    *v21 = (__int64)&v30;
    v22 = v31;
    v3[1] = v31;
    *v22 = (__int64)v3;
    v23 = v30;
    v31 = v21;
    if ( *(__int64 **)(v30 + 8) != &v30 || (__int64 *)*v21 != &v30 )
      __fastfail(3u);
    *v21 = v30;
    *(_QWORD *)(v23 + 8) = v21;
  }
  v24 = (_QWORD *)*v3;
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
  if ( v10 )
    VIDMM_GLOBAL::EndPreparation(this, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
  if ( VIDMM_GLOBAL::UnderCleanupLimit(this) )
  {
    *((_QWORD *)this + 884) = *((_QWORD *)this + 576);
    if ( v24 != v3 )
      v7 = -qword_1C00402E8;
  }
LABEL_8:
  VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)this, v7, 4);
}
