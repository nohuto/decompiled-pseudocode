/*
 * XREFs of DxgkInitializeDpi @ 0x1C01DD480
 * Callers:
 *     <none>
 * Callees:
 *     ?SaveHKCUPathInSessionData@DpiPersistence@@YAJXZ @ 0x1C01DD0A4 (-SaveHKCUPathInSessionData@DpiPersistence@@YAJXZ.c)
 */

NTSTATUS __fastcall DxgkInitializeDpi(DpiPersistence *a1)
{
  return DpiPersistence::SaveHKCUPathInSessionData(a1);
}
