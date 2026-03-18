/*
 * XREFs of ??1CInputManager@@MEAA@XZ @ 0x1801949E0
 * Callers:
 *     ??_GCInputManager@@MEAAPEAXI@Z @ 0x180194B70 (--_GCInputManager@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??_GCDWMInputThread@@QEAAPEAXI@Z @ 0x180194B04 (--_GCDWMInputThread@@QEAAPEAXI@Z.c)
 *     ??_GCMit@@QEAAPEAXI@Z @ 0x180194BA0 (--_GCMit@@QEAAPEAXI@Z.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x180195160 (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?Stop@CMit@@QEAAXXZ @ 0x1801A0AFC (-Stop@CMit@@QEAAXXZ.c)
 *     ?Stop@CISMInputThread@@QEAAXXZ @ 0x1801A0DE4 (-Stop@CISMInputThread@@QEAAXXZ.c)
 */

void __fastcall CInputManager::~CInputManager(CInputManager *this)
{
  CMit *v2; // rcx
  unsigned int v3; // edx
  CDWMInputThread *v4; // rcx
  CISMInputThread *v5; // rcx
  __int64 *v6; // rdi
  CMit *v7; // rcx
  unsigned int v8; // edx
  CMit *v9; // rcx

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
    v6 = (__int64 *)*((_QWORD *)this + 28);
    if ( v6 )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v6 + 5);
      WPF::ProcessHeapImpl::Free(v6);
    }
  }
  v7 = (CMit *)*((_QWORD *)this + 29);
  if ( v7 )
  {
    CMit::Stop(v7);
    v9 = (CMit *)*((_QWORD *)this + 29);
    if ( v9 )
      CMit::`scalar deleting destructor'(v9, v8);
  }
  if ( *((_QWORD *)this + 35) )
    (*(void (__fastcall **)(_QWORD, const wchar_t *, _QWORD))(**((_QWORD **)this + 31) + 48LL))(
      *((_QWORD *)this + 31),
      L"EdgyNotificationEndpoint",
      0LL);
  CInputManager::s_pInputManager = 0LL;
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (char *)this + 272,
    0LL);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (char *)this + 256,
    0LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 31);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 30);
  WPF::ProcessHeapImpl::Free(*((void **)this + 23));
  WPF::ProcessHeapImpl::Free(*((void **)this + 19));
  WPF::ProcessHeapImpl::Free(*((void **)this + 10));
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
