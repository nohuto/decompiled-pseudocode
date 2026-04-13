/*
 * XREFs of ?StartActivity@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEB_W@Z @ 0x180097150
 * Callers:
 *     ?ResolveLayoutBindings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@@Z @ 0x1800983FC (-ResolveLayoutBindings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1800011C8 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180016F68 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ @ 0x18002A584 (-Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180035310 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 */

void __fastcall CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::StartActivity(
        CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *this,
        const wchar_t *a2)
{
  __int64 v4; // rbx
  const struct _TlgProvider_t *v5; // rax
  RTL_SRWLOCK *v6; // rcx
  const struct _TlgProvider_t *v7; // rax
  __int64 v8; // rcx
  const struct _TlgProvider_t *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r8
  const GUID *v12; // r9
  _QWORD *v13; // rbx
  _QWORD *Local; // rcx
  PSRWLOCK SRWLock[2]; // [rsp+30h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  PSRWLOCK *v17; // [rsp+60h] [rbp-48h]
  __int64 v18; // [rsp+68h] [rbp-40h]
  const wchar_t *v19; // [rsp+70h] [rbp-38h]
  int v20; // [rsp+78h] [rbp-30h]
  int v21; // [rsp+7Ch] [rbp-2Ch]

  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    SRWLock);
  v4 = *((_QWORD *)this + 6);
  v5 = CreativeFramework::Logging::ShellPlacementLogging::Provider();
  if ( *(_DWORD *)v5 > 5u
    && (*((_QWORD *)v5 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v5 + 3) & 0x400000000000LL) == *((_QWORD *)v5 + 3) )
  {
    EventActivityIdControl(3u, (LPGUID)(v4 + 8));
  }
  else
  {
    *(_QWORD *)(v4 + 8) = 0LL;
  }
  v6 = SRWLock[0];
  *(_DWORD *)v4 = 1;
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  v7 = CreativeFramework::Logging::ShellPlacementLogging::Provider();
  v9 = v7;
  if ( *(_DWORD *)v7 > 5u && (*((_QWORD *)v7 + 2) & 0x400000000000LL) != 0 )
  {
    v8 = *((_QWORD *)v7 + 3) & 0x400000000000LL;
    if ( v8 == *((_QWORD *)v7 + 3) )
    {
      LODWORD(SRWLock[0]) = GetCurrentThreadId();
      v18 = 4LL;
      v17 = SRWLock;
      LODWORD(v10) = 0;
      if ( a2 )
      {
        v10 = -1LL;
        do
          ++v10;
        while ( a2[v10] );
      }
      v21 = 0;
      if ( !a2 )
        a2 = &Src;
      v19 = a2;
      v20 = 2 * v10 + 2;
      v11 = *((_QWORD *)this + 6);
      if ( !*(_BYTE *)(v11 + 4)
        || (v12 = (const GUID *)(v11 + 24), !*(_DWORD *)(v11 + 24))
        && !*(_DWORD *)(v11 + 28)
        && !*(_DWORD *)(v11 + 32)
        && !*(_DWORD *)(v11 + 36) )
      {
        v12 = 0LL;
      }
      TlgWrite(v9, &unk_180158D85, (LPCGUID)(v11 + 8), v12, 4u, &pData);
    }
  }
  if ( !*((_DWORD *)this + 8) )
  {
    v13 = (_QWORD *)((char *)this + 8);
    if ( wil::details::g_pThreadFailureCallbacks )
      Local = (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                          v8,
                          1);
    else
      Local = 0LL;
    *v13 = Local;
    if ( Local )
    {
      *((_QWORD *)this + 3) = *Local;
      *Local = v13;
      *((_DWORD *)this + 8) = GetCurrentThreadId();
    }
  }
}
