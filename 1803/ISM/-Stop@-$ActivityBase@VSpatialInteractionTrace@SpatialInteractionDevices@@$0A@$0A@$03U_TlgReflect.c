/*
 * XREFs of ?Stop@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800A92EC
 * Callers:
 *     _lambda_3c80eefd21da3fd8241f60fb2dc55ba0_::operator() @ 0x1800A5E4C (_lambda_3c80eefd21da3fd8241f60fb2dc55ba0_--operator().c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180072220 (-LockExclusive@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflector.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800727A0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x18009B17C (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

int __fastcall wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>::Stop(
        __int64 a1,
        int a2)
{
  __int64 v4; // rax
  int v5; // edi
  RTL_SRWLOCK *v6; // rcx
  int v7; // edi
  struct SpatialInteractionDevices::SpatialInteractionTrace *v8; // rax
  const struct _TlgProvider_t *v9; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v11; // rbx
  void *v12; // rdx
  __int64 v13; // r8
  struct SpatialInteractionDevices::SpatialInteractionTrace **v14; // rcx
  int v16; // [rsp+38h] [rbp-9h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp+7h] BYREF
  int *v19; // [rsp+68h] [rbp+27h]
  int v20; // [rsp+70h] [rbp+2Fh]
  int v21; // [rsp+74h] [rbp+33h]
  PSRWLOCK *p_SRWLock; // [rsp+78h] [rbp+37h]
  int v23; // [rsp+80h] [rbp+3Fh]
  int v24; // [rsp+84h] [rbp+43h]
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
    v8 = SpatialInteractionDevices::SpatialInteractionTrace::Instance();
    v9 = (const struct _TlgProvider_t *)*((_QWORD *)v8 + 1);
    if ( *(_DWORD *)v9 > 5u )
    {
      v21 = 0;
      v16 = a2;
      v20 = 4;
      v19 = &v16;
      CurrentThreadId = GetCurrentThreadId();
      v24 = 0;
      LODWORD(SRWLock) = CurrentThreadId;
      p_SRWLock = &SRWLock;
      v23 = 4;
      LODWORD(v8) = TlgWrite(v9, &unk_180111A19, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 4u, &pData);
    }
  }
  else
  {
    LODWORD(v8) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  }
  if ( *(_DWORD *)(a1 + 32) )
  {
    v11 = a1 + 8;
    if ( *(_DWORD *)(v11 + 24) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(retaddr, v12, v13, (const char *)0x8007029CLL);
    *(_DWORD *)(v11 + 24) = 0;
    v14 = *(struct SpatialInteractionDevices::SpatialInteractionTrace ***)v11;
    while ( 1 )
    {
      v8 = *v14;
      if ( !*v14 )
        break;
      if ( v8 == (struct SpatialInteractionDevices::SpatialInteractionTrace *)v11 )
      {
        v8 = *(struct SpatialInteractionDevices::SpatialInteractionTrace **)(v11 + 16);
        *v14 = v8;
        break;
      }
      v14 = (struct SpatialInteractionDevices::SpatialInteractionTrace **)((char *)v8 + 16);
      *(_QWORD *)v11 = (char *)v8 + 16;
    }
    *(_QWORD *)v11 = 0LL;
  }
  return (int)v8;
}
