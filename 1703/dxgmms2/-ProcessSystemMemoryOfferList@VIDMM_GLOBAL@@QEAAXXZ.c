/*
 * XREFs of ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00561E0
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0071420 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00017C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001860 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00024B4 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C0014A58 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     ?SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z @ 0x1C00555A0 (-SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z.c)
 *     ?MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C0056110 (-MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 *     ?UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1C005666C (-UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00586F0 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z @ 0x1C0058870 (-StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z.c)
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z @ 0x1C005B5E8 (-EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005E21C (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005E40C (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
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
  __int64 v12; // rdx
  _QWORD *v13; // r8
  _QWORD *v14; // r15
  _QWORD *v15; // r14
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rax
  __int16 v19; // cx
  __int64 v20; // rax
  __int64 *v21; // rax
  __int64 *v22; // rcx
  __int64 *v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // r14
  unsigned int v26; // edx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // r8
  int v30; // r9d
  int v31; // [rsp+20h] [rbp-58h]
  __int64 v32; // [rsp+40h] [rbp-38h] BYREF
  __int64 *v33; // [rsp+48h] [rbp-30h]

  if ( !qword_1C003C2B0 )
    return;
  v2 = (char *)this + 39912;
  v3 = (_QWORD *)((char *)this + 39952);
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v2, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v30 = *((_DWORD *)v2 + 4);
      if ( v30 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v4, &EventBlockThread, v5, v30);
    }
    ExAcquirePushLockSharedEx(v2, 0LL);
  }
  v6 = (_QWORD *)*v3;
  ExReleasePushLockSharedEx(v2, 0LL);
  KeLeaveCriticalRegion();
  if ( v6 == v3 )
    return;
  v7 = 0x8000000000000000uLL;
  v8 = *((_QWORD *)this + 576) - *((_QWORD *)this + 884);
  if ( (*((_DWORD *)this + 1616) & 0x8000) == 0 && v8 < qword_1C003C2B0 )
  {
    v7 = v8 - qword_1C003C2B0;
    goto LABEL_8;
  }
  v9 = 0;
  v33 = &v32;
  v10 = 0;
  v32 = (__int64)&v32;
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v2);
  while ( 1 )
  {
    v11 = (_QWORD *)*v3;
    if ( (_QWORD *)*v3 == v3 || !VIDMM_GLOBAL::UnderCleanupLimit(this) )
      break;
    v14 = v11 - 54;
    v15 = v14 + 54;
    v16 = v14[54];
    v17 = (_QWORD *)v14[55];
    if ( *(_QWORD **)(v16 + 8) != v14 + 54 || (_QWORD *)*v17 != v15 )
      __fastfail(3u);
    *v17 = v16;
    *(_QWORD *)(v16 + 8) = v17;
    v18 = v14[65];
    *v15 = 0LL;
    v19 = *(_WORD *)(v18 + 4);
    if ( v19 == 2 )
    {
      v20 = v14[17];
      if ( v20 )
      {
        if ( (*(_DWORD *)(v20 + 80) & 0x1001) == 0 )
          goto LABEL_21;
        if ( !v10 )
        {
          v10 = 1;
          VIDMM_GLOBAL::StartPreparation(this, v12, 0LL, 0LL, 1000);
          v13 = &unk_1C003C2C0;
        }
        if ( (*((_DWORD *)this + 1616) & 0x8000) != 0 || *((_QWORD *)this + 576) - v14[59] > v13[*((int *)v14 + 116)] )
        {
          v9 = 0;
          *((_QWORD *)v2 + 1) = 0LL;
          ExReleasePushLockExclusiveEx(v2, 0LL);
          KeLeaveCriticalRegion();
          VIDMM_GLOBAL::MarkGlobalAllocation(this, (DXGFASTMUTEX **)v14, 0LL, 0LL);
          LOBYTE(v27) = 1;
          LOBYTE(v31) = 0;
          (*(void (__fastcall **)(_QWORD, _QWORD *, __int64, _QWORD, int, _QWORD))(*(_QWORD *)v14[17] + 48LL))(
            v14[17],
            v14,
            v27,
            0LL,
            v31,
            0LL);
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v2);
          *((_QWORD *)this + 888) += v14[1];
          ++*((_DWORD *)this + 1778);
        }
        else
        {
LABEL_21:
          v21 = v33;
          if ( (__int64 *)*v33 != &v32 )
            __fastfail(3u);
          v14[55] = v33;
          *v15 = &v32;
          v9 = 0;
          *v21 = (__int64)v15;
          v33 = v14 + 54;
        }
      }
      else
      {
        DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)v14[40]);
        if ( (unsigned int)VIDMM_GLOBAL::DiscardOfferedAllocation(this, (struct _VIDMM_GLOBAL_ALLOC *)v14)
          && (*((_DWORD *)v14 + 21) & 8) == 0 )
        {
          *((_QWORD *)v2 + 1) = 0LL;
          ExReleasePushLockExclusiveEx(v2, 0LL);
          KeLeaveCriticalRegion();
          v9 = 1;
          if ( v14[33] )
            VIDMM_GLOBAL::EvictTemporaryAllocations(this, 1u, *((_DWORD *)v14 + 19) & 0x3F);
          VIDMM_GLOBAL::ResetBackingStore(this, (struct _VIDMM_GLOBAL_ALLOC *)v14);
          *((_QWORD *)this + 888) += v14[1];
          ++*((_DWORD *)this + 1778);
        }
        DXGFASTMUTEX::Release((struct _KTHREAD **)v14[40], v28, v29);
        if ( v9 )
        {
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v2);
          v9 = 0;
        }
        else
        {
LABEL_49:
          v9 = 0;
        }
      }
    }
    else
    {
      if ( v19 == 3 )
        goto LABEL_49;
      if ( v19 )
        goto LABEL_21;
      v9 = 0;
    }
  }
  if ( (__int64 *)v32 != &v32 )
  {
    v22 = (__int64 *)v3[1];
    if ( (_QWORD *)v11[1] != v3 || (_QWORD *)*v22 != v3 )
      __fastfail(3u);
    if ( *(__int64 **)(v32 + 8) != &v32 || (__int64 *)*v33 != &v32 )
      __fastfail(3u);
    *v22 = (__int64)&v32;
    v23 = v33;
    v3[1] = v33;
    *v23 = (__int64)v3;
    v24 = v32;
    v33 = v22;
    if ( *(__int64 **)(v32 + 8) != &v32 || (__int64 *)*v22 != &v32 )
      __fastfail(3u);
    *v22 = v32;
    *(_QWORD *)(v24 + 8) = v22;
  }
  v25 = (_QWORD *)*v3;
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
  if ( v10 )
    VIDMM_GLOBAL::EndPreparation(this, v26, 0LL, 0, 0LL, 0LL);
  if ( VIDMM_GLOBAL::UnderCleanupLimit(this) )
  {
    *((_QWORD *)this + 884) = *((_QWORD *)this + 576);
    if ( v25 != v3 )
      v7 = -qword_1C003C2B0;
  }
LABEL_8:
  VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)this, v7, 4);
}
