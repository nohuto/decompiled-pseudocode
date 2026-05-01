/*
 * XREFs of ?RmpActivityHostComputeDigestForCategory@@YA?AT_RM_POLICY_DIGEST@@PEAU_RM_ACTIVITY_HOST@@W4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180053FC8
 * Callers:
 *     ?RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180023B80 (-RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     ?RmpPolicyDigestMerge@@YA?AT_RM_POLICY_DIGEST@@T1@0@Z @ 0x18001EE70 (-RmpPolicyDigestMerge@@YA-AT_RM_POLICY_DIGEST@@T1@0@Z.c)
 *     ?IsConsideredAcquiredForEnforcement@ResourceSet@ExecutionModel@@QEBA_NXZ @ 0x18001FF04 (-IsConsideredAcquiredForEnforcement@ResourceSet@ExecutionModel@@QEBA_NXZ.c)
 *     ?RmpPolicyDigestCompute@@YA?AT_RM_POLICY_DIGEST@@PEAVResourceSet@ExecutionModel@@@Z @ 0x1800214D0 (-RmpPolicyDigestCompute@@YA-AT_RM_POLICY_DIGEST@@PEAVResourceSet@ExecutionModel@@@Z.c)
 */

__int64 __fastcall RmpActivityHostComputeDigestForCategory(__int64 a1, int a2)
{
  unsigned __int16 v2; // di
  _QWORD *v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rax
  bool v6; // zf
  __int64 v7; // rcx
  __int16 v8; // ax
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rax

  v2 = 102;
  v3 = (_QWORD *)(a1 + 24 * (a2 + 42LL));
  v4 = 0LL;
  v5 = *v3 - 1416LL;
  v6 = *v3 == (_QWORD)v3;
  while ( 1 )
  {
    if ( !v6 )
      v4 = v5;
    if ( !v4 )
      break;
    if ( ExecutionModel::ResourceSet::IsConsideredAcquiredForEnforcement((ExecutionModel::ResourceSet *)v4) )
    {
      v8 = RmpPolicyDigestCompute(v7);
      v2 = RmpPolicyDigestMerge(v2, v8);
    }
    v9 = *(_QWORD *)(v4 + 1416);
    v10 = 3 * (*(int *)(v4 + 1448) + 42LL);
    v11 = *(_QWORD *)(v4 + 1440);
    v4 = 0LL;
    v6 = v9 == v11 + 8 * v10;
    v5 = v9 - 1416;
  }
  return v2;
}
