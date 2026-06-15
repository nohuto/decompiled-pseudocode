/*
 * XREFs of ?UpdateActiveStreamCount@CSubmixImpl@@IEAAJH@Z @ 0x140010490
 * Callers:
 *     ?OnLeftSubmixStopped@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x140010B90 (-OnLeftSubmixStopped@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?OnLeftSubmixStarted@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x140010C30 (-OnLeftSubmixStarted@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?StopStream@CSubmixImpl@@UEAAJ_K@Z @ 0x140011230 (-StopStream@CSubmixImpl@@UEAAJ_K@Z.c)
 *     ?StartStream@CSubmixImpl@@UEAAJ_K@Z @ 0x1400112D0 (-StartStream@CSubmixImpl@@UEAAJ_K@Z.c)
 * Callees:
 *     ?OnLeftSubmixStopped@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x14000F280 (-OnLeftSubmixStopped@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?OnLeftSubmixStarted@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x14000F410 (-OnLeftSubmixStarted@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?OnLeftSubmixStopped@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x140010B90 (-OnLeftSubmixStopped@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?OnLeftSubmixStarted@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x140010C30 (-OnLeftSubmixStarted@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?QueryInterface@?$CComObject@VCStreamGroup@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140015750 (-QueryInterface@-$CComObject@VCStreamGroup@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400336E4 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSubmixImpl::UpdateActiveStreamCount(CSubmixImpl *this, int a2)
{
  int v3; // edi
  CSystemAudioDeviceSharedBase *v4; // rcx
  void (__fastcall *v5)(CSystemAudioDeviceSharedBase *, GUID *, CSystemAudioDeviceSharedBase **); // rax
  __int64 (__fastcall *v6)(CSystemAudioDeviceSharedBase *, struct ISubmixInternal *); // rax
  __int64 (__fastcall *v7)(CSystemAudioDeviceSharedBase *, struct ISubmixInternal *); // rax
  int v8; // eax
  unsigned int v9; // ebx
  int v11; // eax
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CSystemAudioDeviceSharedBase *v14; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((_DWORD *)this + 32);
  *((_DWORD *)this + 32) = v3 + a2;
  v4 = (CSystemAudioDeviceSharedBase *)*((_QWORD *)this + 33);
  if ( v4 )
  {
    v5 = **(void (__fastcall ***)(CSystemAudioDeviceSharedBase *, GUID *, CSystemAudioDeviceSharedBase **))v4;
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
    goto LABEL_17;
  if ( v3 )
  {
    if ( v3 != 1 || *((_DWORD *)this + 32) )
      goto LABEL_17;
    v7 = *(__int64 (__fastcall **)(CSystemAudioDeviceSharedBase *, struct ISubmixInternal *))(*(_QWORD *)v4 + 104LL);
    if ( v7 == CSystemAudioDeviceSharedBase::OnLeftSubmixStopped )
    {
      v8 = CSystemAudioDeviceSharedBase::OnLeftSubmixStopped(v4, this);
    }
    else if ( v7 == CSubmixImpl::OnLeftSubmixStopped )
    {
      v8 = CSubmixImpl::OnLeftSubmixStopped(v4, this);
    }
    else
    {
      v8 = v7(v4, this);
    }
    v9 = v8;
    if ( v8 < 0 )
    {
      v12 = 735LL;
      goto LABEL_32;
    }
    goto LABEL_16;
  }
  if ( *((_DWORD *)this + 32) != 1 )
  {
LABEL_17:
    v9 = 0;
    goto LABEL_18;
  }
  v6 = *(__int64 (__fastcall **)(CSystemAudioDeviceSharedBase *, struct ISubmixInternal *))(*(_QWORD *)v4 + 96LL);
  if ( v6 == CSystemAudioDeviceSharedBase::OnLeftSubmixStarted )
  {
    v11 = CSystemAudioDeviceSharedBase::OnLeftSubmixStarted(v4, this);
  }
  else if ( v6 == CSubmixImpl::OnLeftSubmixStarted )
  {
    v11 = CSubmixImpl::OnLeftSubmixStarted(v4, this);
  }
  else
  {
    v11 = v6(v4, this);
  }
  v9 = v11;
  if ( v11 >= 0 )
  {
LABEL_16:
    v4 = v14;
    goto LABEL_17;
  }
  v12 = 730LL;
LABEL_32:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v12,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
    (const char *)v9,
    -2);
  v4 = v14;
LABEL_18:
  if ( v4 )
    (*(void (__fastcall **)(CSystemAudioDeviceSharedBase *))(*(_QWORD *)v4 + 16LL))(v4);
  return v9;
}
