/*
 * XREFs of ?GetNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEBAPEAVCNode@12@AEBVCAudioSessionInstanceId@@AEAI1AEAPEAV312@@Z @ 0x180014C00
 * Callers:
 *     ?RemoveKey@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA_NAEBVCAudioSessionInstanceId@@@Z @ 0x180014DDC (-RemoveKey@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits.c)
 *     ?SetAt@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBVCAudioSessionInstanceId@@AEBQEAVCAudioSession@@@Z @ 0x180014E20 (-SetAt@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V-.c)
 *     ?FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@@Z @ 0x180016930 (-FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180014880 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180017590 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ??8CAudioSessionInstanceId@@QEBA_NAEBV0@@Z @ 0x180017774 (--8CAudioSessionInstanceId@@QEBA_NAEBV0@@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001827C (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z @ 0x1800182C0 (-Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z.c)
 *     ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x1800182F0 (-GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNode(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        unsigned int *a4,
        _QWORD *a5)
{
  struct ATL::CStringData *(__fastcall *v9)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::CStringData *NilString; // rax
  _WORD *v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rsi
  unsigned __int16 v14; // ax
  unsigned int v15; // edi
  unsigned __int16 *i; // rcx
  unsigned int v17; // edi
  __int64 v18; // rbx
  ATL::CAtlStringMgr **v20; // rdx
  void (*v21)(void); // rax
  const void *v22[5]; // [rsp+20h] [rbp-28h] BYREF

  v9 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
  if ( v9 == ATL::CAtlStringMgr::GetNilString )
    NilString = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    NilString = v9((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  v22[0] = (char *)NilString + 24;
  if ( (int)CAudioSessionInstanceId::ToString(a2, v22) < 0 )
  {
    v20 = (ATL::CAtlStringMgr **)((char *)v22[0] - 24);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v22[0] - 2, 0xFFFFFFFF) <= 1 )
    {
      v21 = *(void (**)(void))(*(_QWORD *)*v20 + 8LL);
      if ( (char *)v21 == (char *)ATL::CAtlStringMgr::Free )
        ATL::CAtlStringMgr::Free(*v20, (struct ATL::CStringData *)v20);
      else
        v21();
    }
    v13 = 0LL;
    v15 = 0;
  }
  else
  {
    v11 = v22[0];
    v12 = *((int *)v22[0] - 4);
    if ( (int)((*((_DWORD *)v22[0] - 3) - v12) | (1 - *((_DWORD *)v22[0] - 2))) < 0 )
    {
      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(v22, v12);
      v11 = v22[0];
    }
    _o__wcsupr_s(v11, (int)v12 + 1);
    if ( (int)v12 < 0 || (int)v12 > *((_DWORD *)v11 - 3) )
      ATL::AtlThrowImpl(-2147024809);
    v13 = 0LL;
    *((_DWORD *)v11 - 4) = v12;
    v11[v12] = 0;
    v14 = *v11;
    v15 = 0;
    for ( i = v11; *i; v14 = *i )
    {
      ++i;
      v15 = v14 + 33 * v15;
    }
    ATL::CStringData::Release((ATL::CStringData *)(v11 - 12));
  }
  *a4 = v15;
  if ( *(_DWORD *)(a1 + 16) == 17 )
    v17 = v15 % 0x11;
  else
    v17 = v15 % *(_DWORD *)(a1 + 16);
  *a3 = v17;
  if ( !*(_QWORD *)a1 )
    return 0LL;
  *a5 = 0LL;
  v18 = *(_QWORD *)(*(_QWORD *)a1 + 8LL * *a3);
  if ( !v18 )
    return 0LL;
  while ( *(_DWORD *)(v18 + 96) != *a4 || !(unsigned __int8)CAudioSessionInstanceId::operator==(v18, a2) )
  {
    v13 = v18;
    v18 = *(_QWORD *)(v18 + 88);
    if ( !v18 )
      return 0LL;
  }
  *a5 = v13;
  return v18;
}
