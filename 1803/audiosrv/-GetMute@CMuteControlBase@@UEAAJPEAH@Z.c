/*
 * XREFs of ?GetMute@CMuteControlBase@@UEAAJPEAH@Z @ 0x180049B90
 * Callers:
 *     ?GetMute@CVolumeStrip@@UEAAJPEAH@Z @ 0x180049B60 (-GetMute@CVolumeStrip@@UEAAJPEAH@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CMuteControlBase::GetMute(CMuteControlBase *this, int *a2)
{
  unsigned int v2; // ebx

  v2 = -2147467261;
  if ( a2 )
  {
    v2 = 0;
    *a2 = *((_DWORD *)this + 6);
  }
  else
  {
    AudSrvTraceLoggingErrorHelper("CMuteControlBase::GetMute", 0xF8u, -2147467261);
  }
  return v2;
}
