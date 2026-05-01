/*
 * XREFs of ?s_IsVisibilityOverrideOn@CImmersiveApp@@SA_NPEAV1@@Z @ 0x18008BE60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetMonitorInternal@CImmersiveApp@@UEAAXPEAPEAUIImmersiveMonitor@@@Z @ 0x18004C7B0 (-GetMonitorInternal@CImmersiveApp@@UEAAXPEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall CImmersiveApp::s_IsVisibilityOverrideOn(struct CImmersiveApp *a1)
{
  struct IUnknown *v1; // rbx
  void (__fastcall *v2)(CImmersiveApp *, struct IImmersiveMonitor **); // rax
  CImmersiveApp *v3; // rcx
  struct IUnknown *v4; // r13
  PSRWLOCK v5; // rsi
  PVOID Ptr; // r15
  struct IUnknown **v7; // r12
  struct IUnknown **v8; // r14
  bool v9; // zf
  char v10; // bl
  struct IUnknown *v11; // rcx
  bool v13; // di
  struct IUnknown *v14; // [rsp+70h] [rbp+40h] BYREF
  struct IUnknown *v15; // [rsp+78h] [rbp+48h] BYREF
  struct IUnknown **v16; // [rsp+80h] [rbp+50h]

  v15 = 0LL;
  v1 = (struct IUnknown *)((char *)a1 + 112);
  v2 = *(void (__fastcall **)(CImmersiveApp *, struct IImmersiveMonitor **))(*((_QWORD *)a1 + 14) + 464LL);
  v3 = (struct CImmersiveApp *)((char *)a1 + 112);
  if ( v2 == CImmersiveApp::GetMonitorInternal )
    CImmersiveApp::GetMonitorInternal(v3, (struct IImmersiveMonitor **)&v15);
  else
    v2(v3, (struct IImmersiveMonitor **)&v15);
  v4 = v15;
  v5 = CApplicationManagerUtility::g_pIAMGlobals;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[2].Ptr;
  if ( !v1 )
    goto LABEL_6;
  v7 = (struct IUnknown **)CApplicationManagerUtility::g_pIAMGlobals[8].Ptr;
  v8 = (struct IUnknown **)CApplicationManagerUtility::g_pIAMGlobals[7].Ptr;
  if ( v8 != v7 )
  {
    v16 = &v14;
    do
    {
      v14 = *v8;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v14);
      v13 = (unsigned int)SHIsSameObject(v1, v14) != 0;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
      if ( v13 )
        break;
      ++v8;
    }
    while ( v8 != v7 );
  }
  if ( v8 != v5[8].Ptr )
  {
    v10 = 1;
  }
  else
  {
LABEL_6:
    if ( Ptr )
    {
      v9 = *((_DWORD *)v5[1].Ptr + (_QWORD)Ptr - 1) == 1;
    }
    else if ( LODWORD(v5[5].Ptr) && (unsigned int)SHIsSameObject(v4, (struct IUnknown *)v5[6].Ptr) )
    {
      v9 = LODWORD(v5[5].Ptr) == 1;
    }
    else
    {
      v9 = HIDWORD(v5[5].Ptr) == 1;
    }
    v10 = v9;
  }
  v11 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    ((void (__fastcall *)(struct IUnknown *))v11->lpVtbl->Release)(v11);
  }
  return v10;
}
