/*
 * XREFs of ?RemoveAll@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEAAXXZ @ 0x14001B660
 * Callers:
 *     _dynamic_atexit_destructor_for__SadMap__ @ 0x140020C90 (_dynamic_atexit_destructor_for__SadMap__.c)
 * Callees:
 *     ??_G?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAPEAXI@Z @ 0x140030100 (--_G-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAPEAXI@Z.c)
 */

void ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *>>::RemoveAll()
{
  char *v0; // rcx
  int i; // ebx

  v0 = (char *)Block;
  if ( Block )
  {
    for ( i = 0; i < (int)qword_1400882B0; ++i )
    {
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::`scalar deleting destructor'(&v0[8 * i]);
      v0 = (char *)Block;
    }
    free(v0);
    Block = 0LL;
  }
  if ( qword_1400882A8 )
  {
    free(qword_1400882A8);
    qword_1400882A8 = 0LL;
  }
  LODWORD(qword_1400882B0) = 0;
}
