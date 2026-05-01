/*
 * XREFs of ?QueryInterface@CAppMemoryReport@System@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800080B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::System::CAppMemoryReport::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        Windows::System::CAppMemoryReport **a3)
{
  return Windows::System::CAppMemoryReport::QueryInterface((Windows::System::CAppMemoryReport *)(a1 - 16), a2, a3);
}
