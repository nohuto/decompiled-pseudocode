/*
 * XREFs of DxgkDdiGetVendorAndDevice @ 0x1C0033B70
 * Callers:
 *     ?DpiDdiGetVendorAndDevice@@YAXPEAXGPEAG1@Z @ 0x1C0041960 (-DpiDdiGetVendorAndDevice@@YAXPEAXGPEAG1@Z.c)
 * Callees:
 *     ?DdiGetVendorAndDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETVENDORANDDEVICE@@@Z @ 0x1C0027C0C (-DdiGetVendorAndDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETVENDORANDDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkDdiGetVendorAndDevice(__int64 a1, __int64 a2, _WORD *a3, USHORT *a4)
{
  __int64 v4; // r10
  __int64 result; // rax
  USHORT DeviceId; // cx
  __int64 v9; // rax
  _DXGKARG_GETVENDORANDDEVICE v10; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 2288);
  *(_DWORD *)&v10.VendorId = 0;
  v10.VirtualFunctionIndex = (unsigned __int16)a2;
  if ( (unsigned int)(unsigned __int16)a2 >= *(_DWORD *)(v4 + 1128)
    || (a1 = (unsigned __int16)a2, (a2 = *(_QWORD *)(*(_QWORD *)(v4 + 1136) + 8LL * (unsigned __int16)a2)) == 0) )
  {
    v9 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v9 + 24) = v10.VirtualFunctionIndex;
    WdLogEvent5_WdError(v9);
    goto LABEL_7;
  }
  if ( !*(_BYTE *)(a2 + 121) )
  {
    ADAPTER_RENDER::DdiGetVendorAndDevice((ADAPTER_RENDER *)v4, &v10);
LABEL_7:
    result = v10.VendorId;
    DeviceId = v10.DeviceId;
    goto LABEL_8;
  }
  result = 5140LL;
  DeviceId = 142;
LABEL_8:
  *a3 = result;
  *a4 = DeviceId;
  return result;
}
