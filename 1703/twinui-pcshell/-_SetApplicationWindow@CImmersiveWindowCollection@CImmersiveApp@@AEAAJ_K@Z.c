/*
 * XREFs of ?_SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K@Z @ 0x180058E88
 * Callers:
 *     ?HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z @ 0x180054C00 (-HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z.c)
 *     ?SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z @ 0x180058908 (-SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     WPP_SF_q @ 0x180050080 (WPP_SF_q.c)
 *     ?_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ @ 0x180056D58 (-_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x1800582C4 (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x1800583A0 (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 *     ?_RemoveWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAX_K@Z @ 0x180058CD0 (-_RemoveWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAX_K@Z.c)
 *     ?_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z @ 0x180058D74 (-_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z.c)
 *     ?PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z @ 0x18005915C (-PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::_SetApplicationWindow(
        CImmersiveApp::CImmersiveWindowCollection *this,
        unsigned __int64 a2)
{
  int inserted; // ebp
  struct ITaskWindow *v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rax

  inserted = 0;
  if ( a2 )
  {
    v5 = *(struct ITaskWindow **)(*((_QWORD *)this + 19) + 8 * a2);
    if ( v5 )
      (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v5 + 8LL))(v5);
    CImmersiveApp::CImmersiveWindowCollection::_RemoveWindow(this, a2);
    inserted = CImmersiveApp::CImmersiveWindowCollection::_InsertWindow(this, v5, 0LL);
    if ( v5 )
      (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( !CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost(this) )
    CImmersiveApp::CImmersiveWindowCollection::SendDeferredInfoToAllWindows((__int64)this);
  if ( *((_QWORD *)this + 20) >= 2uLL && a2 )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 19) + 8LL);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6);
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Eu, &WPP_62695e9b884c3ff85ccc232e92679a04_Traceguids, v7, -2LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 160LL))(v6, 0LL);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 248LL))(v6, 0LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( inserted >= 0 )
  {
    CImmersiveApp::CImmersiveWindowCollection::PresentWindowInFrame(this, **((struct ITaskWindow ***)this + 19));
    CImmersiveApp::_UpdateWindowTitleAndButtons(*((int (__fastcall ****)(CImmersiveApp *, GUID *, __int64 *))this + 18));
  }
  return (unsigned int)inserted;
}
