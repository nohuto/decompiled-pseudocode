/*
 * XREFs of ?AddPipe@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x1400070C0
 * Callers:
 *     ?AddPipeToMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x140007130 (-AddPipeToMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140004910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140030394 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140033E48 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140033EC4 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSubmixImpl::AddPipe(CSubmixImpl *this, struct CPipeInstance *a2)
{
  __int64 (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rcx
  unsigned int v5; // ebx
  int v7; // eax
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v12; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 136);
  v12 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 33);
  if ( !v4 )
    goto LABEL_2;
  v14 = 0LL;
  v7 = (**v4)(v4, &GUID_cc56354c_5984_4beb_b60f_04b87fd5f8ee, &v14);
  v5 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15AE,
      (unsigned int)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v7,
      (int)lpCriticalSection);
    v8 = v5;
    v9 = 1157LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v9,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)v8,
      (int)lpCriticalSection);
    goto LABEL_13;
  }
  if ( !*((_DWORD *)this + 54) )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, struct CPipeInstance *))(*(_QWORD *)v14 + 24LL))(v14, a2);
    v5 = v10;
    if ( v10 >= 0 )
    {
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v14);
LABEL_2:
      v5 = 0;
      goto LABEL_3;
    }
    v8 = (unsigned int)v10;
    v9 = 1162LL;
    goto LABEL_12;
  }
  v5 = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x489,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
    (const char *)0x8000FFFFLL,
    (int)lpCriticalSection);
LABEL_13:
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v14);
LABEL_3:
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
  return v5;
}
