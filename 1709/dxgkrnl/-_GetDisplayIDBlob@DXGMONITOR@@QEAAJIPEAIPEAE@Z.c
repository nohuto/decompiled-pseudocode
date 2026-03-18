/*
 * XREFs of ?_GetDisplayIDBlob@DXGMONITOR@@QEAAJIPEAIPEAE@Z @ 0x1C02028B4
 * Callers:
 *     MonitorGetDisplayIDFromMonitor @ 0x1C01FE5B4 (MonitorGetDisplayIDFromMonitor.c)
 * Callees:
 *     memmove @ 0x1C0016740 (memmove.c)
 */

__int64 __fastcall DXGMONITOR::_GetDisplayIDBlob(
        DXGMONITOR *this,
        unsigned int a2,
        unsigned int *a3,
        unsigned __int8 *a4)
{
  unsigned int v5; // eax

  if ( *((_QWORD *)this + 18) )
  {
    *a3 = *((_DWORD *)this + 34);
    if ( a4 && a2 && (v5 = *((_DWORD *)this + 34), a2 >= v5) )
    {
      memmove(a4, *((const void **)this + 18), v5);
      return 0LL;
    }
    else
    {
      return 3221225507LL;
    }
  }
  else
  {
    *a3 = 0;
    return 3223126017LL;
  }
}
