/*
 * XREFs of ?HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180029DF8
 * Callers:
 *     ?HamSrvStopActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180029C98 (-HamSrvStopActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     ?HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x18002B6F0 (-HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z.c)
 * Callees:
 *     ?HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z @ 0x1800114F0 (-HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180014210 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x180029E5C (-HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampRmContextStopActivity@@YAXPEAX@Z @ 0x18002A060 (-HampRmContextStopActivity@@YAXPEAX@Z.c)
 *     ?HampActCancelExpirationTimer@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18002A090 (-HampActCancelExpirationTimer@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampSystemActivationClientDeactivate@@YAXPEAX@Z @ 0x180035748 (-HampSystemActivationClientDeactivate@@YAXPEAX@Z.c)
 */

__int64 __fastcall HampActStop(struct _HAM_ACTIVITY *a1)
{
  __int64 result; // rax
  struct _RM_HAM_ACTIVITY_HOST *v3; // rcx
  void *v4; // rcx

  result = HampActBeginStateChange((__int64)a1, 1u);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)a1 + 134) &= 0xFFFFFF3F;
    HampActCancelExpirationTimer(a1);
    v3 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 10);
    *((_DWORD *)a1 + 134) &= ~0x20u;
    HampHostReleaseLockExclusiveEx(v3);
    HampRmContextStopActivity(*((void **)a1 + 11));
    v4 = (void *)*((_QWORD *)a1 + 62);
    if ( v4 )
    {
      HampSystemActivationClientDeactivate(v4);
      *((_QWORD *)a1 + 62) = 0LL;
    }
    HampActEndStateChange(a1, 0);
    return 0LL;
  }
  return result;
}
