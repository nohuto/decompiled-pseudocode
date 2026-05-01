/*
 * XREFs of ?SetSite@CWRLObjectWithGITSite@@UEAAJPEAUIUnknown@@@Z @ 0x18001F5E0
 * Callers:
 *     ?SetSite@DesktopBlueLightReductionManager@@UEAAJPEAUIUnknown@@@Z @ 0x180085F10 (-SetSite@DesktopBlueLightReductionManager@@UEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?s_Retrieve@GlobalInterfaceTable@@CAJXZ @ 0x180025DC4 (-s_Retrieve@GlobalInterfaceTable@@CAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CWRLObjectWithGITSite::SetSite(RTL_SRWLOCK *this, struct IUnknown *a2)
{
  PVOID v4; // r14
  PVOID v5; // rbx
  unsigned int v6; // r15d
  int v7; // edi
  PVOID v8; // rcx
  int v9; // eax
  bool v10; // di
  bool v11; // di
  PVOID v12; // rcx
  unsigned int v13; // r14d
  PVOID Ptr; // rcx
  PVOID v16; // [rsp+68h] [rbp+28h] BYREF

  if ( a2 )
  {
    v8 = 0LL;
    v16 = 0LL;
    v10 = 1;
    if ( this )
    {
      v9 = (*(__int64 (__fastcall **)(RTL_SRWLOCK *, GUID *, PVOID *))this->Ptr)(
             this,
             &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90,
             &v16);
      v8 = v16;
      if ( v9 < 0 )
        v10 = 0;
    }
    if ( v8 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v8 + 16LL))(v8);
    }
    if ( !v10 )
      goto LABEL_25;
    v16 = 0LL;
    v11 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, PVOID *))a2->lpVtbl->QueryInterface)(
            a2,
            &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90,
            &v16) >= 0;
    v12 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v12 + 16LL))(v12);
    }
    if ( v11 )
    {
LABEL_25:
      AcquireSRWLockExclusive(this + 2);
      if ( this[4].Ptr != a2 )
      {
        ((void (__fastcall *)(struct IUnknown *))a2->lpVtbl->AddRef)(a2);
        Ptr = this[4].Ptr;
        this[4].Ptr = a2;
        if ( Ptr )
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
      }
      ReleaseSRWLockExclusive(this + 2);
      return 0;
    }
    else
    {
      LODWORD(v16) = 0;
      v7 = GlobalInterfaceTable::s_Retrieve();
      if ( v7 >= 0 )
        v7 = ((__int64 (__fastcall *)(struct IGlobalInterfaceTable *, struct IUnknown *, GUID *, PVOID *))GlobalInterfaceTable::s_pGlobalInterfaceTable->lpVtbl->RegisterInterfaceInGlobal)(
               GlobalInterfaceTable::s_pGlobalInterfaceTable,
               a2,
               &GUID_00000000_0000_0000_c000_000000000046,
               &v16);
      if ( v7 >= 0 )
      {
        AcquireSRWLockExclusive(this + 2);
        v13 = (unsigned int)this[3].Ptr;
        LODWORD(this[3].Ptr) = (_DWORD)v16;
        ReleaseSRWLockExclusive(this + 2);
        if ( v13 )
        {
          if ( (int)GlobalInterfaceTable::s_Retrieve() >= 0 )
            ((void (__fastcall *)(struct IGlobalInterfaceTable *, _QWORD))GlobalInterfaceTable::s_pGlobalInterfaceTable->lpVtbl->RevokeInterfaceFromGlobal)(
              GlobalInterfaceTable::s_pGlobalInterfaceTable,
              v13);
        }
      }
    }
  }
  else
  {
    AcquireSRWLockExclusive(this + 2);
    v4 = this[4].Ptr;
    this[4].Ptr = 0LL;
    v5 = v4;
    v16 = v4;
    v6 = (unsigned int)this[3].Ptr;
    LODWORD(this[3].Ptr) = 0;
    ReleaseSRWLockExclusive(this + 2);
    if ( v6 )
    {
      if ( (int)GlobalInterfaceTable::s_Retrieve() >= 0 )
        ((void (__fastcall *)(struct IGlobalInterfaceTable *, _QWORD))GlobalInterfaceTable::s_pGlobalInterfaceTable->lpVtbl->RevokeInterfaceFromGlobal)(
          GlobalInterfaceTable::s_pGlobalInterfaceTable,
          v6);
    }
    else if ( v4 )
    {
      v5 = 0LL;
      v16 = 0LL;
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v4 + 16LL))(v4);
    }
    v7 = 0;
    if ( v5 )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return (unsigned int)v7;
}
