/*
 * XREFs of ?ToString@CAppAudioSessionId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18001ED6C
 * Callers:
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x18001FCA0 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x180031F44 (-ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@.c)
 *     ?ToStreamSwitchString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800984CC (-ToStreamSwitchString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsC.c)
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

__int64 __fastcall CAppAudioSessionId::ToString(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // r14d
  char *v4; // rsi
  char *v5; // rbx
  volatile signed __int32 *v6; // rdi
  ATL::CAtlStringMgr *v7; // rcx
  struct ATL::IAtlStringMgr *(__fastcall *v8)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::IAtlStringMgr *v9; // rcx
  int *v11; // rbx
  _DWORD *v12; // r15
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // r12
  ATL::CAtlException *v21; // [rsp+28h] [rbp-30h] BYREF
  int v22; // [rsp+60h] [rbp+8h]

  v3 = 0;
  try
  {
    v4 = *(char **)(a1 + 32);
    v5 = v4 - 24;
    v6 = (volatile signed __int32 *)(*a2 - 24LL);
    if ( v4 - 24 == (char *)v6 )
      return v3;
    if ( *((int *)v6 + 4) < 0 || (v7 = *(ATL::CAtlStringMgr **)v5, *(_QWORD *)v5 != *(_QWORD *)v6) )
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString(a2, v4, *((unsigned int *)v4 - 4));
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
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v6 + 8LL))(*(_QWORD *)v6, v6);
      *a2 = v5 + 24;
      return v3;
    }
    v12 = v5 + 8;
    v13 = (**(__int64 (__fastcall ***)(struct ATL::IAtlStringMgr *, _QWORD, __int64))v9)(
            v9,
            *((unsigned int *)v5 + 2),
            2LL);
    v5 = (char *)v13;
    if ( !v13 )
      ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v15);
    *(_DWORD *)(v13 + 8) = *v12;
    v18 = *v12 + 1;
    v19 = 2 * v18;
    v20 = 2 * v18;
    if ( !(2 * v18) )
      goto LABEL_10;
    if ( v13 == -24 )
      goto LABEL_22;
    if ( v4 && v20 >= v19 )
    {
      memcpy_0((void *)(v13 + 24), v4, 2 * v18);
      goto LABEL_10;
    }
    memset((void *)(v13 + 24), 0, 2 * v18);
    if ( !v4 )
    {
LABEL_22:
      *(_DWORD *)_o__errno(v18, v14, v16, v17) = 22;
    }
    else
    {
      if ( v20 >= v19 )
        goto LABEL_10;
      *(_DWORD *)_o__errno(v18, v14, v16, v17) = 34;
    }
    invalid_parameter_noinfo();
    goto LABEL_10;
  }
  catch ( ATL::CAtlException *v21 )
  {
    v11 = (int *)v21;
    if ( *(_DWORD *)v21 == -1073741571 )
      _o__resetstkoflw();
    v22 = *v11;
    v3 = *v11;
    if ( v22 < 0 )
      AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::ToString", 0x200u, v22);
  }
  return v3;
}
