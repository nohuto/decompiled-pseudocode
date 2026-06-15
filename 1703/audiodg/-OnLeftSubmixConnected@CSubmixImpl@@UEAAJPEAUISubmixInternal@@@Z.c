/*
 * XREFs of ?OnLeftSubmixConnected@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x140006ED0
 * Callers:
 *     ?ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z @ 0x1400067C0 (-ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z.c)
 * Callees:
 *     ?IsActive@CSubmixImpl@@UEAA_NXZ @ 0x1400023A0 (-IsActive@CSubmixImpl@@UEAA_NXZ.c)
 *     ?GetFreeNode@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@AEAAXXZ @ 0x140003D90 (-GetFreeNode@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140004910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D4D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D508 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140033E48 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140033EC4 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSubmixImpl::OnLeftSubmixConnected(CSubmixImpl *this, struct ISubmixInternal *a2)
{
  _BOOL8 (__fastcall *v4)(CSubmixImpl *); // rax
  bool IsActive; // al
  _QWORD *v6; // rax
  void *v7; // rdi
  __int64 **v8; // rbx
  __int64 v9; // rsi
  __int64 *v10; // rax
  __int64 *v11; // rcx
  ATL::CAtlException *v13; // rbx
  int v14; // [rsp+20h] [rbp-28h]
  ATL::CAtlException *v15; // [rsp+28h] [rbp-20h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v17; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v19; // [rsp+50h] [rbp+8h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 136);
  v17 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = *(_BOOL8 (__fastcall **)(CSubmixImpl *))(*(_QWORD *)a2 + 136LL);
  if ( v4 == CSubmixImpl::IsActive )
    IsActive = CSubmixImpl::IsActive(a2);
  else
    IsActive = v4(a2);
  if ( IsActive )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4CF,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x8000FFFFLL,
      -2);
    if ( v17 )
      LeaveCriticalSection(lpCriticalSection);
    return 2147549183LL;
  }
  else
  {
    v6 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
    v7 = v6;
    if ( v6 )
    {
      *v6 = a2;
      *((_BYTE *)v6 + 8) = 0;
    }
    else
    {
      v7 = 0LL;
    }
    if ( v7 )
    {
      try
      {
        v8 = (__int64 **)((char *)this + 80);
        v9 = *((_QWORD *)this + 10);
        ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetFreeNode((__int64)v8);
        v10 = v8[4];
        v11 = (__int64 *)*v10;
        if ( v10 )
          v10[2] = (__int64)v7;
        v8[4] = v11;
        v10[1] = 0LL;
        *v10 = v9;
        v8[2] = (__int64 *)((char *)v8[2] + 1);
        if ( *v8 )
          (*v8)[1] = (__int64)v10;
        else
          v8[1] = v10;
        *v8 = v10;
      }
      catch ( ATL::CAtlException *v15 )
      {
        v13 = v15;
        if ( *(_DWORD *)v15 == -1073741571 )
          _o__resetstkoflw();
        v19 = *(_DWORD *)v13;
        if ( v19 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x4D7,
            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
            (const char *)(unsigned int)v19,
            -2);
          operator delete(v7);
          if ( v17 )
            LeaveCriticalSection(lpCriticalSection);
          return (unsigned int)v19;
        }
      }
      operator delete(0LL);
      if ( v17 )
        LeaveCriticalSection(lpCriticalSection);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4FC,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)0x8007000ELL,
        -2);
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x4D3,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)0x8007000ELL,
        v14);
      operator delete(0LL);
      if ( v17 )
        LeaveCriticalSection(lpCriticalSection);
      return 2147942414LL;
    }
  }
}
