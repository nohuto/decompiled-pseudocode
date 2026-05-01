/*
 * XREFs of ?QueryInterface@AppMemoryUsageLimitChangingEventArgs@System@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180008070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall Windows::System::AppMemoryUsageLimitChangingEventArgs::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Windows::System::AppMemoryUsageLimitChangingEventArgs::QueryInterface(
           (Windows::System::AppMemoryUsageLimitChangingEventArgs *)(a1 - 16),
           a2,
           a3);
}
