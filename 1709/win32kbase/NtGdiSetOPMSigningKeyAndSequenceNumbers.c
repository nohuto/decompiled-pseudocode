/*
 * XREFs of NtGdiSetOPMSigningKeyAndSequenceNumbers @ 0x1C00A0910
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     ?SetSigningKeyAndSequenceNumbers@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z @ 0x1C00A0EC4 (-SetSigningKeyAndSequenceNumbers@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z.c)
 *     AcquireCriticalSectionAndCheckState @ 0x1C00A1CF0 (AcquireCriticalSectionAndCheckState.c)
 *     SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_ENCRYPTED_PARAMETERS_ @ 0x1C00A1E40 (SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_ENCRYPTED_PARAMETERS_.c)
 */

__int64 __fastcall NtGdiSetOPMSigningKeyAndSequenceNumbers(void *a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v5; // ebx
  struct _DXGKMDT_OPM_ENCRYPTED_PARAMETERS *PoolWithTag; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _DXGKMDT_OPM_ENCRYPTED_PARAMETERS *v11; // rsi
  COPM *v12; // rcx
  int v13; // edi

  result = AcquireCriticalSectionAndCheckState();
  v5 = 0;
  if ( (int)result >= 0 )
  {
    PoolWithTag = (struct _DXGKMDT_OPM_ENCRYPTED_PARAMETERS *)ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x4D504F47u);
    v11 = PoolWithTag;
    if ( PoolWithTag )
    {
      v13 = SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_ENCRYPTED_PARAMETERS_(PoolWithTag, a2);
      if ( v13 >= 0 )
        v13 = COPM::SetSigningKeyAndSequenceNumbers(v12, a1, v11);
      ExFreePoolWithTag(v11, 0x4D504F47u);
    }
    else
    {
      v13 = -1073741801;
    }
    UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
    if ( v13 < 0 )
      return (unsigned int)v13;
    return v5;
  }
  return result;
}
