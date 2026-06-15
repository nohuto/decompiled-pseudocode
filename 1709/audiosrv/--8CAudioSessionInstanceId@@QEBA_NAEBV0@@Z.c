/*
 * XREFs of ??8CAudioSessionInstanceId@@QEBA_NAEBV0@@Z @ 0x180017774
 * Callers:
 *     ?GetNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEBAPEAVCNode@12@AEBVCAudioSessionInstanceId@@AEAI1AEAPEAV312@@Z @ 0x180014C00 (-GetNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@.c)
 *     ?FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@@Z @ 0x180016930 (-FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@.c)
 * Callees:
 *     <none>
 */

bool __fastcall CAudioSessionInstanceId::operator==(__int64 a1, __int64 a2)
{
  int v4; // eax
  bool v5; // bl
  int v7; // eax
  __int64 v8; // rcx

  if ( (unsigned int)_o__wcsicmp(*(_QWORD *)a1, *(_QWORD *)a2) )
    return 0;
  v4 = *(_DWORD *)(a1 + 64);
  v5 = 1;
  if ( v4 != *(_DWORD *)(a2 + 64) || !v4 && *(_DWORD *)(a1 + 56) != *(_DWORD *)(a2 + 56) )
    return 0;
  v7 = *(_DWORD *)(a1 + 48);
  if ( v7 == *(_DWORD *)(a2 + 48) && (v7 || !(unsigned int)_o__wcsicmp(*(_QWORD *)(a1 + 8), *(_QWORD *)(a2 + 8))) )
  {
    v8 = *(_QWORD *)(a1 + 24) - *(_QWORD *)(a2 + 24);
    if ( !v8 )
      v8 = *(_QWORD *)(a1 + 32) - *(_QWORD *)(a2 + 32);
    v5 = v8 != 0;
  }
  return !v5;
}
