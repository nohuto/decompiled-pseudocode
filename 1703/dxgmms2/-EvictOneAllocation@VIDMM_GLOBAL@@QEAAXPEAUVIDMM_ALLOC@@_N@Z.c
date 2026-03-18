/*
 * XREFs of ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C005928C
 * Callers:
 *     ?EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C0051134 (-EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C0055260 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005C230 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C005D200 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1C006DF40 (-UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z.c)
 *     ?LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z @ 0x1C0093C34 (-LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     Template_p @ 0x1C001F4D4 (Template_p.c)
 *     ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z @ 0x1C005B708 (-NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z.c)
 */

void __fastcall VIDMM_GLOBAL::EvictOneAllocation(VIDMM_GLOBAL *this, __int64 **a2, __int64 a3)
{
  bool v3; // si
  VIDMM_GLOBAL *v5; // rbp
  __int64 v6; // rdi
  int v7; // eax
  _QWORD *v8; // rax
  __int64 *v9; // rdx
  int v10; // [rsp+20h] [rbp-28h]

  v3 = a3;
  v5 = this;
  v6 = **a2;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  v7 = *((_DWORD *)a2 + 7) & 3;
  if ( v7 == 2 )
  {
    VIDMM_GLOBAL::NotifyAllocationEviction(v5, (struct VIDMM_ALLOC *)a2, v3, 0LL, 0LL);
  }
  else if ( v7 == 1 )
  {
    v8 = a2 + 7;
    v9 = a2[7];
    this = (VIDMM_GLOBAL *)a2[8];
    if ( (__int64 **)v9[1] != a2 + 7 || *(_QWORD **)this != v8 )
      __fastfail(3u);
    *(_QWORD *)this = v9;
    v9[1] = (__int64)this;
    *((_DWORD *)a2 + 7) &= 0xFFFFFFFC;
    a2[8] = 0LL;
    *v8 = 0LL;
  }
  if ( !v3 || (this = (VIDMM_GLOBAL *)a2[1][1], (*((_DWORD *)this + 16) & 2) != 0) )
  {
    if ( *(_DWORD *)(v6 + 128) == 1 )
    {
      LOBYTE(a3) = 1;
      LOBYTE(v10) = 0;
      (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD, int, _QWORD))(**(_QWORD **)(v6 + 136) + 48LL))(
        *(_QWORD *)(v6 + 136),
        v6,
        a3,
        0LL,
        v10,
        0LL);
    }
  }
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_p((__int64)this, &EventEvictAllocation, a3, v6);
  }
}
