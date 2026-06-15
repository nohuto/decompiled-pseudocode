/*
 * XREFs of ?DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z @ 0x140004BF0
 * Callers:
 *     ?DisconnectFromDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@@Z @ 0x140002080 (-DisconnectFromDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@@Z.c)
 *     ?DisconnectFromStreamGroup@CProcessSubmix@@UEAAJPEAUIStreamGroup@@@Z @ 0x140002390 (-DisconnectFromStreamGroup@CProcessSubmix@@UEAAJPEAUIStreamGroup@@@Z.c)
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x140006360 (--1CSubmixImpl@@QEAA@XZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140003CF0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?DisconnectPipesFromRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x140004A80 (-DisconnectPipesFromRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?OnLeftSubmixDisconnected@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x1400051F0 (-OnLeftSubmixDisconnected@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x140007B00 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?OnLeftSubmixDisconnected@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x1400120F0 (-OnLeftSubmixDisconnected@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?QueryInterface@?$CComObject@VCStreamGroup@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140015040 (-QueryInterface@-$CComObject@VCStreamGroup@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@?$CComObject@VCStreamGroup@@@ATL@@UEAAKXZ @ 0x140015140 (-Release@-$CComObject@VCStreamGroup@@@ATL@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSubmixImpl::DisconnectFromRightSubmix(
        CSubmixImpl *this,
        void (__fastcall ***a2)(struct ISubmix *, GUID *, struct ISubmixInternal **))
{
  void (__fastcall **v4)(struct ISubmix *, GUID *, struct ISubmixInternal **); // rax
  void (__fastcall *v5)(struct ISubmix *, GUID *, struct ISubmixInternal **); // rax
  __int64 (__fastcall *v6)(CSubmixImpl *, struct ISubmixInternal *); // rax
  int (*v7)(CSubmixImpl *__hidden, struct ISubmixInternal *); // rax
  void *v8; // rcx
  void (*v9)(void); // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+28h] [rbp-10h]
  struct ISubmixInternal *v12; // [rsp+40h] [rbp+8h] BYREF

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
    v7 = *(int (**)(CSubmixImpl *__hidden, struct ISubmixInternal *))(*(_QWORD *)v12 + 88LL);
    if ( v7 == CSubmixImpl::OnLeftSubmixDisconnected )
    {
      CSubmixImpl::OnLeftSubmixDisconnected(v12, this);
    }
    else if ( v7 == CSystemAudioDeviceSharedBase::OnLeftSubmixDisconnected )
    {
      CSystemAudioDeviceSharedBase::OnLeftSubmixDisconnected(v12, this);
    }
    else
    {
      ((void (__fastcall *)(struct ISubmixInternal *, CSubmixImpl *))v7)(v12, this);
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
    (*(void (__fastcall **)(struct ISubmixInternal *))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
}
