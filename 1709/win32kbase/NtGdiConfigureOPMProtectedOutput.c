/*
 * XREFs of NtGdiConfigureOPMProtectedOutput @ 0x1C00F0F50
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     AcquireCriticalSectionAndCheckState @ 0x1C00A1CF0 (AcquireCriticalSectionAndCheckState.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 *     SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_CONFIGURE_PARAMETERS_ @ 0x1C00F0AB4 (SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_CONFIGURE_PARAMETERS_.c)
 *     ?ConfigureProtectedOutput@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x1C00F0CE4 (-ConfigureProtectedOutput@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z.c)
 */

__int64 __fastcall NtGdiConfigureOPMProtectedOutput(unsigned __int64 a1, _OWORD *a2, __int64 a3, char *a4)
{
  size_t v5; // r15
  __int64 result; // rax
  unsigned int v8; // ebx
  PVOID v9; // rsi
  __int64 v10; // rdx
  COPM *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _DXGKMDT_OPM_CONFIGURE_PARAMETERS *PoolWithTag; // r14
  int v15; // edi

  v5 = (unsigned int)a3;
  result = AcquireCriticalSectionAndCheckState(a1, (__int64)a2, a3, (__int64)a4);
  v8 = 0;
  if ( (int)result >= 0 )
  {
    v9 = 0LL;
    PoolWithTag = (struct _DXGKMDT_OPM_CONFIGURE_PARAMETERS *)ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x4D504F47u);
    if ( PoolWithTag && (!(_DWORD)v5 || (v9 = ExAllocatePoolWithTag(PagedPool, v5, 0x4D504F47u)) != 0LL) )
    {
      v15 = SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_CONFIGURE_PARAMETERS_(PoolWithTag, a2);
      if ( v15 >= 0 )
      {
        if ( (_DWORD)v5 )
        {
          if ( (unsigned __int64)&a4[v5] > MmUserProbeAddress || &a4[v5] < a4 )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v9, a4, v5);
        }
        v15 = COPM::ConfigureProtectedOutput(v11, a1, PoolWithTag, v5, (unsigned __int8 *)v9);
      }
    }
    else
    {
      v15 = -1073741801;
    }
    if ( v9 )
      ExFreePoolWithTag(v9, 0x4D504F47u);
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x4D504F47u);
    UserSessionSwitchLeaveCrit((__int64)v11, v10, v12, v13);
    if ( v15 < 0 )
      return (unsigned int)v15;
    return v8;
  }
  return result;
}
