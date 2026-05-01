/*
 * XREFs of ?IsApplicationInteractive@CImmersiveApp@@UEAA_NXZ @ 0x1800498A0
 * Callers:
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x1800485A0 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     ?IsInteractive@CImmersiveApp@@UEAAJPEAH@Z @ 0x18004D160 (-IsInteractive@CImmersiveApp@@UEAAJPEAH@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveApp::IsApplicationInteractive(CImmersiveApp *this)
{
  void (__fastcall *v2)(CImmersiveApp *__hidden, struct IImmersiveMonitor **); // rax
  struct IUnknown *v3; // rcx
  struct IUnknown *v4; // rbp
  struct IUnknown *v5; // r12
  PSRWLOCK v6; // rdi
  PVOID Ptr; // r15
  struct IUnknown **v8; // r14
  struct IUnknown **v9; // rsi
  unsigned __int8 v10; // bl
  struct IUnknown *v11; // rcx
  bool v13; // bl
  bool v14; // zf
  struct IUnknown *v15; // [rsp+70h] [rbp+8h] BYREF
  struct IUnknown *v16; // [rsp+78h] [rbp+10h] BYREF
  struct IUnknown **v17; // [rsp+80h] [rbp+18h]

  v15 = 0LL;
  v2 = *(void (__fastcall **)(CImmersiveApp *__hidden, struct IImmersiveMonitor **))(*(_QWORD *)this + 464LL);
  if ( v2 == CImmersiveApp::GetMonitorInternal )
  {
    if ( *((_QWORD *)this + 78) )
    {
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)this + 78);
      v15 = (struct IUnknown *)*((_QWORD *)this + 78);
    }
    else
    {
      v3 = (struct IUnknown *)*((_QWORD *)this + 77);
      if ( v3 )
      {
        ((void (__fastcall *)(struct IUnknown *))v3->lpVtbl->AddRef)(v3);
        v3 = (struct IUnknown *)*((_QWORD *)this + 77);
      }
      v15 = v3;
    }
  }
  else
  {
    v2(this, (struct IImmersiveMonitor **)&v15);
  }
  if ( (*((_BYTE *)this + 424) & 4) == 0 )
    goto LABEL_19;
  v4 = 0LL;
  if ( this != (CImmersiveApp *)112 )
    v4 = (struct IUnknown *)this;
  v5 = v15;
  v6 = CApplicationManagerUtility::g_pIAMGlobals;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[2].Ptr;
  if ( v4 )
  {
    v8 = (struct IUnknown **)CApplicationManagerUtility::g_pIAMGlobals[8].Ptr;
    v9 = (struct IUnknown **)CApplicationManagerUtility::g_pIAMGlobals[7].Ptr;
    if ( v9 != v8 )
    {
      v17 = &v16;
      do
      {
        v16 = *v9;
        Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v16);
        v13 = (unsigned int)SHIsSameObject(v4, v16) != 0;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
        if ( v13 )
          break;
        ++v9;
      }
      while ( v9 != v8 );
    }
    if ( v9 != v6[8].Ptr )
      goto LABEL_15;
  }
  if ( Ptr )
  {
    v14 = *((_DWORD *)v6[1].Ptr + (_QWORD)Ptr - 1) == 1;
    goto LABEL_29;
  }
  if ( LODWORD(v6[5].Ptr) && (unsigned int)SHIsSameObject(v5, (struct IUnknown *)v6[6].Ptr) )
  {
    v14 = LODWORD(v6[5].Ptr) == 1;
LABEL_29:
    if ( v14 )
      goto LABEL_15;
    goto LABEL_19;
  }
  if ( HIDWORD(v6[5].Ptr) == 1 )
  {
LABEL_15:
    v10 = 1;
    goto LABEL_16;
  }
LABEL_19:
  v10 = 0;
LABEL_16:
  v11 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    ((void (__fastcall *)(struct IUnknown *))v11->lpVtbl->Release)(v11);
  }
  return v10;
}
