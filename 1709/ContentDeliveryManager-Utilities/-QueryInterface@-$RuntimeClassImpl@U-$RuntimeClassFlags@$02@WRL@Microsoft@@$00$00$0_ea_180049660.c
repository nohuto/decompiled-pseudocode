/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINotificationActivationCallback@@VICDPActivityPublishCallback@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180049660
 * Callers:
 *     _lambda_ff70887c7dc239c1b1c39abf69cf1ecd_::operator() @ 0x180049258 (_lambda_ff70887c7dc239c1b1c39abf69cf1ecd_--operator().c)
 *     ??$MakeAndInitialize@VActivityToastNotificationCallback@ToastNotification@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18004BC90 (--$MakeAndInitialize@VActivityToastNotificationCallback@ToastNotification@@UIUnknown@@$$V@Detail.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINotificationActivationCallback@@VICDPActivityPublishCallback@@@Details@WRL@Microsoft@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004C5D0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_18004C5D0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINotificationActivationCallback@@VICDPActivityPublishCallback@@@Details@WRL@Microsoft@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004C600 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_18004C600.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINotificationActivationCallback@@VICDPActivityPublishCallback@@@Details@WRL@Microsoft@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004C640 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_18004C640.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINotificationActivationCallback@@VICDPActivityPublishCallback@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004C680 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_18004C680.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180003CF4 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,INotificationActivationCallback,ICDPActivityPublishCallback>::QueryInterface(
        __int64 a1,
        __int64 a2,
        void **a3)
{
  unsigned int v3; // ebx
  int v4; // edi
  _DWORD *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx

  v3 = 0;
  *a3 = 0LL;
  if ( !*(_DWORD *)a2
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    goto LABEL_9;
  }
  if ( *(_DWORD *)a2 != -1350114592 )
    goto LABEL_15;
  if ( *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
    || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
    || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
  {
    if ( *(_DWORD *)a2 == -1350114592
      && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
    {
      *a3 = (void *)a1;
      v4 = 0;
      goto LABEL_33;
    }
LABEL_15:
    if ( (int)Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(a1 + 8), (const struct _GUID *)a2, a3) < 0 )
    {
      v7 = v6 + 40;
      if ( *v5 == 56
        && v5[1] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
        && v5[2] == *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
        && v5[3] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4]
        || (v7 += 8LL, *v5 == 1407391799)
        && v5[1] == *(_DWORD *)&GUID_53e31837_6600_4a81_9395_75cffe746f94.Data2
        && v5[2] == *(_DWORD *)GUID_53e31837_6600_4a81_9395_75cffe746f94.Data4
        && v5[3] == *(_DWORD *)&GUID_53e31837_6600_4a81_9395_75cffe746f94.Data4[4] )
      {
        *a3 = (void *)v7;
      }
      else
      {
        if ( *v5 != 748686870
          || v5[1] != *(_DWORD *)&GUID_2ca00e16_9460_4359_8491_cb98b6b53c0a.Data2
          || v5[2] != *(_DWORD *)GUID_2ca00e16_9460_4359_8491_cb98b6b53c0a.Data4
          || v5[3] != *(_DWORD *)&GUID_2ca00e16_9460_4359_8491_cb98b6b53c0a.Data4[4] )
        {
          v4 = -2147467262;
LABEL_32:
          if ( v4 < 0 )
            return (unsigned int)v4;
LABEL_33:
          (*(void (__fastcall **)(void *))(*(_QWORD *)*a3 + 8LL))(*a3);
          return (unsigned int)v4;
        }
        *a3 = (void *)(v7 + 8);
      }
    }
    v4 = 0;
    goto LABEL_32;
  }
LABEL_9:
  *a3 = (void *)a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
