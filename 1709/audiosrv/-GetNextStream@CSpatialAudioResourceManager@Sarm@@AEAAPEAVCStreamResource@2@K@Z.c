/*
 * XREFs of ?GetNextStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z @ 0x1800C0570
 * Callers:
 *     ?GrantApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x1800C0890 (-GrantApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     ?HandleRedistributeObjects@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x1800C0998 (-HandleRedistributeObjects@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     ?RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x1800C1D70 (-RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     std::_Func_impl__lambda_afaf78576840e78fa8c7f1d1d7e112d3__std::allocator_int__void_::_Do_call @ 0x1800C2AB0 (std--_Func_impl__lambda_afaf78576840e78fa8c7f1d1d7e112d3__std--allocator_int__void_--_Do_call.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GetNextValue@?$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V?$CElementTraits@PEAUIAudioStreamInfo@@@ATL@@V?$CElementTraits@VCStreamResource@Sarm@@@5@@ATL@@QEAAAEAVCStreamResource@Sarm@@AEAPEAU__POSITION@@@Z @ 0x1800C0600 (-GetNextValue@-$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V-$CElementTraits@PEAUIAudi.c)
 */

struct Sarm::CStreamResource *__fastcall Sarm::CSpatialAudioResourceManager::GetNextStream(
        Sarm::CSpatialAudioResourceManager *this,
        int a2)
{
  char *v2; // rbx
  struct Sarm::CStreamResource *result; // rax
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // rdx

  v2 = (char *)this + 232;
  result = 0LL;
  if ( *((_QWORD *)this + 38) )
    result = (struct Sarm::CStreamResource *)ATL::CAtlMap<IAudioStreamInfo *,Sarm::CStreamResource,ATL::CElementTraits<IAudioStreamInfo *>,ATL::CElementTraits<Sarm::CStreamResource>>::GetNextValue((char *)this + 232);
  while ( result && *((_DWORD *)result + 13) != a2 )
  {
    result = 0LL;
    if ( *((_QWORD *)v2 + 9) )
    {
      v5 = *((_QWORD *)v2 + 9);
      if ( !v5 )
        ATL::AtlThrowImpl(-2147467259);
      v6 = *(_QWORD *)(v5 + 104);
      if ( !v6 )
      {
        v7 = (unsigned int)(*(_DWORD *)(v5 + 112) % *((_DWORD *)v2 + 4) + 1);
        do
        {
          if ( (unsigned int)v7 >= *((_DWORD *)v2 + 4) )
            break;
          if ( *(_QWORD *)(*(_QWORD *)v2 + 8 * v7) )
            v6 = *(_QWORD *)(*(_QWORD *)v2 + 8 * v7);
          v7 = (unsigned int)(v7 + 1);
        }
        while ( !v6 );
      }
      *((_QWORD *)v2 + 9) = v6;
      result = (struct Sarm::CStreamResource *)(v5 + 8);
    }
  }
  return result;
}
