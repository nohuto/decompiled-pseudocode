/*
 * XREFs of ?UpdateGlitchList@CDebugFrameCounter@@IEAAXAEA_K@Z @ 0x180143E0C
 * Callers:
 *     ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180068B90 (-WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?FrameStopped@CDebugFrameCounter@@QEAAXXZ @ 0x180130D08 (-FrameStopped@CDebugFrameCounter@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CDebugFrameCounter::UpdateGlitchList(CDebugFrameCounter *this, unsigned __int64 *a2)
{
  int v2; // r9d
  unsigned __int64 v4; // r10
  __int64 v5; // rax
  unsigned int v6; // ecx

  v2 = *((_DWORD *)this + 1041);
  if ( *((_DWORD *)this + 1040) != v2 )
  {
    v4 = *a2 - 10000000;
    do
    {
      v5 = *((unsigned int *)this + 1040);
      if ( *((_QWORD *)this + v5 + 521) >= v4 )
        break;
      v6 = ((int)v5 + 1) % 0x3Cu;
      *((_DWORD *)this + 1040) = v6;
    }
    while ( v6 != v2 );
  }
}
