/*
 * XREFs of ?SetSpatialStreamGrantCount@CSubmixImpl@@UEAAJ_KI_J@Z @ 0x1400454F0
 * Callers:
 *     ?SetSpatialStreamGrantCount@CStreamGroup@@UEAAJ_KI_J@Z @ 0x1400361A0 (-SetSpatialStreamGrantCount@CStreamGroup@@UEAAJ_KI_J@Z.c)
 *     ?SetSpatialStreamGrantCount@CProcessSubmix@@UEAAJ_KI_J@Z @ 0x1400459B0 (-SetSpatialStreamGrantCount@CProcessSubmix@@UEAAJ_KI_J@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140004910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140015384 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?FindStream@CSubmixImpl@@IEAAPEAVCStreamInstance@@_K@Z @ 0x140030348 (-FindStream@CSubmixImpl@@IEAAPEAVCStreamInstance@@_K@Z.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140030394 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140033E48 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140033EC4 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSubmixImpl::SetSpatialStreamGrantCount(CSubmixImpl *this, __int64 a2, unsigned int a3, __int64 a4)
{
  struct CStreamInstance *Stream; // rax
  unsigned int v9; // ebx
  __int64 *v10; // rbx
  __int64 v11; // rbx
  int v12; // eax
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // eax
  __int64 v17; // [rsp+20h] [rbp-20h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-18h] BYREF
  char v19; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v21; // [rsp+60h] [rbp+20h] BYREF

  v19 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 136);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  Stream = CSubmixImpl::FindStream(this, a2);
  if ( !Stream )
  {
    v9 = -2005139430;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x429,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x887C001ALL);
    goto LABEL_13;
  }
  v10 = *(__int64 **)(*(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((_QWORD *)(*(_QWORD *)Stream + 16LL))
                    + 32LL);
  if ( v10 )
  {
    v11 = *v10;
    v17 = v11;
    if ( v11 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      v21 = 0LL;
      v12 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v11)(
              v11,
              &GUID_3d7ca171_206f_4cec_968b_149749ff740b,
              &v21);
      v9 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x15AE,
          (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
          (const char *)(unsigned int)v12);
        v13 = v9;
        v14 = 1079LL;
LABEL_9:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v14,
          (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
          (const char *)v13);
        wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v21);
        wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v17);
        goto LABEL_13;
      }
      v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v21 + 32LL))(v21, a3, a4);
      v9 = v15;
      if ( v15 < 0 )
      {
        v13 = (unsigned int)v15;
        v14 = 1080LL;
        goto LABEL_9;
      }
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v21);
    }
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v17);
  }
  v9 = 0;
LABEL_13:
  if ( v19 )
    LeaveCriticalSection(lpCriticalSection);
  return v9;
}
