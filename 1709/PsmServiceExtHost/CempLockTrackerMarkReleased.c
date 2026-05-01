/*
 * XREFs of CempLockTrackerMarkReleased @ 0x180017F3C
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180016A30 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampClientReleaseLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001F698 (-HampClientReleaseLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180042E9C (-HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampHostReleaseLockShared@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180043CF8 (-HampHostReleaseLockShared@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180046404 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppReleaseLockShared@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18004642C (-HampAppReleaseLockShared@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180046E78 (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180046EA4 (-HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CempLockTrackerMarkReleased(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  _QWORD *Value; // rax

  v3 = a3;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( ((1LL << v3) & *Value) == 0 )
      __int2c();
    if ( (*((_BYTE *)Value + v3 + 8))-- == 1 )
      *Value &= ~(1LL << v3);
  }
}
