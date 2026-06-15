/*
 * XREFs of ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x18000A978
 * Callers:
 *     ?Copy@CAppAudioSessionId@@QEAAJAEBV1@@Z @ 0x180009D40 (-Copy@CAppAudioSessionId@@QEAAJAEBV1@@Z.c)
 *     ??0CSid@ATL@@QEAA@AEBV01@@Z @ 0x18000A6C4 (--0CSid@ATL@@QEAA@AEBV01@@Z.c)
 *     ?Copy@CAudioEndpointId@@QEAAJAEBV1@@Z @ 0x1800164CC (-Copy@CAudioEndpointId@@QEAAJAEBV1@@Z.c)
 *     ??0CAudioSessionInstanceId@@QEAA@AEBV0@@Z @ 0x180031AF0 (--0CAudioSessionInstanceId@@QEAA@AEBV0@@Z.c)
 *     ?Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z @ 0x180031D94 (-Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z.c)
 *     ?GetApplicationDefaultEndpoint@CPolicyConfig@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAPEAG@Z @ 0x180035EA0 (-GetApplicationDefaultEndpoint@CPolicyConfig@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0.c)
 *     ?Mid@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@HH@Z @ 0x1800AB334 (-Mid@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@HH@Z.c)
 *     ?ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z @ 0x1800ABD70 (-ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x1800B6DB8 (-Initialize@CAppAudioSessionId@@QEAAJPEBG@Z.c)
 *     ?Initialize@CAppInstanceId@@QEAAJPEBG@Z @ 0x1800B72F4 (-Initialize@CAppInstanceId@@QEAAJPEBG@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x1800B768C (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x1800B7A50 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 * Callees:
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     _invalid_parameter_noinfo @ 0x180061852 (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800657AF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x18009E954 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 */

__int64 __fastcall ATL::CSimpleStringT<unsigned short,0>::CloneData(__int64 a1)
{
  ATL::CAtlStringMgr *v1; // r9
  struct ATL::IAtlStringMgr *(__fastcall *v3)(ATL::CAtlStringMgr *__hidden); // rax
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r9
  void *v9; // rcx
  size_t v10; // r8

  v1 = *(ATL::CAtlStringMgr **)a1;
  v3 = *(struct ATL::IAtlStringMgr *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(**(_QWORD **)a1 + 32LL);
  if ( v3 != ATL::CAtlStringMgr::Clone )
    v1 = v3(v1);
  if ( *(int *)(a1 + 16) >= 0 && v1 == *(ATL::CAtlStringMgr **)a1 )
  {
    v4 = a1;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 16));
  }
  else
  {
    v6 = (**(__int64 (__fastcall ***)(ATL::CAtlStringMgr *, _QWORD, __int64))v1)(v1, *(unsigned int *)(a1 + 8), 2LL);
    v4 = v6;
    if ( !v6 )
      ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
    *(_DWORD *)(v6 + 8) = *(_DWORD *)(a1 + 8);
    v9 = (void *)(v6 + 24);
    v10 = 2LL * (*(_DWORD *)(a1 + 8) + 1);
    if ( v10 )
    {
      if ( v6 != -24 )
      {
        if ( a1 != -24 )
        {
          memcpy_0(v9, (const void *)(a1 + 24), v10);
          return v4;
        }
        memset_0(v9, 0, v10);
      }
      *(_DWORD *)_o__errno(v9, v7, v10, v8) = 22;
      invalid_parameter_noinfo();
    }
  }
  return v4;
}
