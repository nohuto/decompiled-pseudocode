/*
 * XREFs of _CPipeInstance::ResolveFormatConflictsRightLeft_::_1_::dtor$59 @ 0x140020219
 * Callers:
 *     <none>
 * Callees:
 *     ?OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ @ 0x14001B350 (-OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ.c)
 */

void __fastcall CPipeInstance::ResolveFormatConflictsRightLeft_::_1_::dtor_59(__int64 a1, __int64 a2)
{
  Windows::Media::Devices::SendCommandAsyncOperation::OnCancel(*(Windows::Media::Devices::SendCommandAsyncOperation **)(a2 + 248));
}
