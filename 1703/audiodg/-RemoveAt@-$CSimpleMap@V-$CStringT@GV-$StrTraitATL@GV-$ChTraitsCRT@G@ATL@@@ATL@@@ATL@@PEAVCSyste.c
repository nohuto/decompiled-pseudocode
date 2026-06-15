/*
 * XREFs of ?RemoveAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEAAHH@Z @ 0x140001D44
 * Callers:
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x140005CE0 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 *     ?Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z @ 0x1400394F0 (-Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z.c)
 * Callees:
 *     ?Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z @ 0x140001F80 (-Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x140039030 (-AtlCrtErrorCheck@ATL@@YAHH@Z.c)
 *     memmove_s_0 @ 0x1400395F8 (memmove_s_0.c)
 */

__int64 __fastcall ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *>>::RemoveAt(
        __int64 a1,
        int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  void (*v4)(void); // rax
  int v5; // edx
  void *v6; // rax
  void *v7; // rax
  __int64 result; // rax
  errno_t v9; // eax
  errno_t v10; // eax

  v2 = a2;
  if ( a2 < 0 || a2 >= (int)qword_1400862A0 )
    return 0LL;
  v3 = *((_QWORD *)qword_140086290 + a2) - 24LL;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 16), 0xFFFFFFFF) <= 1 )
  {
    v4 = *(void (**)(void))(**(_QWORD **)v3 + 8LL);
    if ( (char *)v4 == (char *)ATL::CAtlStringMgr::Free )
      ATL::CAtlStringMgr::Free(*(ATL::CAtlStringMgr **)v3, (struct ATL::CStringData *)v3);
    else
      v4();
  }
  v5 = qword_1400862A0;
  if ( (_DWORD)v2 != (_DWORD)qword_1400862A0 - 1 )
  {
    v9 = memmove_s_0(
           (char *)qword_140086290 + 8 * v2,
           8LL * ((int)qword_1400862A0 - (int)v2),
           (char *)qword_140086290 + 8 * v2 + 8,
           8LL * ((int)qword_1400862A0 - (int)v2 - 1));
    ATL::AtlCrtErrorCheck(v9);
    v10 = memmove_s_0(
            (char *)qword_140086298 + 8 * v2,
            8LL * ((int)qword_1400862A0 - (int)v2),
            (char *)qword_140086298 + 8 * v2 + 8,
            8LL * ((int)qword_1400862A0 - (int)v2 - 1));
    ATL::AtlCrtErrorCheck(v10);
    v5 = qword_1400862A0;
  }
  v6 = (void *)_o__recalloc(qword_140086290, v5 - 1, 8LL);
  if ( v6 || (_DWORD)qword_1400862A0 == 1 )
    qword_140086290 = v6;
  v7 = (void *)_o__recalloc(qword_140086298, (int)qword_1400862A0 - 1, 8LL);
  if ( v7 || (_DWORD)qword_1400862A0 == 1 )
    qword_140086298 = v7;
  result = 1LL;
  LODWORD(qword_1400862A0) = qword_1400862A0 - 1;
  return result;
}
