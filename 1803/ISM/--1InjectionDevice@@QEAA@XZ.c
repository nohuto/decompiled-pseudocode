/*
 * XREFs of ??1InjectionDevice@@QEAA@XZ @ 0x180031D08
 * Callers:
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$5 @ 0x1800E4A6D (_ControllerProcessor--ControllerProcessor_--_1_--dtor$5.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$6 @ 0x1800E4A80 (_ControllerProcessor--ControllerProcessor_--_1_--dtor$6.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$7 @ 0x1800E4A93 (_ControllerProcessor--ControllerProcessor_--_1_--dtor$7.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$8 @ 0x1800E4AA6 (_ControllerProcessor--ControllerProcessor_--_1_--dtor$8.c)
 *     _MouseProcessor::MouseProcessor_::_1_::dtor$3 @ 0x1800E7287 (_MouseProcessor--MouseProcessor_--_1_--dtor$3.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall InjectionDevice::~InjectionDevice(InjectionDevice *this)
{
  if ( *((_BYTE *)this + 992) )
    *((_BYTE *)this + 992) = (*(int (__fastcall **)(_QWORD, char *))(**(_QWORD **)this + 56LL))(
                               *(_QWORD *)this,
                               (char *)this + 8) < 0;
}
