/*
 * XREFs of ?UpdateActiveStreamCount@CSubmixImpl@@IEAAJH@Z @ 0x140004940
 * Callers:
 *     ?OnLeftSubmixStopped@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x140005040 (-OnLeftSubmixStopped@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?OnLeftSubmixStarted@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x1400050E0 (-OnLeftSubmixStarted@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?StopStream@CSubmixImpl@@UEAAJ_K@Z @ 0x1400056D0 (-StopStream@CSubmixImpl@@UEAAJ_K@Z.c)
 *     ?StartStream@CSubmixImpl@@UEAAJ_K@Z @ 0x140005770 (-StartStream@CSubmixImpl@@UEAAJ_K@Z.c)
 * Callees:
 *     ?OnLeftSubmixStopped@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x140005040 (-OnLeftSubmixStopped@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?OnLeftSubmixStarted@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x1400050E0 (-OnLeftSubmixStarted@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?OnLeftSubmixStopped@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x140012270 (-OnLeftSubmixStopped@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?OnLeftSubmixStarted@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x140012400 (-OnLeftSubmixStarted@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?QueryInterface@?$CComObject@VCStreamGroup@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140015040 (-QueryInterface@-$CComObject@VCStreamGroup@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140032528 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSubmixImpl::UpdateActiveStreamCount(CSubmixImpl *this, int a2)
{
  int v3; // edi
  CSubmixImpl *v4; // rcx
  void (__fastcall *v5)(CSubmixImpl *, GUID *, CSubmixImpl **); // rax
  int (*v6)(CSystemAudioDeviceSharedBase *__hidden, struct ISubmixInternal *); // rax
  int v7; // eax
  int (*v8)(CSystemAudioDeviceSharedBase *__hidden, struct ISubmixInternal *); // rax
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CSubmixImpl *v14; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((_DWORD *)this + 32);
  *((_DWORD *)this + 32) = v3 + a2;
  v4 = (CSubmixImpl *)*((_QWORD *)this + 33);
  if ( v4 )
  {
    v5 = **(void (__fastcall ***)(CSubmixImpl *, GUID *, CSubmixImpl **))v4;
    if ( (char *)v5 == (char *)ATL::CComObject<CStreamGroup>::QueryInterface )
      ATL::CComObject<CStreamGroup>::QueryInterface(v4, &GUID_cc56354c_5984_4beb_b60f_04b87fd5f8ee, &v14);
    else
      v5(v4, &GUID_cc56354c_5984_4beb_b60f_04b87fd5f8ee, &v14);
    v4 = v14;
  }
  else
  {
    v14 = 0LL;
  }
  if ( !v4 )
    goto LABEL_18;
  if ( v3 )
  {
    if ( v3 != 1 || *((_DWORD *)this + 32) )
      goto LABEL_18;
    v8 = *(int (**)(CSystemAudioDeviceSharedBase *__hidden, struct ISubmixInternal *))(*(_QWORD *)v4 + 104LL);
    if ( v8 == CSystemAudioDeviceSharedBase::OnLeftSubmixStopped )
    {
      v9 = CSystemAudioDeviceSharedBase::OnLeftSubmixStopped(v4, this);
    }
    else if ( (char *)v8 == (char *)CSubmixImpl::OnLeftSubmixStopped )
    {
      v9 = CSubmixImpl::OnLeftSubmixStopped(v4, this);
    }
    else
    {
      v9 = ((__int64 (__fastcall *)(CSubmixImpl *, CSubmixImpl *))v8)(v4, this);
    }
    v10 = v9;
    if ( v9 < 0 )
    {
      v12 = 736LL;
      goto LABEL_31;
    }
    goto LABEL_17;
  }
  if ( *((_DWORD *)this + 32) != 1 )
  {
LABEL_18:
    v10 = 0;
    goto LABEL_19;
  }
  v6 = *(int (**)(CSystemAudioDeviceSharedBase *__hidden, struct ISubmixInternal *))(*(_QWORD *)v4 + 96LL);
  if ( v6 == CSystemAudioDeviceSharedBase::OnLeftSubmixStarted )
  {
    v7 = CSystemAudioDeviceSharedBase::OnLeftSubmixStarted(v4, this);
  }
  else if ( (char *)v6 == (char *)CSubmixImpl::OnLeftSubmixStarted )
  {
    v7 = CSubmixImpl::OnLeftSubmixStarted(v4, this);
  }
  else
  {
    v7 = ((__int64 (__fastcall *)(CSubmixImpl *, CSubmixImpl *))v6)(v4, this);
  }
  v10 = v7;
  if ( v7 >= 0 )
  {
LABEL_17:
    v4 = v14;
    goto LABEL_18;
  }
  v12 = 731LL;
LABEL_31:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
    (const char *)v10,
    -2);
  v4 = v14;
LABEL_19:
  if ( v4 )
    (*(void (__fastcall **)(CSubmixImpl *))(*(_QWORD *)v4 + 16LL))(v4);
  return v10;
}
