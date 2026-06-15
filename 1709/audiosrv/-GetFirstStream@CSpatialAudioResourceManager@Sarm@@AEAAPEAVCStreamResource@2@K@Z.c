/*
 * XREFs of ?GetFirstStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z @ 0x1800C0420
 * Callers:
 *     ?GrantApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x1800C0890 (-GrantApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     ?HandleAppVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x1800C08EC (-HandleAppVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     ?HandleRedistributeObjects@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x1800C0998 (-HandleRedistributeObjects@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     ?RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x1800C1D70 (-RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     std::_Func_impl__lambda_afaf78576840e78fa8c7f1d1d7e112d3__std::allocator_int__void_::_Do_call @ 0x1800C2AB0 (std--_Func_impl__lambda_afaf78576840e78fa8c7f1d1d7e112d3__std--allocator_int__void_--_Do_call.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GetNextValue@?$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V?$CElementTraits@PEAUIAudioStreamInfo@@@ATL@@V?$CElementTraits@VCStreamResource@Sarm@@@5@@ATL@@QEAAAEAVCStreamResource@Sarm@@AEAPEAU__POSITION@@@Z @ 0x1800C0600 (-GetNextValue@-$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V-$CElementTraits@PEAUIAudi.c)
 */

struct Sarm::CStreamResource *__fastcall Sarm::CSpatialAudioResourceManager::GetFirstStream(
        Sarm::CSpatialAudioResourceManager *this,
        int a2)
{
  char *v2; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct Sarm::CStreamResource *result; // rax
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rdx

  v2 = (char *)this + 232;
  if ( *((_QWORD *)this + 30) && (v4 = 0LL, *((_DWORD *)this + 62)) )
  {
    v5 = *(_QWORD *)v2;
    while ( !*(_QWORD *)(v5 + 8 * v4) )
    {
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= *((_DWORD *)this + 62) )
        goto LABEL_6;
    }
    v6 = *(_QWORD *)(v5 + 8 * v4);
  }
  else
  {
LABEL_6:
    v6 = 0LL;
  }
  result = 0LL;
  *((_QWORD *)v2 + 9) = v6;
  if ( v6 )
    result = (struct Sarm::CStreamResource *)ATL::CAtlMap<IAudioStreamInfo *,Sarm::CStreamResource,ATL::CElementTraits<IAudioStreamInfo *>,ATL::CElementTraits<Sarm::CStreamResource>>::GetNextValue(v2);
  while ( result && *((_DWORD *)result + 13) != a2 )
  {
    result = 0LL;
    if ( *((_QWORD *)v2 + 9) )
    {
      v8 = *((_QWORD *)v2 + 9);
      if ( !v8 )
        ATL::AtlThrowImpl(-2147467259);
      v9 = *(_QWORD *)(v8 + 104);
      if ( !v9 )
      {
        v10 = (unsigned int)(*(_DWORD *)(v8 + 112) % *((_DWORD *)v2 + 4) + 1);
        do
        {
          if ( (unsigned int)v10 >= *((_DWORD *)v2 + 4) )
            break;
          if ( *(_QWORD *)(*(_QWORD *)v2 + 8 * v10) )
            v9 = *(_QWORD *)(*(_QWORD *)v2 + 8 * v10);
          v10 = (unsigned int)(v10 + 1);
        }
        while ( !v9 );
      }
      *((_QWORD *)v2 + 9) = v9;
      result = (struct Sarm::CStreamResource *)(v8 + 8);
    }
  }
  return result;
}
