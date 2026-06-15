/*
 * XREFs of ?Hash@CAudioSessionInstanceIdTraits@@SAKAEBVCAudioSessionInstanceId@@@Z @ 0x180024DE4
 * Callers:
 *     ?GetNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEBAPEAVCNode@12@AEBVCAudioSessionInstanceId@@AEAI1AEAPEAV312@@Z @ 0x180025328 (-GetNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@.c)
 * Callees:
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18001F9E0 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ?Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z @ 0x180022BF0 (-Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180023520 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180023588 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x1800235CC (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Hash@?$CStringElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL@@SAKPEBG@Z @ 0x180025020 (-Hash@-$CStringElementTraits@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionInstanceIdTraits::Hash(const struct CAudioSessionInstanceId *a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  int v4; // eax
  __int64 v5; // r8
  __int64 v6; // r9
  _DWORD *v7; // rbx
  unsigned int v8; // edi
  unsigned int v9; // edi
  struct ATL::CStringData *v10; // rdx
  ATL::CAtlStringMgr *v11; // rcx
  void (__fastcall *v12)(ATL::CAtlStringMgr *, struct ATL::CStringData *); // rax
  _DWORD *v14; // [rsp+48h] [rbp+10h] BYREF

  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
    &v14,
    (volatile signed __int32 *)&ATL::g_strmgr);
  v4 = CAudioSessionInstanceId::ToString((__int64)a1, &v14, v2, v3);
  v7 = v14;
  if ( v4 < 0 )
  {
    v9 = 0;
  }
  else
  {
    v8 = *(v14 - 4);
    if ( (((1 - *(v14 - 2)) | (*(v14 - 3) - v8)) & 0x80000000) != 0 )
    {
      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((const void **)&v14, v8, v5, v6);
      v7 = v14;
    }
    _o__wcsupr_s(v7, (int)(v8 + 1));
    ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)&v14, v8);
    v9 = ATL::CStringElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>::Hash(v7);
  }
  v10 = (struct ATL::CStringData *)(v7 - 6);
  if ( _InterlockedExchangeAdd(v7 - 2, 0xFFFFFFFF) <= 1 )
  {
    v11 = *(ATL::CAtlStringMgr **)v10;
    v12 = *(void (__fastcall **)(ATL::CAtlStringMgr *, struct ATL::CStringData *))(**(_QWORD **)v10 + 8LL);
    if ( v12 == ATL::CAtlStringMgr::Free )
      ATL::CAtlStringMgr::Free(v11, v10);
    else
      ((void (__fastcall *)(ATL::CAtlStringMgr *))v12)(v11);
  }
  return v9;
}
