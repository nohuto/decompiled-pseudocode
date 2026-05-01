/*
 * XREFs of ?_UpdateZOrderActivation@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K_N@Z @ 0x1801321F4
 * Callers:
 *     ?_SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K@Z @ 0x180131DA4 (-_SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x18005D748 (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18005DC0C (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z @ 0x1800F9254 (-_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z.c)
 *     ?_RemoveWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAX_K@Z @ 0x180131D08 (-_RemoveWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAX_K@Z.c)
 *     WPP_SF_q @ 0x180132BE4 (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::_UpdateZOrderActivation(
        CImmersiveApp::CImmersiveWindowCollection *this,
        unsigned __int64 a2)
{
  unsigned int inserted; // ebp
  struct ITaskWindow *v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rax
  struct ITaskWindow *v9; // [rsp+40h] [rbp+8h] BYREF

  inserted = 0;
  if ( a2 )
  {
    v9 = *(struct ITaskWindow **)(*((_QWORD *)this + 19) + 8 * a2);
    v5 = v9;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v9);
    CImmersiveApp::CImmersiveWindowCollection::_RemoveWindow(this, a2);
    inserted = CImmersiveApp::CImmersiveWindowCollection::_InsertWindow(this, v5, 0LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  }
  if ( !CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost(this) )
    CImmersiveApp::CImmersiveWindowCollection::SendDeferredInfoToAllWindows((__int64)this);
  if ( *((_QWORD *)this + 20) >= 2uLL && a2 )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 19) + 8LL);
    v9 = (struct ITaskWindow *)v6;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v9);
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6);
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 30LL, &WPP_ace03dded3743996b6b4d2e4c589bf4a_Traceguids, v7);
    }
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 160LL))(v6, 0LL);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 248LL))(v6, 0LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  }
  return inserted;
}
