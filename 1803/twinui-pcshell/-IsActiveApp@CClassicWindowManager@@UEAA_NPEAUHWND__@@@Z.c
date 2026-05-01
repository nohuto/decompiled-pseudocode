/*
 * XREFs of ?IsActiveApp@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z @ 0x18011A540
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ @ 0x180005208 (-InternalRelease@-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180090000 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z @ 0x1800F486C (-_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
bool __fastcall CClassicWindowManager::IsActiveApp(struct IUnknown ***this, HWND a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // r14
  int v5; // r15d
  bool v6; // si
  struct IUnknown *v7; // rbx
  struct IClassicWindow *v9; // [rsp+70h] [rbp+30h] BYREF
  unsigned __int64 v10; // [rsp+80h] [rbp+40h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((unsigned __int64)(this + 8) & -(__int64)(this != (struct IUnknown ***)72));
  v5 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v4, 1);
  v6 = 0;
  v9 = 0LL;
  Microsoft::WRL::ComPtr<IClassicWindow>::InternalRelease((__int64 *)&v9);
  if ( (int)CClassicWindowManager::_FindClassicWindow((CClassicWindowManager *)(this - 9), a2, &v9, &v10) >= 0 )
  {
    if ( v10 )
    {
      v6 = 0;
      if ( (*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v9 + 160LL))(v9) )
      {
        v7 = *(struct IUnknown **)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v9 + 96LL))(v9);
        v10 = (unsigned __int64)v7;
        Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v10);
        if ( v7 )
          v6 = (unsigned int)SHIsSameObject(v7, *this[15]) != 0;
        Microsoft::WRL::ComPtr<IClassicWindow>::InternalRelease((__int64 *)&v10);
      }
    }
    else
    {
      v6 = 1;
    }
  }
  Microsoft::WRL::ComPtr<IClassicWindow>::InternalRelease((__int64 *)&v9);
  if ( v5 >= 0 )
    LeaveCriticalSection(v4);
  return v6;
}
