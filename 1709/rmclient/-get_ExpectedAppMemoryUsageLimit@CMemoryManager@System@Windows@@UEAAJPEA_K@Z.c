/*
 * XREFs of ?get_ExpectedAppMemoryUsageLimit@CMemoryManager@System@Windows@@UEAAJPEA_K@Z @ 0x18000C700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::System::CMemoryManager::get_ExpectedAppMemoryUsageLimit(
        Windows::System::CMemoryManager *this,
        unsigned __int64 *a2)
{
  return (*(__int64 (__fastcall **)(char *, unsigned __int64 *))(*((_QWORD *)this - 3) + 56LL))((char *)this - 24, a2);
}
