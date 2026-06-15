/*
 * XREFs of ?SetCount@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAA_N_KH@Z @ 0x18006A97C
 * Callers:
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x1800686D0 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 *     ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x18006A60C (-SetAtGrow@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVol.c)
 *     _ATL::CAtlArray_CVolumeUnit_ATL::CElementTraits_CVolumeUnit___::SetAtGrow_::_1_::catch$0 @ 0x18006A6AF (_ATL--CAtlArray_CVolumeUnit_ATL--CElementTraits_CVolumeUnit___--SetAtGrow_--_1_--catch$0.c)
 * Callees:
 *     ?CallConstructors@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@CAXPEAVCVolumeUnit@@_K@Z @ 0x180068034 (-CallConstructors@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@CAXPEAVC.c)
 *     ?GrowBuffer@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@AEAA_N_K@Z @ 0x180068E10 (-GrowBuffer@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@AEAA_N_K@Z.c)
 */

char __fastcall ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetCount(void **a1, size_t a2)
{
  void *v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  char result; // al

  if ( !a2 )
  {
    v4 = *a1;
    if ( v4 )
    {
      free(v4);
      *a1 = 0LL;
    }
    a1[1] = 0LL;
    a1[2] = 0LL;
    return 1;
  }
  if ( a2 > (unsigned __int64)a1[2] )
  {
    result = ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::GrowBuffer((__int64)a1, a2);
    if ( !result )
      return result;
    v5 = a2 - (_QWORD)a1[1];
    v6 = 56LL * (_QWORD)a1[1];
    goto LABEL_10;
  }
  if ( a2 > (unsigned __int64)a1[1] )
  {
    v5 = a2 - (_QWORD)a1[1];
    v6 = 56LL * (_QWORD)a1[1];
LABEL_10:
    ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::CallConstructors((__int64)*a1 + v6, v5);
  }
  a1[1] = (void *)a2;
  return 1;
}
