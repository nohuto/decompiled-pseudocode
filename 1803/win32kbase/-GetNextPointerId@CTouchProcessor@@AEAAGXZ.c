/*
 * XREFs of ?GetNextPointerId@CTouchProcessor@@AEAAGXZ @ 0x1C0113F78
 * Callers:
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKI@Z @ 0x1C010FB2C (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKI@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetNextPointerId(struct _KTHREAD **this, __int64 a2)
{
  unsigned __int16 v3; // di
  unsigned __int16 v4; // ax
  unsigned __int16 v5; // ax

  if ( this[13] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  v3 = *((_WORD *)this + 84);
  v4 = v3;
  if ( !v3 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
    v4 = *((_WORD *)this + 84);
  }
  v5 = v4 + 1;
  *((_WORD *)this + 84) = v5;
  if ( v5 < 2u )
    *((_WORD *)this + 84) = 2;
  return v3;
}
