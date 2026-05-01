/*
 * XREFs of ?HampActPdcActivationCallback@@YAXPEAXW4_PDC_ACTIVATOR_ERROR_DETAIL@@00@Z @ 0x180047C10
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180018048 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 *     ?HampSystemActivationClientRenewActivation@@YAJPEAXPEBU_PDC_ACTIVATION_PARAMETERS@@PEAW4_PDC_ACTIVATOR_ERROR_DETAIL@@@Z @ 0x1800408CC (-HampSystemActivationClientRenewActivation@@YAJPEAXPEBU_PDC_ACTIVATION_PARAMETERS@@PEAW4_PDC_ACT.c)
 *     ?HampHostAcquireLockShared@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180043230 (-HampHostAcquireLockShared@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostReleaseLockShared@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180043CF8 (-HampHostReleaseLockShared@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall HampActPdcActivationCallback(void *a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // rdx
  struct _RM_HAM_ACTIVITY_HOST *v9; // rcx
  int v10; // edi
  DWORD v11; // ebx
  _BYTE v12[8]; // [rsp+20h] [rbp-A8h] BYREF
  _DWORD v13[4]; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v14; // [rsp+38h] [rbp-90h]
  _BYTE v15[80]; // [rsp+50h] [rbp-78h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v15);
  HampHostAcquireLockShared(*(struct _RM_HAM_ACTIVITY_HOST **)(a4 + 72), v7);
  v9 = *(struct _RM_HAM_ACTIVITY_HOST **)(a4 + 72);
  if ( *(void **)(a4 + 488) == a1 )
  {
    v10 = *(_DWORD *)(a4 + 368);
    HampHostReleaseLockShared(v9, v8);
    if ( a2 == 100 )
    {
      memset_0(v13, 0, 0x20uLL);
      v13[0] = 1;
      v14 = a4 + 108;
      v13[1] = v10;
      HampSystemActivationClientRenewActivation(
        a1,
        (const struct _PDC_ACTIVATION_PARAMETERS *)v13,
        (enum _PDC_ACTIVATOR_ERROR_DETAIL *)v12);
    }
  }
  else
  {
    HampHostReleaseLockShared(v9, v8);
  }
  v11 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v11, 0LL);
  }
}
