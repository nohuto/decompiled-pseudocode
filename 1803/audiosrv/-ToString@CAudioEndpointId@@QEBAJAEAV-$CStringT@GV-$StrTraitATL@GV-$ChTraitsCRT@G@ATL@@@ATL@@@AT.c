/*
 * XREFs of ?ToString@CAudioEndpointId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180016648
 * Callers:
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x180030E30 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x180042DB0 (-ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@.c)
 *     ?GetSessionFromSessionId@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAUIAudioSessionInfo@@@Z @ 0x1800B4D20 (-GetSessionFromSessionId@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAUIAudioSessionInfo@@@Z.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x180030C18 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     _invalid_parameter_noinfo @ 0x180061852 (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800657AF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x18009E954 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 */

__int64 __fastcall CAudioEndpointId::ToString(const void **a1, _QWORD *a2, __int64 a3)
{
  unsigned int v4; // r14d
  unsigned int *v5; // rsi
  __int64 v6; // rbx
  volatile signed __int32 *v7; // rdi
  __int64 v8; // rcx
  struct ATL::IAtlStringMgr *(__fastcall *v9)(ATL::CAtlStringMgr *__hidden); // rax
  int *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r9
  void *v15; // rcx
  size_t v16; // r8
  __int64 v17; // [rsp+20h] [rbp-68h]
  ATL::CAtlException *v18; // [rsp+60h] [rbp-28h] BYREF
  int v19; // [rsp+A0h] [rbp+18h]

  v4 = 0;
  try
  {
    v5 = (unsigned int *)*a1;
    v6 = (__int64)*a1 - 24;
    v7 = (volatile signed __int32 *)(*a2 - 24LL);
    if ( (volatile signed __int32 *)v6 == v7 )
      return v4;
    if ( *((int *)v7 + 4) < 0 || (v8 = *(_QWORD *)v6, *(_QWORD *)v6 != *(_QWORD *)v7) )
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString(a2, v5, *(v5 - 4));
      return v4;
    }
    v9 = *(struct ATL::IAtlStringMgr *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(*(_QWORD *)v8 + 32LL);
    if ( v9 != ATL::CAtlStringMgr::Clone )
      v8 = ((__int64 (__fastcall *)(__int64, struct ATL::IAtlStringMgr *(__fastcall *)(ATL::CAtlStringMgr *__hidden), __int64))v9)(
             v8,
             ATL::CAtlStringMgr::Clone,
             a3);
    if ( *(int *)(v6 + 16) >= 0 && v8 == *(_QWORD *)v6 )
    {
      v17 = v6;
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 16));
LABEL_10:
      if ( _InterlockedExchangeAdd(v7 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v7 + 8LL))(*(_QWORD *)v7);
      *a2 = v17 + 24;
      return v4;
    }
    v12 = (**(__int64 (__fastcall ***)(__int64, _QWORD, __int64))v8)(v8, *(unsigned int *)(v6 + 8), 2LL);
    v17 = v12;
    if ( !v12 )
      ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
    *(_DWORD *)(v12 + 8) = *(_DWORD *)(v6 + 8);
    v15 = (void *)(v12 + 24);
    v16 = 2LL * (*(_DWORD *)(v6 + 8) + 1);
    if ( !v16 )
      goto LABEL_10;
    if ( v12 != -24 )
    {
      if ( v5 )
      {
        memcpy_0(v15, v5, v16);
        goto LABEL_10;
      }
      memset_0(v15, 0, v16);
    }
    *(_DWORD *)_o__errno(v15, v13, v16, v14) = 22;
    invalid_parameter_noinfo();
    goto LABEL_10;
  }
  catch ( ATL::CAtlException *v18 )
  {
    v11 = (int *)v18;
    if ( *(_DWORD *)v18 == -1073741571 )
      _o__resetstkoflw();
    v19 = *v11;
    v4 = *v11;
    if ( v19 < 0 )
      AudSrvTraceLoggingErrorHelper("CAudioEndpointId::ToString", 0xBCu, v19);
  }
  return v4;
}
