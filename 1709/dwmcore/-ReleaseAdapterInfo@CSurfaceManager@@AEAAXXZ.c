/*
 * XREFs of ?ReleaseAdapterInfo@CSurfaceManager@@AEAAXXZ @ 0x180076A68
 * Callers:
 *     ?EnsureAdapterInfo@CSurfaceManager@@AEAAJXZ @ 0x180076AF8 (-EnsureAdapterInfo@CSurfaceManager@@AEAAJXZ.c)
 *     ?ProcessKernelTokens@CSurfaceManager@@AEAAJXZ @ 0x180119BD4 (-ProcessKernelTokens@CSurfaceManager@@AEAAJXZ.c)
 *     ??1CSurfaceManager@@MEAA@XZ @ 0x1801312B4 (--1CSurfaceManager@@MEAA@XZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSurfaceManager::ReleaseAdapterInfo(CSurfaceManager *this)
{
  __int64 i; // rdi
  __int64 v3; // rbp

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 134); i = (unsigned int)(i + 1) )
  {
    v3 = *((_QWORD *)this + 64);
    if ( *(_QWORD *)(v3 + 40 * i + 16) )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + 40 * i + 8) + 32LL))(*(_QWORD *)(v3 + 40 * i + 8));
    ReleaseInterfaceNoNULL<CManipulationManager>(*(_QWORD *)(v3 + 40 * i + 8));
  }
  *((_DWORD *)this + 134) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 512, 0x28u);
  *((_BYTE *)this + 624) = 0;
}
