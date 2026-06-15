/*
 * XREFs of ?GetMaxStreamChannelVolume@CAudioStream@@UEAAJPEAM@Z @ 0x18001C520
 * Callers:
 *     ?RecalculateVolume@CAudioStream@@UEAAJXZ @ 0x18001B730 (-RecalculateVolume@CAudioStream@@UEAAJXZ.c)
 * Callees:
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

__int64 __fastcall CAudioStream::GetMaxStreamChannelVolume(CAudioStream *this, float *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  float v6; // xmm0_4

  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      32LL,
      &WPP_78805be245a237971eed1a1da5d2d3a4_Traceguids,
      (char *)this - 8);
  }
  v4 = 0LL;
  *a2 = 0.0;
  if ( *((_DWORD *)this + 19) )
  {
    v5 = *((_QWORD *)this + 13);
    do
    {
      v6 = *(float *)(v5 + 4 * v4);
      if ( v6 > *a2 )
        *a2 = v6;
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < *((_DWORD *)this + 19) );
  }
  return 0LL;
}
