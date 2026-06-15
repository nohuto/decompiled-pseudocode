/*
 * XREFs of ?GetMute@CMuteControlBase@@UEAAJPEAH@Z @ 0x18002F460
 * Callers:
 *     ?GetMute@CVolumeStrip@@UEAAJPEAH@Z @ 0x180017C80 (-GetMute@CVolumeStrip@@UEAAJPEAH@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
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
    AudSrvTraceLoggingErrorHelper("CMuteControlBase::GetMute", 0x103u, -2147467261);
  }
  return v2;
}
