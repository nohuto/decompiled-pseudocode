/*
 * XREFs of ?HampActResetExternalResourcePriority@@YAJPEAU_HAM_ACTIVITY@@E@Z @ 0x180068388
 * Callers:
 *     ?HamSrvResetExternalResourcePriority@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KE@Z @ 0x1800637A0 (-HamSrvResetExternalResourcePriority@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KE@Z.c)
 * Callees:
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180014210 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001B210 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampRmContextResetExternalResourcePriority@@YAJPEAXE@Z @ 0x1800661EC (-HampRmContextResetExternalResourcePriority@@YAJPEAXE@Z.c)
 */

__int64 __fastcall HampActResetExternalResourcePriority(struct _RM_HAM_ACTIVITY_HOST **a1, unsigned __int8 a2)
{
  int v4; // eax
  int v5; // ebx
  struct _RM_HAM_ACTIVITY_HOST *v6; // rcx

  HampHostAcquireLockExclusiveEx(a1[10], 0);
  v4 = *((_DWORD *)a1 + 134);
  if ( (v4 & 1) != 0 )
  {
    v5 = -1073740682;
  }
  else if ( *((_BYTE *)a1 + 540) == 4 )
  {
    v5 = -1073741275;
  }
  else if ( (v4 & 8) != 0 )
  {
    v5 = -1058275327;
  }
  else
  {
    v6 = a1[10];
    *((_DWORD *)a1 + 134) = v4 | 1;
    HampHostReleaseLockExclusiveEx(v6);
    v5 = HampRmContextResetExternalResourcePriority(a1[11], a2);
    HampHostAcquireLockExclusiveEx(a1[10], 0);
    *((_DWORD *)a1 + 134) &= ~1u;
    if ( v5 >= 0 )
      v5 = 0;
  }
  HampHostReleaseLockExclusiveEx(a1[10]);
  return (unsigned int)v5;
}
