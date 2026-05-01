/*
 * XREFs of ?get_VirtualDesktops@VirtualDesktopDataSource@@UEAAJPEAPEAU?$IVectorView@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@@Z @ 0x1801B4F20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWinRTDesktopForInternalDesktopInternal@VirtualDesktopDataSource@@AEAAJPEAUIVirtualDesktop@@PEAPEAU2Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1801B5478 (-GetWinRTDesktopForInternalDesktopInternal@VirtualDesktopDataSource@@AEAAJPEAUIVirtualDesktop@@P.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UIVirtualDesktop@@@@AEAAXXZ @ 0x1801B60E8 (-GetCurrentObject@Iterator@-$ObjectArrayAdapter@UIVirtualDesktop@@@@AEAAXXZ.c)
 *     ??0?$Vector@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@1234@Upermission@01234@@Z @ 0x1801B6B8C (--0-$Vector@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@U-$DefaultEqualit.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall VirtualDesktopDataSource::get_VirtualDesktops(RTL_SRWLOCK *this, _QWORD *a2)
{
  RTL_SRWLOCK *v3; // r12
  PVOID Ptr; // rcx
  unsigned int v5; // r14d
  int v6; // eax
  __int64 v7; // rsi
  void *v8; // rax
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // rbx
  int v12; // eax
  struct IVirtualDesktop *v13; // rbx
  int WinRTDesktopForInternalDesktopInternal; // eax
  struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *v15; // rdi
  __int64 v16; // rcx
  struct IVirtualDesktop *v17; // rcx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct IVirtualDesktop *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v26; // [rsp+38h] [rbp-31h] BYREF
  int v27; // [rsp+40h] [rbp-29h] BYREF
  int v28; // [rsp+48h] [rbp-21h] BYREF
  struct IVirtualDesktop *v29; // [rsp+50h] [rbp-19h]
  __int64 *v30; // [rsp+58h] [rbp-11h]
  int v31; // [rsp+60h] [rbp-9h] BYREF
  __int64 v32; // [rsp+68h] [rbp-1h]
  __int64 *v33; // [rsp+70h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  __int64 v35; // [rsp+D0h] [rbp+67h] BYREF
  _QWORD *v36; // [rsp+D8h] [rbp+6Fh]
  struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *v37; // [rsp+E0h] [rbp+77h] BYREF
  RTL_SRWLOCK *v38; // [rsp+E8h] [rbp+7Fh]

  v36 = a2;
  *a2 = 0LL;
  v3 = this + 39;
  AcquireSRWLockShared(this + 39);
  v38 = v3;
  Ptr = this[14].Ptr;
  if ( Ptr )
  {
    v35 = 0LL;
    v6 = (*(__int64 (__fastcall **)(PVOID, __int64 *))(*(_QWORD *)Ptr + 56LL))(Ptr, &v35);
    v5 = v6;
    if ( v6 >= 0 )
    {
      v7 = 0LL;
      v8 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v8
        && (v9 = Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>>::Vector<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>>(v8),
            (v10 = v9) != 0) )
      {
        v7 = v9;
        v11 = v35;
        v26 = v35;
        if ( v35 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 8LL))(v35);
        v27 = 0;
        v12 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v11 + 24LL))(v11, &v27);
        if ( v12 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xD,
            (__int64)"internal\\shell\\private\\inc\\ObjectArrayAdapter.h",
            (const char *)(unsigned int)v12);
        v28 = 0;
        v29 = 0LL;
        v30 = &v26;
        ObjectArrayAdapter<IVirtualDesktop>::Iterator::GetCurrentObject(&v28);
        v31 = v27;
        v32 = 0LL;
        v33 = &v26;
        ObjectArrayAdapter<IVirtualDesktop>::Iterator::GetCurrentObject(&v31);
        while ( v28 != v31 || v30 != v33 )
        {
          v13 = v29;
          if ( v29 )
            (*(void (__fastcall **)(struct IVirtualDesktop *))(*(_QWORD *)v29 + 8LL))(v29);
          v37 = 0LL;
          WinRTDesktopForInternalDesktopInternal = VirtualDesktopDataSource::GetWinRTDesktopForInternalDesktopInternal(
                                                     (VirtualDesktopDataSource *)this,
                                                     v13,
                                                     &v37);
          v5 = WinRTDesktopForInternalDesktopInternal;
          v15 = v37;
          if ( WinRTDesktopForInternalDesktopInternal < 0 )
          {
            v20 = 155LL;
            goto LABEL_33;
          }
          WinRTDesktopForInternalDesktopInternal = (*(__int64 (__fastcall **)(__int64, struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *))(*(_QWORD *)v10 + 104LL))(
                                                     v10,
                                                     v37);
          v5 = WinRTDesktopForInternalDesktopInternal;
          if ( WinRTDesktopForInternalDesktopInternal < 0 )
          {
            v20 = 156LL;
LABEL_33:
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)v20,
              (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
              (const char *)(unsigned int)WinRTDesktopForInternalDesktopInternal);
            if ( v15 )
              (*(void (__fastcall **)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *))(*(_QWORD *)v15 + 16LL))(v15);
            if ( v13 )
              (*(void (__fastcall **)(struct IVirtualDesktop *))(*(_QWORD *)v13 + 16LL))(v13);
            v21 = v32;
            if ( v32 )
            {
              v32 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
            }
            v22 = v29;
            if ( v29 )
            {
              v29 = 0LL;
              (*(void (__fastcall **)(struct IVirtualDesktop *))(*(_QWORD *)v22 + 16LL))(v22);
            }
            v23 = v26;
            if ( v26 )
            {
              v26 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
            }
            goto LABEL_44;
          }
          if ( v15 )
            (*(void (__fastcall **)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *))(*(_QWORD *)v15 + 16LL))(v15);
          if ( v13 )
            (*(void (__fastcall **)(struct IVirtualDesktop *))(*(_QWORD *)v13 + 16LL))(v13);
          ++v28;
          ObjectArrayAdapter<IVirtualDesktop>::Iterator::GetCurrentObject(&v28);
        }
        v16 = v32;
        if ( v32 )
        {
          v32 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        }
        v17 = v29;
        if ( v29 )
        {
          v29 = 0LL;
          (*(void (__fastcall **)(struct IVirtualDesktop *))(*(_QWORD *)v17 + 16LL))(v17);
        }
        v18 = v26;
        if ( v26 )
        {
          v26 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        }
        v19 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v10 + 64LL))(v10, v36);
        v5 = v19;
        if ( v19 < 0 )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x9F,
            (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
            (const char *)(unsigned int)v19);
      }
      else
      {
        v5 = -2147024882;
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x96,
          (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
          (const char *)0x8007000ELL);
      }
LABEL_44:
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x93,
        (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
        (const char *)(unsigned int)v6);
    }
    v24 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    }
  }
  else
  {
    v5 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x90,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
      (const char *)0x8007139FLL);
  }
  if ( v3 )
    ReleaseSRWLockShared(v3);
  return v5;
}
