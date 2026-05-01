/*
 * XREFs of ?get_OldLimit@AppMemoryUsageLimitChangingEventArgs@System@Windows@@UEAAJPEA_K@Z @ 0x18000C760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::System::AppMemoryUsageLimitChangingEventArgs::get_OldLimit(
        Windows::System::AppMemoryUsageLimitChangingEventArgs *this,
        unsigned __int64 *a2)
{
  if ( !a2 )
    return 2147942487LL;
  *a2 = *((_QWORD *)this + 9);
  return 0LL;
}
