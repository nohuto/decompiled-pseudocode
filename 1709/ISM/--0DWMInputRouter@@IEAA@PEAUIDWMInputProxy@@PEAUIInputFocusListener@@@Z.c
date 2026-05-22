/*
 * XREFs of ??0DWMInputRouter@@IEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z @ 0x180016D78
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x180004384 (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 *     ??0MPCInputRouter@@AEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z @ 0x1800A8860 (--0MPCInputRouter@@AEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_K@Z @ 0x1800CB52C (--_U@YAPEAX_K@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1800CB554 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=23
DWMInputRouter *__fastcall DWMInputRouter::DWMInputRouter(
        DWMInputRouter *this,
        struct IDWMInputProxy *a2,
        struct IInputFocusListener *a3)
{
  _OWORD *v6; // rax
  _DWORD *v7; // rax
  _QWORD *v8; // rax
  _OWORD *v9; // rdi
  _DWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx

  *((_QWORD *)this + 8) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 18) = 1;
  *(_QWORD *)this = &DWMInputRouter::`vftable'{for `ISystemInputRouter'};
  *((_QWORD *)this + 1) = &DWMInputRouter::`vftable'{for `IInputDisplayDeviceBinding'};
  *((_QWORD *)this + 2) = &DWMInputRouter::`vftable'{for `IRemoteViewHitTest'};
  *((_QWORD *)this + 3) = &DWMInputRouter::`vftable'{for `IRemoteViewHitTestRequest'};
  *((_QWORD *)this + 4) = &DWMInputRouter::`vftable'{for `IMessageObjectOwner'};
  *((_QWORD *)this + 5) = &DWMInputRouter::`vftable'{for `IInputDeviceInfoStore'};
  *((_QWORD *)this + 6) = &DWMInputRouter::`vftable'{for `IInputRouterStatics'};
  *((_QWORD *)this + 7) = &DWMInputRouter::`vftable'{for `IInputDeliveryServerHost'};
  *((_QWORD *)this + 8) = &DWMInputRouter::`vftable'{for `RefCountedObject'};
  *((_OWORD *)this + 6) = 0u;
  *((_OWORD *)this + 7) = 0u;
  *((_QWORD *)this + 16) = 0LL;
  v6 = operator new[](0x30uLL);
  *((_QWORD *)this + 10) = v6;
  *v6 = *((_OWORD *)this + 6);
  v6[1] = *((_OWORD *)this + 7);
  *((_QWORD *)v6 + 4) = *((_QWORD *)this + 16);
  *((_QWORD *)this + 11) = 1LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 52) = 0;
  v7 = operator new[](0x10uLL);
  *((_QWORD *)this + 24) = v7;
  *v7 = *((_DWORD *)this + 52);
  *((_QWORD *)this + 25) = 1LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_BYTE *)this + 368) = 0;
  *(GUID *)((char *)this + 392) = DirectX::g_XMZero;
  v8 = operator new[](0x58uLL);
  if ( v8 )
  {
    *v8 = 1LL;
    v9 = v8 + 1;
    `eh vector constructor iterator'(
      v8 + 1,
      0x50uLL,
      1uLL,
      DynamicSizeMap<_GUID,std::function<long (IHitTestRequest *,void *,std::vector<Microsoft::WRL::ComPtr<IInputTarget>> *)>,1>::MapEntry::MapEntry,
      DynamicSizeMap<_GUID,std::function<long (IHitTestRequest *,void *,std::vector<Microsoft::WRL::ComPtr<IInputTarget>> *)>,1>::MapEntry::~MapEntry);
  }
  else
  {
    v9 = 0LL;
  }
  *((_QWORD *)this + 47) = v9;
  *v9 = *(_OWORD *)((char *)this + 392);
  *((_QWORD *)this + 48) = 1LL;
  *((_DWORD *)this + 106) = 0;
  v10 = operator new[](0x10uLL);
  *((_QWORD *)this + 51) = v10;
  *v10 = *((_DWORD *)this + 106);
  *((_QWORD *)this + 52) = 1LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 71) = 0LL;
  *((_QWORD *)this + 72) = 0LL;
  *((_QWORD *)this + 73) = 0LL;
  *((_QWORD *)this + 74) = 0LL;
  *((_QWORD *)this + 75) = 0LL;
  *((_QWORD *)this + 76) = 0LL;
  *((_QWORD *)this + 89) = 0LL;
  *((_QWORD *)this + 23) = a2;
  *((_QWORD *)this + 31) = a3;
  v11 = *((_QWORD *)this + 17);
  if ( v11 )
  {
    *((_QWORD *)this + 17) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = *((_QWORD *)this + 18);
  if ( v12 )
  {
    *((_QWORD *)this + 18) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = *((_QWORD *)this + 19);
  if ( v13 )
  {
    *((_QWORD *)this + 19) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = *((_QWORD *)this + 20);
  if ( v14 )
  {
    *((_QWORD *)this + 20) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = *((_QWORD *)this + 29);
  if ( v15 )
  {
    *((_QWORD *)this + 29) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = *((_QWORD *)this + 27);
  if ( v16 )
  {
    *((_QWORD *)this + 27) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v17 = *((_QWORD *)this + 30);
  if ( v17 )
  {
    *((_QWORD *)this + 30) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v18 = *((_QWORD *)this + 40);
  if ( v18 )
  {
    *((_QWORD *)this + 40) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v19 = *((_QWORD *)this + 42);
  if ( v19 )
  {
    *((_QWORD *)this + 42) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  *((_QWORD *)this + 43) = 0LL;
  return this;
}
