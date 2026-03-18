/*
 * XREFs of ?ReportInertiaStop@CInteraction@@QEAAJXZ @ 0x180167264
 * Callers:
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x18016EA58 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteraction::ReportInertiaStop(CInteraction *this)
{
  unsigned int v1; // ebx
  signed int LastError; // eax

  v1 = 0;
  if ( !(unsigned int)ReportInertia(*((unsigned int *)this + 328), 6LL, 0LL, 0LL, 0LL) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      return (unsigned __int16)LastError | 0x80070000;
    else
      return (unsigned int)LastError;
  }
  return v1;
}
