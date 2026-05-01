/*
 * XREFs of wil::MakeAgileCallbackNoThrow_Windows::Foundation::ITypedEventHandler_WindowsInternal::Shell::UnifiedTile::UnifiedTile_____ptr64_WindowsInternal::Shell::UnifiedTile::TileChangedEventArgs_____ptr64___lambda_aef633c7e7a39241655d515b2f17cdcc___ @ 0x18002BB4C
 * Callers:
 *     ?_InitializeListener@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800277BC (-_InitializeListener@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18000FA10 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180041970 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall wil::MakeAgileCallbackNoThrow_Windows::Foundation::ITypedEventHandler_WindowsInternal::Shell::UnifiedTile::UnifiedTile_____ptr64_WindowsInternal::Shell::UnifiedTile::TileChangedEventArgs_____ptr64___lambda_aef633c7e7a39241655d515b2f17cdcc___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v2; // rbx
  _QWORD *v5; // rdi
  bool v6; // zf
  _QWORD *result; // rax

  v2 = 0LL;
  v5 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    *v5 = &Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *> *>::`vftable';
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v5 + 1));
    v6 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
    *v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<WindowsInternal::Shell::UnifiedTile::UnifiedTile *,WindowsInternal::Shell::UnifiedTile::TileChangedEventArgs *>,Microsoft::WRL::FtmBase>>::`vftable'{for `Windows::Foundation::ITypedEventHandler<WindowsInternal::Shell::UnifiedTile::UnifiedTile *,WindowsInternal::Shell::UnifiedTile::TileChangedEventArgs *>'};
    v5[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<WindowsInternal::Shell::UnifiedTile::UnifiedTile *,WindowsInternal::Shell::UnifiedTile::TileChangedEventArgs *>,Microsoft::WRL::FtmBase>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
    *((_DWORD *)v5 + 17) = 1;
    if ( !v6 )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    v5[9] = 0LL;
    if ( v5 + 9 != a2 )
    {
      v5[9] = *a2;
      *a2 = 0LL;
    }
    v2 = v5;
    v5[10] = a2[1];
    *v5 = off_1800492F8;
    v5[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<WindowsInternal::Shell::UnifiedTile::UnifiedTile *,WindowsInternal::Shell::UnifiedTile::TileChangedEventArgs *>,Microsoft::WRL::FtmBase>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
  }
  result = a1;
  *a1 = v2;
  return result;
}
