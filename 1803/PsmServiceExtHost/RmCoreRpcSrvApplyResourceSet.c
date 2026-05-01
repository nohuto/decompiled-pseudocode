/*
 * XREFs of RmCoreRpcSrvApplyResourceSet @ 0x1800273B0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmSrvResourceSetApply@@YAJPEAU_RM_SERVICE_GLOBALS@@_K@Z @ 0x180025500 (-RmSrvResourceSetApply@@YAJPEAU_RM_SERVICE_GLOBALS@@_K@Z.c)
 */

unsigned int __fastcall RmCoreRpcSrvApplyResourceSet(struct _RM_SERVICE_GLOBALS **a1, unsigned __int64 a2)
{
  int v2; // eax

  v2 = RmSrvResourceSetApply(*a1, a2);
  if ( v2 < 0 )
    return v2 & 0xEFFFFFFF;
  else
    return 0;
}
