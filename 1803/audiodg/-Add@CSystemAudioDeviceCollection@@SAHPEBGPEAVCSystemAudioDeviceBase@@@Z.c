/*
 * XREFs of ?Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z @ 0x1400026AC
 * Callers:
 *     ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140012AF0 (-Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraph.c)
 *     ?Initialize@CSystemAudioDeviceExclusive@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140038840 (-Initialize@CSystemAudioDeviceExclusive@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphC.c)
 *     ?Initialize@CSystemAudioDeviceOffload@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14003BFE0 (-Initialize@CSystemAudioDeviceOffload@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCal.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x1400028E4 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?Add@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEAAHAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@AEBQEAVCSystemAudioDeviceBase@@@Z @ 0x140002998 (-Add@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudi.c)
 *     ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x140002C10 (-GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140003CF0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z @ 0x1400373CC (-AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z.c)
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x1400376B4 (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSystemAudioDeviceCollection::Add(const unsigned __int16 *a1, struct CSystemAudioDeviceBase *a2)
{
  struct ATL::CStringData *(__fastcall *v3)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::CStringData *NilString; // rax
  unsigned __int16 v5; // dx
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  char *v9; // rdx
  HINSTANCE StringResourceInstance; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-18h] BYREF
  char v13; // [rsp+30h] [rbp-10h]
  struct CSystemAudioDeviceBase *v14; // [rsp+58h] [rbp+18h] BYREF
  volatile signed __int32 *v15; // [rsp+60h] [rbp+20h] BYREF

  v14 = a2;
  lpCriticalSection = (LPCRITICAL_SECTION)&g_CritSecSadMap;
  v13 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v3 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
  if ( v3 == ATL::CAtlStringMgr::GetNilString )
    NilString = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    NilString = v3((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  v15 = (volatile signed __int32 *)((char *)NilString + 24);
  if ( !a1 )
  {
    LODWORD(v6) = 0;
LABEL_7:
    ATL::CSimpleStringT<unsigned short,0>::SetString(&v15, a1, (unsigned int)v6);
    goto LABEL_8;
  }
  if ( (unsigned __int64)a1 >= 0x10000 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( a1[v6] );
    goto LABEL_7;
  }
  StringResourceInstance = ATL::AtlFindStringResourceInstance((unsigned __int16)a1, v5);
  if ( StringResourceInstance )
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::LoadStringW(
      &v15,
      StringResourceInstance,
      (unsigned __int16)a1);
LABEL_8:
  v8 = ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *>>::Add(
         v7,
         &v15,
         &v14);
  v9 = (char *)(v15 - 6);
  if ( _InterlockedExchangeAdd(v15 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v9 + 8LL))(*(_QWORD *)v9);
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
  return v8;
}
