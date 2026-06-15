/*
 * XREFs of ??1?$unique_ptr@VCEndpointInstance@@U?$default_delete@VCEndpointInstance@@@wistd@@@wistd@@QEAA@XZ @ 0x1400303DC
 * Callers:
 *     _CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor$12 @ 0x140020B34 (_CEndpointInstance--CreateDeviceEndpointInstance_--_1_--dtor$12.c)
 * Callees:
 *     ??_GCEndpointInstance@@QEAAPEAXI@Z @ 0x14002F180 (--_GCEndpointInstance@@QEAAPEAXI@Z.c)
 */

CEndpointInstance *__fastcall wistd::unique_ptr<CEndpointInstance,wistd::default_delete<CEndpointInstance>>::~unique_ptr<CEndpointInstance,wistd::default_delete<CEndpointInstance>>(
        CEndpointInstance **a1)
{
  CEndpointInstance *v1; // rcx
  CEndpointInstance *result; // rax

  v1 = *a1;
  if ( v1 )
    return CEndpointInstance::`scalar deleting destructor'(v1);
  return result;
}
