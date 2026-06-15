/*
 * XREFs of ?DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z @ 0x140010740
 * Callers:
 *     ?DisconnectFromDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@@Z @ 0x140001360 (-DisconnectFromDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@@Z.c)
 *     ?DisconnectFromStreamGroup@CProcessSubmix@@UEAAJPEAUIStreamGroup@@@Z @ 0x140001670 (-DisconnectFromStreamGroup@CProcessSubmix@@UEAAJPEAUIStreamGroup@@@Z.c)
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x140011F90 (--1CSubmixImpl@@QEAA@XZ.c)
 * Callees:
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x1400055C0 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?OnLeftSubmixDisconnected@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x14000F100 (-OnLeftSubmixDisconnected@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010310 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?DisconnectPipesFromRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x1400105D0 (-DisconnectPipesFromRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?OnLeftSubmixDisconnected@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x140010D40 (-OnLeftSubmixDisconnected@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?QueryInterface@?$CComObject@VCStreamGroup@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140015750 (-QueryInterface@-$CComObject@VCStreamGroup@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@?$CComObject@VCStreamGroup@@@ATL@@UEAAKXZ @ 0x140015A70 (-Release@-$CComObject@VCStreamGroup@@@ATL@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSubmixImpl::DisconnectFromRightSubmix(
        CSubmixImpl *this,
        void (__fastcall ***a2)(struct ISubmix *, GUID *, CSystemAudioDeviceSharedBase **))
{
  void (__fastcall **v4)(struct ISubmix *, GUID *, CSystemAudioDeviceSharedBase **); // rax
  void (__fastcall *v5)(struct ISubmix *, GUID *, CSystemAudioDeviceSharedBase **); // rax
  __int64 (__fastcall *v6)(CSubmixImpl *, struct ISubmixInternal *); // rax
  __int64 (__fastcall *v7)(CSystemAudioDeviceSharedBase *, struct ISubmixInternal *); // rax
  void *v8; // rcx
  void (*v9)(void); // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+28h] [rbp-10h]
  CSystemAudioDeviceSharedBase *v12; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 136);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = *a2;
  v12 = 0LL;
  v5 = *v4;
  if ( (char *)v5 == (char *)ATL::CComObject<CStreamGroup>::QueryInterface )
    ATL::CComObject<CStreamGroup>::QueryInterface(a2, &GUID_cc56354c_5984_4beb_b60f_04b87fd5f8ee, &v12);
  else
    v5((struct ISubmix *)a2, &GUID_cc56354c_5984_4beb_b60f_04b87fd5f8ee, &v12);
  if ( v12 )
  {
    v6 = *(__int64 (__fastcall **)(CSubmixImpl *, struct ISubmixInternal *))(*(_QWORD *)this + 152LL);
    if ( v6 == CSubmixImpl::DisconnectPipesFromRightSubmix )
      CSubmixImpl::DisconnectPipesFromRightSubmix(this, v12);
    else
      ((void (__fastcall *)(CSubmixImpl *))v6)(this);
    v7 = *(__int64 (__fastcall **)(CSystemAudioDeviceSharedBase *, struct ISubmixInternal *))(*(_QWORD *)v12 + 88LL);
    if ( (char *)v7 == (char *)CSubmixImpl::OnLeftSubmixDisconnected )
    {
      CSubmixImpl::OnLeftSubmixDisconnected(v12, this);
    }
    else if ( v7 == CSystemAudioDeviceSharedBase::OnLeftSubmixDisconnected )
    {
      CSystemAudioDeviceSharedBase::OnLeftSubmixDisconnected(v12, this);
    }
    else
    {
      v7(v12, this);
    }
  }
  v8 = (void *)*((_QWORD *)this + 33);
  *((_QWORD *)this + 33) = 0LL;
  if ( v8 )
  {
    v9 = *(void (**)(void))(*(_QWORD *)v8 + 16LL);
    if ( (char *)v9 == (char *)ATL::CComObject<CStreamGroup>::Release )
      ATL::CComObject<CStreamGroup>::Release(v8);
    else
      v9();
  }
  PublishDeviceGraphWnfState();
  if ( v12 )
    (*(void (__fastcall **)(CSystemAudioDeviceSharedBase *))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
}
