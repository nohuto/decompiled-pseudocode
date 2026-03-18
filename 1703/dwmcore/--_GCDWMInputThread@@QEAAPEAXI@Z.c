/*
 * XREFs of ??_GCDWMInputThread@@QEAAPEAXI@Z @ 0x180189AD0
 * Callers:
 *     ??1CInputManager@@MEAA@XZ @ 0x1801899C0 (--1CInputManager@@MEAA@XZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?UnloadRuntime@CMmcssTask@@AEAAXXZ @ 0x18014448C (-UnloadRuntime@CMmcssTask@@AEAAXXZ.c)
 *     ?Stop@CMit@@QEAAXXZ @ 0x180191D54 (-Stop@CMit@@QEAAXXZ.c)
 */

CDWMInputThread *__fastcall CDWMInputThread::`scalar deleting destructor'(CDWMInputThread *this)
{
  void *v2; // rcx
  void *v3; // rcx

  CMit::Stop(this);
  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 != (void *)-1LL )
    CloseHandle(v2);
  v3 = (void *)*((_QWORD *)this + 14);
  if ( v3 != (void *)-1LL )
    CloseHandle(v3);
  *(_QWORD *)this = 0LL;
  CMmcssTask::UnloadRuntime((CDWMInputThread *)((char *)this + 32));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  WPF::ProcessHeapImpl::Free(this);
  return this;
}
