/*
 * XREFs of ?LegacyResourceSetCallbackHandlerThunk@ResourceManagerClientProxy@@SAXPEAX0K@Z @ 0x18000EC30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ResourceManagerClientProxy::LegacyResourceSetCallbackHandlerThunk(
        ResourceManagerClientProxy *a1,
        struct _RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_PAYLOAD *a2)
{
  ResourceManagerClientProxy::LegacyResourceSetCallbackHandler(a1, a2);
}
