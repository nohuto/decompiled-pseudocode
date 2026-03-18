/*
 * XREFs of ??1REMOTE_VSYNC@@QEAA@XZ @ 0x1C01BC2DC
 * Callers:
 *     ??1DXGGLOBAL@@AEAA@XZ @ 0x1C019C618 (--1DXGGLOBAL@@AEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall REMOTE_VSYNC::~REMOTE_VSYNC(REMOTE_VSYNC *this)
{
  __int64 v1; // rax

  if ( *((_QWORD *)this + 1) )
  {
    v1 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v1 + 24) = 32LL;
    WdLogEvent5_WdAssertion(v1);
  }
}
