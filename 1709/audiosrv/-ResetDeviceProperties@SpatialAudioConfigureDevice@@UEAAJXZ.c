/*
 * XREFs of ?ResetDeviceProperties@SpatialAudioConfigureDevice@@UEAAJXZ @ 0x1800D5D90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SpatialAudioConfigureDevice::ResetDeviceProperties(SpatialAudioConfigureDevice *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  if ( v1 )
    LeaveCriticalSection(v1);
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 40LL))(*((_QWORD *)this + 12));
}
