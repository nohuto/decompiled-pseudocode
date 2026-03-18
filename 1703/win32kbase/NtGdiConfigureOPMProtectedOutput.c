/*
 * XREFs of NtGdiConfigureOPMProtectedOutput @ 0x1C00EDE00
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     AcquireCriticalSectionAndCheckState @ 0x1C00E8930 (AcquireCriticalSectionAndCheckState.c)
 *     SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_CONFIGURE_PARAMETERS_ @ 0x1C00ECC70 (SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_CONFIGURE_PARAMETERS_.c)
 *     ?ConfigureProtectedOutput@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x1C00ED1AC (-ConfigureProtectedOutput@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z.c)
 */

__int64 __fastcall NtGdiConfigureOPMProtectedOutput(void *a1, _OWORD *a2, __int64 a3, char *a4)
{
  size_t v5; // r15
  __int64 result; // rax
  unsigned int v8; // ebx
  PVOID v9; // rsi
  struct _DXGKMDT_OPM_CONFIGURE_PARAMETERS *PoolWithTag; // r14
  int v11; // edi
  COPM *v12; // rcx

  v5 = (unsigned int)a3;
  result = AcquireCriticalSectionAndCheckState((__int64)a1, (__int64)a2, a3);
  v8 = 0;
  if ( (int)result >= 0 )
  {
    v9 = 0LL;
    PoolWithTag = (struct _DXGKMDT_OPM_CONFIGURE_PARAMETERS *)ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x4D504F47u);
    if ( PoolWithTag && (!(_DWORD)v5 || (v9 = ExAllocatePoolWithTag(PagedPool, v5, 0x4D504F47u)) != 0LL) )
    {
      v11 = SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_CONFIGURE_PARAMETERS_(PoolWithTag, a2);
      if ( v11 >= 0 )
      {
        if ( (_DWORD)v5 )
        {
          if ( &a4[v5] > (char *)W32UserProbeAddress || &a4[v5] < a4 )
            *(_BYTE *)W32UserProbeAddress = 0;
          memmove(v9, a4, v5);
        }
        v11 = COPM::ConfigureProtectedOutput(v12, a1, PoolWithTag, v5, (unsigned __int8 *)v9);
      }
    }
    else
    {
      v11 = -1073741801;
    }
    if ( v9 )
      ExFreePoolWithTag(v9, 0x4D504F47u);
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x4D504F47u);
    UserSessionSwitchLeaveCrit();
    if ( v11 < 0 )
      return (unsigned int)v11;
    return v8;
  }
  return result;
}
