/*
 * XREFs of ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1C004DB90
 * Callers:
 *     VidMmTerminateProcess @ 0x1C0001E00 (VidMmTerminateProcess.c)
 *     ??_GVIDMM_PROCESS@@QEAAPEAXI@Z @ 0x1C001E63C (--_GVIDMM_PROCESS@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C0001AB0 (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0001AD0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x1C0001BA8 (--_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0001DE4 (--3@YAXPEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00024B4 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseExpandedResourceAppReference@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0047694 (-ReleaseExpandedResourceAppReference@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ??1VIDMM_PROCESS_FENCE_STORAGE@@QEAA@XZ @ 0x1C004EE18 (--1VIDMM_PROCESS_FENCE_STORAGE@@QEAA@XZ.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C0052F84 (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C0063A64 (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 */

void __fastcall VIDMM_PROCESS::~VIDMM_PROCESS(VIDMM_PROCESS *this)
{
  unsigned int v2; // esi
  DXGGLOBAL *Global; // rax
  __int64 v4; // r14
  VIDMM_GLOBAL **v5; // rbx
  unsigned int i; // ecx
  __int64 *v7; // rax
  __int64 v8; // rdx
  __int64 **v9; // r8
  VIDMM_GLOBAL *v10; // rdx
  VIDMM_GLOBAL ***v11; // rcx
  __int64 v12; // rcx
  DXGGLOBAL *v13; // rax
  void (__fastcall ***v14)(_QWORD, __int64); // rcx
  void *v15; // rbx
  CVirtualAddressAllocator *v16; // rcx

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
  if ( *((_QWORD *)this + 2) )
  {
    v2 = 0;
    Global = DXGGLOBAL::GetGlobal();
    if ( (unsigned int)DXGGLOBAL::GetMaximumAdapterCount(Global) )
    {
      do
      {
        v4 = 8LL * v2;
        v5 = *(VIDMM_GLOBAL ***)(v4 + *((_QWORD *)this + 2));
        if ( v5 )
        {
          DXGPUSHLOCK::AcquireExclusive((VIDMM_GLOBAL *)((char *)*v5 + 40968));
          for ( i = 0; i < *((_DWORD *)*v5 + 1604); ++i )
          {
            v7 = (__int64 *)((char *)v5[6] + 264 * i);
            v8 = *v7;
            if ( *v7 )
            {
              v9 = (__int64 **)v7[1];
              if ( *(__int64 **)(v8 + 8) != v7 || *v9 != v7 )
                __fastfail(3u);
              *v9 = (__int64 *)v8;
              *(_QWORD *)(v8 + 8) = v9;
              *v7 = 0LL;
              v7[1] = 0LL;
            }
          }
          v10 = v5[3];
          v11 = (VIDMM_GLOBAL ***)v5[4];
          if ( *((VIDMM_GLOBAL ***)v10 + 1) != v5 + 3 || *v11 != v5 + 3 )
            __fastfail(3u);
          *v11 = (VIDMM_GLOBAL **)v10;
          *((_QWORD *)v10 + 1) = v11;
          *(_QWORD *)(v4 + *((_QWORD *)this + 2)) = 0LL;
          v12 = (__int64)*v5 + 40968;
          *(_QWORD *)(v12 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v12, 0LL);
          KeLeaveCriticalRegion();
          VIDMM_GLOBAL::RequestNewBudget(*v5, 1);
          if ( *(_BYTE *)(*((_QWORD *)this + 4) + 494LL) )
            VIDMM_GLOBAL::ReleaseExpandedResourceAppReference(*v5);
          VIDMM_PROCESS_ADAPTER_INFO::`scalar deleting destructor'((VIDMM_PROCESS_ADAPTER_INFO *)v5);
        }
        ++v2;
        v13 = DXGGLOBAL::GetGlobal();
      }
      while ( v2 < (unsigned int)DXGGLOBAL::GetMaximumAdapterCount(v13) );
    }
    operator delete(*((void **)this + 2));
  }
  v14 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 3);
  if ( v14 )
    (**v14)(v14, 1LL);
  v15 = (void *)*((_QWORD *)this + 5);
  if ( v15 )
  {
    VIDMM_PROCESS_FENCE_STORAGE::~VIDMM_PROCESS_FENCE_STORAGE(*((VIDMM_PROCESS_FENCE_STORAGE **)this + 5));
    operator delete(v15);
  }
  v16 = (CVirtualAddressAllocator *)*((_QWORD *)this + 20);
  if ( v16 )
    CVirtualAddressAllocator::DestroyVaAllocator(v16);
}
