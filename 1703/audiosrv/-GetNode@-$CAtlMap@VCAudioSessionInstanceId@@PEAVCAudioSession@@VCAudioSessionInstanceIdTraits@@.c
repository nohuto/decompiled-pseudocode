/*
 * XREFs of ?GetNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEBAPEAVCNode@12@AEBVCAudioSessionInstanceId@@AEAI1AEAPEAV312@@Z @ 0x180025328
 * Callers:
 *     ?FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@@Z @ 0x1800226B8 (-FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@.c)
 *     ?RemoveKey@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA_NAEBVCAudioSessionInstanceId@@@Z @ 0x1800253FC (-RemoveKey@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits.c)
 *     ?SetAt@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBVCAudioSessionInstanceId@@AEBQEAVCAudioSession@@@Z @ 0x180025440 (-SetAt@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V-.c)
 * Callees:
 *     ?Hash@CAudioSessionInstanceIdTraits@@SAKAEBVCAudioSessionInstanceId@@@Z @ 0x180024DE4 (-Hash@CAudioSessionInstanceIdTraits@@SAKAEBVCAudioSessionInstanceId@@@Z.c)
 */

__int64 __fastcall ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNode(
        __int64 a1,
        const struct CAudioSessionInstanceId *a2,
        int *a3,
        unsigned int *a4,
        _QWORD *a5)
{
  unsigned int v9; // eax
  __int64 v10; // rsi
  __int64 i; // rbx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rax

  v9 = CAudioSessionInstanceIdTraits::Hash(a2);
  *a4 = v9;
  *a3 = v9 % *(_DWORD *)(a1 + 16);
  if ( *(_QWORD *)a1 )
  {
    v10 = 0LL;
    *a5 = 0LL;
    for ( i = *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)*a3); i; i = *(_QWORD *)(i + 88) )
    {
      if ( *(_DWORD *)(i + 96) == *a4 && !(unsigned int)_o__wcsicmp(*(_QWORD *)i, *(_QWORD *)a2) )
      {
        v12 = *(_DWORD *)(i + 64);
        if ( v12 == *((_DWORD *)a2 + 16) && (v12 || *(_DWORD *)(i + 56) == *((_DWORD *)a2 + 14)) )
        {
          v13 = *(_DWORD *)(i + 48);
          if ( v13 == *((_DWORD *)a2 + 12)
            && (v13 || !(unsigned int)_o__wcsicmp(*(_QWORD *)(i + 8), *((_QWORD *)a2 + 1))) )
          {
            v14 = *(_QWORD *)(i + 24) - *((_QWORD *)a2 + 3);
            if ( !v14 )
              v14 = *(_QWORD *)(i + 32) - *((_QWORD *)a2 + 4);
            if ( !v14 )
            {
              *a5 = v10;
              return i;
            }
          }
        }
      }
      v10 = i;
    }
  }
  return 0LL;
}
