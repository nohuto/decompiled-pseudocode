/*
 * XREFs of ?QueryInterface@CPerEndpointVolumeAudioSession@@EEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AC600
 * Callers:
 *     ?QueryInterface@CPerEndpointVolumeAudioSession@@G7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800658D0 (-QueryInterface@CPerEndpointVolumeAudioSession@@G7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPerEndpointVolumeAudioSession@@GBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800658E0 (-QueryInterface@CPerEndpointVolumeAudioSession@@GBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPerEndpointVolumeAudioSession@@GBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800658F0 (-QueryInterface@CPerEndpointVolumeAudioSession@@GBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPerEndpointVolumeAudioSession@@GCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180065900 (-QueryInterface@CPerEndpointVolumeAudioSession@@GCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPerEndpointVolumeAudioSession@@GDNI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180065910 (-QueryInterface@CPerEndpointVolumeAudioSession@@GDNI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?QueryInterface@CAudioSession@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800353E0 (-QueryInterface@CAudioSession@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::QueryInterface(
        CPerEndpointVolumeAudioSession *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // r9d
  __int64 v4; // rax

  v3 = a3 == 0LL ? 0x80004003 : 0;
  if ( a3 )
  {
    v4 = *(_QWORD *)&IID_IAudioEndpointVolumeCallback.Data1 - *(_QWORD *)&a2->Data1;
    if ( *(_QWORD *)&IID_IAudioEndpointVolumeCallback.Data1 == *(_QWORD *)&a2->Data1 )
      v4 = *(_QWORD *)IID_IAudioEndpointVolumeCallback.Data4 - *(_QWORD *)a2->Data4;
    if ( v4 )
    {
      return (unsigned int)CAudioSession::QueryInterface(this, a2, a3);
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)this + 10);
      *a3 = (void *)(((unsigned __int64)this + 984) & -(__int64)(this != 0LL));
    }
  }
  return v3;
}
