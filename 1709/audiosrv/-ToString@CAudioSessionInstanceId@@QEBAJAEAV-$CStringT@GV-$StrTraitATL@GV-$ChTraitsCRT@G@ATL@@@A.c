/*
 * XREFs of ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180017590
 * Callers:
 *     ?GetNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEBAPEAVCNode@12@AEBVCAudioSessionInstanceId@@AEAI1AEAPEAV312@@Z @ 0x180014C00 (-GetNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@.c)
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x180015510 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     ?FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@@Z @ 0x180016930 (-FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z @ 0x1800276C4 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z.c)
 *     ?GetInstanceId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x180071C70 (-GetInstanceId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x1800147BC (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?Clone@CAtlStringMgr@ATL@@UEAAPEAUIAtlStringMgr@2@XZ @ 0x180018300 (-Clone@CAtlStringMgr@ATL@@UEAAPEAUIAtlStringMgr@2@XZ.c)
 *     _invalid_parameter_noinfo @ 0x180033A26 (_invalid_parameter_noinfo.c)
 *     memset @ 0x180033A5A (memset.c)
 *     memcpy_0 @ 0x180036B8F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x180063FAC (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 */

__int64 __fastcall CAudioSessionInstanceId::ToString(__int64 a1, __int64 *a2)
{
  unsigned int v3; // r14d
  char *v4; // r15
  char *v5; // rbx
  volatile signed __int32 *v6; // rdi
  ATL::CAtlStringMgr *v7; // rcx
  struct ATL::IAtlStringMgr *(__fastcall *v8)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::IAtlStringMgr *v9; // rcx
  size_t v10; // r8
  int *v12; // rbx
  _DWORD *v13; // r12
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  void *v17; // rcx
  ATL::CAtlException *v18; // [rsp+28h] [rbp-20h] BYREF
  int v19; // [rsp+50h] [rbp+8h]

  v3 = 0;
  try
  {
    v4 = *(char **)(a1 + 72);
    v5 = v4 - 24;
    v6 = (volatile signed __int32 *)(*a2 - 24);
    if ( v4 - 24 == (char *)v6 )
      return v3;
    if ( *((int *)v6 + 4) < 0 || (v7 = *(ATL::CAtlStringMgr **)v5, *(_QWORD *)v5 != *(_QWORD *)v6) )
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString(a2, v4, *((_DWORD *)v4 - 4));
      return v3;
    }
    v8 = *(struct ATL::IAtlStringMgr *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(*(_QWORD *)v7 + 32LL);
    if ( v8 == ATL::CAtlStringMgr::Clone )
      v9 = ATL::CAtlStringMgr::Clone(v7);
    else
      v9 = v8(v7);
    if ( *((int *)v5 + 4) >= 0 && v9 == *(struct ATL::IAtlStringMgr **)v5 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v5 + 4);
LABEL_10:
      if ( _InterlockedExchangeAdd(v6 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *, size_t))(**(_QWORD **)v6 + 8LL))(
          *(_QWORD *)v6,
          v6,
          v10);
      *a2 = (__int64)(v5 + 24);
      return v3;
    }
    v13 = v5 + 8;
    v14 = (**(__int64 (__fastcall ***)(struct ATL::IAtlStringMgr *, _QWORD, __int64))v9)(
            v9,
            *((unsigned int *)v5 + 2),
            2LL);
    v5 = (char *)v14;
    if ( !v14 )
      ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v16, v15);
    *(_DWORD *)(v14 + 8) = *v13;
    v17 = (void *)(v14 + 24);
    v10 = 2LL * (*v13 + 1);
    if ( !v10 )
      goto LABEL_10;
    if ( v14 != -24 )
    {
      if ( v4 )
      {
        memcpy_0(v17, v4, v10);
        goto LABEL_10;
      }
      memset(v17, 0, v10);
    }
    *(_DWORD *)_o__errno(v17, v15) = 22;
    invalid_parameter_noinfo();
    goto LABEL_10;
  }
  catch ( ATL::CAtlException *v18 )
  {
    v12 = (int *)v18;
    if ( *(_DWORD *)v18 == -1073741571 )
      _o__resetstkoflw();
    v19 = *v12;
    v3 = *v12;
    if ( v19 < 0 )
      AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::ToString", 0x41Au, v19);
  }
  return v3;
}
