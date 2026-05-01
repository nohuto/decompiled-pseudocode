/*
 * XREFs of ?HampHostCanKillForResourcePressure@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180024E68
 * Callers:
 *     ?RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800219F0 (-RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPolicyGetFastCommitFromMetrics@@YA_KPEAU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x18005A484 (-RmpPolicyGetFastCommitFromMetrics@@YA_KPEAU_RM_ACTIVITY_HOST_METRICS@@@Z.c)
 * Callees:
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x1800087C8 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     CempLockTrackerMarkReleased @ 0x180014260 (CempLockTrackerMarkReleased.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001A390 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostGetCurrentPsmState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x18001A3C8 (-HampHostGetCurrentPsmState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 *     CempLockTrackerMarkAcquired @ 0x18001B190 (CempLockTrackerMarkAcquired.c)
 */

__int64 __fastcall HampHostCanKillForResourcePressure(struct _RM_HAM_ACTIVITY_HOST *a1, __int64 a2)
{
  char v2; // si
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _HAM_ACTIVITY *FirstActivity; // rax
  unsigned int v7; // ebx
  char v9; // [rsp+30h] [rbp+8h] BYREF
  char v10; // [rsp+40h] [rbp+18h] BYREF

  v2 = a2;
  CempLockTrackerMarkAcquired((__int64)a1, a2, 1u, 0);
  RtlAcquireSRWLockShared(a1);
  if ( (*((_QWORD *)a1 + 79) & 0x100000000000LL) != 0 )
  {
    FirstActivity = HampHostGetFirstActivity(a1);
    v7 = 0;
    while ( 1 )
    {
      v5 = (__int64)FirstActivity;
      if ( !FirstActivity )
        break;
      if ( (*((_BYTE *)FirstActivity + 112) & 1) != 0 )
        goto LABEL_8;
      FirstActivity = HampHostGetNextActivity(FirstActivity);
    }
    if ( (v2 & 1) == 0
      || (HampHostGetCurrentPsmState(a1, (union _RM_OPTIMIZATION_STATE *)&v9, (union _RM_OPTIMIZATION_STATE *)&v10),
          v9 < 0)
      && v10 >= 0 )
    {
      v7 = 1;
    }
  }
  else
  {
    v7 = 0;
  }
LABEL_8:
  CempLockTrackerMarkReleased(v5, v4, 1u);
  RtlReleaseSRWLockShared(a1);
  return v7;
}
