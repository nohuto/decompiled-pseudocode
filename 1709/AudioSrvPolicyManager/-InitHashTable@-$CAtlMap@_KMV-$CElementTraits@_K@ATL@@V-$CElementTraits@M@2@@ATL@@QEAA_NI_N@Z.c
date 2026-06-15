/*
 * XREFs of ?InitHashTable@?$CAtlMap@_KMV?$CElementTraits@_K@ATL@@V?$CElementTraits@M@2@@ATL@@QEAA_NI_N@Z @ 0x180024178
 * Callers:
 *     ?OnMaxChannelVolumeChanged@CTrackedEndpoint@@UEAAJ_KM@Z @ 0x180023C70 (-OnMaxChannelVolumeChanged@CTrackedEndpoint@@UEAAJ_KM@Z.c)
 *     ?AddStream@CTrackedEndpoint@@QEAAJPEAUIAudioStreamInfo@@M@Z @ 0x180023E10 (-AddStream@CTrackedEndpoint@@QEAAJPEAUIAudioStreamInfo@@M@Z.c)
 *     ??1?$CAtlMap@_KMV?$CElementTraits@_K@ATL@@V?$CElementTraits@M@2@@ATL@@QEAA@XZ @ 0x180024070 (--1-$CAtlMap@_KMV-$CElementTraits@_K@ATL@@V-$CElementTraits@M@2@@ATL@@QEAA@XZ.c)
 *     ?Rehash@?$CAtlMap@_KMV?$CElementTraits@_K@ATL@@V?$CElementTraits@M@2@@ATL@@QEAAXI@Z @ 0x180024240 (-Rehash@-$CAtlMap@_KMV-$CElementTraits@_K@ATL@@V-$CElementTraits@M@2@@ATL@@QEAAXI@Z.c)
 * Callees:
 *     ?UpdateRehashThresholds@?$CAtlMap@_KMV?$CElementTraits@_K@ATL@@V?$CElementTraits@M@2@@ATL@@AEAAXXZ @ 0x1800245B4 (-UpdateRehashThresholds@-$CAtlMap@_KMV-$CElementTraits@_K@ATL@@V-$CElementTraits@M@2@@ATL@@AEAAX.c)
 *     memset @ 0x1800275FE (memset.c)
 */

char __fastcall ATL::CAtlMap<unsigned __int64,float,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<float>>::InitHashTable(
        void **a1,
        unsigned int a2,
        char a3)
{
  unsigned __int64 v4; // rsi
  void **v5; // rdi
  void *v6; // rbx
  HANDLE ProcessHeap; // rax
  unsigned __int64 v8; // r14
  SIZE_T v9; // rbx
  HANDLE v10; // rax
  unsigned __int64 v14; // [rsp+68h] [rbp+20h]

  v4 = a2;
  v5 = a1;
  v6 = *a1;
  if ( *a1 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v6);
    *v5 = 0LL;
  }
  if ( a3 )
  {
    v8 = v4;
    v14 = v4;
    try
    {
      v9 = 8 * v4;
      if ( !is_mul_ok(v4, 8uLL) )
        v9 = -1LL;
      v10 = GetProcessHeap();
      *v5 = HeapAlloc(v10, 0, v9);
    }
    catch ( ... )
    {
      v5 = a1;
      LODWORD(v4) = a2;
      v8 = v14;
    }
    if ( !*v5 )
      return 0;
    memset(*v5, 0, 8 * v8);
  }
  *((_DWORD *)v5 + 4) = v4;
  ATL::CAtlMap<unsigned __int64,float,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<float>>::UpdateRehashThresholds(v5);
  return 1;
}
