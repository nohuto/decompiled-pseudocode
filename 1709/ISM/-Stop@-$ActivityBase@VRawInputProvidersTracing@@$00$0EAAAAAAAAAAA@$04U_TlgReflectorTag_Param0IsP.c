/*
 * XREFs of ?Stop@?$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180097258
 * Callers:
 *     ?FinalizeControllerInitialization@SpatialInputControllerCollection@@AEAAJAEBV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@Z @ 0x1800933D0 (-FinalizeControllerInitialization@SpatialInputControllerCollection@@AEAAJAEBV-$shared_ptr@VSpati.c)
 *     wil::details::lambda_call__lambda_6298af97ebda0bd77aa9caf5b402f073___::_lambda_call__lambda_6298af97ebda0bd77aa9caf5b402f073___ @ 0x1800963B0 (wil--details--lambda_call__lambda_6298af97ebda0bd77aa9caf5b402f073___--_lambda_call__lambda_6298.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18008CA50 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x18008CCC0 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800979D8 (-LockExclusive@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflector.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

int __fastcall wil::ActivityBase<RawInputProvidersTracing,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
        __int64 a1,
        int a2)
{
  __int64 v4; // rax
  int v5; // edi
  RTL_SRWLOCK *v6; // rcx
  int v7; // edi
  struct RawInputProvidersTracing *i; // rax
  const struct _TlgProvider_t *v9; // rdi
  DWORD CurrentThreadId; // eax
  _QWORD **v11; // rbx
  _QWORD **v12; // rax
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

  wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v4 = *(_QWORD *)(a1 + 48);
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
    i = RawInputProvidersTracing::Instance();
    v9 = (const struct _TlgProvider_t *)*((_QWORD *)i + 1);
    if ( *(_DWORD *)v9 > 5u && (*((_QWORD *)v9 + 2) & 0x400000000000LL) != 0 )
    {
      i = (struct RawInputProvidersTracing *)(*((_QWORD *)v9 + 3) & 0x400000000000LL);
      if ( i == *((struct RawInputProvidersTracing **)v9 + 3) )
      {
        v19 = 0;
        v14 = a2;
        v18 = 4;
        v17 = &v14;
        CurrentThreadId = GetCurrentThreadId();
        v22 = 0;
        LODWORD(SRWLock) = CurrentThreadId;
        p_SRWLock = &SRWLock;
        v21 = 4;
        LODWORD(i) = TlgWrite(v9, &unk_1800F1035, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 4u, &pData);
      }
    }
  }
  else
  {
    LODWORD(i) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  }
  if ( *(_DWORD *)(a1 + 32) )
  {
    v11 = (_QWORD **)(a1 + 8);
    if ( *((_DWORD *)v11 + 6) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3B1,
        (__int64)"internal\\sdk\\inc\\wil\\result.h",
        (const char *)0x8007029CLL);
    *((_DWORD *)v11 + 6) = 0;
    for ( i = (struct RawInputProvidersTracing *)*v11; *(_QWORD *)i; *v11 = i )
    {
      v12 = (_QWORD **)**v11;
      if ( v12 == v11 )
      {
        i = (struct RawInputProvidersTracing *)v11[2];
        **v11 = i;
        break;
      }
      i = (struct RawInputProvidersTracing *)(v12 + 2);
    }
    *v11 = 0LL;
  }
  return (int)i;
}
