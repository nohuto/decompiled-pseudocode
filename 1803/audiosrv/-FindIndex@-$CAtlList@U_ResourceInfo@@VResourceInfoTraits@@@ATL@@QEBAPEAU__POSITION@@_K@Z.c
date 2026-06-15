/*
 * XREFs of ?FindIndex@?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEBAPEAU__POSITION@@_K@Z @ 0x180113AD4
 * Callers:
 *     ?CopyResourceLimits@CConstraintModel@@AEAAJPEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@0@Z @ 0x180113924 (-CopyResourceLimits@CConstraintModel@@AEAAJPEAV-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@.c)
 *     ?GetResourceInfoArrayFromResourceList@CConstraintModel@@AEAAJPEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@W4RmResourceType@@KPEAKPEAPEAU_ResourceInfo@@@Z @ 0x180113CC8 (-GetResourceInfoArrayFromResourceList@CConstraintModel@@AEAAJPEAV-$CAtlList@U_ResourceInfo@@VRes.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ATL::CAtlList<_ResourceInfo,ResourceInfoTraits>::FindIndex(__int64 a1, unsigned __int64 a2)
{
  _QWORD *result; // rax

  if ( a2 >= *(_QWORD *)(a1 + 16) )
    return 0LL;
  result = *(_QWORD **)a1;
  if ( !*(_QWORD *)a1 )
    return 0LL;
  for ( ; a2; --a2 )
    result = (_QWORD *)*result;
  return result;
}
