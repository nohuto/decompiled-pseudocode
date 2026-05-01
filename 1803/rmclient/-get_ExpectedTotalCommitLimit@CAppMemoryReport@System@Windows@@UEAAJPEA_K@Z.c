/*
 * XREFs of ?get_ExpectedTotalCommitLimit@CAppMemoryReport@System@Windows@@UEAAJPEA_K@Z @ 0x18000BDD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::System::CAppMemoryReport::get_ExpectedTotalCommitLimit(
        Windows::System::CAppMemoryReport *this,
        unsigned __int64 *a2)
{
  return (*(__int64 (__fastcall **)(char *, unsigned __int64 *))(*((_QWORD *)this - 2) + 72LL))((char *)this - 16, a2);
}
