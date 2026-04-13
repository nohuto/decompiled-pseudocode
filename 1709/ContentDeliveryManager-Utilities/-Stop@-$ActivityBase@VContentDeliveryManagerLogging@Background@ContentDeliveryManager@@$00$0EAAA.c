/*
 * XREFs of ?Stop@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180050FC8
 * Callers:
 *     _lambda_b7df6605325939df64e4896ead66165a_::operator() @ 0x18004F318 (_lambda_b7df6605325939df64e4896ead66165a_--operator().c)
 * Callees:
 *     _TlgWrite @ 0x1800011C8 (_TlgWrite.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x1800229D8 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800261B4 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180032050 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

int __fastcall wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
        __int64 a1)
{
  __int64 v2; // rax
  int v3; // edi
  RTL_SRWLOCK *v4; // rcx
  int v5; // edi
  const struct _TlgProvider_t *i; // rax
  const struct _TlgProvider_t *v7; // rdi
  DWORD CurrentThreadId; // eax
  _QWORD **v9; // rbx
  void *v10; // rdx
  __int64 v11; // r8
  _QWORD **v12; // rax
  int v14; // [rsp+30h] [rbp-9h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  int *v17; // [rsp+60h] [rbp+27h]
  int v18; // [rsp+68h] [rbp+2Fh]
  int v19; // [rsp+6Ch] [rbp+33h]
  PSRWLOCK *p_SRWLock; // [rsp+70h] [rbp+37h]
  int v21; // [rsp+78h] [rbp+3Fh]
  int v22; // [rsp+7Ch] [rbp+43h]
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
    i = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    v7 = i;
    if ( *(_DWORD *)i > 5u )
    {
      LODWORD(i) = 0;
      if ( (*((_QWORD *)v7 + 2) & 0x400000000000LL) != 0
        && (*((_QWORD *)v7 + 3) & 0x400000000000LL) == *((_QWORD *)v7 + 3) )
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
        LODWORD(i) = TlgWrite(v7, &unk_18013EEC1, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 4u, &pData);
      }
    }
  }
  else
  {
    LODWORD(i) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  }
  if ( *(_DWORD *)(a1 + 32) )
  {
    v9 = (_QWORD **)(a1 + 8);
    if ( *((_DWORD *)v9 + 6) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(retaddr, v10, v11, (const char *)0x8007029CLL);
    *((_DWORD *)v9 + 6) = 0;
    for ( i = (const struct _TlgProvider_t *)*v9; *(_QWORD *)i; *v9 = i )
    {
      v12 = (_QWORD **)**v9;
      if ( v12 == v9 )
      {
        i = (const struct _TlgProvider_t *)v9[2];
        **v9 = i;
        break;
      }
      i = (const struct _TlgProvider_t *)(v12 + 2);
    }
    *v9 = 0LL;
  }
  return (int)i;
}
