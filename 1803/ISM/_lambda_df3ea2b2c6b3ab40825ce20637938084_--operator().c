/*
 * XREFs of _lambda_df3ea2b2c6b3ab40825ce20637938084_::operator() @ 0x1800A7930
 * Callers:
 *     ?OnDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIHolographicDisplay@Holographic@Graphics@4@_N@Z @ 0x1800A7080 (-OnDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@.c)
 *     wil::details::lambda_call__lambda_df3ea2b2c6b3ab40825ce20637938084___::_lambda_call__lambda_df3ea2b2c6b3ab40825ce20637938084___ @ 0x1800A8E18 (wil--details--lambda_call__lambda_df3ea2b2c6b3ab40825ce20637938084___--_lambda_call__lambda_df3e.c)
 * Callees:
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x18009B17C (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?Stop@OnHolographicDisplayChanged@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJPEB_W_N1@Z @ 0x1800A4020 (-Stop@OnHolographicDisplayChanged@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJPEB_W.c)
 *     ?SpatialGraphDriver_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXPEB_W@Z @ 0x1800A4544 (-SpatialGraphDriver_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXPEB_W@Z.c)
 *     ?HolographicDisplayDriver_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXPEB_W@Z @ 0x1800A45F0 (-HolographicDisplayDriver_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXPEB_W@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_df3ea2b2c6b3ab40825ce20637938084_::operator()(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  __int64 *v3; // rdi
  __int64 *v4; // rbx
  __int64 **v5; // rax
  __int64 *j; // rcx
  __int64 *i; // rax
  const wchar_t *v8; // rbx
  const wchar_t *StringRawBuffer; // rdi
  HSTRING v10; // rcx
  HSTRING v11; // rcx
  const wchar_t *v12; // rax
  _DWORD *v13; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v14; // rcx
  _DWORD *v15; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v16; // rcx

  if ( **(_BYTE **)a1 )
  {
    v2 = (struct _RTL_CRITICAL_SECTION *)(*(_QWORD *)(a1 + 8) + 424LL);
    EnterCriticalSection(v2);
    v3 = *(__int64 **)(*(_QWORD *)(a1 + 8) + 464LL);
    v4 = (__int64 *)*v3;
    while ( v4 != v3 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4[5] + 112LL))(v4[5], 1LL);
      if ( !*((_BYTE *)v4 + 25) )
      {
        v5 = (__int64 **)v4[2];
        if ( *((_BYTE *)v5 + 25) )
        {
          for ( i = (__int64 *)v4[1]; !*((_BYTE *)i + 25) && v4 == (__int64 *)i[2]; i = (__int64 *)i[1] )
            v4 = i;
          v4 = i;
        }
        else
        {
          v4 = (__int64 *)v4[2];
          for ( j = *v5; !*((_BYTE *)j + 25); j = (__int64 *)*j )
            v4 = j;
        }
      }
    }
    if ( v2 )
      LeaveCriticalSection(v2);
  }
  v8 = L"UndefinedDeviceInterfacePath";
  StringRawBuffer = L"UndefinedDeviceInterfacePath";
  v10 = **(HSTRING **)(a1 + 16);
  if ( v10 )
    StringRawBuffer = WindowsGetStringRawBuffer(v10, 0LL);
  v11 = *(HSTRING *)(*(_QWORD *)(a1 + 8) + 136LL);
  if ( v11 )
    v8 = WindowsGetStringRawBuffer(v11, 0LL);
  v12 = WindowsGetStringRawBuffer(**(HSTRING **)(a1 + 40), 0LL);
  SpatialInteractionDevices::SpatialInteractionTrace::OnHolographicDisplayChanged::Stop(
    *(SpatialInteractionDevices::SpatialInteractionTrace::OnHolographicDisplayChanged **)(a1 + 24),
    **(_DWORD **)(a1 + 32),
    v12,
    **(_BYTE **)(a1 + 48),
    **(_BYTE **)(a1 + 56));
  v13 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
  if ( v13 && *v13 )
  {
    SpatialInteractionDevices::SpatialInteractionTrace::Instance();
    SpatialInteractionDevices::SpatialInteractionTrace::HolographicDisplayDriver_(v14, StringRawBuffer);
  }
  v15 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
  if ( v15 )
  {
    if ( *v15 )
    {
      SpatialInteractionDevices::SpatialInteractionTrace::Instance();
      SpatialInteractionDevices::SpatialInteractionTrace::SpatialGraphDriver_(v16, v8);
    }
  }
}
