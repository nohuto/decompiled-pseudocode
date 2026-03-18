/*
 * XREFs of ?UnloadRuntime@CMmcssTask@@AEAAXXZ @ 0x18014448C
 * Callers:
 *     ?LoadRuntime@CMmcssTask@@AEAAJXZ @ 0x1800B6598 (-LoadRuntime@CMmcssTask@@AEAAJXZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x18013EE78 (--1CComposition@@MEAA@XZ.c)
 *     ??1CSurfaceManager@@MEAA@XZ @ 0x180145104 (--1CSurfaceManager@@MEAA@XZ.c)
 *     ??_GCDWMInputThread@@QEAAPEAXI@Z @ 0x180189AD0 (--_GCDWMInputThread@@QEAAPEAXI@Z.c)
 *     ??1CManipulationManager@@EEAA@XZ @ 0x180189DE0 (--1CManipulationManager@@EEAA@XZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMmcssTask::UnloadRuntime(CMmcssTask *this)
{
  __int64 v2; // rcx
  void (*v3)(void); // rax
  HMODULE v4; // rcx

  v2 = *((_QWORD *)this + 5);
  if ( v2 )
  {
    v3 = (void (*)(void))*((_QWORD *)this + 8);
    if ( v3 && *(_QWORD *)(v2 + 136) )
    {
      v3();
      *(_DWORD *)(*((_QWORD *)this + 5) + 128LL) = 0;
    }
    WPF::ProcessHeapImpl::Free(*((void **)this + 5));
    *((_QWORD *)this + 5) = 0LL;
  }
  v4 = (HMODULE)*((_QWORD *)this + 6);
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  FreeLibrary(v4);
  *((_QWORD *)this + 6) = 0LL;
}
