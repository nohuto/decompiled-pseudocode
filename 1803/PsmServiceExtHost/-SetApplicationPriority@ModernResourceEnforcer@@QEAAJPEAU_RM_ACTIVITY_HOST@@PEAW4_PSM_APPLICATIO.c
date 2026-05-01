/*
 * XREFs of ?SetApplicationPriority@ModernResourceEnforcer@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEAW4_PSM_APPLICATION_PRIORITY@@@Z @ 0x1800162C0
 * Callers:
 *     ?RmpSystemApplyPsmPriorityToHost@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_PRIORITY@@@Z @ 0x180032094 (-RmpSystemApplyPsmPriorityToHost@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_PRIORITY@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ModernResourceEnforcer::SetApplicationPriority(
        ModernResourceEnforcer *this,
        struct _RM_ACTIVITY_HOST *a2,
        enum _PSM_APPLICATION_PRIORITY *a3)
{
  _DWORD v7[12]; // [rsp+40h] [rbp-48h] BYREF

  memset_0(v7, 0, sizeof(v7));
  if ( a3 )
  {
    v7[8] = *(_DWORD *)a3;
    v7[0] = 16;
  }
  return (*((__int64 (__fastcall **)(char *, _QWORD, char *, __int64, __int64, _DWORD *))this + 1))(
           (char *)a2 + 552,
           *((unsigned int *)a2 + 155),
           (char *)a2 + 88,
           6LL,
           -1LL,
           v7);
}
