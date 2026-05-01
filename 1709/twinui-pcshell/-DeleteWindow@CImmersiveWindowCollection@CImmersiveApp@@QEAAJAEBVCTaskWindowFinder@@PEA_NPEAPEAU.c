/*
 * XREFs of ?DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAUITaskWindow@@@Z @ 0x18005A6E0
 * Callers:
 *     ?HandleDestruction@CImmersiveApp@@UEAA?AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x1800575B0 (-HandleDestruction@CImmersiveApp@@UEAA-AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEA.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180026020 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800268D0 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800271B8 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     SHIsSameObject @ 0x18002748C (SHIsSameObject.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18005A984 (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x18005AD2C (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     ?_SetGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x18005AEE4 (-_SetGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?_RemoveWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAX_K@Z @ 0x18005B4AC (-_RemoveWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAX_K@Z.c)
 *     ?HideFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18005B94C (-HideFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z @ 0x18005B9B4 (-PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z.c)
 *     ?_GetWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@PEA_K@Z @ 0x18005C360 (-_GetWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEAPEAUITaskWi.c)
 *     ?_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x18005C448 (-_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 *     ?StartActivity@DeleteWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x18005F670 (-StartActivity@DeleteWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::DeleteWindow(
        CImmersiveApp::CImmersiveWindowCollection *this,
        const struct CTaskWindowFinder *a2,
        bool *a3,
        struct ITaskWindow **a4)
{
  const unsigned __int16 **v8; // rbx
  int Window; // r14d
  unsigned __int64 v10; // rdi
  bool v11; // bl
  __int64 v12; // rax
  bool v13; // dl
  struct ITaskWindow *v14; // rcx
  struct ITaskWindow *v15; // rcx
  struct ITaskWindow *v17; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int64 v18[3]; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v19[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v20; // [rsp+60h] [rbp-A0h]
  int *v21; // [rsp+68h] [rbp-98h]
  int *v22; // [rsp+70h] [rbp-90h]
  int v23; // [rsp+78h] [rbp-88h] BYREF
  char v24; // [rsp+7Ch] [rbp-84h]
  int v25; // [rsp+A0h] [rbp-60h] BYREF
  const char *v26; // [rsp+A8h] [rbp-58h]
  __int64 v27; // [rsp+B0h] [rbp-50h]
  char v28; // [rsp+B8h] [rbp-48h]
  __int64 v29; // [rsp+C0h] [rbp-40h]
  _BYTE v30[144]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v31; // [rsp+158h] [rbp+58h]
  __int64 v32; // [rsp+160h] [rbp+60h]
  __int64 v33; // [rsp+168h] [rbp+68h]
  __int64 v34; // [rsp+170h] [rbp+70h]

  v18[1] = -2LL;
  *a3 = 0;
  *a4 = 0LL;
  v8 = (const unsigned __int16 **)(*((_QWORD *)this + 18) + 544LL);
  v19[1] = 0LL;
  v19[2] = v19;
  v19[3] = 0LL;
  v20 = 0;
  v21 = &v25;
  v22 = &v23;
  v23 = 0;
  v24 = 0;
  v28 = 0;
  v25 = 0;
  v26 = "DeleteWindow";
  v27 = 0LL;
  v29 = 1LL;
  v31 = 0LL;
  v32 = 0LL;
  memset(v30, 0, sizeof(v30));
  v33 = 0LL;
  v34 = 0LL;
  v19[0] = &CImmersiveAppTelemetry::DeleteWindow::`vftable';
  CImmersiveAppTelemetry::DeleteWindow::StartActivity((CImmersiveAppTelemetry::DeleteWindow *)v19, *v8);
  v17 = 0LL;
  Window = CImmersiveApp::CImmersiveWindowCollection::_GetWindow(this, a2, &v17, v18);
  if ( Window >= 0 )
  {
    v10 = v18[0];
    v11 = v18[0] == 0;
    if ( *((_QWORD *)this + 15)
      && ((unsigned int)SHIsSameObject(
                          (int (__fastcall ***)(_QWORD, GUID *, __int64 *))v17,
                          *((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 14))
       || v11
       && *((_QWORD *)this + 20) > 1uLL
       && (unsigned int)SHIsSameObject(
                          *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 19) + 8LL),
                          *((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 14))) )
    {
      CImmersiveApp::CImmersiveWindowCollection::_CleanupPendingPresentedWindow(this);
    }
    CImmersiveApp::CImmersiveWindowCollection::_RemoveWindow(this, v10);
    (*(void (__fastcall **)(struct ITaskWindow *, _QWORD))(*(_QWORD *)v17 + 184LL))(v17, 0LL);
    v12 = *((_QWORD *)this + 20);
    if ( v11 )
    {
      *a3 = 1;
      *((_BYTE *)this + 184) = 0;
      if ( v12 )
      {
        CImmersiveApp::CImmersiveWindowCollection::PresentWindowInFrame(this, **((struct ITaskWindow ***)this + 19));
      }
      else
      {
        CImmersiveApp::CImmersiveWindowCollection::PresentWindowInFrame(this, 0LL);
        if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost(this) )
        {
          CImmersiveApp::CImmersiveWindowCollection::_SetGhostStatus(this, 0LL);
          CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual(this, v13);
        }
        *((_DWORD *)this + 47) = 0;
      }
      CImmersiveApp::CImmersiveWindowCollection::HideFrame(this);
    }
    v14 = v17;
    if ( v17 )
    {
      (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v17 + 8LL))(v17);
      v14 = v17;
    }
    *a4 = v14;
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v19, Window);
  v15 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v19[0] = &CImmersiveAppTelemetry::DeleteWindow::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v19);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v19);
  return (unsigned int)Window;
}
