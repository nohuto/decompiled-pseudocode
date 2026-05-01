/*
 * XREFs of ?HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180043390
 * Callers:
 *     ?HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180043810 (-HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTI.c)
 * Callees:
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001F020 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001F6F0 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockShared@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180043230 (-HampHostAcquireLockShared@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800434F4 (-HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostReleaseLockShared@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180043CF8 (-HampHostReleaseLockShared@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x1800465B4 (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgEnterInsertion@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x1800467D8 (-HampPkgEnterInsertion@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180046E78 (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 */

__int64 __fastcall HampHostCheckCompletePackageInsertion(struct _RM_HAM_ACTIVITY_HOST *a1, __int64 a2)
{
  int v3; // ebp
  __int64 v4; // rsi
  __int64 v5; // rdx
  int v6; // edi

  v3 = 0;
  v4 = *(_QWORD *)(*((_QWORD *)a1 + 90) + 48LL);
  HampHostAcquireLockShared(a1, a2);
  if ( (*((_DWORD *)a1 + 157) & 0x20000) == 0 )
  {
    HampHostReleaseLockShared(a1);
    v3 = 1;
    HampPkgEnterInsertion((struct _HAM_PACKAGE *)v4);
    HampHostAcquireLockShared(a1, v5);
    if ( (*((_DWORD *)a1 + 157) & 0x20000) == 0 )
    {
      HampHostReleaseLockShared(a1);
      v6 = HampHostCompletePackageInsertion(a1);
      if ( v6 >= 0 )
      {
        HampHostAcquireLockExclusiveEx(a1, 0);
        *((_DWORD *)a1 + 157) |= 0x20000u;
        HampHostReleaseLockExclusiveEx(a1);
        v6 = 0;
      }
      goto LABEL_6;
    }
  }
  HampHostReleaseLockShared(a1);
  v6 = 0;
  if ( v3 )
  {
LABEL_6:
    HampPkgAcquireLockExclusive((struct _HAM_PACKAGE *)v4);
    *(_DWORD *)(v4 + 328) = 0;
    HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v4);
    RtlWakeAddressSingle(v4 + 328);
  }
  return (unsigned int)v6;
}
