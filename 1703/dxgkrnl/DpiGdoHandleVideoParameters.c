/*
 * XREFs of DpiGdoHandleVideoParameters @ 0x1C01CF3D8
 * Callers:
 *     DpiGdoDispatchIoctl @ 0x1C01CF380 (DpiGdoDispatchIoctl.c)
 * Callees:
 *     DxgkHandleVideoParameters @ 0x1C01A87E8 (DxgkHandleVideoParameters.c)
 */

__int64 __fastcall DpiGdoHandleVideoParameters(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 result; // rax

  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 64);
  v5 = *(_QWORD *)(a2 + 184);
  if ( *(_DWORD *)(v5 + 16) < 0x164u || *(_DWORD *)(v5 + 8) < 0x164u )
  {
    v6 = -1073741306;
    v7 = WdLogNewEntry5_WdError(a1, v4);
    *(_QWORD *)(v7 + 24) = -1073741306LL;
    WdLogEvent5_WdError(v7);
  }
  else
  {
    v6 = DxgkHandleVideoParameters(
           *(DXGADAPTER ****)(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 64LL) + 3704LL),
           *(_DWORD *)(v4 + 156),
           *(char **)(a2 + 24));
    v3 = 356LL;
  }
  *(_DWORD *)(a2 + 48) = v6;
  result = v6;
  *(_QWORD *)(a2 + 56) = v3;
  return result;
}
