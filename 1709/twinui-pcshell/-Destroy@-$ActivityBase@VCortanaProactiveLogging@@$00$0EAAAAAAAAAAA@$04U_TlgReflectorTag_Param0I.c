/*
 * XREFs of ?Destroy@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800A6988
 * Callers:
 *     ?Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1800A0B90 (-Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@.c)
 *     ??1CortanaExperienceManager_Hide@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1800D361C (--1CortanaExperienceManager_Hide@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ??1CortanaExperienceManager_Dismiss@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1800D3B0C (--1CortanaExperienceManager_Dismiss@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ?Hide@CortanaDesktopExperienceView@@UEAAJXZ @ 0x1800D4DC0 (-Hide@CortanaDesktopExperienceView@@UEAAJXZ.c)
 *     ?MinimizeToBoxMode@CortanaDesktopExperienceView@@UEAAJXZ @ 0x1800D4F20 (-MinimizeToBoxMode@CortanaDesktopExperienceView@@UEAAJXZ.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180020D80 (-LockExclusive@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflecto.c)
 *     ??1?$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18009FEF4 (--1-$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityB.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(
        _QWORD *a1)
{
  char v2; // si
  volatile signed __int32 *v3; // rax
  void *v4; // rdi
  _DWORD *v5; // rdx
  int v6; // eax
  int v7; // r8d
  PSRWLOCK SRWLock; // [rsp+20h] [rbp-18h] BYREF

  v2 = 1;
  if ( !a1[38] )
    goto LABEL_12;
  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)a1,
    &SRWLock);
  v3 = (volatile signed __int32 *)a1[38];
  if ( !v3 || *v3 != 1 )
  {
    v2 = 0;
    if ( v3 )
    {
      if ( _InterlockedExchangeAdd(v3, 0xFFFFFFFF) == 1 )
      {
        v4 = (void *)a1[38];
        if ( v4 )
        {
          wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CortanaProactiveLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CortanaProactiveLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)v4 + 8);
          operator delete(v4);
        }
      }
      a1[38] = 0LL;
    }
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v2 )
  {
LABEL_12:
    v5 = (_DWORD *)a1[6];
    if ( *v5 == 1 )
    {
      v6 = -2147024322;
      v7 = v5[18];
      if ( (int)v5[21] < 0 )
        v6 = v5[21];
      if ( v7 < 1 )
        __fastfail(7u);
      if ( (int)v5[19] >= 0 )
        v5[19] = v6;
      v5[18] = v7 - 1;
      (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
    }
  }
}
