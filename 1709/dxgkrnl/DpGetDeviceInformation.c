/*
 * XREFs of DpGetDeviceInformation @ 0x1C011FCC0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0016A80 (memset.c)
 */

__int64 __fastcall DpGetDeviceInformation(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rdi
  __int64 v7; // rax
  __int64 v8; // rax
  _QWORD v9[14]; // [rsp+30h] [rbp-78h] BYREF

  v3 = 0;
  if ( a1
    && a2
    && (v5 = *(_QWORD *)(a1 + 64)) != 0
    && *(_DWORD *)(v5 + 16) == 1953656900
    && (unsigned int)(*(_DWORD *)(v5 + 20) - 2) <= 1 )
  {
    if ( KeGetCurrentIrql() )
    {
      v7 = WdLogNewEntry5_WdWarning(a1, a2, a3);
      *(_QWORD *)(v7 + 24) = -1073741811LL;
      WdLogEvent5_WdWarning(v7);
    }
    memset(a2, 0, 0x50uLL);
    *a2 = *(_QWORD *)(v5 + 48);
    a2[1] = *(_QWORD *)(v5 + 152);
    a2[4] = *(_QWORD *)(v5 + 1152);
    a2[5] = DpGlobals;
    a2[6] = *(&DpGlobals + 1);
    *((_OWORD *)a2 + 1) = *(_OWORD *)(v5 + 528);
    a2[7] = *(_QWORD *)(v5 + 768);
    a2[8] = *(_QWORD *)(v5 + 760);
    if ( *(_DWORD *)(*(_QWORD *)(v5 + 40) + 28LL) >= 0x104Eu && *(_BYTE *)(v5 + 1141) == 1 )
    {
      memset(v9, 0, sizeof(v9));
      LODWORD(v9[1]) = 292;
      LODWORD(v9[4]) = 0x4000000;
      v9[2] = L"DockingState";
      v9[3] = a2 + 9;
      return (unsigned int)RtlQueryRegistryValuesEx(2LL, L"IDConfigDB\\CurrentDockInfo", v9, 0LL, 0LL);
    }
  }
  else
  {
    v3 = -1073741811;
    v8 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
  }
  return v3;
}
