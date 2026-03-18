/*
 * XREFs of ?PowerGotoDNotZeroIoStopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C003A3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerGotoDxIoStopped@FxPkgPnp@@IEAAEXZ @ 0x1C0028DC0 (-PowerGotoDxIoStopped@FxPkgPnp@@IEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerGotoDNotZeroIoStopped(FxPkgPnp *This)
{
  return FxPkgPnp::PowerGotoDxIoStopped(This) != 0 ? 799 : 853;
}
