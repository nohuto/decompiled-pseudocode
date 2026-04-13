/*
 * XREFs of ?CreatePackagedUnifiedTileIdentifier@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W0@Z @ 0x180074844
 * Callers:
 *     ?PinToStart@Actions@CreativeFramework@@YAXPEB_W00_N@Z @ 0x180074AD8 (-PinToStart@Actions@CreativeFramework@@YAXPEB_W00_N@Z.c)
 *     ?SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ @ 0x180074F48 (-SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180003CE0 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$GetActivationFactory@UIPackagedUnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsInternal@@@wil@@YA?AV?$com_ptr_t@UIPackagedUnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180077E8C (--$GetActivationFactory@UIPackagedUnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsInternal.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18007932C (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800B4307 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall CreativeFramework::Actions::CreatePackagedUnifiedTileIdentifier(
        __int64 *a1,
        const WCHAR *a2,
        const WCHAR *a3)
{
  unsigned int v6; // eax
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  unsigned int v9; // r9d
  unsigned int v10; // r8d
  unsigned int v11; // eax
  UINT32 v12; // edx
  HRESULT v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  UINT32 applicationUserModelIdLength; // [rsp+20h] [rbp-E0h] BYREF
  int v18; // [rsp+24h] [rbp-DCh]
  _QWORD v19[3]; // [rsp+28h] [rbp-D8h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-C0h] BYREF
  HSTRING string; // [rsp+58h] [rbp-A8h] BYREF
  WCHAR applicationUserModelId[136]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v19[1] = -2LL;
  v19[2] = a1;
  v18 = 0;
  memset_0(applicationUserModelId, 0, 0x104uLL);
  applicationUserModelIdLength = 130;
  v6 = FormatApplicationUserModelId(a2, a3, &applicationUserModelIdLength, applicationUserModelId);
  if ( v6 )
  {
    wil::details::in1diag3::_Throw_Win32(
      retaddr,
      (void *)0x4D,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)v6,
      applicationUserModelIdLength);
    __debugbreak();
  }
  wil::GetActivationFactory<WindowsInternal::Shell::UnifiedTile::IPackagedUnifiedTileIdentifierFactory>(v19);
  *a1 = 0LL;
  v18 = 1;
  v7 = v19[0];
  v8 = -1LL;
  do
    ++v8;
  while ( applicationUserModelId[v8] );
  v9 = -1;
  if ( v8 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException(v8 > 0xFFFFFFFF ? (Microsoft::WRL::Details *)0x80070216LL : 0);
    __debugbreak();
  }
  v10 = v8;
  v11 = v8 + 1;
  if ( v10 + 1 >= v10 )
    v9 = v10 + 1;
  if ( v11 < v10 )
  {
    Microsoft::WRL::Details::RaiseException(v11 < v10 ? (Microsoft::WRL::Details *)0x80070216LL : 0);
    __debugbreak();
  }
  v12 = v9 - 1;
  if ( v10 < v9 )
    v12 = v10;
  v13 = WindowsCreateStringReference(applicationUserModelId, v12, &hstringHeader, &string);
  if ( v13 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13);
  v14 = *a1;
  *a1 = 0LL;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  v15 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v7 + 48LL))(v7, string, a1);
  if ( v15 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x51,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v15);
  if ( v19[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v19[0] + 16LL))(v19[0]);
  return a1;
}
