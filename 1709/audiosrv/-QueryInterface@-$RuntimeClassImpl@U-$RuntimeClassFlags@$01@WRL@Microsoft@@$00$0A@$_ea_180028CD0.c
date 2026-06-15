/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioDevicePropertyReader@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180028CD0
 * Callers:
 *     ?GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ @ 0x180020C30 (-GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioDevicePropertyReader@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180037440 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180037440.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BFE68 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioDevicePropertyReader,Microsoft::WRL::FtmBase>::QueryInterface(
        __int64 a1,
        __int64 a2,
        void **a3)
{
  unsigned int v3; // ebx
  int v4; // edi

  v3 = 0;
  *a3 = 0LL;
  if ( !*(_DWORD *)a2
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = (void *)a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    return v3;
  }
  if ( *(_DWORD *)a2 == -538486513
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_dfe7590f_ea77_4947_ace8_25b8f512a67d.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_dfe7590f_ea77_4947_ace8_25b8f512a67d.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_dfe7590f_ea77_4947_ace8_25b8f512a67d.Data4[4] )
  {
    *a3 = (void *)a1;
    v4 = 0;
  }
  else
  {
    v4 = -2147467262;
    if ( Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(a1 + 8), (const struct _GUID *)a2, a3) >= 0 )
      v4 = 0;
    if ( v4 < 0 )
      return (unsigned int)v4;
  }
  (*(void (__fastcall **)(void *))(*(_QWORD *)*a3 + 8LL))(*a3);
  return (unsigned int)v4;
}
