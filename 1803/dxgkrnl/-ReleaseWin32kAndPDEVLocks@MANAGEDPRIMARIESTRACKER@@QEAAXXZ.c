/*
 * XREFs of ?ReleaseWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C010B8A8
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00E3B00 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C010B90C (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MANAGEDPRIMARIESTRACKER::ReleaseWin32kAndPDEVLocks(MANAGEDPRIMARIESTRACKER *this)
{
  unsigned int v1; // edx
  __int64 v3; // rcx
  struct DXGGLOBAL *Global; // rax

  v1 = *((_DWORD *)this + 4);
  if ( (v1 & 1) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)this + 1) + 104LL) + 200LL))(
      *(_QWORD *)(*(_QWORD *)this + 16LL),
      v1 >> 2);
    *((_DWORD *)this + 4) &= ~1u;
    Global = DXGGLOBAL::GetGlobal(v3);
    *((_QWORD *)Global + 124) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Global + 984, 0LL);
    KeLeaveCriticalRegion();
  }
}
