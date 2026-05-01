/*
 * XREFs of ?DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAUITaskWindow@@@Z @ 0x1800580AC
 * Callers:
 *     ?HandleDestruction@CImmersiveApp@@UEAA?AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x180055160 (-HandleDestruction@CImmersiveApp@@UEAA-AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEA.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800258B8 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180026168 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180026A48 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     SHIsSameObject @ 0x180026D1C (SHIsSameObject.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x1800582C4 (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x180058678 (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     ?_SetGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x180058828 (-_SetGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?_RemoveWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAX_K@Z @ 0x180058CD0 (-_RemoveWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAX_K@Z.c)
 *     ?HideFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x1800590F4 (-HideFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z @ 0x18005915C (-PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z.c)
 *     ?_GetWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@PEA_K@Z @ 0x180059954 (-_GetWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEAPEAUITaskWi.c)
 *     ?_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x180059A3C (-_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 *     ??$Start@AEAPEAG@DeleteWindow@CImmersiveAppTelemetry@@SA?AV01@AEAPEAG@Z @ 0x18005BB78 (--$Start@AEAPEAG@DeleteWindow@CImmersiveAppTelemetry@@SA-AV01@AEAPEAG@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::DeleteWindow(
        struct ITaskWindow ***this,
        const struct CTaskWindowFinder *a2,
        bool *a3,
        struct ITaskWindow **a4)
{
  int Window; // r14d
  bool v9; // bl
  struct ITaskWindow **v10; // rax
  bool v11; // dl
  struct ITaskWindow *v12; // rcx
  struct ITaskWindow *v13; // rcx
  struct ITaskWindow *v15; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int64 v16[3]; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v17[40]; // [rsp+40h] [rbp-C0h] BYREF

  v16[1] = -2LL;
  *a3 = 0;
  *a4 = 0LL;
  CImmersiveAppTelemetry::DeleteWindow::Start<unsigned short * &>((CImmersiveAppTelemetry::DeleteWindow *)v17);
  v15 = 0LL;
  Window = CImmersiveApp::CImmersiveWindowCollection::_GetWindow(
             (CImmersiveApp::CImmersiveWindowCollection *)this,
             a2,
             &v15,
             v16);
  if ( Window >= 0 )
  {
    v9 = v16[0] == 0;
    if ( this[15]
      && ((unsigned int)SHIsSameObject(
                          (int (__fastcall ***)(_QWORD, GUID *, __int64 *))v15,
                          (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))this[14])
       || v9
       && (unsigned __int64)this[20] > 1
       && (unsigned int)SHIsSameObject(
                          (int (__fastcall ***)(_QWORD, GUID *, __int64 *))this[19][1],
                          (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))this[14])) )
    {
      CImmersiveApp::CImmersiveWindowCollection::_CleanupPendingPresentedWindow((CImmersiveApp::CImmersiveWindowCollection *)this);
    }
    CImmersiveApp::CImmersiveWindowCollection::_RemoveWindow((CImmersiveApp::CImmersiveWindowCollection *)this, v16[0]);
    (*(void (__fastcall **)(struct ITaskWindow *, _QWORD))(*(_QWORD *)v15 + 184LL))(v15, 0LL);
    v10 = this[20];
    if ( v9 )
    {
      *a3 = 1;
      *((_BYTE *)this + 184) = 0;
      if ( v10 )
      {
        CImmersiveApp::CImmersiveWindowCollection::PresentWindowInFrame(
          (CImmersiveApp::CImmersiveWindowCollection *)this,
          *this[19]);
      }
      else
      {
        CImmersiveApp::CImmersiveWindowCollection::PresentWindowInFrame(
          (CImmersiveApp::CImmersiveWindowCollection *)this,
          0LL);
        if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost((CImmersiveApp::CImmersiveWindowCollection *)this) )
        {
          CImmersiveApp::CImmersiveWindowCollection::_SetGhostStatus(this, 0LL);
          CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual(
            (CImmersiveApp::CImmersiveWindowCollection *)this,
            v11);
        }
        *((_DWORD *)this + 47) = 0;
      }
      CImmersiveApp::CImmersiveWindowCollection::HideFrame((CImmersiveApp::CImmersiveWindowCollection *)this);
    }
    v12 = v15;
    if ( v15 )
    {
      (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v15 + 8LL))(v15);
      v12 = v15;
    }
    *a4 = v12;
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v17, Window);
  v13 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v17[0] = &CImmersiveAppTelemetry::DeleteWindow::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v17);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v17);
  return (unsigned int)Window;
}
