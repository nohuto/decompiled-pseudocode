/*
 * XREFs of ?UnbindMonitorsFromInput@CBaseProcessor@@QEAAXXZ @ 0x1C0008634
 * Callers:
 *     ??1CBaseProcessor@@QEAA@XZ @ 0x1C0008658 (--1CBaseProcessor@@QEAA@XZ.c)
 *     UserProcessInputIsolationPolicy @ 0x1C01305A0 (UserProcessInputIsolationPolicy.c)
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

void __fastcall CBaseProcessor::UnbindMonitorsFromInput(CBaseProcessor *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 3);
  if ( v4 )
  {
    Win32FreePool(v4, a2, a3);
    *((_QWORD *)this + 3) = 0LL;
    *((_DWORD *)this + 8) = 0;
  }
}
