/*
 * XREFs of ?RmpResourceSetIsCommitSaveEligible@@YAEPEBU_ResourceSetInfo@ExecutionModel@@@Z @ 0x18001EE38
 * Callers:
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x18001CEA0 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z.c)
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x18001E320 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z.c)
 *     ?RmpPolicyDigestCompute@@YA?AT_RM_POLICY_DIGEST@@PEAVResourceSet@ExecutionModel@@@Z @ 0x1800214D0 (-RmpPolicyDigestCompute@@YA-AT_RM_POLICY_DIGEST@@PEAVResourceSet@ExecutionModel@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall RmpResourceSetIsCommitSaveEligible(const struct ExecutionModel::_ResourceSetInfo *a1)
{
  __int64 v1; // rdx
  bool result; // al

  result = ((*((_BYTE *)a1 + 40) & 0x10) != 0
         || *(_DWORD *)a1 <= 0x28u && (v1 = 0x11000002000LL, _bittest64(&v1, *(int *)a1)))
        && (*((_BYTE *)a1 + 42) & 0x40) == 0;
  return result;
}
