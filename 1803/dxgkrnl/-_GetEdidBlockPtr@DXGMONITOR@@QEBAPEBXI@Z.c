/*
 * XREFs of ?_GetEdidBlockPtr@DXGMONITOR@@QEBAPEBXI@Z @ 0x1C0239D78
 * Callers:
 *     ?IsAudioAvailableInEdid@DpiInternal@@YAHPEAXI@Z @ 0x1C01DCEBC (-IsAudioAvailableInEdid@DpiInternal@@YAHPEAXI@Z.c)
 *     ?_GetContiguousEDID@DXGMONITOR@@QEAAXIPEAIPEAE@Z @ 0x1C0239C38 (-_GetContiguousEDID@DXGMONITOR@@QEAAXIPEAIPEAE@Z.c)
 * Callees:
 *     ?_GetEdidBaseBlockPtr@DXGMONITOR@@QEBAPEBXXZ @ 0x1C00B8004 (-_GetEdidBaseBlockPtr@DXGMONITOR@@QEBAPEBXXZ.c)
 */

const void *__fastcall DXGMONITOR::_GetEdidBlockPtr(DXGMONITOR *this, unsigned int a2)
{
  __int64 v3; // rax

  if ( !a2 )
    return DXGMONITOR::_GetEdidBaseBlockPtr(this);
  if ( a2 < *((_DWORD *)this + 32) )
  {
    if ( *((_QWORD *)this + 17) )
    {
      _mm_lfence();
      v3 = *(_QWORD *)(*((_QWORD *)this + 17) + 8LL * a2);
      if ( *(_QWORD *)(v3 + 16) >= 0x80uLL )
        return (const void *)(v3 + 24);
    }
  }
  return 0LL;
}
