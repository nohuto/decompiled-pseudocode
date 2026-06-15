/*
 * XREFs of ?Initialize@VolumeHardwareLogger@@QEAAXPEAVCVolumeHardware@@@Z @ 0x18004BD60
 * Callers:
 *     ?Initialize@CVolumeHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18004D7BC (-Initialize@CVolumeHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 * Callees:
 *     ?GetVolumeRange@CVolumeControlBase@@UEAAJIPEAM00@Z @ 0x1800095E0 (-GetVolumeRange@CVolumeControlBase@@UEAAJIPEAM00@Z.c)
 *     ?CurrentVolumeLevel@VolumeHardwareLogger@@AEAA?AUVolumeLevel@1@XZ @ 0x18004BC88 (-CurrentVolumeLevel@VolumeHardwareLogger@@AEAA-AUVolumeLevel@1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VolumeHardwareLogger::Initialize(char *pv, struct CVolumeHardware *this)
{
  float *v4; // r9
  float *v5; // r8
  __int64 (__fastcall *v6)(CVolumeControlBase *, unsigned int, float *, float *, float *); // rax
  __int64 v7; // rax
  float *v8; // [rsp+20h] [rbp-38h]
  _BYTE v9[32]; // [rsp+38h] [rbp-20h] BYREF

  EnterCriticalSection((LPCRITICAL_SECTION)pv);
  *((_QWORD *)pv + 8) = this;
  QueryPerformanceFrequency((LARGE_INTEGER *)pv + 5);
  *((_QWORD *)pv + 6) = CreateThreadpoolTimer(VolumeHardwareLogger::TimerCallback, pv, 0LL);
  if ( this )
  {
    v4 = (float *)(pv + 76);
    v5 = (float *)(pv + 72);
    v6 = *(__int64 (__fastcall **)(CVolumeControlBase *, unsigned int, float *, float *, float *))(*(_QWORD *)this
                                                                                                 + 152LL);
    v8 = (float *)(pv + 80);
    if ( v6 == CVolumeControlBase::GetVolumeRange )
      CVolumeControlBase::GetVolumeRange(this, 0xFFFFFFFF, v5, v4, v8);
    else
      v6(this, 0xFFFFFFFF, v5, v4, v8);
  }
  v7 = VolumeHardwareLogger::CurrentVolumeLevel((__int64)pv, (__int64)v9);
  *((_QWORD *)pv + 11) = *(_QWORD *)v7;
  LODWORD(v7) = *(_DWORD *)(v7 + 8);
  *((_DWORD *)pv + 24) = v7;
  *((_DWORD *)pv + 21) = v7;
  LeaveCriticalSection((LPCRITICAL_SECTION)pv);
}
