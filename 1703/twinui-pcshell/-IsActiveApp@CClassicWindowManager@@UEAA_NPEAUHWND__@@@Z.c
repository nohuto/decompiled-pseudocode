/*
 * XREFs of ?IsActiveApp@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z @ 0x180036480
 * Callers:
 *     <none>
 * Callees:
 *     ??0CThreadUseDetector@@QEAA@PEAVCObjectWithThreadUseDetection@@@Z @ 0x180026C50 (--0CThreadUseDetector@@QEAA@PEAVCObjectWithThreadUseDetection@@@Z.c)
 *     SHIsSameObject @ 0x180026D1C (SHIsSameObject.c)
 *     ?_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z @ 0x1800371F8 (-_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
bool __fastcall CClassicWindowManager::IsActiveApp(CClassicWindowManager *this, HWND a2)
{
  bool v4; // si
  int (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rbx
  struct IClassicWindow *v6; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-18h] BYREF
  int v9; // [rsp+30h] [rbp-10h]
  struct IClassicWindow *v10; // [rsp+60h] [rbp+20h] BYREF
  unsigned __int64 v11; // [rsp+70h] [rbp+30h] BYREF

  CThreadUseDetector::CThreadUseDetector(
    (CThreadUseDetector *)&lpCriticalSection,
    (struct CObjectWithThreadUseDetection *)(((unsigned __int64)this + 64) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 56) >> 64)));
  v4 = 0;
  v10 = 0LL;
  if ( (int)CClassicWindowManager::_FindClassicWindow((CClassicWindowManager *)((char *)this - 56), a2, &v10, &v11) >= 0 )
  {
    v4 = v11 == 0;
    if ( v11 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v10 + 160LL))(v10) )
      {
        v5 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v10 + 96LL))(v10);
        v11 = (unsigned __int64)v5;
        if ( v5 )
        {
          ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v5)[1])(v5);
          v4 = (unsigned int)SHIsSameObject(v5, **((__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))this + 15)) != 0;
          ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v5)[2])(v5);
        }
      }
    }
  }
  v6 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( v9 >= 0 )
    LeaveCriticalSection(lpCriticalSection);
  return v4;
}
