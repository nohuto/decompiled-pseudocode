/*
 * XREFs of ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1C0073CC8
 * Callers:
 *     VidMmTerminateProcess @ 0x1C00033A0 (VidMmTerminateProcess.c)
 *     ??_GVIDMM_PROCESS@@QEAAPEAXI@Z @ 0x1C00228E8 (--_GVIDMM_PROCESS@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?VidMmiClosePartition@@YAXPEAUVIDMM_PARTITION@@@Z @ 0x1C0002734 (-VidMmiClosePartition@@YAXPEAUVIDMM_PARTITION@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0002BF0 (--3@YAXPEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0004D1C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x1C00055A0 (--_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z.c)
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C0005AF4 (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0005B14 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C005B0C0 (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C006B9C4 (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ??1VIDMM_PROCESS_FENCE_STORAGE@@QEAA@XZ @ 0x1C0077AE0 (--1VIDMM_PROCESS_FENCE_STORAGE@@QEAA@XZ.c)
 *     ?FreeVmProcessFencePageInGlobalStorage@VIDMM_PROCESS@@QEAAXXZ @ 0x1C00AA0C8 (-FreeVmProcessFencePageInGlobalStorage@VIDMM_PROCESS@@QEAAXXZ.c)
 */

void __fastcall VIDMM_PROCESS::~VIDMM_PROCESS(VIDMM_PROCESS *this, __int64 a2)
{
  __int64 v3; // rbp
  DXGGLOBAL *Global; // rax
  VIDMM_GLOBAL **v5; // rdi
  DXGGLOBAL *v6; // rax
  __int64 v7; // r8
  void (__fastcall ***v8)(_QWORD, __int64); // rcx
  void *v9; // rdi
  CVirtualAddressAllocator *v10; // rcx
  volatile signed __int32 *v11; // rcx
  unsigned int i; // esi
  __int64 *v13; // rcx
  __int64 v14; // rax
  __int64 **v15; // rdx
  struct _PCW_INSTANCE *v16; // rcx
  VIDMM_GLOBAL *v17; // rcx
  VIDMM_GLOBAL ***v18; // rdx
  __int64 v19; // rcx

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
  if ( *((_QWORD *)this + 2) )
  {
    v3 = 0LL;
    Global = DXGGLOBAL::GetGlobal();
    if ( (unsigned int)DXGGLOBAL::GetMaximumAdapterCount(Global) )
    {
      do
      {
        v5 = *(VIDMM_GLOBAL ***)(*((_QWORD *)this + 2) + 8 * v3);
        if ( v5 )
        {
          DXGPUSHLOCK::AcquireExclusive((VIDMM_GLOBAL *)((char *)*v5 + 41544));
          for ( i = 0; i < *((_DWORD *)*v5 + 1748); ++i )
          {
            v13 = (__int64 *)((char *)v5[6] + 296 * i);
            v14 = *v13;
            if ( *v13 )
            {
              if ( *(__int64 **)(v14 + 8) != v13 || (v15 = (__int64 **)v13[1], *v15 != v13) )
                __fastfail(3u);
              *v15 = (__int64 *)v14;
              *(_QWORD *)(v14 + 8) = v15;
              *v13 = 0LL;
              v13[1] = 0LL;
            }
            v16 = (struct _PCW_INSTANCE *)v13[31];
            if ( v16 )
              PcwCloseInstance(v16);
          }
          v17 = v5[3];
          if ( *((VIDMM_GLOBAL ***)v17 + 1) != v5 + 3 || (v18 = (VIDMM_GLOBAL ***)v5[4], *v18 != v5 + 3) )
            __fastfail(3u);
          *v18 = (VIDMM_GLOBAL **)v17;
          *((_QWORD *)v17 + 1) = v18;
          *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v3) = 0LL;
          v19 = (__int64)*v5 + 41544;
          *(_QWORD *)(v19 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v19, 0LL);
          KeLeaveCriticalRegion();
          VIDMM_GLOBAL::RequestNewBudget(*v5, 1);
          VIDMM_PROCESS_ADAPTER_INFO::`scalar deleting destructor'((VIDMM_PROCESS_ADAPTER_INFO *)v5);
        }
        v3 = (unsigned int)(v3 + 1);
        v6 = DXGGLOBAL::GetGlobal();
      }
      while ( (unsigned int)v3 < (unsigned int)DXGGLOBAL::GetMaximumAdapterCount(v6) );
    }
    operator delete(*((void **)this + 2));
  }
  v7 = *((_QWORD *)this + 4);
  if ( !v7 || (*(_BYTE *)(v7 + 323) & 8) == 0 )
  {
    v8 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 3);
    if ( v8 )
    {
      (**v8)(v8, 1LL);
      v7 = *((_QWORD *)this + 4);
    }
  }
  if ( v7 && (*(_BYTE *)(v7 + 323) & 8) != 0 )
    VIDMM_PROCESS::FreeVmProcessFencePageInGlobalStorage(this);
  v9 = (void *)*((_QWORD *)this + 5);
  if ( v9 )
  {
    VIDMM_PROCESS_FENCE_STORAGE::~VIDMM_PROCESS_FENCE_STORAGE(*((VIDMM_PROCESS_FENCE_STORAGE **)this + 5));
    operator delete(v9);
  }
  v10 = (CVirtualAddressAllocator *)*((_QWORD *)this + 26);
  if ( v10 )
    CVirtualAddressAllocator::DestroyVaAllocator(v10, a2, v7);
  v11 = (volatile signed __int32 *)*((_QWORD *)this + 30);
  if ( v11 )
    VidMmiClosePartition(v11);
}
