/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@VNil@Details@23@UIHapticsTimerProvider@SpatialInteractionDevices@@UIWeakReferenceSource@@UITimerElapsedHandler@Threading@System@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800C77E8
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIHapticsTimerProvider@SpatialInteractionDevices@@UITimerElapsedHandler@Threading@System@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C7110 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIHapticsTi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,Microsoft::WRL::Details::Nil,SpatialInteractionDevices::IHapticsTimerProvider,IWeakReferenceSource,Windows::System::Threading::ITimerElapsedHandler,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v4; // rcx
  signed int v5; // eax
  int v6; // eax

  if ( *a2 == 694223755
    && a2[1] == *(_DWORD *)&GUID_2961038b_b15c_4430_90c9_29048094d5ef.Data2
    && a2[2] == *(_DWORD *)GUID_2961038b_b15c_4430_90c9_29048094d5ef.Data4
    && a2[3] == *(_DWORD *)&GUID_2961038b_b15c_4430_90c9_29048094d5ef.Data4[4]
    || (a1 += 8LL, *a2 == 56)
    && a2[1] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4]
    || (a1 += 8LL, *a2 == -89217433)
    && a2[1] == *(_DWORD *)&GUID_faaea667_fbeb_49cb_adb2_71184c556e43.Data2
    && a2[2] == *(_DWORD *)GUID_faaea667_fbeb_49cb_adb2_71184c556e43.Data4
    && a2[3] == *(_DWORD *)&GUID_faaea667_fbeb_49cb_adb2_71184c556e43.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  else
  {
    v4 = a1 + 8;
    if ( *a2 == -1796592748
      && a2[1] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
      && a2[2] == *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
      && a2[3] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4] )
    {
      *a3 = v4;
      v5 = 0;
    }
    else
    {
      if ( *a2 == 3
        && a2[1] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
        && a2[2] == *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
        && a2[3] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4] )
      {
        v6 = 1;
        *a3 = v4;
      }
      else
      {
        v6 = 0;
      }
      v5 = v6 == 0 ? 0x80004002 : 0;
    }
    return (v5 >> 31) & 0x80004002;
  }
}
