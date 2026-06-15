/*
 * XREFs of ?GetMeteringChannelCount@CMeterControlBase@@UEAAJPEAI@Z @ 0x180083AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_qd @ 0x18004B79C (WPP_SF_qd.c)
 */

__int64 __fastcall CMeterControlBase::GetMeteringChannelCount(CMeterControlBase *this, unsigned int *a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // eax
  unsigned int v5; // [rsp+20h] [rbp-18h]

  v2 = 0;
  if ( a2 )
  {
    v3 = *((_DWORD *)this + 8);
    *a2 = v3;
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v5 = v3;
      WPP_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xCu,
        (__int64)&WPP_554bf26313353362e0874a871197bf29_Traceguids,
        this,
        v5);
    }
  }
  else
  {
    v2 = -2147467261;
    AudSrvTraceLoggingErrorHelper("CMeterControlBase::GetMeteringChannelCount", 223, -2147467261);
  }
  return v2;
}
