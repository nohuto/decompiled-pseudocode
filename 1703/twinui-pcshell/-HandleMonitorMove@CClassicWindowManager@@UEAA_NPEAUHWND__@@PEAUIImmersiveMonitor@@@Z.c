/*
 * XREFs of ?HandleMonitorMove@CClassicWindowManager@@UEAA_NPEAUHWND__@@PEAUIImmersiveMonitor@@@Z @ 0x180034DE0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CThreadUseDetector@@QEAA@PEAVCObjectWithThreadUseDetection@@@Z @ 0x180026C50 (--0CThreadUseDetector@@QEAA@PEAVCObjectWithThreadUseDetection@@@Z.c)
 *     ?_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z @ 0x1800371F8 (-_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall CClassicWindowManager::HandleMonitorMove(
        CClassicWindowManager *this,
        HWND a2,
        struct IImmersiveMonitor *a3)
{
  CClassicWindowManager *v5; // rbx
  int ClassicWindow; // ebx
  bool v7; // bl
  struct IClassicWindow *v8; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  int v11; // [rsp+30h] [rbp-18h]
  struct IClassicWindow *v12; // [rsp+50h] [rbp+8h] BYREF

  v5 = (CClassicWindowManager *)((char *)this - 56);
  CThreadUseDetector::CThreadUseDetector(
    (CThreadUseDetector *)&lpCriticalSection,
    (struct CObjectWithThreadUseDetection *)(((unsigned __int64)this + 64) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 56) >> 64)));
  v12 = 0LL;
  ClassicWindow = CClassicWindowManager::_FindClassicWindow(v5, a2, &v12, 0LL);
  if ( ClassicWindow >= 0 )
    (*(void (__fastcall **)(struct IClassicWindow *, struct IImmersiveMonitor *))(*(_QWORD *)v12 + 88LL))(v12, a3);
  v7 = ClassicWindow >= 0;
  v8 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( v11 >= 0 )
    LeaveCriticalSection(lpCriticalSection);
  return v7;
}
