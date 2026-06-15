/*
 * XREFs of ?GetCurrentSessionGain@CAudioSession@@IEAAJAEA_NAEAMAEA_J@Z @ 0x18005A7D8
 * Callers:
 *     ?AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180070260 (-AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

__int64 __fastcall CAudioSession::GetCurrentSessionGain(CAudioSession *this, bool *a2, float *a3, __int64 *a4)
{
  bool v7; // zf
  bool v8; // al
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+28h] [rbp-10h]

  *a4 = 50000LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 864);
  v11 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v7 = *((_DWORD *)this + 227) == 0;
  *a3 = *((float *)this + 226);
  v8 = !v7;
  v7 = v11 == 0;
  *a2 = v8;
  if ( !v7 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
