/*
 * XREFs of ??4?$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x1800146FC
 * Callers:
 *     ?Copy@CAudioEndpointId@@QEAAJAEBV1@@Z @ 0x180013438 (-Copy@CAudioEndpointId@@QEAAJAEBV1@@Z.c)
 *     ?Copy@CAppAudioSessionId@@QEAAJAEBV1@@Z @ 0x1800141A8 (-Copy@CAppAudioSessionId@@QEAAJAEBV1@@Z.c)
 *     ?Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z @ 0x180017650 (-Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z.c)
 *     ?GetApplicationDefaultEndpoint@CPolicyConfig@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAPEAG@Z @ 0x180018040 (-GetApplicationDefaultEndpoint@CPolicyConfig@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0.c)
 *     ?ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z @ 0x1800742F4 (-ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x18007DFC4 (-Initialize@CAppAudioSessionId@@QEAAJPEBG@Z.c)
 *     ?Initialize@CAppInstanceId@@QEAAJPEBG@Z @ 0x18007E3F0 (-Initialize@CAppInstanceId@@QEAAJPEBG@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x18007E6CC (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x18007E9E0 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x1800147BC (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?Clone@CAtlStringMgr@ATL@@UEAAPEAUIAtlStringMgr@2@XZ @ 0x180018300 (-Clone@CAtlStringMgr@ATL@@UEAAPEAUIAtlStringMgr@2@XZ.c)
 *     _invalid_parameter_noinfo @ 0x180033A26 (_invalid_parameter_noinfo.c)
 *     memset @ 0x180033A5A (memset.c)
 *     memcpy_0 @ 0x180036B8F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x180063FAC (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 */

_QWORD *__fastcall ATL::CSimpleStringT<unsigned short,0>::operator=(_QWORD *a1, _QWORD *a2)
{
  unsigned int *v2; // rsi
  volatile signed __int32 *v4; // rdi
  __int64 v5; // rbx
  ATL::CAtlStringMgr *v6; // rcx
  __int64 (*v7)(void); // rax
  struct ATL::IAtlStringMgr *v8; // rax
  size_t v9; // r8
  _DWORD *v11; // r15
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  void *v15; // rcx

  v2 = (unsigned int *)*a2;
  v4 = (volatile signed __int32 *)(*a1 - 24LL);
  v5 = *a2 - 24LL;
  if ( (volatile signed __int32 *)v5 == v4 )
    return a1;
  if ( *((int *)v4 + 4) < 0 || (v6 = *(ATL::CAtlStringMgr **)v5, *(_QWORD *)v5 != *(_QWORD *)v4) )
  {
    ATL::CSimpleStringT<unsigned short,0>::SetString(a1, *a2, *(v2 - 4));
    return a1;
  }
  v7 = *(__int64 (**)(void))(*(_QWORD *)v6 + 32LL);
  if ( (char *)v7 == (char *)ATL::CAtlStringMgr::Clone )
    v8 = ATL::CAtlStringMgr::Clone(v6);
  else
    v8 = (struct ATL::IAtlStringMgr *)v7();
  if ( *(int *)(v5 + 16) < 0 || v8 != *(struct ATL::IAtlStringMgr **)v5 )
  {
    v11 = (_DWORD *)(v5 + 8);
    v12 = (**(__int64 (__fastcall ***)(struct ATL::IAtlStringMgr *, _QWORD, __int64))v8)(
            v8,
            *(unsigned int *)(v5 + 8),
            2LL);
    v5 = v12;
    if ( !v12 )
      ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v14, v13);
    v15 = (void *)(v12 + 24);
    *(_DWORD *)(v12 + 8) = *v11;
    v9 = 2LL * (*v11 + 1);
    if ( !v9 )
      goto LABEL_9;
    if ( v12 != -24 )
    {
      if ( v2 )
      {
        memcpy_0(v15, v2, v9);
        goto LABEL_9;
      }
      memset(v15, 0, v9);
    }
    *(_DWORD *)_o__errno(v15, v13) = 22;
    invalid_parameter_noinfo();
    goto LABEL_9;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 16));
LABEL_9:
  if ( _InterlockedExchangeAdd(v4 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD, volatile signed __int32 *, size_t))(**(_QWORD **)v4 + 8LL))(*(_QWORD *)v4, v4, v9);
  *a1 = v5 + 24;
  return a1;
}
