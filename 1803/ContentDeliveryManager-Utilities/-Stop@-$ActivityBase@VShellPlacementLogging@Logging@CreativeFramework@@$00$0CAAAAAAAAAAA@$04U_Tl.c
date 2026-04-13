/*
 * XREFs of ?Stop@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800331DC
 * Callers:
 *     ?ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@W4EventNotificationType@2@@Z @ 0x18002EF50 (-ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEA.c)
 *     ?SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@CreativeFramework@@V?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@@Z @ 0x18003009C (-SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@Cre.c)
 * Callees:
 *     _TlgWrite @ 0x1800011C8 (_TlgWrite.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18002982C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ @ 0x18002A584 (-Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180035310 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

int __fastcall wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
        __int64 a1)
{
  __int64 v2; // rax
  int v3; // edi
  RTL_SRWLOCK *v4; // rcx
  int v5; // edi
  const struct _TlgProvider_t *v6; // rax
  const struct _TlgProvider_t *v7; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v9; // rbx
  const struct _TlgProvider_t **v10; // rcx
  int v12; // [rsp+30h] [rbp-9h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  int *v15; // [rsp+60h] [rbp+27h]
  int v16; // [rsp+68h] [rbp+2Fh]
  int v17; // [rsp+6Ch] [rbp+33h]
  PSRWLOCK *p_SRWLock; // [rsp+70h] [rbp+37h]
  int v19; // [rsp+78h] [rbp+3Fh]
  int v20; // [rsp+7Ch] [rbp+43h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+5Fh]

  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v2 = *(_QWORD *)(a1 + 48);
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
      LODWORD(v6) = 0;
      if ( (*((_QWORD *)v7 + 2) & 0x200000000000LL) != 0
        && (*((_QWORD *)v7 + 3) & 0x200000000000LL) == *((_QWORD *)v7 + 3) )
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
        LODWORD(v6) = TlgWrite(v7, &unk_180156C23, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 4u, &pData);
      }
    }
  }
  else
  {
    LODWORD(v6) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  }
  if ( *(_DWORD *)(a1 + 32) )
  {
    v9 = a1 + 8;
    if ( *(_DWORD *)(v9 + 24) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3B1,
        (__int64)"internal\\sdk\\inc\\wil\\result.h",
        (const char *)0x8007029CLL);
    *(_DWORD *)(v9 + 24) = 0;
    v10 = *(const struct _TlgProvider_t ***)v9;
    while ( 1 )
    {
      v6 = *v10;
      if ( !*v10 )
        break;
      if ( v6 == (const struct _TlgProvider_t *)v9 )
      {
        v6 = *(const struct _TlgProvider_t **)(v9 + 16);
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
