/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDisplayBinding@@UIInputDisplay@@UIPropertyChangedListener@Input@@UIInputDisplayOrientationListener@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001E160
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDisplayBinding@@UIInputDisplay@@UIPropertyChangedListener@Input@@UIInputDisplayOrientationListener@@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180020420 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180020420.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDisplayBinding@@UIInputDisplay@@UIPropertyChangedListener@Input@@UIInputDisplayOrientationListener@@@Details@WRL@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800204A0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800204A0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDisplayBinding@@UIInputDisplay@@UIPropertyChangedListener@Input@@UIInputDisplayOrientationListener@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800205C0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800205C0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IDisplayBinding,IInputDisplay,Input::IPropertyChangedListener,IInputDisplayOrientationListener>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  int v4; // edi
  __int64 v5; // rcx

  v3 = 0;
  *a3 = 0LL;
  if ( *a2
    || a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    if ( *a2 == -243691530
      && a2[1] == *(_DWORD *)&GUID_f1798ff6_a596_4193_b735_afad9d3d8348.Data2
      && a2[2] == *(_DWORD *)GUID_f1798ff6_a596_4193_b735_afad9d3d8348.Data4
      && a2[3] == *(_DWORD *)&GUID_f1798ff6_a596_4193_b735_afad9d3d8348.Data4[4] )
    {
      *a3 = a1;
      v4 = 0;
      goto LABEL_28;
    }
    v5 = a1 + 8;
    if ( *a2 == 982681041
      && a2[1] == *(_DWORD *)&GUID_3a9285d1_c1ae_4ebb_9422_bf3257847754.Data2
      && a2[2] == *(_DWORD *)GUID_3a9285d1_c1ae_4ebb_9422_bf3257847754.Data4
      && a2[3] == *(_DWORD *)&GUID_3a9285d1_c1ae_4ebb_9422_bf3257847754.Data4[4]
      || (v5 += 8LL, *a2 == -111829527)
      && a2[1] == *(_DWORD *)&GUID_f9559de9_2964_497f_a4b8_c6a332fb4356.Data2
      && a2[2] == *(_DWORD *)GUID_f9559de9_2964_497f_a4b8_c6a332fb4356.Data4
      && a2[3] == *(_DWORD *)&GUID_f9559de9_2964_497f_a4b8_c6a332fb4356.Data4[4] )
    {
      *a3 = v5;
    }
    else
    {
      if ( *a2 != -585894354
        || a2[1] != *(_DWORD *)&GUID_dd13f62e_ce97_4472_8332_b9b519f13e07.Data2
        || a2[2] != *(_DWORD *)GUID_dd13f62e_ce97_4472_8332_b9b519f13e07.Data4
        || a2[3] != *(_DWORD *)&GUID_dd13f62e_ce97_4472_8332_b9b519f13e07.Data4[4] )
      {
        v4 = -2147467262;
LABEL_27:
        if ( v4 < 0 )
          return (unsigned int)v4;
LABEL_28:
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
        return (unsigned int)v4;
      }
      *a3 = v5 + 8;
    }
    v4 = 0;
    goto LABEL_27;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
