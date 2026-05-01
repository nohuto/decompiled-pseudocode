/*
 * XREFs of ?RuntimeClassInitialize@UTMRecentItem@Discover@PenWorkspace@@QEAAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x1800EE028
 * Callers:
 *     ??$MakeAndInitialize@VUTMRecentItem@Discover@PenWorkspace@@UIDiscoverRecentItem@@PEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Details@WRL@Microsoft@@YAJPEAPEAUIDiscoverRecentItem@@$$QEAPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x1800EBAA8 (--$MakeAndInitialize@VUTMRecentItem@Discover@PenWorkspace@@UIDiscoverRecentItem@@PEAUIUnifiedTil.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PenWorkspace::Discover::UTMRecentItem::RuntimeClassInitialize(
        PenWorkspace::Discover::UTMRecentItem *this,
        struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  Microsoft::WRL::FtmBase *v6; // rax
  Microsoft::WRL::FtmBase *v7; // rbx
  __int64 v8; // rcx
  Microsoft::WRL::FtmBase *v9; // r8
  __int64 v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    if ( *((struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile **)this + 8) != a2 )
    {
      (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *))(*(_QWORD *)a2 + 8LL))(a2);
      v5 = *((_QWORD *)this + 8);
      *((_QWORD *)this + 8) = a2;
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    v6 = (Microsoft::WRL::FtmBase *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v7 = v6;
    if ( v6 )
    {
      Microsoft::WRL::FtmBase::FtmBase(v6);
      *((_DWORD *)v7 + 11) = 1;
      *(_QWORD *)v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *(_QWORD *)v7 = &PenWorkspace::Discover::UTMIconLoader::`vftable';
      *((_QWORD *)v7 + 6) = 0LL;
      if ( *((struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile **)v7 + 6) != a2 )
      {
        (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *))(*(_QWORD *)a2 + 8LL))(a2);
        v8 = *((_QWORD *)v7 + 6);
        *((_QWORD *)v7 + 6) = a2;
        if ( v8 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      (*(void (__fastcall **)(Microsoft::WRL::FtmBase *))(*(_QWORD *)v7 + 8LL))(v7);
      (*(void (__fastcall **)(Microsoft::WRL::FtmBase *))(*(_QWORD *)v7 + 16LL))(v7);
      v9 = v7;
      if ( *((Microsoft::WRL::FtmBase **)this + 7) != v7 )
      {
        if ( v7 )
        {
          (*(void (__fastcall **)(Microsoft::WRL::FtmBase *))(*(_QWORD *)v7 + 8LL))(v7);
          v9 = v7;
        }
        v10 = *((_QWORD *)this + 7);
        *((_QWORD *)this + 7) = v7;
        if ( v10 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
          v9 = v7;
        }
      }
      v4 = 0;
    }
    else
    {
      v4 = -2147024882;
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x3E,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentitem.cpp",
        (const char *)0x8007000ELL);
      v9 = 0LL;
    }
    if ( v9 )
      (*(void (__fastcall **)(Microsoft::WRL::FtmBase *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  else
  {
    v4 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentitem.cpp",
      (const char *)0x80004003LL);
  }
  return v4;
}
