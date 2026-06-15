/*
 * XREFs of ?GetMaxStreamChannelVolume@CAudioStream@@UEAAJPEAM@Z @ 0x180018E30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 */

__int64 __fastcall CAudioStream::GetMaxStreamChannelVolume(CAudioStream *this, float *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  float v6; // xmm0_4

  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      33LL,
      &WPP_c45047042f6d344739c91af1a021533b_Traceguids,
      (char *)this - 8);
  }
  v4 = 0LL;
  *a2 = 0.0;
  if ( *((_DWORD *)this + 20) )
  {
    v5 = *((_QWORD *)this + 13);
    do
    {
      v6 = *(float *)(v5 + 4 * v4);
      if ( v6 > *a2 )
        *a2 = v6;
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < *((_DWORD *)this + 20) );
  }
  return 0LL;
}
