/*
 * XREFs of ??1?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@QEAA@XZ @ 0x1400301A0
 * Callers:
 *     _CAudioDeviceGraph::Initialize_::_1_::dtor$4 @ 0x140020300 (_CAudioDeviceGraph--Initialize_--_1_--dtor$4.c)
 * Callees:
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x14002F3F4 (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 */

CPipeInstance *__fastcall wistd::unique_ptr<CPipeInstance,wistd::default_delete<CPipeInstance>>::~unique_ptr<CPipeInstance,wistd::default_delete<CPipeInstance>>(
        CPipeInstance **a1)
{
  CPipeInstance *v1; // rcx
  CPipeInstance *result; // rax

  v1 = *a1;
  if ( v1 )
    return CPipeInstance::`scalar deleting destructor'(v1);
  return result;
}
