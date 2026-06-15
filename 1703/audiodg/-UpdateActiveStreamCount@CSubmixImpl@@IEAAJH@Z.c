/*
 * XREFs of ?UpdateActiveStreamCount@CSubmixImpl@@IEAAJH@Z @ 0x1400063F0
 * Callers:
 *     ?OnLeftSubmixStopped@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x140006C30 (-OnLeftSubmixStopped@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?OnLeftSubmixStarted@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x140006CD0 (-OnLeftSubmixStarted@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?StopStream@CSubmixImpl@@UEAAJ_K@Z @ 0x140007260 (-StopStream@CSubmixImpl@@UEAAJ_K@Z.c)
 *     ?StartStream@CSubmixImpl@@UEAAJ_K@Z @ 0x140007300 (-StartStream@CSubmixImpl@@UEAAJ_K@Z.c)
 * Callees:
 *     ?OnLeftSubmixStopped@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x140005080 (-OnLeftSubmixStopped@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?OnLeftSubmixStarted@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x140005240 (-OnLeftSubmixStarted@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?OnLeftSubmixStopped@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x140006C30 (-OnLeftSubmixStopped@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?OnLeftSubmixStarted@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x140006CD0 (-OnLeftSubmixStarted@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ??$try_copy@UISubmixInternal@@@?$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UISubmixInternal@@Uerr_returncode_policy@wil@@@1@XZ @ 0x140008780 (--$try_copy@UISubmixInternal@@@-$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEBA-AV-$.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140033EC4 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSubmixImpl::UpdateActiveStreamCount(CSubmixImpl *this, int a2)
{
  int v3; // edi
  CSystemAudioDeviceSharedBase *v4; // rcx
  __int64 (__fastcall *v5)(CSystemAudioDeviceSharedBase *, struct ISubmixInternal *); // rax
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  __int64 (__fastcall *v10)(CSystemAudioDeviceSharedBase *, struct ISubmixInternal *); // rax
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CSystemAudioDeviceSharedBase *v13; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((_DWORD *)this + 32);
  *((_DWORD *)this + 32) = v3 + a2;
  wil::com_ptr_t<ISubmix,wil::err_returncode_policy>::try_copy<ISubmixInternal>((char *)this + 264, &v13);
  v4 = v13;
  if ( !v13 )
    goto LABEL_11;
  if ( v3 )
  {
    if ( v3 != 1 || *((_DWORD *)this + 32) )
      goto LABEL_11;
    v10 = *(__int64 (__fastcall **)(CSystemAudioDeviceSharedBase *, struct ISubmixInternal *))(*(_QWORD *)v13 + 104LL);
    if ( v10 == CSystemAudioDeviceSharedBase::OnLeftSubmixStopped )
    {
      v8 = CSystemAudioDeviceSharedBase::OnLeftSubmixStopped(v13, this);
    }
    else if ( v10 == CSubmixImpl::OnLeftSubmixStopped )
    {
      v8 = CSubmixImpl::OnLeftSubmixStopped(v13, this);
    }
    else
    {
      v8 = v10(v13, this);
    }
    v7 = v8;
    if ( v8 >= 0 )
      goto LABEL_10;
    v11 = 731LL;
  }
  else
  {
    if ( *((_DWORD *)this + 32) != 1 )
    {
LABEL_11:
      v7 = 0;
      goto LABEL_12;
    }
    v5 = *(__int64 (__fastcall **)(CSystemAudioDeviceSharedBase *, struct ISubmixInternal *))(*(_QWORD *)v13 + 96LL);
    if ( v5 == CSystemAudioDeviceSharedBase::OnLeftSubmixStarted )
    {
      v6 = CSystemAudioDeviceSharedBase::OnLeftSubmixStarted(v13, this);
    }
    else if ( v5 == CSubmixImpl::OnLeftSubmixStarted )
    {
      v6 = CSubmixImpl::OnLeftSubmixStarted(v13, this);
    }
    else
    {
      v6 = v5(v13, this);
    }
    v7 = v6;
    if ( v6 >= 0 )
    {
LABEL_10:
      v4 = v13;
      goto LABEL_11;
    }
    v11 = 726LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v11,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
    (const char *)v7,
    -2);
  v4 = v13;
LABEL_12:
  if ( v4 )
    (*(void (__fastcall **)(CSystemAudioDeviceSharedBase *))(*(_QWORD *)v4 + 16LL))(v4);
  return v7;
}
