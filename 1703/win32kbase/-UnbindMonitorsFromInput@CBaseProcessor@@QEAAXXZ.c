/*
 * XREFs of ?UnbindMonitorsFromInput@CBaseProcessor@@QEAAXXZ @ 0x1C006F4DC
 * Callers:
 *     ??1CBaseProcessor@@QEAA@XZ @ 0x1C006F500 (--1CBaseProcessor@@QEAA@XZ.c)
 *     UserProcessInputIsolationPolicy @ 0x1C0130CBC (UserProcessInputIsolationPolicy.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

void __fastcall CBaseProcessor::UnbindMonitorsFromInput(CBaseProcessor *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 3);
  if ( v2 )
  {
    Win32FreePool(v2);
    *((_QWORD *)this + 3) = 0LL;
    *((_DWORD *)this + 8) = 0;
  }
}
