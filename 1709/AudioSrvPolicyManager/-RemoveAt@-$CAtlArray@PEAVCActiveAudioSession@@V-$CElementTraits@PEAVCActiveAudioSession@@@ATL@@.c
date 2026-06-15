/*
 * XREFs of ?RemoveAt@?$CAtlArray@PEAVCActiveAudioSession@@V?$CElementTraits@PEAVCActiveAudioSession@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x18000A41C
 * Callers:
 *     ?UnregisterSession@CWindowsPolicyManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x180005C04 (-UnregisterSession@CWindowsPolicyManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z.c)
 *     ??1CDuckingManager@@UEAA@XZ @ 0x180007114 (--1CDuckingManager@@UEAA@XZ.c)
 *     ?OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x1800077C0 (-OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000B358 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x1800275D0 (_invalid_parameter_noinfo.c)
 */

void __fastcall ATL::CAtlArray<CActiveAudioSession *,ATL::CElementTraits<CActiveAudioSession *>>::RemoveAt(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rcx
  const void *v6; // r9
  size_t v7; // r8
  void *v8; // r10

  v2 = a2 + 1;
  if ( a2 + 1 < a2 || a2 == -1LL || (v4 = a1[1], v2 > v4) )
    ATL::AtlThrowImpl(-2147024809);
  v5 = v4 - v2;
  if ( v5 )
  {
    v6 = (const void *)(*a1 + 8 * v2);
    v7 = 8 * v5;
    v8 = (void *)(*a1 + 8 * a2);
    if ( 8 * v5 )
    {
      if ( !v8 || !v6 )
      {
        *(_DWORD *)_o__errno(v5, a2, v7, v6) = 22;
        invalid_parameter_noinfo();
        ATL::AtlThrowImpl(-2147024809);
      }
      memmove(v8, v6, v7);
    }
  }
  --a1[1];
}
