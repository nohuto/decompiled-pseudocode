/*
 * XREFs of ?HampHostCanRegisterProcess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000B46C
 * Callers:
 *     ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK@Z @ 0x18000B204 (-HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK@Z.c)
 * Callees:
 *     ?HampHostHasActivities@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001A3B0 (-HampHostHasActivities@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HampHostCanRegisterProcess(struct _RM_HAM_ACTIVITY_HOST *a1, char a2)
{
  __int64 v2; // rax
  bool v3; // zf
  unsigned int v4; // ecx
  unsigned int HasActivities; // eax

  if ( a2 < 0 )
  {
    HasActivities = HampHostHasActivities(a1);
    v4 = 0;
    v3 = HasActivities == 0;
  }
  else
  {
    v2 = *((_QWORD *)a1 + 79);
    if ( (v2 & 0x800000000LL) == 0 )
      return 0;
    v3 = (v2 & 0x2000000000LL) != 0 || (a2 & 1) == 0;
    v4 = 0;
  }
  LOBYTE(v4) = v3;
  return v4;
}
