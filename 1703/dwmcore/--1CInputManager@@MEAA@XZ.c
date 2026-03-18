/*
 * XREFs of ??1CInputManager@@MEAA@XZ @ 0x1801899C0
 * Callers:
 *     ??_GCInputManager@@MEAAPEAXI@Z @ 0x180189AA0 (--_GCInputManager@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ??_GCDWMInputThread@@QEAAPEAXI@Z @ 0x180189AD0 (--_GCDWMInputThread@@QEAAPEAXI@Z.c)
 *     ?Stop@CMit@@QEAAXXZ @ 0x180191D54 (-Stop@CMit@@QEAAXXZ.c)
 *     ?Stop@CISMInputThread@@QEAAXXZ @ 0x180192334 (-Stop@CISMInputThread@@QEAAXXZ.c)
 */

void __fastcall CInputManager::~CInputManager(CInputManager *this)
{
  CMit *v2; // rcx
  unsigned int v3; // edx
  CDWMInputThread *v4; // rcx
  CISMInputThread *v5; // rcx
  _QWORD *v6; // rdi
  __int64 v7; // rcx
  CMit *v8; // rcx
  unsigned int v9; // edx
  CDWMInputThread *v10; // rcx
  void *v11; // rcx

  *(_QWORD *)this = &CInputManager::`vftable';
  v2 = (CMit *)*((_QWORD *)this + 27);
  if ( v2 )
  {
    CMit::Stop(v2);
    v4 = (CDWMInputThread *)*((_QWORD *)this + 27);
    if ( v4 )
      CDWMInputThread::`scalar deleting destructor'(v4, v3);
  }
  v5 = (CISMInputThread *)*((_QWORD *)this + 28);
  if ( v5 )
  {
    CISMInputThread::Stop(v5);
    v6 = (_QWORD *)*((_QWORD *)this + 28);
    if ( v6 )
    {
      v7 = v6[5];
      if ( v7 )
      {
        v6[5] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      WPF::ProcessHeapImpl::Free(v6);
    }
  }
  v8 = (CMit *)*((_QWORD *)this + 29);
  if ( v8 )
  {
    CMit::Stop(v8);
    v10 = (CDWMInputThread *)*((_QWORD *)this + 29);
    if ( v10 )
      CDWMInputThread::`scalar deleting destructor'(v10, v9);
  }
  v11 = (void *)*((_QWORD *)this + 23);
  CInputManager::s_pInputManager = 0LL;
  WPF::ProcessHeapImpl::Free(v11);
  WPF::ProcessHeapImpl::Free(*((void **)this + 19));
  WPF::ProcessHeapImpl::Free(*((void **)this + 10));
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
