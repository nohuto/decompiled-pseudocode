/*
 * XREFs of ?VerifyNoRepeatedResourcesOrConsumers@CConstraintModel@@AEAAJPEAV?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmResourceType@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@W4RmResourceType@@@2@@ATL@@0PEAV?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@3@1@Z @ 0x180114610
 * Callers:
 *     ?Initialize@CConstraintModel@@QEAAJXZ @ 0x180055D1C (-Initialize@CConstraintModel@@QEAAJXZ.c)
 * Callees:
 *     ?LogError@@YAXPEBGZZ @ 0x1800D952C (-LogError@@YAXPEBGZZ.c)
 *     ?VerifyNoRepeatedConsumers@CConstraintModel@@AEAAJPEAV?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@0@Z @ 0x1801144C8 (-VerifyNoRepeatedConsumers@CConstraintModel@@AEAAJPEAV-$CAtlMap@PEAVResourceConsumer@@PEAV-$CAtl.c)
 *     ?VerifyNoRepeatedResources@CConstraintModel@@AEAAJPEAV?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmResourceType@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@W4RmResourceType@@@2@@ATL@@0@Z @ 0x18011456C (-VerifyNoRepeatedResources@CConstraintModel@@AEAAJPEAV-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$.c)
 */

__int64 __fastcall CConstraintModel::VerifyNoRepeatedResourcesOrConsumers(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v6; // rcx
  int v7; // ebx

  v7 = CConstraintModel::VerifyNoRepeatedResources(a1, a2, a3);
  if ( v7 >= 0 )
  {
    v7 = CConstraintModel::VerifyNoRepeatedConsumers(v6, a4, a5);
    if ( v7 < 0 )
      LogError((size_t *)L"Repeated consumers in multiple XMLs not allowed");
  }
  else
  {
    LogError((size_t *)L"Repeated resource types in multiple XMLs not allowed");
  }
  return (unsigned int)v7;
}
