/*
 * XREFs of ?OnNewProcessSubmix@CProcessSubmixManager@@UEAAJPEAUIProcessSubmixProxy@@@Z @ 0x18002DD50
 * Callers:
 *     ?GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixProxy@@@Z @ 0x180009F00 (-GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixPro.c)
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ??1?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800393B0 (--1-$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??$emplace_back@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAX$$QEAV?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800A835C (--$emplace_back@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@-$vector@V.c)
 *     std::for_each_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient___________lambda_847b9aa654f320ccd951dc5ecb721dd8___ @ 0x1800AEBA0 (std--for_each_std--_Vector_const_iterator_std--_Vector_val_std--_Simple_types_std--unique_ptr_CA.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x1800B10A8 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CProcessSubmixManager::OnNewProcessSubmix(
        CProcessSubmixManager *this,
        struct IProcessSubmixProxy *a2)
{
  const WCHAR ***v3; // r15
  __int64 result; // rax
  const WCHAR *v5; // r14
  const WCHAR *v6; // rax
  const WCHAR **v7; // r14
  const WCHAR ***i; // rdi
  const char *v9; // r9
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  char v11; // [rsp+70h] [rbp+8h] BYREF
  struct IProcessSubmixProxy *v12; // [rsp+78h] [rbp+10h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+80h] [rbp+18h] BYREF

  v12 = a2;
  try
  {
    Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)this + 16, (__int64)&lpCriticalSection);
    v3 = (const WCHAR ***)*((_QWORD *)this + 8);
    for ( i = (const WCHAR ***)*((_QWORD *)this + 7); i != v3; ++i )
    {
      v5 = **i;
      v6 = (const WCHAR *)(*(__int64 (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v12 + 152LL))(v12);
      if ( CompareStringOrdinal(v5, -1, v6, -1, 1) == 2 )
      {
        v7 = *i;
        if ( *((_DWORD *)v7 + 2) == (*(unsigned int (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v12 + 160LL))(v12) )
          break;
      }
    }
    if ( i != *((const WCHAR ****)this + 8) )
    {
      ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v11, v12);
      std::vector<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>::emplace_back<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>(
        *i + 2,
        &v11);
      wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(&v11);
      std::for_each_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient___________lambda_847b9aa654f320ccd951dc5ecb721dd8___(
        &v11,
        (*i)[5],
        (*i)[6],
        &v12);
    }
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1B6,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
                           v9);
  }
  return result;
}
