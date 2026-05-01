/*
 * XREFs of RmpWnfCreateStateNameForClient @ 0x18001C304
 * Callers:
 *     ?HampClientAllocateState@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@@Z @ 0x18001C1E8 (-HampClientAllocateState@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@@Z.c)
 *     ?RmpActivatorRegister@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAT_RM_SID@@KPEAPEAU_RM_ACTIVATOR@@@Z @ 0x180025208 (-RmpActivatorRegister@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAT_RM_SID@@KPEAPEAU_RM_ACTIVATOR@@@Z.c)
 *     ?RmpCpuSetManagerAllocateObjectsForAllocation@@YAJPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x1800369E0 (-RmpCpuSetManagerAllocateObjectsForAllocation@@YAJPEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 * Callees:
 *     ?RmpWnfCreateStateNameForIpcEx@@YAJPEAT_RM_SID@@0KKPEAU_WNF_STATE_NAME@@@Z @ 0x18001C38C (-RmpWnfCreateStateNameForIpcEx@@YAJPEAT_RM_SID@@0KKPEAU_WNF_STATE_NAME@@@Z.c)
 *     RmpWnfGetPublisherSid @ 0x18001C90C (RmpWnfGetPublisherSid.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpWnfCreateStateNameForClient(
        PSID a1,
        unsigned int a2,
        unsigned int a3,
        struct _WNF_STATE_NAME *a4)
{
  __int64 result; // rax
  _BYTE pSid[80]; // [rsp+30h] [rbp-88h] BYREF

  if ( (a3 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  result = RmpWnfGetPublisherSid(pSid);
  if ( (int)result >= 0 )
  {
    result = RmpWnfCreateStateNameForIpcEx(pSid, a1, a2, a3, a4);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
