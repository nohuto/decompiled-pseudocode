/*
 * XREFs of ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1C0052650
 * Callers:
 *     VidMmTerminateProcess @ 0x1C0012F90 (VidMmTerminateProcess.c)
 *     ??_GVIDMM_PROCESS@@QEAAPEAXI@Z @ 0x1C00203BC (--_GVIDMM_PROCESS@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x1C00017B0 (--_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z.c)
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C0001C60 (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0001C80 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0002544 (--3@YAXPEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000F1F0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?VidMmiClosePartition@@YAXPEAUVIDMM_PARTITION@@@Z @ 0x1C0012528 (-VidMmiClosePartition@@YAXPEAUVIDMM_PARTITION@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C0054AB8 (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C00670C0 (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ??1VIDMM_PROCESS_FENCE_STORAGE@@QEAA@XZ @ 0x1C006FC94 (--1VIDMM_PROCESS_FENCE_STORAGE@@QEAA@XZ.c)
 */

void __fastcall VIDMM_PROCESS::~VIDMM_PROCESS(VIDMM_PROCESS *this)
{
  __int64 v2; // rbx
  DXGGLOBAL *Global; // rax
  VIDMM_GLOBAL **v4; // rdi
  DXGGLOBAL *v5; // rax
  void (__fastcall ***v6)(_QWORD, __int64); // rcx
  void *v7; // rbx
  CVirtualAddressAllocator *v8; // rcx
  volatile signed __int32 *v9; // rcx
  unsigned int i; // r14d
  __int64 *v11; // rcx
  __int64 v12; // rax
  __int64 **v13; // rdx
  struct _PCW_INSTANCE *v14; // rcx
  VIDMM_GLOBAL *v15; // rcx
  VIDMM_GLOBAL ***v16; // rdx
  __int64 v17; // rcx

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
  if ( *((_QWORD *)this + 2) )
  {
    v2 = 0LL;
    Global = DXGGLOBAL::GetGlobal();
    if ( (unsigned int)DXGGLOBAL::GetMaximumAdapterCount(Global) )
    {
      do
      {
        v4 = *(VIDMM_GLOBAL ***)(8 * v2 + *((_QWORD *)this + 2));
        if ( v4 )
        {
          DXGPUSHLOCK::AcquireExclusive((VIDMM_GLOBAL *)((char *)*v4 + 40968));
          for ( i = 0; i < *((_DWORD *)*v4 + 1604); ++i )
          {
            v11 = (__int64 *)((char *)v4[6] + 296 * i);
            v12 = *v11;
            if ( *v11 )
            {
              if ( *(__int64 **)(v12 + 8) != v11 || (v13 = (__int64 **)v11[1], *v13 != v11) )
                __fastfail(3u);
              *v13 = (__int64 *)v12;
              *(_QWORD *)(v12 + 8) = v13;
              *v11 = 0LL;
              v11[1] = 0LL;
            }
            v14 = (struct _PCW_INSTANCE *)v11[31];
            if ( v14 )
              PcwCloseInstance(v14);
          }
          v15 = v4[3];
          if ( *((VIDMM_GLOBAL ***)v15 + 1) != v4 + 3 || (v16 = (VIDMM_GLOBAL ***)v4[4], *v16 != v4 + 3) )
            __fastfail(3u);
          *v16 = (VIDMM_GLOBAL **)v15;
          *((_QWORD *)v15 + 1) = v16;
          *(_QWORD *)(8 * v2 + *((_QWORD *)this + 2)) = 0LL;
          v17 = (__int64)*v4 + 40968;
          *(_QWORD *)(v17 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v17, 0LL);
          KeLeaveCriticalRegion();
          VIDMM_GLOBAL::RequestNewBudget(*v4, 1);
          VIDMM_PROCESS_ADAPTER_INFO::`scalar deleting destructor'((VIDMM_PROCESS_ADAPTER_INFO *)v4);
        }
        v2 = (unsigned int)(v2 + 1);
        v5 = DXGGLOBAL::GetGlobal();
      }
      while ( (unsigned int)v2 < (unsigned int)DXGGLOBAL::GetMaximumAdapterCount(v5) );
    }
    operator delete(*((void **)this + 2));
  }
  v6 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 3);
  if ( v6 )
    (**v6)(v6, 1LL);
  v7 = (void *)*((_QWORD *)this + 5);
  if ( v7 )
  {
    VIDMM_PROCESS_FENCE_STORAGE::~VIDMM_PROCESS_FENCE_STORAGE(*((VIDMM_PROCESS_FENCE_STORAGE **)this + 5));
    operator delete(v7);
  }
  v8 = (CVirtualAddressAllocator *)*((_QWORD *)this + 20);
  if ( v8 )
    CVirtualAddressAllocator::DestroyVaAllocator(v8);
  v9 = (volatile signed __int32 *)*((_QWORD *)this + 21);
  if ( v9 )
    VidMmiClosePartition(v9);
}
