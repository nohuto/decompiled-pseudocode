/*
 * XREFs of ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18001F9E0
 * Callers:
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z @ 0x18001CA60 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z.c)
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x180021180 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180021F50 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?Hash@CAudioSessionInstanceIdTraits@@SAKAEBVCAudioSessionInstanceId@@@Z @ 0x180024DE4 (-Hash@CAudioSessionInstanceIdTraits@@SAKAEBVCAudioSessionInstanceId@@@Z.c)
 *     ?GetInstanceId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x18008C360 (-GetInstanceId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18002346C (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     _invalid_parameter_noinfo @ 0x180049B5A (_invalid_parameter_noinfo.c)
 *     memset @ 0x180049B8A (memset.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x1800822FC (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 */

__int64 __fastcall CAudioSessionInstanceId::ToString(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  char *v6; // r15
  volatile signed __int32 *v7; // rdi
  volatile signed __int32 *v8; // rsi
  __int64 v9; // rcx
  struct ATL::IAtlStringMgr *(__fastcall *v10)(ATL::CAtlStringMgr *__hidden); // rax
  int *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  void *v19; // rax
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // r12
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  char *v26; // [rsp+20h] [rbp-88h]
  ATL::CAtlException *v27; // [rsp+70h] [rbp-38h] BYREF
  int v28; // [rsp+C0h] [rbp+18h]

  v5 = 0;
  try
  {
    v6 = *(char **)(a1 + 72);
    v7 = (volatile signed __int32 *)(v6 - 24);
    v8 = (volatile signed __int32 *)(*a2 - 24LL);
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
      v26 = v6 - 24;
      _InterlockedIncrement(v7 + 4);
LABEL_10:
      if ( _InterlockedExchangeAdd(v8 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v8 + 8LL))(*(_QWORD *)v8);
      *a2 = v26 + 24;
      return v5;
    }
    v13 = (**(__int64 (__fastcall ***)(__int64, _QWORD, __int64))v9)(v9, *((unsigned int *)v7 + 2), 2LL);
    v17 = v13;
    v26 = (char *)v13;
    if ( !v13 )
      ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v14);
    *(_DWORD *)(v13 + 8) = *((_DWORD *)v7 + 2);
    v18 = *((_DWORD *)v7 + 2) + 1;
    v19 = (void *)(v13 + 24);
    v20 = 2 * v18;
    v21 = 2 * v18;
    if ( !(2 * v18) )
      goto LABEL_10;
    if ( v17 == -24 )
    {
      *(_DWORD *)_o__errno(v18, -24LL, v15, v16) = 22;
    }
    else
    {
      if ( v6 && v21 >= v20 )
      {
        memcpy_0(v19, v6, 2 * v18);
        goto LABEL_10;
      }
      memset(v19, 0, 2 * v18);
      if ( v6 )
      {
        if ( v21 >= v20 )
          goto LABEL_10;
        *(_DWORD *)_o__errno(v23, v22, v24, v25) = 34;
      }
      else
      {
        *(_DWORD *)_o__errno(v23, v22, v24, v25) = 22;
      }
    }
    invalid_parameter_noinfo();
    goto LABEL_10;
  }
  catch ( ATL::CAtlException *v27 )
  {
    v12 = (int *)v27;
    if ( *(_DWORD *)v27 == -1073741571 )
      _o__resetstkoflw();
    v28 = *v12;
    v5 = *v12;
    if ( v28 < 0 )
      AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::ToString", 0x416u, v28);
  }
  return v5;
}
