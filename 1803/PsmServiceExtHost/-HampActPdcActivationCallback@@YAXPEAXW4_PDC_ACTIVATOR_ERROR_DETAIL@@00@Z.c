/*
 * XREFs of ?HampActPdcActivationCallback@@YAXPEAXW4_PDC_ACTIVATOR_ERROR_DETAIL@@00@Z @ 0x180068280
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000FAF0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerMarkReleased @ 0x180014260 (CempLockTrackerMarkReleased.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003319C (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 *     ?HampSystemActivationClientRenewActivation@@YAJPEAXPEBU_PDC_ACTIVATION_PARAMETERS@@PEAW4_PDC_ACTIVATOR_ERROR_DETAIL@@@Z @ 0x180060484 (-HampSystemActivationClientRenewActivation@@YAJPEAXPEBU_PDC_ACTIVATION_PARAMETERS@@PEAW4_PDC_ACT.c)
 */

int __fastcall HampActPdcActivationCallback(void *a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  int v10; // esi
  int result; // eax
  DWORD v12; // ebx
  _BYTE v13[8]; // [rsp+20h] [rbp-E8h] BYREF
  _DWORD v14[4]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v15; // [rsp+38h] [rbp-D0h]
  _BYTE v16[144]; // [rsp+50h] [rbp-B8h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v16);
  HampHostAcquireLockSharedEx(*(struct _RM_HAM_ACTIVITY_HOST **)(a4 + 80), 0LL);
  v9 = *(_QWORD *)(a4 + 80);
  if ( *(void **)(a4 + 496) == a1 )
  {
    v10 = *(_DWORD *)(a4 + 384);
    CempLockTrackerMarkReleased(v8, v7, 1u);
    result = RtlReleaseSRWLockShared(v9);
    if ( a2 == 100 )
    {
      memset_0(v14, 0, 0x28uLL);
      v14[0] = 1;
      v15 = a4 + 124;
      v14[1] = v10;
      result = HampSystemActivationClientRenewActivation(
                 a1,
                 (const struct _PDC_ACTIVATION_PARAMETERS *)v14,
                 (enum _PDC_ACTIVATOR_ERROR_DETAIL *)v13);
    }
  }
  else
  {
    CempLockTrackerMarkReleased(v8, v7, 1u);
    result = RtlReleaseSRWLockShared(v9);
  }
  v12 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    return TlsSetValue(v12, 0LL);
  }
  return result;
}
