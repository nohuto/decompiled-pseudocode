/*
 * XREFs of ?Register@ApplicationViewEventRegistration@details@AppViewEventHelpers@@UEAAJPEAUIApplicationViewCollection@@@Z @ 0x180190890
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_9IPropertyValue@Foundation@Windows@@$BFI@AA @ 0x180046FCC (--_9IPropertyValue@Foundation@Windows@@$BFI@AA.c)
 *     ??1SmartCookie@@QEAA@XZ @ 0x18007B2F8 (--1SmartCookie@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801E2A80 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AppViewEventHelpers::details::ApplicationViewEventRegistration::Register(
        RTL_SRWLOCK *this,
        struct IApplicationViewCollection *a2)
{
  _QWORD *v4; // rsi
  SmartCookie **v5; // rbx
  int v6; // eax
  __int64 v7; // rdx
  int v8; // ebp
  struct IApplicationViewCollection *v9; // r14
  _QWORD *v10; // rcx
  SmartCookie ***v12; // rax
  SmartCookie **v13; // rbp
  char v14; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  char v16; // [rsp+80h] [rbp+18h] BYREF

  v4 = operator new(0x78uLL);
  v4[13] = 0LL;
  *((_DWORD *)v4 + 28) = 0;
  v5 = (SmartCookie **)v4;
  v6 =  Windows::Foundation::IPropertyValue::`vcall'{88,{flat}}((__int64)a2);
  v8 = v6;
  if ( v6 >= 0 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IApplicationViewCollection *))(*(_QWORD *)a2 + 8LL))(a2);
    v9 = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct IApplicationViewCollection *))(*(_QWORD *)a2 + 8LL))(a2);
    v10 = (_QWORD *)v4[13];
    if ( v10 )
    {
      LOBYTE(v7) = v10 != v4;
      (*(void (__fastcall **)(_QWORD *, __int64))(*v10 + 24LL))(v10, v7);
      v4[13] = 0LL;
    }
    *v4 = off_180209908;
    v4[1] = 0LL;
    if ( v4 + 1 != (_QWORD *)&v14 )
    {
      v4[1] = a2;
      v9 = 0LL;
    }
    v4[2] =  IApplicationViewCollection::`vcall'{96,{flat}};
    v4[13] = v4;
    if ( v9 )
      (*(void (__fastcall **)(struct IApplicationViewCollection *))(*(_QWORD *)v9 + 16LL))(v9);
    if ( a2 )
      (*(void (__fastcall **)(struct IApplicationViewCollection *))(*(_QWORD *)a2 + 16LL))(a2);
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x29,
      (__int64)"internal\\shell\\private\\inc\\smartcookie.h",
      (const char *)(unsigned int)v6);
  }
  if ( v8 >= 0 )
  {
    AcquireSRWLockExclusive(this + 8);
    v12 = (SmartCookie ***)&this[7];
    if ( &this[7] != (RTL_SRWLOCK *)&v16 )
    {
      v5 = 0LL;
      v13 = *v12;
      *v12 = (SmartCookie **)v4;
      if ( v13 )
      {
        SmartCookie::~SmartCookie(v13);
        operator delete(v13);
      }
    }
    if ( this != (RTL_SRWLOCK *)-64LL )
      ReleaseSRWLockExclusive(this + 8);
    if ( v5 )
    {
      SmartCookie::~SmartCookie(v5);
      operator delete(v5);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x43,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appvieweventhelpers.h",
      (const char *)(unsigned int)v8);
    SmartCookie::~SmartCookie((SmartCookie **)v4);
    operator delete(v4);
    return (unsigned int)v8;
  }
}
