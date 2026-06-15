/*
 * XREFs of _CPipeInstance::ResolveFormatConflictsLeftRight_::_1_::dtor$13 @ 0x1400212E9
 * Callers:
 *     <none>
 * Callees:
 *     ?OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ @ 0x14001BC00 (-OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ.c)
 */

void __fastcall CPipeInstance::ResolveFormatConflictsLeftRight_::_1_::dtor_13(__int64 a1, __int64 a2)
{
  Windows::Media::Devices::SendCommandAsyncOperation::OnCancel(*(Windows::Media::Devices::SendCommandAsyncOperation **)(a2 + 480));
}
