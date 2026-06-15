/*
 * XREFs of ?LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ @ 0x18002E934
 * Callers:
 *     ??1CAudioSession@@MEAA@XZ @ 0x18001553C (--1CAudioSession@@MEAA@XZ.c)
 *     ??1AudioSrvVolumeTelemetryStreamVolume@@QEAA@XZ @ 0x18007B7C0 (--1AudioSrvVolumeTelemetryStreamVolume@@QEAA@XZ.c)
 *     ?Update@AudioSrvVolumeTelemetry@@IEAAXXZ @ 0x18007B890 (-Update@AudioSrvVolumeTelemetry@@IEAAXXZ.c)
 *     ??1CVolumeControlBase@@MEAA@XZ @ 0x180084BEC (--1CVolumeControlBase@@MEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall AudioSrvVolumeTelemetry::LogTelemetry(AudioSrvVolumeTelemetry *this)
{
  char v1; // di
  __int64 v4; // rsi

  v1 = 0;
  if ( *((_QWORD *)this + 1) )
  {
    v4 = *((_QWORD *)this + 1);
    if ( GetTickCount64() - v4 > 0x3E8 )
    {
      (**(void (__fastcall ***)(AudioSrvVolumeTelemetry *, __int64, _QWORD))this)(
        this,
        v4 - *((_QWORD *)this + 2),
        *((unsigned int *)this + 6));
      return 1;
    }
  }
  return v1;
}
