/*
 * XREFs of ?Stop@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180033978
 * Callers:
 *     ?ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@W4EventNotificationType@2@@Z @ 0x18002EF50 (-ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEA.c)
 * Callees:
 *     _TlgWrite @ 0x1800011C8 (_TlgWrite.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18002982C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ @ 0x18002A584 (-Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180035310 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     ?ReportStopActivity@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x1800353B0 (-ReportStopActivity@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 */

int __fastcall wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
        CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity *this)
{
  __int64 v2; // rax
  int v3; // esi
  RTL_SRWLOCK *v4; // rcx
  int v5; // esi
  const struct _TlgProvider_t *v6; // rax
  const struct _TlgProvider_t *v7; // rdi
  DWORD CurrentThreadId; // eax
  const struct _TlgProvider_t *v9; // rbx
  const struct _TlgProvider_t **v10; // rcx
  int v12; // [rsp+38h] [rbp-9h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp+7h] BYREF
  int *v15; // [rsp+68h] [rbp+27h]
  int v16; // [rsp+70h] [rbp+2Fh]
  int v17; // [rsp+74h] [rbp+33h]
  PSRWLOCK *p_SRWLock; // [rsp+78h] [rbp+37h]
  int v19; // [rsp+80h] [rbp+3Fh]
  int v20; // [rsp+84h] [rbp+43h]
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]

  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    this,
    &SRWLock);
  v2 = *((_QWORD *)this + 6);
  v3 = *(_DWORD *)(v2 + 72);
  if ( v3 < 1 )
    __fastfail(7u);
  if ( *(int *)(v2 + 76) >= 0 )
    *(_DWORD *)(v2 + 76) = 0;
  v4 = SRWLock;
  v5 = v3 - 1;
  *(_DWORD *)(v2 + 72) = v5;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  if ( v5 )
  {
    v6 = CreativeFramework::Logging::ShellPlacementLogging::Provider();
    v7 = v6;
    if ( *(_DWORD *)v6 > 5u )
    {
      v12 = 0;
      v17 = 0;
      v15 = &v12;
      v16 = 4;
      CurrentThreadId = GetCurrentThreadId();
      v20 = 0;
      LODWORD(SRWLock) = CurrentThreadId;
      p_SRWLock = &SRWLock;
      v19 = 4;
      LODWORD(v6) = TlgWrite(v7, &unk_180158876, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 4u, &pData);
    }
  }
  else
  {
    LODWORD(v6) = wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(this);
  }
  if ( *((_DWORD *)this + 8) )
  {
    v9 = (CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity *)((char *)this + 8);
    if ( *((_DWORD *)v9 + 6) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3B1,
        (__int64)"internal\\sdk\\inc\\wil\\result.h",
        (const char *)0x8007029CLL);
    *((_DWORD *)v9 + 6) = 0;
    v10 = *(const struct _TlgProvider_t ***)v9;
    while ( 1 )
    {
      v6 = *v10;
      if ( !*v10 )
        break;
      if ( v6 == v9 )
      {
        v6 = (const struct _TlgProvider_t *)*((_QWORD *)v9 + 2);
        *v10 = v6;
        break;
      }
      v10 = (const struct _TlgProvider_t **)((char *)v6 + 16);
      *(_QWORD *)v9 = (char *)v6 + 16;
    }
    *(_QWORD *)v9 = 0LL;
  }
  return (int)v6;
}
