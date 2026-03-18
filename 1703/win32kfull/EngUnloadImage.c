/*
 * XREFs of EngUnloadImage @ 0x1C024AE70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall EngUnloadImage(HANDLE hModule)
{
  ldevUnloadImage(hModule);
}
