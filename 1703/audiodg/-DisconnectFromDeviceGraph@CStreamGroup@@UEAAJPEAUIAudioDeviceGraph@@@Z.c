/*
 * XREFs of ?DisconnectFromDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@@Z @ 0x1400020A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140004910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z @ 0x140006670 (-DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140008E90 (-QueryInterface@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140030394 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140033EC4 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CStreamGroup::DisconnectFromDeviceGraph(
        CStreamGroup *this,
        __int64 (__fastcall ***a2)(struct IAudioDeviceGraph *, GUID *, struct ISubmix **))
{
  __int64 (__fastcall **v4)(struct IAudioDeviceGraph *, GUID *, struct ISubmix **); // rax
  __int64 (__fastcall *v5)(struct IAudioDeviceGraph *, GUID *, struct ISubmix **); // rax
  int v6; // eax
  unsigned int v7; // ebx
  CSubmixImpl *v8; // rcx
  void (__fastcall *v9)(CSubmixImpl *__hidden, struct ISubmix *); // rax
  __int64 v10; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-10h] BYREF
  char v13; // [rsp+28h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  struct ISubmix *v15; // [rsp+40h] [rbp+10h] BYREF

  v13 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 160);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( !*((_BYTE *)this + 297) )
  {
    v4 = *a2;
    v15 = 0LL;
    v5 = *v4;
    if ( (char *)v5 == (char *)ATL::CComObject<CSystemAudioDeviceShared>::QueryInterface )
      v6 = ATL::CComObject<CSystemAudioDeviceShared>::QueryInterface(
             a2,
             &GUID_51181bd2_bd3f_43ae_b0d1_1cf3dfda303a,
             &v15);
    else
      v6 = v5((struct IAudioDeviceGraph *)a2, &GUID_51181bd2_bd3f_43ae_b0d1_1cf3dfda303a, &v15);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x104,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
        (const char *)(unsigned int)v6,
        (int)lpCriticalSection);
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v15);
      goto LABEL_12;
    }
    v8 = (CStreamGroup *)((char *)this + 24);
    v9 = *(void (__fastcall **)(CSubmixImpl *__hidden, struct ISubmix *))(*((_QWORD *)this + 3) + 112LL);
    if ( v9 == CSubmixImpl::DisconnectFromRightSubmix )
      CSubmixImpl::DisconnectFromRightSubmix(v8, v15);
    else
      v9(v8, v15);
    if ( v15 )
      (*(void (__fastcall **)(struct ISubmix *))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v10 = *((_QWORD *)this + 36);
  *((_QWORD *)this + 36) = 0LL;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v7 = 0;
LABEL_12:
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
  return v7;
}
