/*
 * XREFs of ?GetNode@?$CAtlMap@_KMV?$CElementTraits@_K@ATL@@V?$CElementTraits@M@2@@ATL@@AEBAPEAVCNode@12@_KAEAI1AEAPEAV312@@Z @ 0x18002412C
 * Callers:
 *     ?OnMaxChannelVolumeChanged@CTrackedEndpoint@@UEAAJ_KM@Z @ 0x180023C70 (-OnMaxChannelVolumeChanged@CTrackedEndpoint@@UEAAJ_KM@Z.c)
 *     ?AddStream@CTrackedEndpoint@@QEAAJPEAUIAudioStreamInfo@@M@Z @ 0x180023E10 (-AddStream@CTrackedEndpoint@@QEAAJPEAUIAudioStreamInfo@@M@Z.c)
 *     ?RemoveStream@CTrackedEndpoint@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x180023F44 (-RemoveStream@CTrackedEndpoint@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CAtlMap<unsigned __int64,float,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<float>>::GetNode(
        __int64 *a1,
        __int64 a2,
        _DWORD *a3,
        _DWORD *a4,
        _QWORD *a5)
{
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 result; // rax

  *a4 = a2;
  v5 = (unsigned int)a2 % *((_DWORD *)a1 + 4);
  *a3 = v5;
  v6 = *a1;
  if ( *a1 )
  {
    v7 = 0LL;
    result = *(_QWORD *)(v6 + 8 * v5);
    *a5 = 0LL;
    while ( result )
    {
      if ( *(_DWORD *)(result + 24) == (_DWORD)a2 && *(_QWORD *)result == a2 )
      {
        *a5 = v7;
        return result;
      }
      v7 = result;
      result = *(_QWORD *)(result + 16);
    }
  }
  return 0LL;
}
