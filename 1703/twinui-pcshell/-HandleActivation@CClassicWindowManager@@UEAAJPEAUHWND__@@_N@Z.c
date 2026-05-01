/*
 * XREFs of ?HandleActivation@CClassicWindowManager@@UEAAJPEAUHWND__@@_N@Z @ 0x1800353C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CThreadUseDetector@@QEAA@PEAVCObjectWithThreadUseDetection@@@Z @ 0x180026C50 (--0CThreadUseDetector@@QEAA@PEAVCObjectWithThreadUseDetection@@@Z.c)
 *     ?s_CreateInstance@CClassicWindow@@SAJPEAUHWND__@@PEAUIClassicWindow@@PEAUIImmersiveMonitor@@W4CLASSIC_WINDOW_STATE@@PEAPEAU3@@Z @ 0x180033A10 (-s_CreateInstance@CClassicWindow@@SAJPEAUHWND__@@PEAUIClassicWindow@@PEAUIImmersiveMonitor@@W4CL.c)
 *     ?_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@@Z @ 0x180037624 (-_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CClassicWindowManager::HandleActivation(CClassicWindowManager *this, HWND a2, char a3)
{
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-20h] BYREF
  int v11; // [rsp+40h] [rbp-18h]
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF

  CThreadUseDetector::CThreadUseDetector(
    (CThreadUseDetector *)&lpCriticalSection,
    (struct CObjectWithThreadUseDetection *)(((unsigned __int64)this + 64) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 56) >> 64)));
  v12 = 0LL;
  if ( !a3
    || GetShellWindow() == a2
    && (*(unsigned __int8 (__fastcall **)(_QWORD, HWND))(***((_QWORD ***)this + 15) + 192LL))(
         **((_QWORD **)this + 15),
         a2) )
  {
    goto LABEL_8;
  }
  v6 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = CClassicWindow::s_CreateInstance((__int64)a2, 0LL, 0LL, 0, &v12);
  if ( v7 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(char *, __int64 *))(*((_QWORD *)this + 14) + 8LL))((char *)this + 112, &v12);
    if ( v7 >= 0 )
LABEL_8:
      v7 = CClassicWindowManager::_HandleActivation((CClassicWindowManager *)((char *)this - 56), a2);
  }
  v8 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( v11 >= 0 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v7;
}
