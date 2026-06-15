/*
 * XREFs of ?NewNode@?$CAtlMap@_KMV?$CElementTraits@_K@ATL@@V?$CElementTraits@M@2@@ATL@@AEAAPEAVCNode@12@_KII@Z @ 0x180024400
 * Callers:
 *     ?OnMaxChannelVolumeChanged@CTrackedEndpoint@@UEAAJ_KM@Z @ 0x180023C70 (-OnMaxChannelVolumeChanged@CTrackedEndpoint@@UEAAJ_KM@Z.c)
 *     ?AddStream@CTrackedEndpoint@@QEAAJPEAUIAudioStreamInfo@@M@Z @ 0x180023E10 (-AddStream@CTrackedEndpoint@@QEAAJPEAUIAudioStreamInfo@@M@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000B358 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Rehash@?$CAtlMap@_KMV?$CElementTraits@_K@ATL@@V?$CElementTraits@M@2@@ATL@@QEAAXI@Z @ 0x180024240 (-Rehash@-$CAtlMap@_KMV-$CElementTraits@_K@ATL@@V-$CElementTraits@M@2@@ATL@@QEAAXI@Z.c)
 *     ?PickSize@?$CAtlMap@_KMV?$CElementTraits@_K@ATL@@V?$CElementTraits@M@2@@ATL@@AEBAI_K@Z @ 0x180024378 (-PickSize@-$CAtlMap@_KMV-$CElementTraits@_K@ATL@@V-$CElementTraits@M@2@@ATL@@AEBAI_K@Z.c)
 */

__int64 __fastcall ATL::CAtlMap<unsigned __int64,float,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<float>>::NewNode(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4)
{
  __int64 v5; // r15
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // r8
  int v11; // edx
  _QWORD *i; // r9
  __int64 v13; // rdi
  unsigned __int64 v14; // rdx
  unsigned int v15; // eax
  __int64 v17; // [rsp+20h] [rbp-38h]

  v5 = a3;
  if ( *(_QWORD *)(a1 + 64) )
    goto LABEL_14;
  v8 = *(unsigned int *)(a1 + 52);
  if ( v8 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v8 < 0x20 )
      goto LABEL_8;
    v8 *= 32LL;
  }
  if ( ~v8 >= 8 )
  {
    v9 = malloc(v8 + 8);
    v10 = v9;
    if ( !v9 )
      goto LABEL_10;
    *v9 = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a1 + 56) = v9;
    goto LABEL_9;
  }
LABEL_8:
  v10 = 0LL;
LABEL_9:
  if ( !v10 )
LABEL_10:
    ATL::AtlThrowImpl(-2147024882);
  v11 = *(_DWORD *)(a1 + 52);
  for ( i = &v10[4 * (unsigned int)(v11 - 1) + 1]; --v11 >= 0; i -= 4 )
  {
    i[2] = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 64) = i;
  }
LABEL_14:
  v13 = *(_QWORD *)(a1 + 64);
  if ( !v13 )
    ATL::AtlThrowImpl(-2147467259);
  v17 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(v13 + 16);
  try
  {
    *(_QWORD *)v13 = a2;
    *(_DWORD *)(v13 + 24) = a4;
  }
  catch ( ... )
  {
    *(_QWORD *)(v17 + 16) = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 64) = v17;
    throw;
  }
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(v13 + 16) = *(_QWORD *)(*(_QWORD *)a1 + 8 * v5);
  *(_QWORD *)(*(_QWORD *)a1 + 8 * v5) = v13;
  v14 = *(_QWORD *)(a1 + 8);
  if ( v14 > *(_QWORD *)(a1 + 32) && !*(_DWORD *)(a1 + 48) )
  {
    v15 = ATL::CAtlMap<unsigned __int64,float,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<float>>::PickSize(
            a1,
            v14);
    ATL::CAtlMap<unsigned __int64,float,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<float>>::Rehash(
      a1,
      v15);
  }
  return v13;
}
