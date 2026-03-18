/*
 * XREFs of DpiSharedPowerRegister @ 0x1C01DFD24
 * Callers:
 *     DpiFdoDispatchInternalIoctl @ 0x1C011E0B0 (DpiFdoDispatchInternalIoctl.c)
 * Callees:
 *     DxgRegisterSharedPowerComponent @ 0x1C019A7EC (DxgRegisterSharedPowerComponent.c)
 */

__int64 __fastcall DpiSharedPowerRegister(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        _QWORD *a7)
{
  __int64 v7; // rbp
  _QWORD *v8; // rsi
  unsigned int v9; // edx
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rbx
  void (*v14)(void *, void *); // r9
  void (*v15)(void *, unsigned int, unsigned int, unsigned __int8, void *); // rax
  int v16; // eax

  v7 = a1[8];
  v8 = a1;
  if ( a4 < 0x20 || !a3 )
    goto LABEL_9;
  v9 = *(_DWORD *)a3;
  if ( (unsigned int)(*(_DWORD *)a3 - 4096) <= 1 )
  {
    if ( v9 == 4096 )
    {
      if ( a4 != 32 )
        goto LABEL_9;
    }
    else if ( v9 == 4097 && a4 != 40 )
    {
      goto LABEL_9;
    }
    a1 = *(_QWORD **)(a3 + 8);
    if ( !a1 || (v14 = *(void (**)(void *, void *))(a3 + 24)) == 0LL )
    {
      v12 = -1073741811LL;
      goto LABEL_10;
    }
    if ( a6 == 32 && a5 )
    {
      v15 = 0LL;
      if ( v9 >= 0x1001 )
        v15 = *(void (**)(void *, unsigned int, unsigned int, unsigned __int8, void *))(a3 + 32);
      v16 = DxgRegisterSharedPowerComponent(
              *(struct DXGADAPTER **)(v7 + 3728),
              a1,
              *(void (**)(void *, enum _DEVICE_POWER_STATE, unsigned __int8, void *))(a3 + 16),
              v14,
              v15);
      v10 = v16;
      if ( v16 >= 0 )
      {
        *(_QWORD *)a5 = *(_QWORD *)(v7 + 3728);
        *(_DWORD *)(a5 + 8) = *(_DWORD *)(v8[8] + 3972LL) != 0 ? 4 : 1;
        *(_QWORD *)(a5 + 16) = DxgSetSharedPowerComponentStateCB;
        *(_QWORD *)(a5 + 24) = DxgUnregisterSharedPowerDriverCB;
        *a7 = 32LL;
        return (unsigned int)v10;
      }
      goto LABEL_5;
    }
LABEL_9:
    v12 = -1073741789LL;
LABEL_10:
    LODWORD(v10) = v12;
    v11 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v11 + 24) = v12;
    goto LABEL_11;
  }
  v10 = -1073741127LL;
LABEL_5:
  v11 = WdLogNewEntry5_WdError(a1);
  *(_QWORD *)(v11 + 24) = v10;
LABEL_11:
  WdLogEvent5_WdError(v11);
  return (unsigned int)v10;
}
