/*
 * XREFs of ?Stop@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18003063C
 * Callers:
 *     ?ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@@Z @ 0x18002BD80 (-ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEA.c)
 * Callees:
 *     _TlgWrite @ 0x1800011C8 (_TlgWrite.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800261B4 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ @ 0x180026EAC (-Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180032050 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     ?ReportStopActivity@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x1800320F8 (-ReportStopActivity@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 */

int __fastcall wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
        CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity *this)
{
  __int64 v2; // rax
  int v3; // edi
  RTL_SRWLOCK *v4; // rcx
  int v5; // edi
  const struct _TlgProvider_t *i; // rax
  const struct _TlgProvider_t *v7; // rdi
  DWORD CurrentThreadId; // eax
  char *v9; // rbx
  void *v10; // rdx
  __int64 v11; // r8
  char *v12; // rax
  int v14; // [rsp+38h] [rbp-9h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp+7h] BYREF
  int *v17; // [rsp+68h] [rbp+27h]
  int v18; // [rsp+70h] [rbp+2Fh]
  int v19; // [rsp+74h] [rbp+33h]
  PSRWLOCK *p_SRWLock; // [rsp+78h] [rbp+37h]
  int v21; // [rsp+80h] [rbp+3Fh]
  int v22; // [rsp+84h] [rbp+43h]
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
    i = CreativeFramework::Logging::ShellPlacementLogging::Provider();
    v7 = i;
    if ( *(_DWORD *)i > 5u )
    {
      v14 = 0;
      v19 = 0;
      v17 = &v14;
      v18 = 4;
      CurrentThreadId = GetCurrentThreadId();
      v22 = 0;
      LODWORD(SRWLock) = CurrentThreadId;
      p_SRWLock = &SRWLock;
      v21 = 4;
      LODWORD(i) = TlgWrite(v7, &unk_18013B774, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 4u, &pData);
    }
  }
  else
  {
    LODWORD(i) = wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(this);
  }
  if ( *((_DWORD *)this + 8) )
  {
    v9 = (char *)this + 8;
    if ( *((_DWORD *)v9 + 6) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(retaddr, v10, v11, (const char *)0x8007029CLL);
    *((_DWORD *)v9 + 6) = 0;
    for ( i = *(const struct _TlgProvider_t **)v9; *(_QWORD *)i; *(_QWORD *)v9 = i )
    {
      v12 = **(char ***)v9;
      if ( v12 == v9 )
      {
        i = (const struct _TlgProvider_t *)*((_QWORD *)v9 + 2);
        **(_QWORD **)v9 = i;
        break;
      }
      i = (const struct _TlgProvider_t *)(v12 + 16);
    }
    *(_QWORD *)v9 = 0LL;
  }
  return (int)i;
}
