/*
 * XREFs of ?CurrentVolumeLevel@VolumeHardwareLogger@@AEAA?AUVolumeLevel@1@XZ @ 0x18004BC88
 * Callers:
 *     ?Initialize@VolumeHardwareLogger@@QEAAXPEAVCVolumeHardware@@@Z @ 0x18004BD60 (-Initialize@VolumeHardwareLogger@@QEAAXPEAVCVolumeHardware@@@Z.c)
 *     ?HardwareInitiatedChange@VolumeHardwareLogger@@QEAAXXZ @ 0x1800A23F0 (-HardwareInitiatedChange@VolumeHardwareLogger@@QEAAXXZ.c)
 *     ?LogBurst@VolumeHardwareLogger@@QEAAXXZ @ 0x1800A302C (-LogBurst@VolumeHardwareLogger@@QEAAXXZ.c)
 * Callees:
 *     ?GetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJPEAM@Z @ 0x180009550 (-GetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJPEAM@Z.c)
 *     ?GetMasterVolumeLevel@CVolumeControlBase@@UEAAJPEAM@Z @ 0x18004E010 (-GetMasterVolumeLevel@CVolumeControlBase@@UEAAJPEAM@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VolumeHardwareLogger::CurrentVolumeLevel(__int64 a1, __int64 a2)
{
  float *v4; // rsi
  CVolumeControlBase *v5; // rcx
  __int64 (__fastcall *v6)(CVolumeControlBase *__hidden, float *); // rax
  CVolumeControlBase *v7; // rcx
  __int64 (__fastcall *v8)(CVolumeControlBase *, float *); // rax

  *(_DWORD *)a2 = 0;
  v4 = (float *)(a2 + 4);
  *(_DWORD *)(a2 + 4) = 0;
  *(_DWORD *)(a2 + 8) = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)a1);
  v5 = *(CVolumeControlBase **)(a1 + 64);
  if ( v5 && *(float *)(a1 + 80) != 0.0 )
  {
    v6 = *(__int64 (__fastcall **)(CVolumeControlBase *__hidden, float *))(*(_QWORD *)v5 + 104LL);
    if ( v6 == CVolumeControlBase::GetMasterVolumeLevel )
      CVolumeControlBase::GetMasterVolumeLevel(v5, (float *)a2);
    else
      v6(v5, (float *)a2);
    v7 = *(CVolumeControlBase **)(a1 + 64);
    v8 = *(__int64 (__fastcall **)(CVolumeControlBase *, float *))(*(_QWORD *)v7 + 112LL);
    if ( v8 == CVolumeControlBase::GetMasterVolumeLevelScalar )
      CVolumeControlBase::GetMasterVolumeLevelScalar(v7, v4);
    else
      v8(v7, v4);
    *(_DWORD *)(a2 + 8) = (int)(float)((float)((float)(*(float *)a2 - *(float *)(a1 + 72)) / *(float *)(a1 + 80)) + 0.5);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)a1);
  return a2;
}
