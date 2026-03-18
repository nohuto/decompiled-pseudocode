/*
 * XREFs of ?_GetEdidBlockPtr@DXGMONITOR@@QEBAPEBXI@Z @ 0x1C0108F88
 * Callers:
 *     ?_GetContiguousEDID@DXGMONITOR@@QEAAXIPEAIPEAE@Z @ 0x1C0108B2C (-_GetContiguousEDID@DXGMONITOR@@QEAAXIPEAIPEAE@Z.c)
 *     MonitorIsAudioSupportedInEdid @ 0x1C01E3DEC (MonitorIsAudioSupportedInEdid.c)
 * Callees:
 *     <none>
 */

const void *__fastcall DXGMONITOR::_GetEdidBlockPtr(DXGMONITOR *this, unsigned int a2)
{
  __int64 v3; // rax

  if ( !a2 )
    return DXGMONITOR::_GetEdidBaseBlockPtr(this);
  if ( a2 < *((_DWORD *)this + 28) )
  {
    if ( *((_QWORD *)this + 15) )
    {
      _mm_lfence();
      v3 = *(_QWORD *)(*((_QWORD *)this + 15) + 8LL * a2);
      if ( *(_QWORD *)(v3 + 16) >= 0x80uLL )
        return (const void *)(v3 + 24);
    }
  }
  return 0LL;
}
