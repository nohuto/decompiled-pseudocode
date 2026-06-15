/*
 * XREFs of ?ToString@CAudioEndpointId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800236B0
 * Callers:
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x18001FCA0 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x180031F44 (-ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@.c)
 *     ?GetSessionFromSessionId@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAUIAudioSessionInfo@@@Z @ 0x180095360 (-GetSessionFromSessionId@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAUIAudioSessionInfo@@@Z.c)
 * Callees:
 *     ?Clone@CAtlStringMgr@ATL@@UEAAPEAUIAtlStringMgr@2@XZ @ 0x180022C30 (-Clone@CAtlStringMgr@ATL@@UEAAPEAUIAtlStringMgr@2@XZ.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18002346C (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     _invalid_parameter_noinfo @ 0x180049B5A (_invalid_parameter_noinfo.c)
 *     memset @ 0x180049B8A (memset.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x1800822FC (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 */

__int64 __fastcall CAudioEndpointId::ToString(char **a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // r14d
  char *v6; // rsi
  __int64 v7; // rbx
  volatile signed __int32 *v8; // rdi
  ATL::CAtlStringMgr *v9; // rcx
  struct ATL::IAtlStringMgr *(__fastcall *v10)(ATL::CAtlStringMgr *); // rax
  struct ATL::IAtlStringMgr *v11; // rcx
  int *v13; // rbx
  _DWORD *v14; // r15
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  unsigned __int64 v21; // r15
  unsigned __int64 v22; // r12
  ATL::CAtlException *v23; // [rsp+28h] [rbp-30h] BYREF
  int v24; // [rsp+60h] [rbp+8h]

  v5 = 0;
  try
  {
    v6 = *a1;
    v7 = (__int64)(*a1 - 24);
    v8 = (volatile signed __int32 *)(*a2 - 24LL);
    if ( (volatile signed __int32 *)v7 == v8 )
      return v5;
    if ( *((int *)v8 + 4) < 0 || (v9 = *(ATL::CAtlStringMgr **)v7, *(_QWORD *)v7 != *(_QWORD *)v8) )
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString(a2, v6, *((_DWORD *)v6 - 4), a4);
      return v5;
    }
    v10 = *(struct ATL::IAtlStringMgr *(__fastcall **)(ATL::CAtlStringMgr *))(*(_QWORD *)v9 + 32LL);
    if ( v10 == ATL::CAtlStringMgr::Clone )
      v11 = ATL::CAtlStringMgr::Clone(v9);
    else
      v11 = v10(v9);
    if ( *(int *)(v7 + 16) >= 0 && v11 == *(struct ATL::IAtlStringMgr **)v7 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 16));
LABEL_10:
      if ( _InterlockedExchangeAdd(v8 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v8 + 8LL))(*(_QWORD *)v8, v8);
      *a2 = v7 + 24;
      return v5;
    }
    v14 = (_DWORD *)(v7 + 8);
    v15 = (**(__int64 (__fastcall ***)(struct ATL::IAtlStringMgr *, _QWORD, __int64))v11)(
            v11,
            *(unsigned int *)(v7 + 8),
            2LL);
    v7 = v15;
    if ( !v15 )
      ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v17);
    *(_DWORD *)(v15 + 8) = *v14;
    v20 = *v14 + 1;
    v21 = 2 * v20;
    v22 = 2 * v20;
    if ( !(2 * v20) )
      goto LABEL_10;
    if ( v15 == -24 )
      goto LABEL_22;
    if ( v6 && v22 >= v21 )
    {
      memcpy_0((void *)(v15 + 24), v6, 2 * v20);
      goto LABEL_10;
    }
    memset((void *)(v15 + 24), 0, 2 * v20);
    if ( !v6 )
    {
LABEL_22:
      *(_DWORD *)_o__errno(v20, v16, v18, v19) = 22;
    }
    else
    {
      if ( v22 >= v21 )
        goto LABEL_10;
      *(_DWORD *)_o__errno(v20, v16, v18, v19) = 34;
    }
    invalid_parameter_noinfo();
    goto LABEL_10;
  }
  catch ( ATL::CAtlException *v23 )
  {
    v13 = (int *)v23;
    if ( *(_DWORD *)v23 == -1073741571 )
      _o__resetstkoflw();
    v24 = *v13;
    v5 = *v13;
    if ( v24 < 0 )
      AudSrvTraceLoggingErrorHelper("CAudioEndpointId::ToString", 0xBCu, v24);
  }
  return v5;
}
