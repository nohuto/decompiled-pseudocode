/*
 * XREFs of ?LockExclusive@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000BE3C
 * Callers:
 *     ?zInternalStop@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18000BF30 (-zInternalStop@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18000BF6C (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil.c)
 *     ??1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x18000C124 (--1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@CloneWindow@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x18000C194 (-StartActivity@CloneWindow@WindowFrameLoggingTelemetry@@QEAAXXZ.c)
 *     ?NotifyFailure@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180080A90 (-NotifyFailure@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 * Callees:
 *     <none>
 */

PSRWLOCK *__fastcall wil::ActivityBase<WindowFrameLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
        __int64 a1,
        PSRWLOCK *a2)
{
  PSRWLOCK *p_SRWLock; // rcx
  char v4; // bl
  PSRWLOCK v5; // rax
  RTL_SRWLOCK *v7; // rax
  RTL_SRWLOCK *v8; // rbx
  RTL_SRWLOCK *v9; // rbx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF
  PSRWLOCK v11; // [rsp+38h] [rbp+10h] BYREF

  LODWORD(SRWLock) = 0;
  if ( *(_QWORD *)(a1 + 304) )
  {
    v7 = *(RTL_SRWLOCK **)(a1 + 304);
    if ( v7 )
      v8 = v7 + 1;
    else
      v8 = 0LL;
    v9 = v8 + 30;
    AcquireSRWLockExclusive(v9);
    v11 = v9;
    p_SRWLock = &v11;
    v4 = 1;
  }
  else
  {
    SRWLock = 0LL;
    p_SRWLock = &SRWLock;
    v4 = 2;
  }
  v5 = *p_SRWLock;
  *p_SRWLock = 0LL;
  *a2 = v5;
  if ( (v4 & 2) != 0 )
  {
    v4 &= ~2u;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  if ( (v4 & 1) != 0 && v11 )
    ReleaseSRWLockExclusive(v11);
  return a2;
}
