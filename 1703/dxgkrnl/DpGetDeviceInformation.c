/*
 * XREFs of DpGetDeviceInformation @ 0x1C0120540
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 */

__int64 __fastcall DpGetDeviceInformation(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v6; // rdi
  __int64 v8; // rax
  __int64 v9; // rax
  _QWORD v10[14]; // [rsp+30h] [rbp-78h] BYREF

  v4 = 0;
  if ( a1
    && a2
    && (v6 = *(_QWORD *)(a1 + 64)) != 0
    && *(_DWORD *)(v6 + 16) == 1953656900
    && (unsigned int)(*(_DWORD *)(v6 + 20) - 2) <= 1 )
  {
    if ( KeGetCurrentIrql() )
    {
      v8 = WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
      *(_QWORD *)(v8 + 24) = -1073741811LL;
      WdLogEvent5_WdWarning(v8);
    }
    memset(a2, 0, 0x50uLL);
    *a2 = *(_QWORD *)(v6 + 48);
    a2[1] = *(_QWORD *)(v6 + 152);
    a2[4] = *(_QWORD *)(v6 + 1152);
    a2[5] = DpGlobals;
    a2[6] = *(&DpGlobals + 1);
    *((_OWORD *)a2 + 1) = *(_OWORD *)(v6 + 528);
    a2[7] = *(_QWORD *)(v6 + 768);
    a2[8] = *(_QWORD *)(v6 + 760);
    if ( *(_DWORD *)(*(_QWORD *)(v6 + 40) + 28LL) >= 0x104Eu && *(_BYTE *)(v6 + 1141) == 1 )
    {
      memset(v10, 0, sizeof(v10));
      LODWORD(v10[1]) = 292;
      LODWORD(v10[4]) = 0x4000000;
      v10[2] = L"DockingState";
      v10[3] = a2 + 9;
      return (unsigned int)RtlQueryRegistryValuesEx(2LL, L"IDConfigDB\\CurrentDockInfo", v10, 0LL, 0LL);
    }
  }
  else
  {
    v4 = -1073741811;
    v9 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
  }
  return v4;
}
