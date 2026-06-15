/*
 * XREFs of ?Hash@CAudioSessionInstanceIdTraits@@SAKAEBVCAudioSessionInstanceId@@@Z @ 0x180019268
 * Callers:
 *     ?GetNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEBAPEAVCNode@12@AEBVCAudioSessionInstanceId@@AEAI1AEAPEAV312@@Z @ 0x180019148 (-GetNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@.c)
 * Callees:
 *     ?Hash@?$CStringElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL@@SAKPEBG@Z @ 0x180019360 (-Hash@-$CStringElementTraits@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180030B78 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180030BB0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180031BD0 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ?Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z @ 0x180034080 (-Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z.c)
 *     ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x1800340D0 (-GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionInstanceIdTraits::Hash(const struct CAudioSessionInstanceId *a1)
{
  struct ATL::CStringData *(__fastcall *v2)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::CStringData *NilString; // rax
  int v4; // eax
  volatile signed __int32 *v5; // rbx
  unsigned int v6; // edi
  unsigned int v7; // edi
  struct ATL::CStringData *v8; // rdx
  ATL::CAtlStringMgr *v9; // rcx
  void (__fastcall *v10)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *); // rax
  char *v12; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24);
  if ( v2 == ATL::CAtlStringMgr::GetNilString )
    NilString = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    NilString = v2((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  v12 = (char *)NilString + 24;
  v4 = CAudioSessionInstanceId::ToString(a1, &v12);
  v5 = (volatile signed __int32 *)v12;
  if ( v4 < 0 )
  {
    v7 = 0;
  }
  else
  {
    v6 = *((_DWORD *)v12 - 4);
    if ( (((1 - *((_DWORD *)v12 - 2)) | (*((_DWORD *)v12 - 3) - v6)) & 0x80000000) != 0 )
    {
      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v12, v6);
      v5 = (volatile signed __int32 *)v12;
    }
    _o__wcsupr_s(v5, (int)(v6 + 1));
    ATL::CSimpleStringT<unsigned short,0>::SetLength(&v12, v6);
    v7 = ATL::CStringElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>::Hash(v5);
  }
  v8 = (struct ATL::CStringData *)(v5 - 6);
  if ( _InterlockedExchangeAdd(v5 - 2, 0xFFFFFFFF) <= 1 )
  {
    v9 = *(ATL::CAtlStringMgr **)v8;
    v10 = *(void (__fastcall **)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *))(**(_QWORD **)v8 + 8LL);
    if ( v10 == ATL::CAtlStringMgr::Free )
      ATL::CAtlStringMgr::Free(v9, v8);
    else
      ((void (__fastcall *)(ATL::CAtlStringMgr *))v10)(v9);
  }
  return v7;
}
