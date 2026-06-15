/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioGraphCallback@@UIVolumeStrip@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180009BD0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioGraphCallback@@UIVolumeStrip@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180036BD0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180036BD0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioGraphCallback,IVolumeStrip>::QueryInterface(
        __int64 a1,
        int *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  int v4; // r9d
  int v5; // eax

  v3 = 0;
  *a3 = 0LL;
  v4 = *a2;
  if ( *(_QWORD *)a2 == __PAIR64__(*(unsigned int *)&GUID_00000000_0000_0000_c000_000000000046.Data2, 0)
    && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    return v3;
  }
  if ( v4 == 796074085
    && a2[1] == *(_DWORD *)&GUID_2f732065_eff0_4c7c_8fc1_363851b1f1d7.Data2
    && a2[2] == *(_DWORD *)GUID_2f732065_eff0_4c7c_8fc1_363851b1f1d7.Data4
    && a2[3] == *(_DWORD *)&GUID_2f732065_eff0_4c7c_8fc1_363851b1f1d7.Data4[4] )
  {
    *a3 = a1;
LABEL_11:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    return v3;
  }
  if ( v4 == -392938499
    && a2[1] == *(_DWORD *)&GUID_e8943bfd_2bad_423d_a751_bfe9c7d65646.Data2
    && a2[2] == *(_DWORD *)GUID_e8943bfd_2bad_423d_a751_bfe9c7d65646.Data4
    && a2[3] == *(_DWORD *)&GUID_e8943bfd_2bad_423d_a751_bfe9c7d65646.Data4[4] )
  {
    *a3 = a1 + 8;
    v5 = 0;
  }
  else
  {
    v5 = -2147467262;
  }
  v3 = v5;
  if ( v5 >= 0 )
    goto LABEL_11;
  return v3;
}
