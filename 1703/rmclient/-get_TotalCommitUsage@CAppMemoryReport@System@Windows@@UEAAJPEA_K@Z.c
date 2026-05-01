/*
 * XREFs of ?get_TotalCommitUsage@CAppMemoryReport@System@Windows@@UEAAJPEA_K@Z @ 0x180006330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::System::CAppMemoryReport::get_TotalCommitUsage(
        Windows::System::CAppMemoryReport *this,
        unsigned __int64 *a2)
{
  *a2 = *((_QWORD *)this + 7);
  return 0LL;
}
