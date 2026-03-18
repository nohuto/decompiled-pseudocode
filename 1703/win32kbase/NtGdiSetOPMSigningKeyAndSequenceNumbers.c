/*
 * XREFs of NtGdiSetOPMSigningKeyAndSequenceNumbers @ 0x1C00EE680
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     AcquireCriticalSectionAndCheckState @ 0x1C00E8930 (AcquireCriticalSectionAndCheckState.c)
 *     SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_ENCRYPTED_PARAMETERS_ @ 0x1C00ECD78 (SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_ENCRYPTED_PARAMETERS_.c)
 *     ?SetSigningKeyAndSequenceNumbers@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z @ 0x1C00EDCD0 (-SetSigningKeyAndSequenceNumbers@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z.c)
 */

__int64 __fastcall NtGdiSetOPMSigningKeyAndSequenceNumbers(__int64 a1, _OWORD *a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v6; // ebx
  struct _DXGKMDT_OPM_ENCRYPTED_PARAMETERS *PoolWithTag; // rax
  struct _DXGKMDT_OPM_ENCRYPTED_PARAMETERS *v8; // rsi
  int v9; // edi
  COPM *v10; // rcx

  result = AcquireCriticalSectionAndCheckState(a1, (__int64)a2, a3);
  v6 = 0;
  if ( (int)result >= 0 )
  {
    PoolWithTag = (struct _DXGKMDT_OPM_ENCRYPTED_PARAMETERS *)ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x4D504F47u);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      v9 = SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_ENCRYPTED_PARAMETERS_(PoolWithTag, a2);
      if ( v9 >= 0 )
        v9 = COPM::SetSigningKeyAndSequenceNumbers(v10, a1, v8);
      ExFreePoolWithTag(v8, 0x4D504F47u);
    }
    else
    {
      v9 = -1073741801;
    }
    UserSessionSwitchLeaveCrit();
    if ( v9 < 0 )
      return (unsigned int)v9;
    return v6;
  }
  return result;
}
