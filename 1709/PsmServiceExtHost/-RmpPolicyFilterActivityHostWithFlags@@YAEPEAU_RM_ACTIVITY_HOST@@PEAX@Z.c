/*
 * XREFs of ?RmpPolicyFilterActivityHostWithFlags@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x180005640
 * Callers:
 *     ?RmpPolicyGenerateHostListForPopulate@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@P6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z3@Z @ 0x1800054A8 (-RmpPolicyGenerateHostListForPopulate@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@P6AEPEA.c)
 * Callees:
 *     ?RmpActivityHostGetResourceSetCount@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180006840 (-RmpActivityHostGetResourceSetCount@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180013FCC (-RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostTryGetPpleResourceSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180036608 (-RmpActivityHostTryGetPpleResourceSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003B66C (-RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

bool __fastcall RmpPolicyFilterActivityHostWithFlags(struct _RM_ACTIVITY_HOST *a1, void *a2)
{
  char v2; // bl

  v2 = (char)a2;
  return (((unsigned __int8)a2 & 1) == 0 || RmpActivityHostIsRevocable(a1))
      && ((v2 & 2) == 0 || RmpActivityHostGetResourceSetCount(a1, 2u))
      && ((v2 & 4) == 0 || !RmpActivityHostTryGetPpleResourceSet(a1))
      && ((v2 & 8) == 0 || RmpPolicyActivityHostIsValidEmptyTarget(a1));
}
