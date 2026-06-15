/*
 * XREFs of ??1?$CAutoPtr@VCAPOEndpointProcessNode@@@ATL@@QEAA@XZ @ 0x1400301B8
 * Callers:
 *     _CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor$1 @ 0x14001F96C (_CPipeInstance--CreateSubmixPipeInstance_--_1_--dtor$1.c)
 *     _CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor$2 @ 0x14001F997 (_CPipeInstance--CreateSubmixPipeInstance_--_1_--dtor$2.c)
 *     _CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor$4 @ 0x14001F9CE (_CPipeInstance--CreateSubmixPipeInstance_--_1_--dtor$4.c)
 *     _CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor$5 @ 0x14001F9F9 (_CPipeInstance--CreateSubmixPipeInstance_--_1_--dtor$5.c)
 *     _CPipeInstance::FixupStreamPipe_::_1_::dtor$0 @ 0x14001FE70 (_CPipeInstance--FixupStreamPipe_--_1_--dtor$0.c)
 *     _CPipeInstance::FixupStreamPipe_::_1_::dtor$3 @ 0x14001FECB (_CPipeInstance--FixupStreamPipe_--_1_--dtor$3.c)
 *     _CPipeInstance::ResolveFormatConflictsLeftRight_::_1_::dtor$8 @ 0x14001FF90 (_CPipeInstance--ResolveFormatConflictsLeftRight_--_1_--dtor$8.c)
 *     _CPipeInstance::ResolveFormatConflictsRightLeft_::_1_::dtor$8 @ 0x140020150 (_CPipeInstance--ResolveFormatConflictsRightLeft_--_1_--dtor$8.c)
 *     _CPipeInstance::ResolveFormatConflictsRightLeft_::_1_::dtor$10 @ 0x1400201D6 (_CPipeInstance--ResolveFormatConflictsRightLeft_--_1_--dtor$10.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$1 @ 0x1400204CC (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$1.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$2 @ 0x1400204FA (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$2.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$3 @ 0x140020528 (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$3.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$4 @ 0x140020534 (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$4.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$6 @ 0x14002056E (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$6.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$7 @ 0x14002059C (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$7.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$8 @ 0x1400205A8 (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$8.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$9 @ 0x1400205B4 (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$9.c)
 *     _CPipeInstance::CreateBridgeStreamPipeInstance_::_1_::dtor$1 @ 0x14003DDB7 (_CPipeInstance--CreateBridgeStreamPipeInstance_--_1_--dtor$1.c)
 *     _CPipeInstance::CreateBridgeStreamPipeInstance_::_1_::dtor$2 @ 0x14003DDC3 (_CPipeInstance--CreateBridgeStreamPipeInstance_--_1_--dtor$2.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$1 @ 0x14003E2E2 (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$1.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$3 @ 0x14003E2FA (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$3.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$4 @ 0x14003E306 (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$4.c)
 *     _CAPOEndpointProcessNode::CreateAPOEndpointProcessNode_::_1_::dtor$0 @ 0x14003EA1E (_CAPOEndpointProcessNode--CreateAPOEndpointProcessNode_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CAutoPtr<CAPOEndpointProcessNode>::~CAutoPtr<CAPOEndpointProcessNode>(
        __int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v2)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    result = (**v2)(v2, 1LL);
  *a1 = 0LL;
  return result;
}
