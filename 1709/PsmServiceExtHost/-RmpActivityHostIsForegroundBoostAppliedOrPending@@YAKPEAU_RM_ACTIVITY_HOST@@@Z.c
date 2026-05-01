/*
 * XREFs of ?RmpActivityHostIsForegroundBoostAppliedOrPending@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001B82C
 * Callers:
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18001B684 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@T_RM_OPTIMIZA.c)
 * Callees:
 *     ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x180006354 (-RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180006F70 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     ?RmpResourceSetGetExecutionSpeed@@YA?AW4_RM_EXECUTION_SPEED@@PEAVResourceSet@ExecutionModel@@@Z @ 0x18001DE70 (-RmpResourceSetGetExecutionSpeed@@YA-AW4_RM_EXECUTION_SPEED@@PEAVResourceSet@ExecutionModel@@@Z.c)
 */

__int64 __fastcall RmpActivityHostIsForegroundBoostAppliedOrPending(struct _RM_ACTIVITY_HOST *a1)
{
  int ExecutionSpeed; // ebx
  unsigned int v2; // edi
  bool v3; // sf
  bool v4; // of
  struct ExecutionModel::ResourceSet *Next; // rax
  __int64 v7; // r8
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  ExecutionSpeed = *((_DWORD *)a1 + 228);
  v2 = 0;
  v4 = __OFSUB__(ExecutionSpeed, 2);
  v3 = ExecutionSpeed - 2 < 0;
  if ( ExecutionSpeed < 2 )
  {
    v8[1] = 1LL;
    v8[0] = RmpActivityHostEnumerateResourceSetGetFirst((__int64)a1, 1, 0);
    while ( 1 )
    {
      Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)v8);
      if ( !Next )
        break;
      if ( ExecutionSpeed <= (int)RmpResourceSetGetExecutionSpeed(Next) )
        ExecutionSpeed = RmpResourceSetGetExecutionSpeed(v7);
      v4 = __OFSUB__(ExecutionSpeed, 2);
      v3 = ExecutionSpeed - 2 < 0;
      if ( ExecutionSpeed >= 2 )
        goto LABEL_5;
    }
    v4 = __OFSUB__(ExecutionSpeed, 2);
    v3 = ExecutionSpeed - 2 < 0;
  }
LABEL_5:
  LOBYTE(v2) = v3 == v4;
  return v2;
}
