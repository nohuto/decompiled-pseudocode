/*
 * XREFs of ?Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z @ 0x140002D2C
 * Callers:
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x140012D50 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 *     ?Cleanup@CSystemAudioDeviceExclusive@@MEAAXXZ @ 0x140037E90 (-Cleanup@CSystemAudioDeviceExclusive@@MEAAXXZ.c)
 *     ?Cleanup@CSystemAudioDeviceOffload@@MEAAXXZ @ 0x14003B130 (-Cleanup@CSystemAudioDeviceOffload@@MEAAXXZ.c)
 * Callees:
 *     ?RemoveAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEAAHH@Z @ 0x140002AE4 (-RemoveAt@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSyste.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140003CF0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
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
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v3 = 0;
  if ( (int)qword_1400882B0 <= 0 )
  {
LABEL_9:
    v3 = -1;
  }
  else
  {
    v4 = (struct CSystemAudioDeviceBase **)qword_1400882A8;
    while ( *v4 != a1 )
    {
      ++v3;
      ++v4;
      if ( v3 >= (int)qword_1400882B0 )
        goto LABEL_9;
    }
  }
  if ( v3 != -1 )
    ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *>>::RemoveAt(
      v2,
      v3);
  if ( v6 )
    LeaveCriticalSection(lpCriticalSection);
}
