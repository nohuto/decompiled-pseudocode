/*
 * XREFs of ?HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180047F90
 * Callers:
 *     ?HamSrvStopActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180042AD8 (-HamSrvStopActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     ?HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x180044CF4 (-HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z.c)
 * Callees:
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001F020 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001F6F0 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampSystemActivationClientDeactivate@@YAXPEAX@Z @ 0x180040824 (-HampSystemActivationClientDeactivate@@YAXPEAX@Z.c)
 *     ?HampRmContextStopActivity@@YAXPEAX@Z @ 0x180045AE4 (-HampRmContextStopActivity@@YAXPEAX@Z.c)
 *     ?HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z @ 0x180047058 (-HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z.c)
 *     ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x18004750C (-HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 */

__int64 __fastcall HampActStop(struct _RM_HAM_ACTIVITY_HOST **a1)
{
  int v2; // eax
  struct _RM_HAM_ACTIVITY_HOST *v3; // rcx
  unsigned int v4; // edi
  struct _RM_HAM_ACTIVITY_HOST *v5; // rcx

  HampHostAcquireLockExclusiveEx(a1[9], 0);
  v2 = HampActBeginStateChange((__int64)a1, 1u);
  v3 = a1[9];
  v4 = v2;
  if ( v2 < 0 )
  {
    HampHostReleaseLockExclusiveEx(v3);
  }
  else
  {
    *((_DWORD *)a1 + 124) &= 0xFFFFFF9F;
    HampHostReleaseLockExclusiveEx(v3);
    HampRmContextStopActivity(a1[10]);
    v5 = a1[61];
    if ( v5 )
    {
      HampSystemActivationClientDeactivate(v5);
      a1[61] = 0LL;
    }
    HampActEndStateChange(a1, 0);
    return 0;
  }
  return v4;
}
