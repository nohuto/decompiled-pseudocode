/*
 * XREFs of ?LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ @ 0x180030FA8
 * Callers:
 *     ??1AudioSrvVolumeTelemetryStreamVolume@@QEAA@XZ @ 0x180011868 (--1AudioSrvVolumeTelemetryStreamVolume@@QEAA@XZ.c)
 *     ??1CAudioSession@@MEAA@XZ @ 0x180019B18 (--1CAudioSession@@MEAA@XZ.c)
 *     ?Update@AudioSrvVolumeTelemetry@@IEAAXXZ @ 0x18005B3BC (-Update@AudioSrvVolumeTelemetry@@IEAAXXZ.c)
 *     ??1CVolumeControlBase@@MEAA@XZ @ 0x180067E6C (--1CVolumeControlBase@@MEAA@XZ.c)
 * Callees:
 *     ?Fire@AudioSrvVolumeTelemetryStreamVolume@@EEAAX_KI@Z @ 0x180011680 (-Fire@AudioSrvVolumeTelemetryStreamVolume@@EEAAX_KI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall AudioSrvVolumeTelemetry::LogTelemetry(
        void (__fastcall ***this)(AudioSrvVolumeTelemetryStreamVolume *this, __int64 a2, unsigned int a3))
{
  char v1; // di
  void (__fastcall **v4)(AudioSrvVolumeTelemetryStreamVolume *, __int64, unsigned int); // rsi
  __int64 v5; // rdx
  __int64 v6; // r8
  void (__fastcall *v7)(AudioSrvVolumeTelemetryStreamVolume *, __int64, unsigned int); // rax

  v1 = 0;
  if ( this[1] )
  {
    v4 = this[1];
    if ( GetTickCount64() - (unsigned __int64)v4 > 0x3E8 )
    {
      v5 = (char *)v4 - (char *)this[2];
      v6 = *((unsigned int *)this + 6);
      v7 = **this;
      if ( v7 == AudioSrvVolumeTelemetryStreamVolume::Fire )
        AudioSrvVolumeTelemetryStreamVolume::Fire((AudioSrvVolumeTelemetryStreamVolume *)this, v5, v6);
      else
        v7((AudioSrvVolumeTelemetryStreamVolume *)this, v5, v6);
      return 1;
    }
  }
  return v1;
}
