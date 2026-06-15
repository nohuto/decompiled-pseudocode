/*
 * XREFs of ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180031BD0
 * Callers:
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x1800045E0 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     ?Hash@CAudioSessionInstanceIdTraits@@SAKAEBVCAudioSessionInstanceId@@@Z @ 0x180019268 (-Hash@CAudioSessionInstanceIdTraits@@SAKAEBVCAudioSessionInstanceId@@@Z.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z @ 0x180025900 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x1800333A0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?GetInstanceId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800A9DD0 (-GetInstanceId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x180030C18 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     _invalid_parameter_noinfo @ 0x180061852 (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800657AF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x18009E954 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 */

__int64 __fastcall CAudioSessionInstanceId::ToString(__int64 a1, const void **a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  char *v6; // r15
  char *v7; // rdi
  volatile signed __int32 *v8; // rsi
  __int64 v9; // rcx
  struct ATL::IAtlStringMgr *(__fastcall *v10)(ATL::CAtlStringMgr *__hidden); // rax
  int *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r9
  void *v16; // rcx
  size_t v17; // r8
  char *v18; // [rsp+20h] [rbp-68h]
  ATL::CAtlException *v19; // [rsp+68h] [rbp-20h] BYREF
  int v20; // [rsp+A0h] [rbp+18h]

  v5 = 0;
  try
  {
    v6 = *(char **)(a1 + 72);
    v7 = v6 - 24;
    v8 = (volatile signed __int32 *)((char *)*a2 - 24);
    if ( v6 - 24 == (char *)v8 )
      return v5;
    if ( *((int *)v8 + 4) < 0 || (v9 = *(_QWORD *)v7, *(_QWORD *)v7 != *(_QWORD *)v8) )
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString(a2, v6, *((unsigned int *)v6 - 4));
      return v5;
    }
    v10 = *(struct ATL::IAtlStringMgr *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(*(_QWORD *)v9 + 32LL);
    if ( v10 != ATL::CAtlStringMgr::Clone )
      v9 = ((__int64 (__fastcall *)(__int64, struct ATL::IAtlStringMgr *(__fastcall *)(ATL::CAtlStringMgr *__hidden), __int64, __int64))v10)(
             v9,
             ATL::CAtlStringMgr::Clone,
             a3,
             a4);
    if ( *((int *)v7 + 4) >= 0 && v9 == *(_QWORD *)v7 )
    {
      v18 = v6 - 24;
      _InterlockedIncrement((volatile signed __int32 *)v7 + 4);
LABEL_10:
      if ( _InterlockedExchangeAdd(v8 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v8 + 8LL))(*(_QWORD *)v8);
      *a2 = v18 + 24;
      return v5;
    }
    v13 = (**(__int64 (__fastcall ***)(__int64, _QWORD, __int64))v9)(v9, *((unsigned int *)v7 + 2), 2LL);
    v18 = (char *)v13;
    if ( !v13 )
      ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(0LL, v14);
    *(_DWORD *)(v13 + 8) = *((_DWORD *)v7 + 2);
    v16 = (void *)(v13 + 24);
    v17 = 2LL * (*((_DWORD *)v7 + 2) + 1);
    if ( !v17 )
      goto LABEL_10;
    if ( v13 != -24 )
    {
      if ( v6 )
      {
        memcpy_0(v16, v6, v17);
        goto LABEL_10;
      }
      memset_0(v16, 0, v17);
    }
    *(_DWORD *)_o__errno(v16, v14, v17, v15) = 22;
    invalid_parameter_noinfo();
    goto LABEL_10;
  }
  catch ( ATL::CAtlException *v19 )
  {
    v12 = (int *)v19;
    if ( *(_DWORD *)v19 == -1073741571 )
      _o__resetstkoflw();
    v20 = *v12;
    v5 = *v12;
    if ( v20 < 0 )
      AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::ToString", 0x41Au, v20);
  }
  return v5;
}
