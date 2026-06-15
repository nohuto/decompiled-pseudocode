/*
 * XREFs of ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x180023C18
 * Callers:
 *     ?Copy@CAppAudioSessionId@@QEAAJAEBV1@@Z @ 0x18001EE28 (-Copy@CAppAudioSessionId@@QEAAJAEBV1@@Z.c)
 *     ?GetApplicationDefaultEndpoint@CPolicyConfig@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAPEAG@Z @ 0x18001F4A0 (-GetApplicationDefaultEndpoint@CPolicyConfig@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 *     ??0CAudioSessionInstanceId@@QEAA@AEBV0@@Z @ 0x18001F8FC (--0CAudioSessionInstanceId@@QEAA@AEBV0@@Z.c)
 *     ?Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z @ 0x18001FB34 (-Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z.c)
 *     ?Copy@CAudioEndpointId@@QEAAJAEBV1@@Z @ 0x18002376C (-Copy@CAudioEndpointId@@QEAAJAEBV1@@Z.c)
 *     ??0CSid@ATL@@QEAA@AEBV01@@Z @ 0x180023974 (--0CSid@ATL@@QEAA@AEBV01@@Z.c)
 *     ?Mid@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@HH@Z @ 0x18008D9F4 (-Mid@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@HH@Z.c)
 *     ?ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z @ 0x18008E3A4 (-ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x1800973B4 (-Initialize@CAppAudioSessionId@@QEAAJPEBG@Z.c)
 *     ?Initialize@CAppInstanceId@@QEAAJPEBG@Z @ 0x1800978E0 (-Initialize@CAppInstanceId@@QEAAJPEBG@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x180097C70 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x18009802C (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x180049B5A (_invalid_parameter_noinfo.c)
 *     memset @ 0x180049B8A (memset.c)
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x1800822FC (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 */

__int64 __fastcall ATL::CSimpleStringT<unsigned short,0>::CloneData(__int64 a1)
{
  __int64 v2; // rcx
  __int64 (*v3)(void); // rax
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  void *v11; // rcx
  int v12; // eax
  size_t v13; // r8

  v2 = *(_QWORD *)a1;
  v3 = *(__int64 (**)(void))(*(_QWORD *)v2 + 32LL);
  if ( (char *)v3 != (char *)ATL::CAtlStringMgr::Clone )
    v2 = v3();
  if ( *(int *)(a1 + 16) >= 0 && v2 == *(_QWORD *)a1 )
  {
    v4 = a1;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 16));
  }
  else
  {
    v6 = (**(__int64 (__fastcall ***)(__int64, _QWORD, __int64))v2)(v2, *(unsigned int *)(a1 + 8), 2LL);
    v4 = v6;
    if ( !v6 )
      ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v8);
    *(_DWORD *)(v6 + 8) = *(_DWORD *)(a1 + 8);
    v11 = (void *)(v6 + 24);
    v12 = *(_DWORD *)(a1 + 8) + 1;
    if ( 2LL * v12 )
    {
      if ( v4 != -24 )
      {
        v13 = 2LL * v12;
        if ( a1 != -24 )
        {
          memcpy_0(v11, (const void *)(a1 + 24), v13);
          return v4;
        }
        memset(v11, 0, v13);
      }
      *(_DWORD *)_o__errno(v11, v7, v9, v10) = 22;
      invalid_parameter_noinfo();
    }
  }
  return v4;
}
