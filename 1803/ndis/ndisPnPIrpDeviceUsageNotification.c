/*
 * XREFs of ndisPnPIrpDeviceUsageNotification @ 0x1C00EDFB8
 * Callers:
 *     ndisPnPDispatch @ 0x1C00C6470 (ndisPnPDispatch.c)
 * Callees:
 *     ndisPnPHandlePagingIrp @ 0x1C00EDD4C (ndisPnPHandlePagingIrp.c)
 */

__int64 __fastcall ndisPnPIrpDeviceUsageNotification(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char *a5)
{
  __int64 v5; // rsi
  char v6; // di
  unsigned int v10; // ebp
  char v11; // bl
  int v12; // eax

  v5 = *(_QWORD *)(a3 + 184);
  v6 = 0;
  v10 = 0;
  if ( *(_DWORD *)(v5 + 16) == 1 )
  {
    v11 = *(_BYTE *)(v5 + 8);
    *(_OWORD *)(v5 - 72) = *(_OWORD *)v5;
    *(_OWORD *)(v5 - 56) = *(_OWORD *)(v5 + 16);
    *(_OWORD *)(v5 - 40) = *(_OWORD *)(v5 + 32);
    *(_QWORD *)(v5 - 24) = *(_QWORD *)(v5 + 48);
    *(_BYTE *)(v5 - 69) = 0;
    v12 = IoSynchronousCallDriver(*(_QWORD *)(a2 + 3864), a3);
    v10 = v12;
    if ( !v11 || v12 >= 0 )
      ndisPnPHandlePagingIrp(a1, a2, *(_BYTE *)(v5 + 8));
    *(_DWORD *)(a3 + 48) = v10;
  }
  else
  {
    v6 = 1;
  }
  *a5 = v6;
  return v10;
}
