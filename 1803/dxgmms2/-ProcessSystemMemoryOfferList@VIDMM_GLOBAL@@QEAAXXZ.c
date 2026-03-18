/*
 * XREFs of ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C006C900
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C007F920 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0004D1C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005720 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00057D8 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0016834 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     ?SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z @ 0x1C005DBA8 (-SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00600E8 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z @ 0x1C00602A4 (-StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z.c)
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z @ 0x1C0062F48 (-EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00653C0 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0065588 (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C006C824 (-MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 *     ?UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1C006CD90 (-UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ.c)
 */

void __fastcall VIDMM_GLOBAL::ProcessSystemMemoryOfferList(VIDMM_GLOBAL *this)
{
  char *v2; // rbp
  DXGFASTMUTEX ***v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // r8
  DXGFASTMUTEX **v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rcx
  int v9; // r13d
  DXGFASTMUTEX **v10; // r14
  _QWORD *v11; // r8
  DXGFASTMUTEX *v12; // rcx
  DXGFASTMUTEX **v13; // r15
  int v14; // r12d
  DXGFASTMUTEX ***v15; // rax
  DXGFASTMUTEX *v16; // rax
  __int16 v17; // cx
  DXGFASTMUTEX *v18; // rax
  DXGFASTMUTEX ***v19; // rax
  __int64 v20; // r8
  DXGFASTMUTEX **v21; // rcx
  _QWORD *v22; // rax
  __int64 **v23; // rax
  DXGFASTMUTEX **v24; // r14
  __int64 v25; // rdx
  __int64 v26; // r8
  int v27; // r9d
  int v28; // [rsp+20h] [rbp-58h]
  __int64 **v29; // [rsp+40h] [rbp-38h] BYREF
  DXGFASTMUTEX **v30; // [rsp+48h] [rbp-30h]

  if ( !qword_1C00472E8 )
    return;
  v2 = (char *)this + 40488;
  v3 = (DXGFASTMUTEX ***)((char *)this + 40528);
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v2, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v27 = *((_DWORD *)v2 + 4);
      if ( v27 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v4, (__int64)&EventBlockThread, v5, v27);
    }
    ExAcquirePushLockSharedEx(v2, 0LL);
  }
  v6 = *v3;
  ExReleasePushLockSharedEx(v2, 0LL);
  KeLeaveCriticalRegion();
  if ( v6 == (DXGFASTMUTEX **)v3 )
    return;
  v7 = 0x8000000000000000uLL;
  if ( (*((_DWORD *)this + 1760) & 0x8000) == 0 )
  {
    v8 = *((_QWORD *)this + 576) - *((_QWORD *)this + 956);
    if ( v8 < qword_1C00472E8 )
    {
      v7 = v8 - qword_1C00472E8;
      goto LABEL_8;
    }
  }
  v9 = 0;
  v30 = (DXGFASTMUTEX **)&v29;
  v29 = (__int64 **)&v29;
LABEL_10:
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v2);
  while ( 1 )
  {
    v10 = *v3;
    if ( *v3 == (DXGFASTMUTEX **)v3 || !VIDMM_GLOBAL::UnderCleanupLimit(this) )
      break;
    v12 = *v10;
    v13 = v10 - 50;
    v14 = 0;
    if ( *((DXGFASTMUTEX ***)*v10 + 1) != v10 || (v15 = (DXGFASTMUTEX ***)v10[1], *v15 != v10) )
      __fastfail(3u);
    *v15 = (DXGFASTMUTEX **)v12;
    *((_QWORD *)v12 + 1) = v15;
    v16 = v13[63];
    *v10 = 0LL;
    v17 = *((_WORD *)v16 + 2);
    if ( v17 == 2 )
    {
      v18 = v13[17];
      if ( v18 )
      {
        if ( (*((_DWORD *)v18 + 20) & 0x1001) == 0 )
          goto LABEL_22;
        if ( !v9 )
        {
          v9 = 1;
          VIDMM_GLOBAL::StartPreparation((__int64)this, 0xFFFFFFFFLL, 0LL, 0LL, 1000);
          v11 = &unk_1C00472F8;
        }
        if ( (*((_DWORD *)this + 1760) & 0x8000) != 0
          || *((_QWORD *)this + 576) - (_QWORD)v13[55] > v11[*((int *)v13 + 108)] )
        {
          *((_QWORD *)v2 + 1) = 0LL;
          ExReleasePushLockExclusiveEx(v2, 0LL);
          KeLeaveCriticalRegion();
          VIDMM_GLOBAL::MarkGlobalAllocation(this, v10 - 50, 0LL, 0LL);
          LOBYTE(v20) = 1;
          LOBYTE(v28) = 0;
          (*(void (__fastcall **)(DXGFASTMUTEX *, DXGFASTMUTEX **, __int64, _QWORD, int, _QWORD))(*(_QWORD *)v13[17]
                                                                                                + 48LL))(
            v13[17],
            v10 - 50,
            v20,
            0LL,
            v28,
            0LL);
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v2);
          *((_QWORD *)this + 960) += v13[1];
          ++*((_DWORD *)this + 1922);
        }
        else
        {
LABEL_22:
          v19 = (DXGFASTMUTEX ***)v30;
          if ( *v30 != (DXGFASTMUTEX *)&v29 )
            __fastfail(3u);
          v10[1] = (DXGFASTMUTEX *)v30;
          *v10 = (DXGFASTMUTEX *)&v29;
          *v19 = v10;
          v30 = v10;
        }
      }
      else
      {
        DXGFASTMUTEX::Acquire(v13[40]);
        if ( (unsigned int)VIDMM_GLOBAL::DiscardOfferedAllocation(this, (struct _VIDMM_GLOBAL_ALLOC *)(v10 - 50))
          && (*((_DWORD *)v13 + 21) & 8) == 0 )
        {
          *((_QWORD *)this + 5062) = 0LL;
          ExReleasePushLockExclusiveEx(v2, 0LL);
          KeLeaveCriticalRegion();
          v14 = 1;
          if ( v13[33] )
            VIDMM_GLOBAL::EvictTemporaryAllocations((VIDMM_GLOBAL **)this, 1u, *((_DWORD *)v13 + 19) & 0x3F);
          VIDMM_GLOBAL::ResetBackingStore(this, (struct _VIDMM_GLOBAL_ALLOC *)(v10 - 50));
          *((_QWORD *)this + 960) += v13[1];
          ++*((_DWORD *)this + 1922);
        }
        DXGFASTMUTEX::Release((struct _KTHREAD **)v13[40], v25, v26);
        if ( v14 )
          goto LABEL_10;
      }
    }
    else if ( v17 && v17 != 3 )
    {
      goto LABEL_22;
    }
  }
  if ( v29 != (__int64 **)&v29 )
  {
    v21 = v3[1];
    if ( v10[1] != (DXGFASTMUTEX *)v3 || *v21 != (DXGFASTMUTEX *)v3 )
      __fastfail(3u);
    if ( v29[1] != (__int64 *)&v29 || *v30 != (DXGFASTMUTEX *)&v29 )
      __fastfail(3u);
    *v21 = (DXGFASTMUTEX *)&v29;
    v22 = v30;
    v3[1] = v30;
    *v22 = v3;
    v23 = v29;
    v30 = v21;
    if ( v29[1] != (__int64 *)&v29 || *v21 != (DXGFASTMUTEX *)&v29 )
      __fastfail(3u);
    *v21 = (DXGFASTMUTEX *)v29;
    v23[1] = (__int64 *)v21;
  }
  v24 = *v3;
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
  if ( v9 )
    VIDMM_GLOBAL::EndPreparation(this, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
  if ( VIDMM_GLOBAL::UnderCleanupLimit(this) )
  {
    *((_QWORD *)this + 956) = *((_QWORD *)this + 576);
    if ( v24 != (DXGFASTMUTEX **)v3 )
      v7 = -qword_1C00472E8;
  }
LABEL_8:
  VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)this, v7, 4);
}
