/*
 * XREFs of ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1800245AC
 * Callers:
 *     ?RuntimeClassInitialize@CApplicationManager@@QEAAJXZ @ 0x180010124 (-RuntimeClassInitialize@CApplicationManager@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@CImmersiveWindowManager@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x18002FB6C (-RuntimeClassInitialize@CImmersiveWindowManager@@QEAAJPEAUIIAMServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CApplicationViewManager@@QEAAJXZ @ 0x180074360 (-RuntimeClassInitialize@CApplicationViewManager@@QEAAJXZ.c)
 *     ??$MakeAndInitialize@VRemoteLauncherForegroundHandler@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800DDFD4 (--$MakeAndInitialize@VRemoteLauncherForegroundHandler@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJ.c)
 *     ??$MakeAndInitialize@VLockScreenDirectorServiceProviderImpl@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800E32E4 (--$MakeAndInitialize@VLockScreenDirectorServiceProviderImpl@@UIUnknown@@$$V@Details@WRL@Microsof.c)
 *     ?RuntimeClassInitialize@TaskFlowImmersiveShellBroker@@QEAAJXZ @ 0x1800F6FC8 (-RuntimeClassInitialize@TaskFlowImmersiveShellBroker@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@HolographicPositioner@@QEAAJXZ @ 0x1800FAAA4 (-RuntimeClassInitialize@HolographicPositioner@@QEAAJXZ.c)
 *     ??$MakeAndInitialize@VPeoplePaneViewManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801178AC (--$MakeAndInitialize@VPeoplePaneViewManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUn.c)
 *     ?RuntimeClassInitialize@ViewEventDispatcher@@QEAAJXZ @ 0x18011C054 (-RuntimeClassInitialize@ViewEventDispatcher@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@XamlExplorerHostShellComponent@@QEAAJXZ @ 0x180146318 (-RuntimeClassInitialize@XamlExplorerHostShellComponent@@QEAAJXZ.c)
 *     ?CreateInstance@TouchKeyboardExperienceManagerCF@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18019DBD0 (-CreateInstance@TouchKeyboardExperienceManagerCF@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?RuntimeClassInitialize@AccessibilityExperienceManager@@QEAAJXZ @ 0x1801B0154 (-RuntimeClassInitialize@AccessibilityExperienceManager@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@VirtualDesktopDataSourceComponent@@QEAAJXZ @ 0x1801B3AB8 (-RuntimeClassInitialize@VirtualDesktopDataSourceComponent@@QEAAJXZ.c)
 * Callees:
 *     ?Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z @ 0x180024508 (-Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveShellComponent::RegisterServiceInformation(
        CImmersiveShellComponent *this,
        __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int128 v3; // rax
  __int64 v4; // r9
  unsigned int v5; // r15d
  unsigned int v6; // esi
  __int64 v7; // rbp
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // r10
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // kr00_8
  void *v16; // [rsp+78h] [rbp+20h] BYREF

  *((_QWORD *)&v3 + 1) = a2;
  v4 = 0LL;
  v5 = a3;
  v6 = 0;
  v7 = *((_QWORD *)&v3 + 1);
  while ( v6 < v5 )
  {
    v9 = 32LL * v6;
    v10 = *(_QWORD *)(v9 + v7 + 16);
    if ( v10 )
      (*(void (__fastcall **)(__int64, _QWORD, unsigned __int64, __int64))(*(_QWORD *)v10 + 8LL))(
        v10,
        *((_QWORD *)&v3 + 1),
        a3,
        v4);
    v11 = *((_QWORD *)this + 4);
    v4 = 0LL;
    a3 = *((_QWORD *)this + 6);
    if ( v11 != a3 )
    {
LABEL_18:
      ++*((_QWORD *)this + 4);
      *((_QWORD *)&v3 + 1) = 32LL * *((_QWORD *)this + 4) + *((_QWORD *)this + 3) - 32LL;
      if ( *((_QWORD *)&v3 + 1) )
      {
        **((_OWORD **)&v3 + 1) = *(_OWORD *)(v9 + v7);
        *(_OWORD *)(*((_QWORD *)&v3 + 1) + 16LL) = *(_OWORD *)(v9 + v7 + 16);
      }
      goto LABEL_20;
    }
    v12 = v11 + 1;
    v4 = 2147942522LL;
    if ( v12 <= 0xFFFFFFFE )
    {
      v4 = 0LL;
      if ( v12 > a3 )
      {
        v3 = a3 * (unsigned __int128)2u;
        if ( !is_mul_ok(a3, 2uLL) )
        {
          v4 = 2147942934LL;
          goto LABEL_20;
        }
        v13 = a3 + 4096;
        if ( a3 <= 0x1000 )
          v13 = 2 * a3;
        if ( v12 > v13 )
          v13 = v12;
        if ( v13 > 0xFFFFFFFE )
          v13 = 4294967294LL;
        v16 = 0LL;
        v14 = (unsigned int)(DWORD2(v3) + 32);
        v3 = v13 * (unsigned __int128)(unsigned int)(DWORD2(v3) + 32);
        if ( is_mul_ok(v13, v14) )
        {
          LODWORD(v3) = CTCoAllocPolicy::Realloc((IMalloc *)&v16, *((__int64 *)&v3 + 1), *((void **)this + 3), v3, &v16);
          v4 = (unsigned int)v3;
          if ( (v3 & 0x80000000) == 0LL )
          {
            *((_QWORD *)this + 3) = v16;
            *((_QWORD *)this + 6) = v13;
          }
        }
        else
        {
          v4 = 2147942934LL;
        }
      }
    }
    if ( (int)v4 >= 0 )
      goto LABEL_18;
LABEL_20:
    ++v6;
    if ( (int)v4 < 0 )
      return (unsigned int)v4;
  }
  return (unsigned int)v4;
}
