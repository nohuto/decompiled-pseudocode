/*
 * XREFs of ?Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z @ 0x14001A6F0
 * Callers:
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x14000FE00 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 *     ?Cleanup@CSystemAudioDeviceExclusive@@MEAAXXZ @ 0x140039240 (-Cleanup@CSystemAudioDeviceExclusive@@MEAAXXZ.c)
 *     ?Cleanup@CSystemAudioDeviceOffload@@MEAAXXZ @ 0x14003C9E0 (-Cleanup@CSystemAudioDeviceOffload@@MEAAXXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010310 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?RemoveAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEAAHH@Z @ 0x14001AAAC (-RemoveAt@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSyste.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSystemAudioDeviceCollection::Remove(struct CSystemAudioDeviceBase *a1)
{
  __int64 v2; // rcx
  int v3; // edx
  struct CSystemAudioDeviceBase **v4; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v6; // [rsp+30h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)&g_CritSecSadMap;
  v6 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v3 = 0;
  if ( (int)qword_14008A290 <= 0 )
  {
LABEL_9:
    v3 = -1;
  }
  else
  {
    v4 = (struct CSystemAudioDeviceBase **)qword_14008A288;
    while ( *v4 != a1 )
    {
      ++v3;
      ++v4;
      if ( v3 >= (int)qword_14008A290 )
        goto LABEL_9;
    }
  }
  if ( v3 != -1 )
    ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *>>::RemoveAt(v2);
  if ( v6 )
    LeaveCriticalSection(lpCriticalSection);
}
