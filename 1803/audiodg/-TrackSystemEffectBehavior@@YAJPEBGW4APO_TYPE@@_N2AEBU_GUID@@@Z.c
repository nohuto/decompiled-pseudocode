/*
 * XREFs of ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z @ 0x1400066A0
 * Callers:
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140005A10 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     ?ActivateAPOs@CPipeInstance@@AEAAJ_K@Z @ 0x140009AE0 (-ActivateAPOs@CPipeInstance@@AEAAJ_K@Z.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000B540 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x14000C180 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     wil::details::lambda_call__lambda_7837f7cfd7c877335cf5633aac3a7daf___::_lambda_call__lambda_7837f7cfd7c877335cf5633aac3a7daf___ @ 0x14003029C (wil--details--lambda_call__lambda_7837f7cfd7c877335cf5633aac3a7daf___--_lambda_call__lambda_7837.c)
 *     ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z @ 0x14004643C (-APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z.c)
 * Callees:
 *     ?TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@_N2AEBU_GUID@@@Z @ 0x1400067A0 (-TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@_N2AEBU_GUID@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TrackSystemEffectBehavior(
        __int64 a1,
        unsigned int a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        __int64 a5)
{
  HRESULT Instance; // ebx
  LPVOID ppv[3]; // [rsp+30h] [rbp-18h] BYREF

  ppv[1] = (LPVOID)-2LL;
  Instance = 0;
  ppv[0] = 0LL;
  a5 = 0LL;
  if ( (unsigned int)GetClassFromEndpointId() != 3 )
  {
    Instance = CoCreateInstance(
                 &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                 0LL,
                 0x17u,
                 &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                 ppv);
    if ( Instance >= 0 )
    {
      Instance = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64 *))(*(_QWORD *)ppv[0] + 40LL))(ppv[0], a1, &a5);
      if ( Instance >= 0 )
        Instance = TrackSystemEffectBehavior(a5, a2, a3, a4);
    }
  }
  if ( a5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a5 + 16LL))(a5);
  if ( ppv[0] )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv[0] + 16LL))(ppv[0]);
  return (unsigned int)Instance;
}
