/*
 * XREFs of ?get_PeakPrivateCommitUsage@CAppMemoryReport@System@Windows@@UEAAJPEA_K@Z @ 0x1800060D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::System::CAppMemoryReport::get_PeakPrivateCommitUsage(
        Windows::System::CAppMemoryReport *this,
        unsigned __int64 *a2)
{
  *a2 = *((_QWORD *)this + 7);
  return 0LL;
}
