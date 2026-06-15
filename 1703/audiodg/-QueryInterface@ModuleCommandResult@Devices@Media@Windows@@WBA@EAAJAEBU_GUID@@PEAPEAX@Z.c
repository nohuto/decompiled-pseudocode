/*
 * XREFs of ?QueryInterface@ModuleCommandResult@Devices@Media@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001F9E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall Windows::Media::Devices::ModuleCommandResult::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Windows::Media::Devices::ModuleCommandResult::QueryInterface(
           (Windows::Media::Devices::ModuleCommandResult *)(a1 - 16),
           a2,
           a3);
}
