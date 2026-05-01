/*
 * XREFs of ?HandleActivation@CClassicWindowManager@@UEAAJPEAUHWND__@@_N@Z @ 0x1800073D0
 * Callers:
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x18003DE00 (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ @ 0x180005208 (-InternalRelease@-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@@Z @ 0x180005F80 (-_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@@Z.c)
 *     ?s_CreateInstance@CClassicWindow@@SAJPEAUHWND__@@PEAUIClassicWindow@@PEAUIImmersiveMonitor@@W4CLASSIC_WINDOW_STATE@@PEAPEAU3@@Z @ 0x180008F70 (-s_CreateInstance@CClassicWindow@@SAJPEAUHWND__@@PEAUIClassicWindow@@PEAUIImmersiveMonitor@@W4CL.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180090000 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CClassicWindowManager::HandleActivation(CClassicWindowManager *this, HWND a2, char a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  int v7; // r14d
  int v8; // ebx
  __int64 v9; // rcx
  __int64 v11; // [rsp+70h] [rbp+8h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 64) & -(__int64)(this != (CClassicWindowManager *)72));
  v7 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v6, 1LL);
  v11 = 0LL;
  if ( !a3
    || GetShellWindow() == a2
    && (*(unsigned __int8 (__fastcall **)(_QWORD, HWND))(***((_QWORD ***)this + 15) + 192LL))(
         **((_QWORD **)this + 15),
         a2)
    || (Microsoft::WRL::ComPtr<IClassicWindow>::InternalRelease(&v11),
        v8 = CClassicWindow::s_CreateInstance(a2, 0LL, 0LL, 0LL, &v11),
        v8 >= 0)
    && (v8 = (*(__int64 (__fastcall **)(char *, __int64 *))(*((_QWORD *)this + 14) + 8LL))((char *)this + 112, &v11),
        v8 >= 0) )
  {
    v8 = CClassicWindowManager::_HandleActivation((CClassicWindowManager *)((char *)this - 72), (unsigned __int64)a2);
  }
  v9 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( v7 >= 0 )
    LeaveCriticalSection(v6);
  return (unsigned int)v8;
}
