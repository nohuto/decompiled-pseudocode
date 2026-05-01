/*
 * XREFs of ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180047ED8
 * Callers:
 *     ?HamSrvStartActivityAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180042828 (-HamSrvStartActivityAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_AC.c)
 *     ?HamSrvStartExtendedExecutionAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180042980 (-HamSrvStartExtendedExecutionAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     ?HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x180044CF4 (-HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z.c)
 * Callees:
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001F020 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001F6F0 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@W4_HAM_ACTIVITY_RESOURCE_SET_TYPE@@@Z @ 0x180045834 (-HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@W4_HAM_ACTIVITY_RESOURCE_SET_T.c)
 *     ?HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z @ 0x180047058 (-HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z.c)
 *     ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x18004750C (-HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampActIsAllowed@@YAKPEAU_HAM_ACTIVITY@@@Z @ 0x1800479A8 (-HampActIsAllowed@@YAKPEAU_HAM_ACTIVITY@@@Z.c)
 */

__int64 __fastcall HampActStartAsync(struct _HAM_ACTIVITY *a1)
{
  int v2; // esi
  __int64 v3; // rdx
  int v4; // edi
  bool v5; // zf
  struct _RM_HAM_ACTIVITY_HOST *v7; // rcx

  v2 = 0;
  HampHostAcquireLockExclusiveEx(*((struct _RM_HAM_ACTIVITY_HOST **)a1 + 9), 0);
  v4 = HampActBeginStateChange((__int64)a1, 2u);
  if ( v4 >= 0 )
  {
    v5 = (*((_BYTE *)a1 + 496) & 0x10) == 0;
    v2 = 1;
    *((_BYTE *)a1 + 501) = 1;
    if ( v5 )
    {
      if ( (unsigned int)HampActIsAllowed(a1, v3) )
      {
        v7 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 9);
        *((_DWORD *)a1 + 124) |= 4u;
        HampHostReleaseLockExclusiveEx(v7);
        v4 = HampRmContextAcquireResourceSet(*((_QWORD *)a1 + 10), 1);
        if ( v4 >= 0 )
        {
          HampActEndStateChange((struct _RM_HAM_ACTIVITY_HOST **)a1, 0);
          return 0;
        }
        goto LABEL_5;
      }
      v4 = -1073741436;
    }
    else
    {
      v4 = -1073741558;
    }
  }
  HampHostReleaseLockExclusiveEx(*((struct _RM_HAM_ACTIVITY_HOST **)a1 + 9));
  if ( v2 )
LABEL_5:
    HampActEndStateChange((struct _RM_HAM_ACTIVITY_HOST **)a1, 1);
  return (unsigned int)v4;
}
