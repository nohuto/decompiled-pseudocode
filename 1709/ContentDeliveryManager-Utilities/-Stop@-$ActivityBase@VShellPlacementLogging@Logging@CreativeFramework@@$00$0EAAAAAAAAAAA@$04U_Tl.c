/*
 * XREFs of ?Stop@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18008D9B0
 * Callers:
 *     ?ResolveLayoutBindings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@@Z @ 0x18008B004 (-ResolveLayoutBindings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@@Z.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::ResolveLayoutBindings_::_1_::catch$3 @ 0x1800BBEA0 (_CreativeFramework--TargetedContentLayoutHelpers--ResolveLayoutBindings_--_1_--catch$3.c)
 * Callees:
 *     _TlgWrite @ 0x1800011C8 (_TlgWrite.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800261B4 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ @ 0x180026EAC (-Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180032050 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     ?StopActivity@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@MEAAXXZ @ 0x180089730 (-StopActivity@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@MEAAXXZ.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 */

void __fastcall wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
        CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *this,
        int a2)
{
  __int64 v4; // rax
  int v5; // edi
  RTL_SRWLOCK *v6; // rcx
  int v7; // edi
  const struct _TlgProvider_t *v8; // rdi
  DWORD CurrentThreadId; // eax
  char *v10; // rbx
  void *v11; // rdx
  __int64 v12; // r8
  __int64 *i; // rax
  __int64 v14; // rax
  int v15; // [rsp+38h] [rbp-9h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp+7h] BYREF
  int *v18; // [rsp+68h] [rbp+27h]
  int v19; // [rsp+70h] [rbp+2Fh]
  int v20; // [rsp+74h] [rbp+33h]
  PSRWLOCK *p_SRWLock; // [rsp+78h] [rbp+37h]
  int v22; // [rsp+80h] [rbp+3Fh]
  int v23; // [rsp+84h] [rbp+43h]
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]

  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v4 = *((_QWORD *)this + 6);
  v5 = *(_DWORD *)(v4 + 72);
  if ( v5 < 1 )
    __fastfail(7u);
  if ( *(int *)(v4 + 76) >= 0 )
    *(_DWORD *)(v4 + 76) = a2;
  v6 = SRWLock;
  v7 = v5 - 1;
  *(_DWORD *)(v4 + 72) = v7;
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  if ( v7 )
  {
    v8 = CreativeFramework::Logging::ShellPlacementLogging::Provider();
    if ( *(_DWORD *)v8 > 5u
      && (*((_QWORD *)v8 + 2) & 0x400000000000LL) != 0
      && (*((_QWORD *)v8 + 3) & 0x400000000000LL) == *((_QWORD *)v8 + 3) )
    {
      v20 = 0;
      v15 = a2;
      v19 = 4;
      v18 = &v15;
      CurrentThreadId = GetCurrentThreadId();
      v23 = 0;
      LODWORD(SRWLock) = CurrentThreadId;
      p_SRWLock = &SRWLock;
      v22 = 4;
      TlgWrite(v8, &unk_18013EEC1, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 4u, &pData);
    }
  }
  else
  {
    CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::StopActivity(this);
  }
  if ( *((_DWORD *)this + 8) )
  {
    v10 = (char *)this + 8;
    if ( *((_DWORD *)v10 + 6) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(retaddr, v11, v12, (const char *)0x8007029CLL);
    *((_DWORD *)v10 + 6) = 0;
    for ( i = *(__int64 **)v10; *i; *(_QWORD *)v10 = i )
    {
      v14 = **(_QWORD **)v10;
      if ( (char *)v14 == v10 )
      {
        **(_QWORD **)v10 = *((_QWORD *)v10 + 2);
        break;
      }
      i = (__int64 *)(v14 + 16);
    }
    *(_QWORD *)v10 = 0LL;
  }
}
