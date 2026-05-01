/*
 * XREFs of ?QueryInterface@CLaunchActivatedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800278D0
 * Callers:
 *     ?QueryInterface@CLaunchActivatedEventArgs@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B0620 (-QueryInterface@CLaunchActivatedEventArgs@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B0630 (-QueryInterface@CLaunchActivatedEventArgs@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B0640 (-QueryInterface@CLaunchActivatedEventArgs@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B0650 (-QueryInterface@CLaunchActivatedEventArgs@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B0660 (-QueryInterface@CLaunchActivatedEventArgs@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B0670 (-QueryInterface@CLaunchActivatedEventArgs@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WII@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B0680 (-QueryInterface@CLaunchActivatedEventArgs@@WII@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WLI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B0690 (-QueryInterface@CLaunchActivatedEventArgs@@WLI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WMI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B06A0 (-QueryInterface@CLaunchActivatedEventArgs@@WMI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WNA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B06B0 (-QueryInterface@CLaunchActivatedEventArgs@@WNA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WNI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B06C0 (-QueryInterface@CLaunchActivatedEventArgs@@WNI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00U?$CloakedIid@UIInitializeActivatedEventArgs@Activation@ApplicationModel@Windows@@@23@U?$CloakedIid@UIActivatedEventArgsInternal@Activation@ApplicationModel@Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180026550 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00U-$CloakedIid@UIInitial.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCActivatedEventArgsWithPrelaunchAndViewIdBase@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@@UILaunchActivatedEventArgs2@678@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800277D0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCActivatedEventArg.c)
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLaunchActivatedEventArgs::QueryInterface(
        CLaunchActivatedEventArgs *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v4; // rcx
  _QWORD *v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 *v8; // r8
  _DWORD *v9; // r11
  __int64 v10; // r9
  int CanCastTo; // ebx
  char *v12; // rdi
  char *v13; // rdi
  __int64 v15; // rcx
  char *v16; // rax

  *a3 = 0LL;
  if ( !(unsigned int)InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    && !(unsigned int)InlineIsEqualGUID(v4, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    if ( (unsigned int)InlineIsEqualGUID(v6, &GUID_cf651713_cd08_4fd8_b697_a281b6544e2e) )
    {
      *v8 = (__int64)this;
    }
    else
    {
      if ( (unsigned int)InlineIsEqualGUID(v7, &GUID_1cf09b9e_9962_4936_80ff_afc8e8ae5c8c) )
      {
        *v8 = v10;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs>,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IActivatedEventArgsInternal>,Microsoft::WRL::FtmBase>::CanCastTo(
                      v10 + 8,
                      v9,
                      v8);
      }
      if ( CanCastTo != -2147467262 )
      {
LABEL_19:
        if ( CanCastTo < 0 )
          return (unsigned int)CanCastTo;
        goto LABEL_21;
      }
      if ( *v9 == -1827868853
        && v9[1] == *(_DWORD *)&GUID_930cef4b_b829_40fc_88f4_8513e8a64738.Data2
        && v9[2] == *(_DWORD *)GUID_930cef4b_b829_40fc_88f4_8513e8a64738.Data4
        && v9[3] == *(_DWORD *)&GUID_930cef4b_b829_40fc_88f4_8513e8a64738.Data4[4] )
      {
        *v8 = (__int64)this + 120;
        CanCastTo = 0;
        goto LABEL_14;
      }
      if ( *v9 == 871532710
        && v9[1] == *(_DWORD *)&GUID_33f288a6_5c2c_4d27_bac7_7536088f1219.Data2
        && v9[2] == *(_DWORD *)GUID_33f288a6_5c2c_4d27_bac7_7536088f1219.Data4
        && v9[3] == *(_DWORD *)&GUID_33f288a6_5c2c_4d27_bac7_7536088f1219.Data4[4] )
      {
        *v8 = (__int64)this + 128;
      }
      else
      {
        if ( *v9 != 2091404550
          || v9[1] != *(_DWORD *)&GUID_7ca84d06_f54c_4ba8_bd6f_9abaf9380d51.Data2
          || v9[2] != *(_DWORD *)GUID_7ca84d06_f54c_4ba8_bd6f_9abaf9380d51.Data4
          || v9[3] != *(_DWORD *)&GUID_7ca84d06_f54c_4ba8_bd6f_9abaf9380d51.Data4[4] )
        {
          CanCastTo = -2147467262;
LABEL_11:
          if ( CanCastTo != -2147467262 )
            goto LABEL_19;
          if ( *v9 == 205812091
            && v9[1] == *(_DWORD *)&GUID_0c44717b_19f7_48d6_b046_cf22826eaa74.Data2
            && v9[2] == *(_DWORD *)GUID_0c44717b_19f7_48d6_b046_cf22826eaa74.Data4
            && v9[3] == *(_DWORD *)&GUID_0c44717b_19f7_48d6_b046_cf22826eaa74.Data4[4] )
          {
            v16 = (char *)this + 184;
            goto LABEL_51;
          }
          CanCastTo = -2147467262;
LABEL_14:
          if ( CanCastTo != -2147467262 )
            goto LABEL_19;
          v12 = (char *)this + 200;
          if ( *v9 == 56
            && v9[1] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
            && v9[2] == *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
            && v9[3] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
          {
            *v8 = (__int64)v12;
            CanCastTo = 0;
LABEL_21:
            v15 = *v8;
            if ( *(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v8 + 8LL) == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,CActivatedEventArgsWithPrelaunchAndViewIdBase,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2>::AddRef )
              Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,CActivatedEventArgsWithPrelaunchAndViewIdBase,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2>::AddRef(v15);
            else
              (*(void (__fastcall **)(__int64))(*(_QWORD *)*v8 + 8LL))(v15);
            return (unsigned int)CanCastTo;
          }
          v13 = v12 + 8;
          if ( *v9 == -70697434
            && v9[1] == *(_DWORD *)&GUID_fbc93e26_a14a_4b4f_82b0_33bed920af52.Data2
            && v9[2] == *(_DWORD *)GUID_fbc93e26_a14a_4b4f_82b0_33bed920af52.Data4
            && v9[3] == *(_DWORD *)&GUID_fbc93e26_a14a_4b4f_82b0_33bed920af52.Data4[4] )
          {
            *v8 = (__int64)v13;
LABEL_37:
            CanCastTo = 0;
            goto LABEL_19;
          }
          if ( *v9 != 265518780
            || v9[1] != *(_DWORD *)&GUID_0fd37ebc_9dc9_46b5_9ace_bd95d4565345.Data2
            || v9[2] != *(_DWORD *)GUID_0fd37ebc_9dc9_46b5_9ace_bd95d4565345.Data4
            || v9[3] != *(_DWORD *)&GUID_0fd37ebc_9dc9_46b5_9ace_bd95d4565345.Data4[4] )
          {
            CanCastTo = -2147467262;
            goto LABEL_19;
          }
          v16 = v13 + 8;
LABEL_51:
          *v8 = (__int64)v16;
          goto LABEL_37;
        }
        *v8 = (__int64)this + 136;
      }
    }
    CanCastTo = 0;
    goto LABEL_11;
  }
  *v5 = this;
  if ( *(__int64 (__fastcall **)(__int64))(*(_QWORD *)this + 8LL) == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,CActivatedEventArgsWithPrelaunchAndViewIdBase,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2>::AddRef )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,CActivatedEventArgsWithPrelaunchAndViewIdBase,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2>::AddRef((__int64)this);
  else
    (*(void (__fastcall **)(CLaunchActivatedEventArgs *))(*(_QWORD *)this + 8LL))(this);
  return 0;
}
