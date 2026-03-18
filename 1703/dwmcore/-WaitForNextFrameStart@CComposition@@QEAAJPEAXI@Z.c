/*
 * XREFs of ?WaitForNextFrameStart@CComposition@@QEAAJPEAXI@Z @ 0x1801319C4
 * Callers:
 *     ?WaitForNextFrameStart@CIndependentRefreshRateScheduler@@AEAAJXZ @ 0x18013E9B4 (-WaitForNextFrameStart@CIndependentRefreshRateScheduler@@AEAAJXZ.c)
 * Callees:
 *     ?SendReportToE3@CEnergyReporter@@AEAAX_K@Z @ 0x18014425C (-SendReportToE3@CEnergyReporter@@AEAAX_K@Z.c)
 */

__int64 __fastcall CComposition::WaitForNextFrameStart(CComposition *this, void *a2, unsigned int a3)
{
  CEnergyReporter *v3; // rbx
  ULONGLONG TickCount64; // rax
  unsigned __int64 v8; // rdx

  v3 = (CComposition *)((char *)this + 80);
  if ( CEnergyReporter::s_reportingEnabled )
  {
    if ( *((_DWORD *)this + 28) )
    {
      TickCount64 = GetTickCount64();
      v8 = TickCount64 - *(_QWORD *)v3;
      if ( v8 >= 0x7D0 )
      {
        *(_QWORD *)v3 = TickCount64;
        CEnergyReporter::SendReportToE3(v3, v8);
      }
    }
  }
  return CRenderTargetManager::WaitForNextFrameStart(*((CRenderTargetManager **)this + 4), a2, a3);
}
