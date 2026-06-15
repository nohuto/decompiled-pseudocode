/*
 * XREFs of ?RemovePipe@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x140010F80
 * Callers:
 *     ?DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z @ 0x140001D90 (-DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z.c)
 *     ?DisconnectPipesFromRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x1400105D0 (-DisconnectPipesFromRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 * Callees:
 *     ?RemovePipe@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000F690 (-RemovePipe@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010310 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x14002FFDC (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140033668 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400336E4 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSubmixImpl::RemovePipe(CSubmixImpl *this, struct CPipeInstance *a2)
{
  __int64 (__fastcall ***v4)(_QWORD, GUID *, CSystemAudioDeviceSharedBase **); // rcx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 (__fastcall *v7)(CSystemAudioDeviceSharedBase *, struct CPipeInstance *); // rax
  int v8; // eax
  __int64 v10; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v12; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CSystemAudioDeviceSharedBase *v14; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 136);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = (__int64 (__fastcall ***)(_QWORD, GUID *, CSystemAudioDeviceSharedBase **))*((_QWORD *)this + 33);
  if ( !v4 )
  {
LABEL_8:
    v6 = 0;
    goto LABEL_9;
  }
  v14 = 0LL;
  v5 = (**v4)(v4, &GUID_cc56354c_5984_4beb_b60f_04b87fd5f8ee, &v14);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15E1,
      (unsigned int)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v5,
      (int)lpCriticalSection);
    v10 = 1205LL;
  }
  else
  {
    v7 = *(__int64 (__fastcall **)(CSystemAudioDeviceSharedBase *, struct CPipeInstance *))(*(_QWORD *)v14 + 48LL);
    if ( v7 == CSystemAudioDeviceSharedBase::RemovePipe )
      v8 = CSystemAudioDeviceSharedBase::RemovePipe(v14, a2);
    else
      v8 = v7(v14, a2);
    v6 = v8;
    if ( v8 >= 0 )
    {
      if ( v14 )
        (*(void (__fastcall **)(CSystemAudioDeviceSharedBase *))(*(_QWORD *)v14 + 16LL))(v14);
      goto LABEL_8;
    }
    v10 = 1207LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v10,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
    (const char *)v6,
    (int)lpCriticalSection);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v14);
LABEL_9:
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}
