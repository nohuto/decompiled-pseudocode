/*
 * XREFs of ?FreeNode@?$CAtlMap@_KMV?$CElementTraits@_K@ATL@@V?$CElementTraits@M@2@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x180024530
 * Callers:
 *     ?RemoveStream@CTrackedEndpoint@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x180023F44 (-RemoveStream@CTrackedEndpoint@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ??1?$CAtlMap@_KMV?$CElementTraits@_K@ATL@@V?$CElementTraits@M@2@@ATL@@QEAA@XZ @ 0x180024070 (--1-$CAtlMap@_KMV-$CElementTraits@_K@ATL@@V-$CElementTraits@M@2@@ATL@@QEAA@XZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000B358 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Rehash@?$CAtlMap@_KMV?$CElementTraits@_K@ATL@@V?$CElementTraits@M@2@@ATL@@QEAAXI@Z @ 0x180024240 (-Rehash@-$CAtlMap@_KMV-$CElementTraits@_K@ATL@@V-$CElementTraits@M@2@@ATL@@QEAAXI@Z.c)
 *     ?PickSize@?$CAtlMap@_KMV?$CElementTraits@_K@ATL@@V?$CElementTraits@M@2@@ATL@@AEBAI_K@Z @ 0x180024378 (-PickSize@-$CAtlMap@_KMV-$CElementTraits@_K@ATL@@V-$CElementTraits@M@2@@ATL@@AEBAI_K@Z.c)
 */

void __fastcall ATL::CAtlMap<unsigned __int64,float,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<float>>::FreeNode(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v3; // rdx
  unsigned int v4; // eax
  _QWORD *v5; // rcx
  _QWORD *v6; // rbx

  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 64);
  --*(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 64) = a2;
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 < *(_QWORD *)(a1 + 40) && !*(_DWORD *)(a1 + 48) )
  {
    v4 = ATL::CAtlMap<unsigned __int64,float,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<float>>::PickSize(
           a1,
           v3);
    ATL::CAtlMap<unsigned __int64,float,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<float>>::Rehash(
      a1,
      v4);
  }
  if ( !*(_QWORD *)(a1 + 8) )
  {
    *(_QWORD *)(a1 + 64) = 0LL;
    v5 = *(_QWORD **)(a1 + 56);
    if ( v5 )
    {
      do
      {
        v6 = (_QWORD *)*v5;
        free(v5);
        v5 = v6;
      }
      while ( v6 );
      *(_QWORD *)(a1 + 56) = 0LL;
    }
  }
}
