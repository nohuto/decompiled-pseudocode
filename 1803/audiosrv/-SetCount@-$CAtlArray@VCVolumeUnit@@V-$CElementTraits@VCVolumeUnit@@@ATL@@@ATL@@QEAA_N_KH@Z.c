/*
 * XREFs of ?SetCount@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAA_N_KH@Z @ 0x18004DD9C
 * Callers:
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x18004DA80 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 *     ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x18004DE0C (-SetAtGrow@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVol.c)
 *     _ATL::CAtlArray_CVolumeUnit_ATL::CElementTraits_CVolumeUnit___::SetAtGrow_::_1_::catch$0 @ 0x180066C3D (_ATL--CAtlArray_CVolumeUnit_ATL--CElementTraits_CVolumeUnit___--SetAtGrow_--_1_--catch$0.c)
 * Callees:
 *     ?GrowBuffer@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@AEAA_N_K@Z @ 0x18004DCD4 (-GrowBuffer@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@AEAA_N_K@Z.c)
 *     ?CallConstructors@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@CAXPEAVCVolumeUnit@@_K@Z @ 0x18004DEA8 (-CallConstructors@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@CAXPEAVC.c)
 */

char __fastcall ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetCount(__int64 a1, size_t a2)
{
  size_t v2; // rdi
  size_t v5; // rdx
  __int64 v6; // rcx

  v2 = 0LL;
  if ( !a2 )
  {
    if ( *(_QWORD *)a1 )
    {
      free(*(void **)a1);
      *(_QWORD *)a1 = 0LL;
    }
    *(_QWORD *)(a1 + 16) = 0LL;
    goto LABEL_7;
  }
  if ( a2 <= *(_QWORD *)(a1 + 16) )
  {
    if ( a2 <= *(_QWORD *)(a1 + 8) )
      goto LABEL_6;
    v5 = a2 - *(_QWORD *)(a1 + 8);
    v6 = 56LL * *(_QWORD *)(a1 + 8);
LABEL_5:
    ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::CallConstructors(*(_QWORD *)a1 + v6, v5);
LABEL_6:
    v2 = a2;
LABEL_7:
    *(_QWORD *)(a1 + 8) = v2;
    return 1;
  }
  if ( ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::GrowBuffer(a1, a2) )
  {
    v5 = a2 - *(_QWORD *)(a1 + 8);
    v6 = 56LL * *(_QWORD *)(a1 + 8);
    goto LABEL_5;
  }
  return 0;
}
