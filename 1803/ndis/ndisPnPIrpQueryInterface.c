/*
 * XREFs of ndisPnPIrpQueryInterface @ 0x1C00C676C
 * Callers:
 *     ndisPnPDispatch @ 0x1C00C6470 (ndisPnPDispatch.c)
 * Callees:
 *     ndisPnPQuerySriovInterface @ 0x1C00F4520 (ndisPnPQuerySriovInterface.c)
 */

__int64 __fastcall ndisPnPIrpQueryInterface(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char *a5)
{
  char v5; // bl
  unsigned int v7; // ecx
  _QWORD *v8; // r8
  __int64 v9; // rax

  v5 = 0;
  v7 = 0;
  v8 = *(_QWORD **)(*(_QWORD *)(a3 + 184) + 8LL);
  v9 = *v8 - *(_QWORD *)&GUID_SRIOV_DEVICE_INTERFACE_STANDARD.Data1;
  if ( *v8 == *(_QWORD *)&GUID_SRIOV_DEVICE_INTERFACE_STANDARD.Data1 )
    v9 = v8[1] - *(_QWORD *)GUID_SRIOV_DEVICE_INTERFACE_STANDARD.Data4;
  if ( v9 )
  {
    v5 = 1;
  }
  else
  {
    v7 = ndisPnPQuerySriovInterface(a2, a3);
    *(_DWORD *)(a3 + 48) = v7;
  }
  *a5 = v5;
  return v7;
}
