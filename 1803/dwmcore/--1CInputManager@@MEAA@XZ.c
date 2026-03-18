/*
 * XREFs of ??1CInputManager@@MEAA@XZ @ 0x1801CDA44
 * Callers:
 *     ??_GCInputManager@@MEAAPEAXI@Z @ 0x1801CDC00 (--_GCInputManager@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x1800C9E78 (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??_GCDWMInputThread@@QEAAPEAXI@Z @ 0x1801CDB98 (--_GCDWMInputThread@@QEAAPEAXI@Z.c)
 *     ??_GCMit@@QEAAPEAXI@Z @ 0x1801CDC44 (--_GCMit@@QEAAPEAXI@Z.c)
 *     ?Stop@CMit@@QEAAXXZ @ 0x1801D9908 (-Stop@CMit@@QEAAXXZ.c)
 *     ?Stop@CISMInputThread@@QEAAXXZ @ 0x1801D9948 (-Stop@CISMInputThread@@QEAAXXZ.c)
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
  __int64 v10; // rcx
  __int64 v11; // rcx

  *(_QWORD *)this = &CInputManager::`vftable';
  v2 = (CMit *)*((_QWORD *)this + 28);
  if ( v2 )
  {
    CMit::Stop(v2);
    v4 = (CDWMInputThread *)*((_QWORD *)this + 28);
    if ( v4 )
      CDWMInputThread::`scalar deleting destructor'(v4, v3);
  }
  v5 = (CISMInputThread *)*((_QWORD *)this + 29);
  if ( v5 )
  {
    CISMInputThread::Stop(v5);
    v6 = (__int64 *)*((_QWORD *)this + 29);
    if ( v6 )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v6 + 5);
      operator delete(v6);
    }
  }
  v7 = (CMit *)*((_QWORD *)this + 30);
  if ( v7 )
  {
    CMit::Stop(v7);
    v9 = (CMit *)*((_QWORD *)this + 30);
    if ( v9 )
      CMit::`scalar deleting destructor'(v9, v8);
  }
  if ( *((_QWORD *)this + 36) )
    (*(void (__fastcall **)(_QWORD, const wchar_t *, _QWORD))(**((_QWORD **)this + 32) + 48LL))(
      *((_QWORD *)this + 32),
      L"EdgyNotificationEndpoint",
      0LL);
  CInputManager::s_pInputManager = 0LL;
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (_QWORD *)this + 35,
    0LL);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (_QWORD *)this + 33,
    0LL);
  v10 = *((_QWORD *)this + 32);
  if ( v10 )
  {
    *((_QWORD *)this + 32) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = *((_QWORD *)this + 31);
  if ( v11 )
  {
    *((_QWORD *)this + 31) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  operator delete(*((void **)this + 24));
  operator delete(*((void **)this + 20));
  operator delete(*((void **)this + 10));
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
