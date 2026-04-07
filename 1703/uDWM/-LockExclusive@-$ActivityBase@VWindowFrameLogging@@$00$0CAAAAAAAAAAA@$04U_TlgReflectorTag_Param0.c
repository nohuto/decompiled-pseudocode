/*
 * XREFs of ?LockExclusive@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18007A544
 * Callers:
 *     ?Destroy@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18007A0A4 (-Destroy@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProv.c)
 *     ?NotifyFailure@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18007A630 (-NotifyFailure@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18007AFA0 (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?zInternalStart@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18007B424 (-zInternalStart@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param.c)
 *     ?zInternalStop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18007B4A0 (-zInternalStop@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 * Callees:
 *     <none>
 */

PSRWLOCK *__fastcall wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
        __int64 a1,
        PSRWLOCK *a2)
{
  RTL_SRWLOCK *v3; // rax
  RTL_SRWLOCK *v4; // rbx
  RTL_SRWLOCK *v5; // rbx
  PSRWLOCK *p_SRWLock; // rcx
  char v7; // bl
  PSRWLOCK v8; // rax
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF
  PSRWLOCK v11; // [rsp+38h] [rbp+10h] BYREF

  LODWORD(SRWLock) = 0;
  if ( *(_QWORD *)(a1 + 304) )
  {
    v3 = *(RTL_SRWLOCK **)(a1 + 304);
    if ( v3 )
      v4 = v3 + 1;
    else
      v4 = 0LL;
    v5 = v4 + 30;
    AcquireSRWLockExclusive(v5);
    v11 = v5;
    p_SRWLock = &v11;
    v7 = 1;
  }
  else
  {
    SRWLock = 0LL;
    p_SRWLock = &SRWLock;
    v7 = 2;
  }
  v8 = *p_SRWLock;
  *p_SRWLock = 0LL;
  *a2 = v8;
  if ( (v7 & 2) != 0 )
  {
    v7 &= ~2u;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  if ( (v7 & 1) != 0 && v11 )
    ReleaseSRWLockExclusive(v11);
  return a2;
}
