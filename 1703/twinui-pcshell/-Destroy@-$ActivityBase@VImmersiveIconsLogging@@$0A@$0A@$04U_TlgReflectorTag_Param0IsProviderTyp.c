/*
 * XREFs of ?Destroy@?$ActivityBase@VImmersiveIconsLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18017EC30
 * Callers:
 *     ?LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00I_NPEBGPEAPEAUHBITMAP__@@@Z @ 0x18017EA78 (-LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00I_NPEBGPEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18002620C (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?StopActivity@LoadIconW@ImmersiveIconsLoggingTelemetry@@MEAAXXZ @ 0x18017D270 (-StopActivity@LoadIconW@ImmersiveIconsLoggingTelemetry@@MEAAXXZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VImmersiveIconsLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VImmersiveIconsLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18017F1D0 (-reset@-$shared_object@V-$ActivityData@VImmersiveIconsLogging@@U_TlgReflectorTag_Param0IsProvide.c)
 *     ?LockExclusive@?$ActivityBase@VImmersiveIconsLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18017F26C (-LockExclusive@-$ActivityBase@VImmersiveIconsLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvi.c)
 */

void __fastcall wil::ActivityBase<ImmersiveIconsLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(
        ImmersiveIconsLoggingTelemetry::LoadIconW *this)
{
  _QWORD *v1; // rdi
  char v3; // si
  _DWORD *v4; // rdx
  int v5; // eax
  int v6; // r8d
  RTL_SRWLOCK *v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (_QWORD *)((char *)this + 304);
  v3 = 1;
  if ( !*((_QWORD *)this + 38) )
    goto LABEL_6;
  wil::ActivityBase<ImmersiveIconsLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(this, v7);
  if ( !*v1 || *(_DWORD *)*v1 != 1 )
  {
    v3 = 0;
    wil::details::shared_object<wil::ActivityBase<ImmersiveIconsLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ImmersiveIconsLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v1);
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(v7);
  if ( v3 )
  {
LABEL_6:
    v4 = (_DWORD *)*((_QWORD *)this + 6);
    if ( *v4 == 1 )
    {
      v5 = -2147024322;
      v6 = v4[18];
      if ( (int)v4[21] < 0 )
        v5 = v4[21];
      if ( v6 < 1 )
        __fastfail(7u);
      if ( (int)v4[19] >= 0 )
        v4[19] = v5;
      v4[18] = v6 - 1;
      ImmersiveIconsLoggingTelemetry::LoadIconW::StopActivity(this);
    }
  }
}
