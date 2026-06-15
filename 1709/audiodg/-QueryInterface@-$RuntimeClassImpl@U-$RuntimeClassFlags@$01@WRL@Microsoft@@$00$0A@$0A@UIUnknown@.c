/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@UIAudioStreamingResourceRegistration@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400023D0
 * Callers:
 *     ?CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140002278 (-CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@UIAudioStreamingResourceRegistration@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001E7F0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_14001E7F0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown,IAudioStreamingResourceRegistration>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        __int64 *a3)
{
  unsigned int v3; // ebx
  int v4; // eax

  v3 = 0;
  *a3 = 0LL;
  if ( !*a2 )
  {
    if ( a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
      && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
      && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
    {
      *a3 = a1;
      goto LABEL_9;
    }
    if ( a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
      && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
      && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
    {
      *a3 = a1;
LABEL_8:
      a1 = *a3;
LABEL_9:
      (*(void (__fastcall **)(__int64, _DWORD *, __int64 *, _QWORD))(*(_QWORD *)a1 + 8LL))(
        a1,
        a2,
        a3,
        *(unsigned int *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4]);
      return v3;
    }
  }
  if ( *a2 == -1099282551
    && a2[1] == *(_DWORD *)&GUID_be7a4789_2891_49b3_923e_dc97de058472.Data2
    && a2[2] == *(_DWORD *)GUID_be7a4789_2891_49b3_923e_dc97de058472.Data4
    && a2[3] == *(_DWORD *)&GUID_be7a4789_2891_49b3_923e_dc97de058472.Data4[4] )
  {
    *a3 = a1 + 8;
    v4 = 0;
  }
  else
  {
    v4 = -2147467262;
  }
  v3 = v4;
  if ( v4 >= 0 )
    goto LABEL_8;
  return v3;
}
