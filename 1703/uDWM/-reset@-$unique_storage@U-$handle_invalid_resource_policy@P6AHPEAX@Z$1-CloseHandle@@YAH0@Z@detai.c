/*
 * XREFs of ?reset@?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180074BFC
 * Callers:
 *     ?EnsureHolographicDisplay@CAnalogCompositorManager@@AEAAJXZ @ 0x18001036C (-EnsureHolographicDisplay@CAnalogCompositorManager@@AEAAJXZ.c)
 *     ?ReleaseHolographicDisplay@CAnalogCompositorManager@@AEAAXXZ @ 0x180073F64 (-ReleaseHolographicDisplay@CAnalogCompositorManager@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        void **a1,
        void *a2)
{
  void *v2; // rbp
  DWORD LastError; // ebx

  v2 = *a1;
  if ( (char *)*a1 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    LastError = GetLastError();
    CloseHandle(v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}
