/*
 * XREFs of ?UnloadRuntime@CMmcssTask@@AEAAXXZ @ 0x180151DC0
 * Callers:
 *     ?LoadRuntime@CMmcssTask@@AEAAJXZ @ 0x18001E798 (-LoadRuntime@CMmcssTask@@AEAAJXZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x1801497E4 (--1CComposition@@MEAA@XZ.c)
 *     ??1CSurfaceManager@@MEAA@XZ @ 0x1801527B4 (--1CSurfaceManager@@MEAA@XZ.c)
 *     ??_GCDWMInputThread@@QEAAPEAXI@Z @ 0x1801CDB98 (--_GCDWMInputThread@@QEAAPEAXI@Z.c)
 *     ??_GCMit@@QEAAPEAXI@Z @ 0x1801CDC44 (--_GCMit@@QEAAPEAXI@Z.c)
 *     ??1CManipulationManager@@EEAA@XZ @ 0x1801CE164 (--1CManipulationManager@@EEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMmcssTask::UnloadRuntime(CMmcssTask *this)
{
  _QWORD *v2; // rcx
  void (__fastcall *v3)(_QWORD); // rax
  HMODULE v4; // rcx

  v2 = (_QWORD *)*((_QWORD *)this + 5);
  if ( v2 )
  {
    v3 = (void (__fastcall *)(_QWORD))*((_QWORD *)this + 8);
    if ( v3 && v2[17] )
    {
      v3(v2[17]);
      *(_DWORD *)(*((_QWORD *)this + 5) + 128LL) = 0;
      v2 = (_QWORD *)*((_QWORD *)this + 5);
    }
    operator delete(v2);
    *((_QWORD *)this + 5) = 0LL;
  }
  v4 = (HMODULE)*((_QWORD *)this + 6);
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  FreeLibrary(v4);
  *((_QWORD *)this + 6) = 0LL;
}
