/*
 * XREFs of ?CalculateDesktopIndex@VirtualDesktop@@AEAAJXZ @ 0x1801B8F14
 * Callers:
 *     ?RuntimeClassInitialize@VirtualDesktop@@QEAAJPEAUIVirtualDesktop@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x1801B893C (-RuntimeClassInitialize@VirtualDesktop@@QEAAJPEAUIVirtualDesktop@@PEAUIVirtualDesktopManagerInte.c)
 *     ?UpdateDesktopIndex@VirtualDesktop@@AEAAJXZ @ 0x1801B9154 (-UpdateDesktopIndex@VirtualDesktop@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     SHIsSameObject @ 0x18002748C (SHIsSameObject.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UIVirtualDesktop@@@@AEAAXXZ @ 0x1801B60E8 (-GetCurrentObject@Iterator@-$ObjectArrayAdapter@UIVirtualDesktop@@@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall VirtualDesktop::CalculateDesktopIndex(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rsi
  int v3; // eax
  unsigned int v4; // ebx
  char v5; // r14
  char *v6; // rdi
  __int64 v7; // rbx
  int v8; // eax
  int (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v10; // rcx
  int (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v15; // [rsp+28h] [rbp-48h] BYREF
  unsigned int v16; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v17; // [rsp+38h] [rbp-38h] BYREF
  int (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-30h]
  __int64 *v19; // [rsp+48h] [rbp-28h]
  unsigned int v20; // [rsp+50h] [rbp-20h] BYREF
  __int64 v21; // [rsp+58h] [rbp-18h]
  __int64 *v22; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  __int64 v24; // [rsp+A0h] [rbp+30h] BYREF
  RTL_SRWLOCK *v25; // [rsp+A8h] [rbp+38h]
  int (__fastcall ***v26)(_QWORD, GUID *, __int64 *); // [rsp+B0h] [rbp+40h]

  v2 = this + 33;
  AcquireSRWLockExclusive(this + 33);
  v25 = v2;
  v24 = 0LL;
  v3 = (*(__int64 (__fastcall **)(PVOID, __int64 *))(*(_QWORD *)this[15].Ptr + 56LL))(this[15].Ptr, &v24);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v5 = 0;
    v6 = 0LL;
    v7 = v24;
    v15 = v24;
    if ( v24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
    v16 = 0;
    v8 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v7 + 24LL))(v7, &v16);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD,
        (__int64)"internal\\shell\\private\\inc\\ObjectArrayAdapter.h",
        (const char *)(unsigned int)v8);
    v17 = 0;
    v18 = 0LL;
    v19 = &v15;
    ObjectArrayAdapter<IVirtualDesktop>::Iterator::GetCurrentObject(&v17);
    v20 = v16;
    v21 = 0LL;
    v22 = &v15;
    ObjectArrayAdapter<IVirtualDesktop>::Iterator::GetCurrentObject(&v20);
    while ( v17 != v20 || v19 != v22 )
    {
      v9 = v18;
      v26 = v18;
      if ( v18 )
        ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v18)[1])(v18);
      if ( (unsigned int)SHIsSameObject(v9, (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))this[14].Ptr) )
      {
        v5 = 1;
        if ( v9 )
          ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v9)[2])(v9);
        break;
      }
      ++v6;
      if ( v9 )
        ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v9)[2])(v9);
      ++v17;
      ObjectArrayAdapter<IVirtualDesktop>::Iterator::GetCurrentObject(&v17);
    }
    v10 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    v11 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v11)[2])(v11);
    }
    v12 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    if ( v5 )
    {
      this[17].Ptr = v6;
      v4 = 0;
    }
    else
    {
      v4 = -2147319765;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAD,
        (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
        (const char *)0x8002802BLL);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x9F,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
      (const char *)(unsigned int)v3);
  }
  v13 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return v4;
}
