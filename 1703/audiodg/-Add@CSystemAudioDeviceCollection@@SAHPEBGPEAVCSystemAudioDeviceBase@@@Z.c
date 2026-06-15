/*
 * XREFs of ?Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z @ 0x140038EC8
 * Callers:
 *     ?Initialize@CSystemAudioDeviceExclusive@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14003A4E0 (-Initialize@CSystemAudioDeviceExclusive@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphC.c)
 *     ?Initialize@CSystemAudioDeviceOffload@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14003D310 (-Initialize@CSystemAudioDeviceOffload@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCal.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140004910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x140030430 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?InternalSetAtIndex@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEAAXHAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@AEBQEAVCSystemAudioDeviceBase@@@Z @ 0x140031778 (-InternalSetAtIndex@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x140031954 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x140031A2C (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z @ 0x140039074 (-AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z.c)
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x1400392BC (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSystemAudioDeviceCollection::Add(unsigned __int64 a1, struct CSystemAudioDeviceBase *a2)
{
  unsigned __int16 v3; // dx
  HINSTANCE StringResourceInstance; // rax
  __int64 v5; // rax
  void *v6; // rax
  unsigned int v7; // ebx
  void *v8; // rax
  __int64 v9; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-18h] BYREF
  char v12; // [rsp+30h] [rbp-10h]
  char *v13; // [rsp+50h] [rbp+10h] BYREF
  void *v14; // [rsp+58h] [rbp+18h] BYREF

  v14 = a2;
  lpCriticalSection = &g_CritSecSadMap;
  v12 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v13, (__int64)&ATL::g_strmgr);
  if ( !a1 )
  {
    LODWORD(v5) = 0;
LABEL_9:
    ATL::CSimpleStringT<unsigned short,0>::SetString((const void **)&v13, (_BYTE *)a1, v5);
    goto LABEL_10;
  }
  if ( (a1 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( *(_WORD *)(a1 + 2 * v5) );
    goto LABEL_9;
  }
  StringResourceInstance = ATL::AtlFindStringResourceInstance((unsigned __int16)a1, v3);
  if ( StringResourceInstance )
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::LoadStringW(
      &v13,
      StringResourceInstance,
      (unsigned __int16)a1);
LABEL_10:
  v6 = (void *)_o__recalloc(qword_140086290, (int)qword_1400862A0 + 1, 8LL);
  if ( v6 && (qword_140086290 = v6, (v8 = (void *)_o__recalloc(qword_140086298, (int)qword_1400862A0 + 1, 8LL)) != 0LL) )
  {
    qword_140086298 = v8;
    ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *>>::InternalSetAtIndex(
      v9,
      qword_1400862A0,
      (__int64)&v13,
      &v14);
    v7 = 1;
    LODWORD(qword_1400862A0) = qword_1400862A0 + 1;
  }
  else
  {
    v7 = 0;
  }
  ATL::CStringData::Release((ATL::CStringData *)(v13 - 24));
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
  return v7;
}
