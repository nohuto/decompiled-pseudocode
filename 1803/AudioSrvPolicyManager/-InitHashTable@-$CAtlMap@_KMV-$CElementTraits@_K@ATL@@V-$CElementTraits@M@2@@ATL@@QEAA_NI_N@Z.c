/*
 * XREFs of ?InitHashTable@?$CAtlMap@_KMV?$CElementTraits@_K@ATL@@V?$CElementTraits@M@2@@ATL@@QEAA_NI_N@Z @ 0x180017DB8
 * Callers:
 *     ?SetAt@?$CAtlMap@PEAUIUnknown@@V?$CComPtr@UIAudioProcessNotification@@@ATL@@V?$CElementTraits@PEAUIUnknown@@@3@V?$CElementTraits@V?$CComPtr@UIAudioProcessNotification@@@ATL@@@3@@ATL@@QEAAPEAU__POSITION@@AEBQEAUIUnknown@@AEBV?$CComPtr@UIAudioProcessNotification@@@2@@Z @ 0x1800175F0 (-SetAt@-$CAtlMap@PEAUIUnknown@@V-$CComPtr@UIAudioProcessNotification@@@ATL@@V-$CElementTraits@PE.c)
 *     ??1?$CAtlMap@PEAUIUnknown@@V?$CComPtr@UIAudioProcessNotification@@@ATL@@V?$CElementTraits@PEAUIUnknown@@@3@V?$CElementTraits@V?$CComPtr@UIAudioProcessNotification@@@ATL@@@3@@ATL@@QEAA@XZ @ 0x180017704 (--1-$CAtlMap@PEAUIUnknown@@V-$CComPtr@UIAudioProcessNotification@@@ATL@@V-$CElementTraits@PEAUIU.c)
 *     ?Rehash@?$CAtlMap@_KMV?$CElementTraits@_K@ATL@@V?$CElementTraits@M@2@@ATL@@QEAAXI@Z @ 0x180017E84 (-Rehash@-$CAtlMap@_KMV-$CElementTraits@_K@ATL@@V-$CElementTraits@M@2@@ATL@@QEAAXI@Z.c)
 *     ?OnMaxChannelVolumeChanged@CTrackedEndpoint@@UEAAJ_KM@Z @ 0x18002CD40 (-OnMaxChannelVolumeChanged@CTrackedEndpoint@@UEAAJ_KM@Z.c)
 *     ?AddStream@CTrackedEndpoint@@QEAAJPEAUIAudioStreamInfo@@M@Z @ 0x18002CEE4 (-AddStream@CTrackedEndpoint@@QEAAJPEAUIAudioStreamInfo@@M@Z.c)
 *     ??1?$CAtlMap@_KMV?$CElementTraits@_K@ATL@@V?$CElementTraits@M@2@@ATL@@QEAA@XZ @ 0x18002D160 (--1-$CAtlMap@_KMV-$CElementTraits@_K@ATL@@V-$CElementTraits@M@2@@ATL@@QEAA@XZ.c)
 * Callees:
 *     ?UpdateRehashThresholds@?$CAtlMap@_KMV?$CElementTraits@_K@ATL@@V?$CElementTraits@M@2@@ATL@@AEAAXXZ @ 0x180018234 (-UpdateRehashThresholds@-$CAtlMap@_KMV-$CElementTraits@_K@ATL@@V-$CElementTraits@M@2@@ATL@@AEAAX.c)
 *     memset_0 @ 0x180035A50 (memset_0.c)
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
  void *v11; // rax
  unsigned __int64 v13; // [rsp+20h] [rbp-28h]
  void *v19; // [rsp+68h] [rbp+20h]

  v4 = a2;
  v5 = a1;
  v6 = *a1;
  if ( *a1 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v6);
    *v5 = 0LL;
  }
  if ( !a3 )
    goto LABEL_10;
  v8 = v4;
  v13 = v4;
  try
  {
    v9 = 8 * v4;
    if ( !is_mul_ok(v4, 8uLL) )
      v9 = -1LL;
    v10 = GetProcessHeap();
    v11 = HeapAlloc(v10, 0, v9);
    v19 = v11;
    *v5 = v11;
  }
  catch ( ... )
  {
    v5 = a1;
    LODWORD(v4) = a2;
    v11 = v19;
    v8 = v13;
  }
  if ( v11 )
  {
    memset_0(v11, 0, 8 * v8);
LABEL_10:
    *((_DWORD *)v5 + 4) = v4;
    ATL::CAtlMap<unsigned __int64,float,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<float>>::UpdateRehashThresholds(v5);
    LOBYTE(v11) = 1;
  }
  return (char)v11;
}
