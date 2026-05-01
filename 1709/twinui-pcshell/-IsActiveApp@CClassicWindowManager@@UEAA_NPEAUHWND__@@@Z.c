/*
 * XREFs of ?IsActiveApp@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z @ 0x180037BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x1800273C0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     SHIsSameObject @ 0x18002748C (SHIsSameObject.c)
 *     ?_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z @ 0x180038938 (-_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
bool __fastcall CClassicWindowManager::IsActiveApp(CClassicWindowManager *this, HWND a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbp
  int v5; // r15d
  bool v6; // si
  int (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rbx
  struct IClassicWindow *v8; // rcx
  struct IClassicWindow *v10; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v11; // [rsp+80h] [rbp+18h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 64) & -(__int64)(this != (CClassicWindowManager *)80));
  v5 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v4, 1);
  v6 = 0;
  v10 = 0LL;
  if ( (int)CClassicWindowManager::_FindClassicWindow((CClassicWindowManager *)((char *)this - 80), a2, &v10, &v11) >= 0 )
  {
    v6 = v11 == 0;
    if ( v11 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v10 + 160LL))(v10) )
      {
        v7 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v10 + 96LL))(v10);
        v11 = (unsigned __int64)v7;
        if ( v7 )
        {
          ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v7)[1])(v7);
          v6 = (unsigned int)SHIsSameObject(v7, **((__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))this + 15)) != 0;
          ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v7)[2])(v7);
        }
      }
    }
  }
  v8 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( v5 >= 0 )
    LeaveCriticalSection(v4);
  return v6;
}
