/*
 * XREFs of ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180018FF8
 * Callers:
 *     ?HampDepGroupSetOwner@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180018DE8 (-HampDepGroupSetOwner@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HOST_ACTIVI.c)
 *     ?HampManagerRemoveDependencyGroup@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18001A528 (-HampManagerRemoveDependencyGroup@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampClientInsert@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18001C0E8 (-HampClientInsert@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampClientRemove@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001F584 (-HampClientRemove@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampManagerSystemStateChanged@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180025570 (-HampManagerSystemStateChanged@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HampManagerReleaseLockExclusive(struct _HOST_ACTIVITY_MANAGER *a1)
{
  _BYTE *Value; // rax

  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*Value & 0x40) == 0 )
      __int2c();
    if ( Value[14]-- == 1 )
      *(_QWORD *)Value &= ~0x40uLL;
  }
  *((_DWORD *)a1 + 2) = 0;
  RtlReleaseSRWLockExclusive(a1);
}
