/*
 * XREFs of ?GetClassForHandler@CWrlLightweightHandlerServer@@UEAAJKPEAXPEAU_GUID@@@Z @ 0x18008D150
 * Callers:
 *     <none>
 * Callees:
 *     ?v_GetHandlerCLSID@CImmersiveWindowFactoryBase@@EEAAAEBU_GUID@@XZ @ 0x18008D6C0 (-v_GetHandlerCLSID@CImmersiveWindowFactoryBase@@EEAAAEBU_GUID@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWrlLightweightHandlerServer::GetClassForHandler(
        CWrlLightweightHandlerServer *this,
        __int64 a2,
        void *a3,
        struct _GUID *a4)
{
  CImmersiveWindowFactoryBase *v4; // rcx
  const struct _GUID *(__fastcall *v6)(CImmersiveWindowFactoryBase *__hidden); // rax
  const struct _GUID *HandlerCLSID; // rax
  struct _GUID v8; // xmm0
  __int64 result; // rax

  v4 = (CWrlLightweightHandlerServer *)((char *)this - 40);
  v6 = *(const struct _GUID *(__fastcall **)(CImmersiveWindowFactoryBase *__hidden))(*(_QWORD *)v4 + 104LL);
  if ( v6 == CImmersiveWindowFactoryBase::v_GetHandlerCLSID )
    HandlerCLSID = CImmersiveWindowFactoryBase::v_GetHandlerCLSID(v4);
  else
    HandlerCLSID = (const struct _GUID *)((__int64 (__fastcall *)(CImmersiveWindowFactoryBase *, const struct _GUID *(__fastcall *)(CImmersiveWindowFactoryBase *__hidden), void *))v6)(
                                           v4,
                                           CImmersiveWindowFactoryBase::v_GetHandlerCLSID,
                                           a3);
  v8 = *HandlerCLSID;
  result = 0LL;
  *a4 = v8;
  return result;
}
