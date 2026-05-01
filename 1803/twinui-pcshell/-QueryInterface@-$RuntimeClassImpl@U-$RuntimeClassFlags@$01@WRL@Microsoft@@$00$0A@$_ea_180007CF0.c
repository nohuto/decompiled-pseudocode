/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindow@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180007CF0
 * Callers:
 *     ?_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@@Z @ 0x180005F80 (-_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@@Z.c)
 *     ?SetCloak@CClassicWindowManager@@UEAAJPEAUHWND__@@HW4_SET_CLOAK_OPTIONS@@@Z @ 0x180006680 (-SetCloak@CClassicWindowManager@@UEAAJPEAUHWND__@@HW4_SET_CLOAK_OPTIONS@@@Z.c)
 *     ?UpdateLastActivatedTime@CClassicWindowManager@@UEAAJPEAUHWND__@@@Z @ 0x1800067C0 (-UpdateLastActivatedTime@CClassicWindowManager@@UEAAJPEAUHWND__@@@Z.c)
 *     ?GetApplicationViewWindow@CClassicWindowManager@@UEAAPEAUHWND__@@PEAU2@@Z @ 0x1800068C0 (-GetApplicationViewWindow@CClassicWindowManager@@UEAAPEAUHWND__@@PEAU2@@Z.c)
 *     ?GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV?$CCoSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@@Z @ 0x180007480 (-GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV-$CCoSimpleArray@V-$ComPtr@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindow>::QueryInterface(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  *a3 = 0LL;
  if ( *(_QWORD *)a2 == __PAIR64__(*(unsigned int *)&GUID_00000000_0000_0000_c000_000000000046.Data2, 0)
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4]
    || *(_DWORD *)a2 == 1910177434
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee.Data4[4] )
  {
    *a3 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  }
  else
  {
    return (unsigned int)-2147467262;
  }
  return v3;
}
