/*
 * XREFs of ?FreeNode@?$CAtlMap@_KMV?$CElementTraits@_K@ATL@@V?$CElementTraits@M@2@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x18002D3B8
 * Callers:
 *     ?RemoveStream@CTrackedEndpoint@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x18002D024 (-RemoveStream@CTrackedEndpoint@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ??1?$CAtlMap@_KMV?$CElementTraits@_K@ATL@@V?$CElementTraits@M@2@@ATL@@QEAA@XZ @ 0x18002D160 (--1-$CAtlMap@_KMV-$CElementTraits@_K@ATL@@V-$CElementTraits@M@2@@ATL@@QEAA@XZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001013C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Rehash@?$CAtlMap@_KMV?$CElementTraits@_K@ATL@@V?$CElementTraits@M@2@@ATL@@QEAAXI@Z @ 0x180017E84 (-Rehash@-$CAtlMap@_KMV-$CElementTraits@_K@ATL@@V-$CElementTraits@M@2@@ATL@@QEAAXI@Z.c)
 *     ?PickSize@?$CAtlMap@_KMV?$CElementTraits@_K@ATL@@V?$CElementTraits@M@2@@ATL@@AEBAI_K@Z @ 0x180017FC0 (-PickSize@-$CAtlMap@_KMV-$CElementTraits@_K@ATL@@V-$CElementTraits@M@2@@ATL@@AEBAI_K@Z.c)
 */

void __fastcall ATL::CAtlMap<unsigned __int64,float,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<float>>::FreeNode(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rax
  unsigned int v5; // eax
  _QWORD *v6; // rcx
  _QWORD *v7; // rbx

  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 64) = a2;
  v3 = *(_QWORD *)(a1 + 8) - 1LL;
  v4 = v3;
  *(_QWORD *)(a1 + 8) = v3;
  if ( v3 < *(_QWORD *)(a1 + 40) && !*(_DWORD *)(a1 + 48) )
  {
    v5 = ATL::CAtlMap<unsigned __int64,float,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<float>>::PickSize(
           a1,
           v3);
    ATL::CAtlMap<unsigned __int64,float,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<float>>::Rehash(
      a1,
      v5);
    v4 = *(_QWORD *)(a1 + 8);
  }
  if ( !v4 )
  {
    *(_QWORD *)(a1 + 64) = 0LL;
    v6 = *(_QWORD **)(a1 + 56);
    if ( v6 )
    {
      do
      {
        v7 = (_QWORD *)*v6;
        free(v6);
        v6 = v7;
      }
      while ( v7 );
      *(_QWORD *)(a1 + 56) = 0LL;
    }
  }
}
