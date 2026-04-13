/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIActionHelper@ContentManagement@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180012D40
 * Callers:
 *     ?QueryInterface@ActionHelper@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180011500 (-QueryInterface@ActionHelper@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIActionHelper@ContentManagement@@@Details@WRL@Microsoft@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180021690 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_180021690.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIActionHelper@ContentManagement@@@Details@WRL@Microsoft@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800219F0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1800219F0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIActionHelper@ContentManagement@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180021FB0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_180021FB0.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180003CF4 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IActionHelper>::QueryInterface(
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
      goto LABEL_29;
    }
LABEL_15:
    if ( (int)Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(a1 + 8), (const struct _GUID *)a2, a3) < 0 )
    {
      v7 = v6 + 40;
      if ( *v5 == 56
        && v5[1] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
        && v5[2] == *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
        && v5[3] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
      {
        *a3 = (void *)v7;
      }
      else
      {
        if ( *v5 != 1038449541
          || v5[1] != *(_DWORD *)&GUID_3de57b85_d574_488b_9d07_81cd7c7e49df.Data2
          || v5[2] != *(_DWORD *)GUID_3de57b85_d574_488b_9d07_81cd7c7e49df.Data4
          || v5[3] != *(_DWORD *)&GUID_3de57b85_d574_488b_9d07_81cd7c7e49df.Data4[4] )
        {
          v4 = -2147467262;
LABEL_28:
          if ( v4 < 0 )
            return (unsigned int)v4;
LABEL_29:
          (*(void (__fastcall **)(void *))(*(_QWORD *)*a3 + 8LL))(*a3);
          return (unsigned int)v4;
        }
        *a3 = (void *)(v7 + 8);
      }
    }
    v4 = 0;
    goto LABEL_28;
  }
LABEL_9:
  *a3 = (void *)a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
