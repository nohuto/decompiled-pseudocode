/*
 * XREFs of ?FindNextNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEBAPEAVCNode@12@PEAV312@@Z @ 0x180005274
 * Callers:
 *     ?GetNextValue@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@AEAPEAU__POSITION@@@Z @ 0x1800052B4 (-GetNextValue@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTra.c)
 *     ?FindAudioSession@CAudioSessionManager@@IEAAJKPEBU_GUID@@PEAPEAVCAudioSession@@@Z @ 0x1800B2144 (-FindAudioSession@CAudioSessionManager@@IEAAJKPEBU_GUID@@PEAPEAVCAudioSession@@@Z.c)
 *     ?FindExclusiveModeAudioSession@CAudioSessionManager@@QEAAJPEAPEAVCAudioSession@@@Z @ 0x1800B2224 (-FindExclusiveModeAudioSession@CAudioSessionManager@@QEAAJPEAPEAVCAudioSession@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::FindNextNode(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // rdx

  if ( !a2 )
    return 0LL;
  v2 = *(_QWORD *)(a2 + 88);
  if ( !v2 )
  {
    v3 = (unsigned int)(*(_DWORD *)(a2 + 96) % *(_DWORD *)(a1 + 16) + 1);
    do
    {
      if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 16) )
        break;
      if ( *(_QWORD *)(*(_QWORD *)a1 + 8 * v3) )
        v2 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v3);
      v3 = (unsigned int)(v3 + 1);
    }
    while ( !v2 );
  }
  return v2;
}
