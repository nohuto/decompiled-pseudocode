/*
 * XREFs of DpiSharedPowerRegister @ 0x1C01C5E78
 * Callers:
 *     DpiFdoDispatchInternalIoctl @ 0x1C011E350 (DpiFdoDispatchInternalIoctl.c)
 * Callees:
 *     DxgRegisterSharedPowerComponent @ 0x1C0184D2C (DxgRegisterSharedPowerComponent.c)
 */

__int64 __fastcall DpiSharedPowerRegister(
        __int64 a1,
        void *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        _QWORD *a7)
{
  __int64 v7; // rbp
  void (*v9)(void *, void *); // r9
  int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdi

  v7 = *(_QWORD *)(a1 + 64);
  if ( a4 < 0x20 || !a3 )
    goto LABEL_14;
  if ( *(_DWORD *)a3 != 4096 )
  {
    v13 = -1073741127LL;
LABEL_15:
    LODWORD(v11) = v13;
    v12 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v12 + 24) = v13;
    goto LABEL_16;
  }
  a2 = *(void **)(a3 + 8);
  if ( !a2 || !*(_QWORD *)(a3 + 16) || (v9 = *(void (**)(void *, void *))(a3 + 24)) == 0LL )
  {
    v11 = -1073741811LL;
    goto LABEL_10;
  }
  if ( a6 != 32 || !a5 )
  {
LABEL_14:
    v13 = -1073741789LL;
    goto LABEL_15;
  }
  v10 = DxgRegisterSharedPowerComponent(
          *(struct DXGADAPTER **)(v7 + 3704),
          a2,
          *(void (**)(void *, enum _DEVICE_POWER_STATE, unsigned __int8, void *))(a3 + 16),
          v9);
  v11 = v10;
  if ( v10 < 0 )
  {
LABEL_10:
    v12 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v12 + 24) = v11;
LABEL_16:
    WdLogEvent5_WdError(v12);
    return (unsigned int)v11;
  }
  *(_QWORD *)a5 = *(_QWORD *)(v7 + 3704);
  *(_DWORD *)(a5 + 8) = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 3948LL) != 0 ? 4 : 1;
  *(_QWORD *)(a5 + 16) = DxgSetSharedPowerComponentStateCB;
  *(_QWORD *)(a5 + 24) = DxgUnregisterSharedPowerDriverCB;
  *a7 = 32LL;
  return (unsigned int)v11;
}
