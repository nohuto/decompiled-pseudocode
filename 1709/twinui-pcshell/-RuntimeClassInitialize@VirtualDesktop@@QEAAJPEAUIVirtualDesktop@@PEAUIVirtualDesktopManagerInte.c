/*
 * XREFs of ?RuntimeClassInitialize@VirtualDesktop@@QEAAJPEAUIVirtualDesktop@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x1801B893C
 * Callers:
 *     ?VirtualDesktop_CreateInstance@@YAJPEAUIVirtualDesktop@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@AEBU_GUID@@PEAPEAX@Z @ 0x1801B86FC (-VirtualDesktop_CreateInstance@@YAJPEAUIVirtualDesktop@@PEAUIVirtualDesktopManagerInternal@@PEAU.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_9IImmersiveApplicationNotificationService@@$BBI@AA @ 0x1800798CC (--_9IImmersiveApplicationNotificationService@@$BBI@AA.c)
 *     ?CalculateDesktopIndex@VirtualDesktop@@AEAAJXZ @ 0x1801B8F14 (-CalculateDesktopIndex@VirtualDesktop@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktop::RuntimeClassInitialize(
        VirtualDesktop *this,
        struct IVirtualDesktop *a2,
        struct IVirtualDesktopManagerInternal *a3,
        struct IVirtualDesktopNotificationService *a4)
{
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rbx
  _QWORD *v12; // r14
  int v13; // esi
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rsi
  _QWORD *v17; // rcx
  int v19; // eax
  unsigned int v20; // ebx
  _QWORD v21[6]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( *((struct IVirtualDesktop **)this + 14) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IVirtualDesktop *))(*(_QWORD *)a2 + 8LL))(a2);
    v8 = *((_QWORD *)this + 14);
    *((_QWORD *)this + 14) = a2;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( *((struct IVirtualDesktopManagerInternal **)this + 15) != a3 )
  {
    if ( a3 )
      (*(void (__fastcall **)(struct IVirtualDesktopManagerInternal *))(*(_QWORD *)a3 + 8LL))(a3);
    v9 = *((_QWORD *)this + 15);
    *((_QWORD *)this + 15) = a3;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( *((struct IVirtualDesktopNotificationService **)this + 16) != a4 )
  {
    if ( a4 )
      (*(void (__fastcall **)(struct IVirtualDesktopNotificationService *))(*(_QWORD *)a4 + 8LL))(a4);
    v10 = *((_QWORD *)this + 16);
    *((_QWORD *)this + 16) = a4;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = *((_QWORD *)this + 16);
  v12 = (_QWORD *)((char *)this + 144);
  if ( *((_DWORD *)this + 64) )
  {
    v13 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28,
      (__int64)"internal\\shell\\private\\inc\\SmartCookie.h",
      (const char *)0x8007139FLL);
LABEL_34:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x55,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
      (const char *)(unsigned int)v13);
    return (unsigned int)v13;
  }
  v14 =  IImmersiveApplicationNotificationService::`vcall'{24,{flat}}(*((_QWORD *)this + 16));
  v13 = v14;
  if ( v14 >= 0 )
  {
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    v16 = v11;
    v21[0] = v11;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    v21[1] =  IVirtualDesktopNotificationService::`vcall'{32,{flat}};
    v17 = (_QWORD *)*((_QWORD *)this + 31);
    if ( v17 )
    {
      LOBYTE(v15) = v17 != v12;
      (*(void (__fastcall **)(_QWORD *, __int64))(*v17 + 24LL))(v17, v15);
      *((_QWORD *)this + 31) = 0LL;
    }
    *v12 = off_1801FF5F8;
    *((_QWORD *)this + 19) = 0LL;
    if ( (_QWORD *)((char *)this + 152) != v21 )
    {
      *((_QWORD *)this + 19) = v11;
      v16 = 0LL;
    }
    *((_QWORD *)this + 20) =  IVirtualDesktopNotificationService::`vcall'{32,{flat}};
    *((_QWORD *)this + 31) = (char *)this + 144;
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    v13 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x29,
      (__int64)"internal\\shell\\private\\inc\\SmartCookie.h",
      (const char *)(unsigned int)v14);
  }
  if ( v13 < 0 )
    goto LABEL_34;
  v19 = VirtualDesktop::CalculateDesktopIndex(this);
  v20 = v19;
  if ( v19 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x57,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
      (const char *)(unsigned int)v19);
  return v20;
}
