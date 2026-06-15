/*
 * XREFs of ?Start@DurationTracker@CAudioDeviceGraph@@QEAAXXZ @ 0x14002FBF0
 * Callers:
 *     ?Resume@CAudioDeviceGraph@@UEAAJXZ @ 0x140040360 (-Resume@CAudioDeviceGraph@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CAudioDeviceGraph::DurationTracker::Start(LARGE_INTEGER *this)
{
  if ( !LOBYTE(this->LowPart) )
  {
    QueryPerformanceCounter(this + 2);
    LOBYTE(this->LowPart) = 1;
  }
}
