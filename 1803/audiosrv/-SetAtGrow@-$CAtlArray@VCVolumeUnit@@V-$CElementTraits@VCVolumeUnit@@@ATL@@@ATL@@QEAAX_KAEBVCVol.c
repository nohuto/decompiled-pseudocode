/*
 * XREFs of ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x18004DE0C
 * Callers:
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x18004DA80 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 *     ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x1800A2130 (-GetLevelData@CVolumeSoftware@@MEAAJXZ.c)
 *     ?InitializeAPOs@CVolumeSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x1800A2770 (-InitializeAPOs@CVolumeSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ @ 0x1800A2A5C (-LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ.c)
 *     ?LoadVolumeState@CVolumeSoftware@@AEAAJXZ @ 0x1800A2D30 (-LoadVolumeState@CVolumeSoftware@@AEAAJXZ.c)
 * Callees:
 *     ?SetCount@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAA_N_KH@Z @ 0x18004DD9C (-SetCount@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAA_N_KH@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetAtGrow(
        _QWORD *a1,
        size_t a2,
        __int64 a3)
{
  size_t v6; // rax
  __int64 v8; // rcx
  __int64 result; // rax
  size_t v11; // [rsp+48h] [rbp+10h]

  v6 = a1[1];
  v11 = v6;
  if ( a2 >= v6 && !ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetCount((__int64)a1, a2 + 1) )
    ATL::AtlThrowImpl(-2147024882);
  try
  {
    v8 = *a1 + 56 * a2;
    *(_DWORD *)v8 = *(_DWORD *)a3;
    *(_DWORD *)(v8 + 4) = *(_DWORD *)(a3 + 4);
    *(_QWORD *)(v8 + 24) = *(_QWORD *)(a3 + 24);
    *(_QWORD *)(v8 + 32) = *(_QWORD *)(a3 + 32);
    *(_QWORD *)(v8 + 40) = *(_QWORD *)(a3 + 40);
    *(_QWORD *)(v8 + 48) = *(_QWORD *)(a3 + 48);
    *(_DWORD *)(v8 + 8) = *(_DWORD *)(a3 + 8);
    *(_DWORD *)(v8 + 12) = *(_DWORD *)(a3 + 12);
    *(_DWORD *)(v8 + 16) = *(_DWORD *)(a3 + 16);
    result = *(unsigned int *)(a3 + 20);
    *(_DWORD *)(v8 + 20) = result;
  }
  catch ( ... )
  {
    if ( a1[1] != v11 )
      ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetCount((__int64)a1, v11);
    throw;
  }
  return result;
}
