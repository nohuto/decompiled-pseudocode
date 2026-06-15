/*
 * XREFs of ?RemoveAt@?$CAtlArray@PEAVCActiveAudioSession@@V?$CElementTraits@PEAVCActiveAudioSession@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x18000F0F8
 * Callers:
 *     ?UnregisterSession@CWindowsPolicyManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x1800099B4 (-UnregisterSession@CWindowsPolicyManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z.c)
 *     ??1CDuckingManager@@UEAA@XZ @ 0x18000BDD4 (--1CDuckingManager@@UEAA@XZ.c)
 *     ?OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18000C4A0 (-OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001013C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x180035AB6 (_invalid_parameter_noinfo.c)
 */

unsigned __int64 __fastcall ATL::CAtlArray<CActiveAudioSession *,ATL::CElementTraits<CActiveAudioSession *>>::RemoveAt(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // r9
  unsigned __int64 v4; // r8
  size_t v5; // rcx
  const void *v6; // r10
  void *v7; // r9
  unsigned __int64 result; // rax

  v2 = a2 + 1;
  if ( a2 + 1 < a2 || a2 == -1LL || (v4 = a1[1], v2 > v4) )
    ATL::AtlThrowImpl(-2147024809);
  if ( v4 != v2 )
  {
    v5 = 8 * (v4 - v2);
    v6 = (const void *)(*a1 + 8 * v2);
    v7 = (void *)(*a1 + 8 * a2);
    if ( v5 )
    {
      if ( !v7 || !v6 )
      {
        *(_DWORD *)_o__errno(v5, a2) = 22;
        invalid_parameter_noinfo();
        ATL::AtlThrowImpl(-2147024809);
      }
      memmove(v7, v6, v5);
      v4 = a1[1];
    }
  }
  result = v4 - 1;
  a1[1] = v4 - 1;
  return result;
}
