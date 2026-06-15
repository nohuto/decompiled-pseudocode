/*
 * XREFs of ?OnLeftSubmixConnected@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x1400052D0
 * Callers:
 *     ?ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z @ 0x140004D40 (-ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z.c)
 * Callees:
 *     ?IsActive@CSubmixImpl@@UEAA_NXZ @ 0x140002380 (-IsActive@CSubmixImpl@@UEAA_NXZ.c)
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140002F60 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140003CF0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C304 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001C338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140032528 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140033DE8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSubmixImpl::OnLeftSubmixConnected(CSubmixImpl *this, struct ISubmixInternal *a2)
{
  bool (__fastcall *v4)(CSubmixImpl *); // rax
  bool IsActive; // al
  _BYTE *v6; // rax
  void *v7; // rsi
  __int64 v8; // r15
  struct ATL::CAtlPlex *v9; // r8
  int v10; // edx
  _QWORD *i; // rcx
  __int64 *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  ATL::CAtlException *v16; // rbx
  unsigned int v17; // edi
  void *v18; // rcx
  int v19; // [rsp+20h] [rbp-38h]
  ATL::CAtlException *v20; // [rsp+28h] [rbp-30h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-28h] BYREF
  char v22; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v24; // [rsp+60h] [rbp+8h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 136);
  v22 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = *(bool (__fastcall **)(CSubmixImpl *))(*(_QWORD *)a2 + 136LL);
  if ( v4 == CSubmixImpl::IsActive )
    IsActive = CSubmixImpl::IsActive(a2);
  else
    IsActive = v4(a2);
  if ( IsActive )
  {
    v17 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E8,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x8000FFFFLL,
      -2);
LABEL_24:
    if ( v22 )
      LeaveCriticalSection(lpCriticalSection);
    return v17;
  }
  v6 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    *(_QWORD *)v6 = a2;
    v6[8] = 0;
  }
  else
  {
    v7 = 0LL;
  }
  if ( !v7 )
  {
    v17 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x518,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x8007000ELL,
      -2);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4EC,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x8007000ELL,
      v19);
    v18 = 0LL;
LABEL_23:
    operator delete(v18);
    goto LABEL_24;
  }
  try
  {
    v8 = *((_QWORD *)this + 10);
    if ( !*((_QWORD *)this + 14) )
    {
      v9 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)this + 13, *((unsigned int *)this + 30), 0x18uLL);
      if ( !v9 )
        ATL::AtlThrowImpl(-2147024882);
      v10 = *((_DWORD *)this + 30);
      for ( i = (_QWORD *)((char *)v9 + 16 * (v10 - 1) + 8 * (unsigned int)(v10 - 1) + 8); --v10 >= 0; i -= 3 )
      {
        *i = *((_QWORD *)this + 14);
        *((_QWORD *)this + 14) = i;
      }
    }
    v12 = (__int64 *)*((_QWORD *)this + 14);
    v13 = *v12;
    v12[2] = (__int64)v7;
    *((_QWORD *)this + 14) = v13;
    v12[1] = 0LL;
    *v12 = v8;
    ++*((_QWORD *)this + 12);
    v14 = *((_QWORD *)this + 10);
    if ( v14 )
      *(_QWORD *)(v14 + 8) = v12;
    else
      *((_QWORD *)this + 11) = v12;
    *((_QWORD *)this + 10) = v12;
  }
  catch ( ATL::CAtlException *v20 )
  {
    v16 = v20;
    if ( *(_DWORD *)v20 == -1073741571 )
      _o__resetstkoflw();
    v24 = *(_DWORD *)v16;
    v17 = *(_DWORD *)v16;
    if ( v24 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4F0,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)v24,
        -2);
      v18 = v7;
      goto LABEL_23;
    }
  }
  operator delete(0LL);
  if ( v22 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
