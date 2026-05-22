/*
 * XREFs of ?Stop@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800BA1EC
 * Callers:
 *     ??1SpatialGraphNodeReference@Holographic@Internal@Windows@@EEAA@XZ @ 0x1800B67B0 (--1SpatialGraphNodeReference@Holographic@Internal@Windows@@EEAA@XZ.c)
 *     ?RuntimeClassInitialize@SpatialGraphNodeReference@Holographic@Internal@Windows@@QEAAJAEBV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@AEBUDynamicNodeInfo@234@W4SPATIAL_TRACKING_STATE@@USpatialGraphSettings@234@@Z @ 0x1800B6A84 (-RuntimeClassInitialize@SpatialGraphNodeReference@Holographic@Internal@Windows@@QEAAJAEBV-$share.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18008CA50 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800979D8 (-LockExclusive@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflector.c)
 *     ?Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ @ 0x1800B222C (-Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

int __fastcall wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
        __int64 a1)
{
  __int64 v2; // rax
  int v3; // edi
  RTL_SRWLOCK *v4; // rcx
  int v5; // edi
  struct HolographicDriverClientContinuousTrace *i; // rax
  const struct _TlgProvider_t *v7; // rdi
  DWORD CurrentThreadId; // eax
  _QWORD **v9; // rbx
  _QWORD **v10; // rax
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

  wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
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
    i = HolographicDriverClientContinuousTrace::Instance();
    v7 = (const struct _TlgProvider_t *)*((_QWORD *)i + 1);
    if ( *(_DWORD *)v7 > 5u )
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
      LODWORD(i) = TlgWrite(v7, &unk_1800EF6D8, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 4u, &pData);
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
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3B1,
        (__int64)"internal\\sdk\\inc\\wil\\result.h",
        (const char *)0x8007029CLL);
    *((_DWORD *)v9 + 6) = 0;
    for ( i = (struct HolographicDriverClientContinuousTrace *)*v9; *(_QWORD *)i; *v9 = i )
    {
      v10 = (_QWORD **)**v9;
      if ( v10 == v9 )
      {
        i = (struct HolographicDriverClientContinuousTrace *)v9[2];
        **v9 = i;
        break;
      }
      i = (struct HolographicDriverClientContinuousTrace *)(v10 + 2);
    }
    *v9 = 0LL;
  }
  return (int)i;
}
