/*
 * XREFs of ?ResetDeviceProperties@SpatialAudioConfigureDevice@@UEAAJXZ @ 0x18003BF40
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 */

__int64 __fastcall SpatialAudioConfigureDevice::ResetDeviceProperties(SpatialAudioConfigureDevice *this)
{
  SpatialAudioDevicePropertyWriter *v2; // rcx
  __int64 (*v3)(void); // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)this + 40, (__int64)&lpCriticalSection);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  v2 = (SpatialAudioDevicePropertyWriter *)*((_QWORD *)this + 75);
  v3 = *(__int64 (**)(void))(*(_QWORD *)v2 + 24LL);
  if ( (char *)v3 == (char *)SpatialAudioDevicePropertyWriter::ResetDeviceProperties )
    return SpatialAudioDevicePropertyWriter::ResetDeviceProperties(v2);
  else
    return v3();
}
